/*
 * XREFs of ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0108100
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C0031330 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C00332A0 (WPP_RECORDER_SF_S.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0100450 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsFullMigration(HANDLE *a1, __int64 a2, char *a3)
{
  void *v4; // rbx
  const wchar_t *v6; // rax
  char v7; // si
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned int v11; // edi
  unsigned int v12; // eax
  _UNICODE_STRING v14; // [rsp+30h] [rbp-28h] BYREF
  void *v15; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v6 = L"RetiredNetCfgInstanceId";
  v7 = 1;
  v9 = 0x7FFFLL;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v9;
  }
  while ( v9 );
  v10 = (0x7FFF - v9) & -(__int64)(v9 != 0);
  v11 = v9 == 0 ? 0xC000000D : 0;
  if ( v9 )
  {
    v14.Buffer = L"RetiredNetCfgInstanceId";
    v14.Length = 2 * v10;
    v14.MaximumLength = 2 * v10 + 2;
    v12 = KRegKey::QueryValueString(a1, &v14, &v15);
    v4 = v15;
    v11 = v12;
  }
  if ( v11 == -1073741772 )
  {
    v7 = 0;
LABEL_8:
    *a3 = v7;
    v11 = 0;
    goto LABEL_9;
  }
  if ( !v11 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0xDu,
        0x39u,
        (struct _GUID *)&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids,
        *(const wchar_t **)(*(_QWORD *)a2 + 8LL));
    goto LABEL_8;
  }
LABEL_9:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x7274534Bu);
  return v11;
}
