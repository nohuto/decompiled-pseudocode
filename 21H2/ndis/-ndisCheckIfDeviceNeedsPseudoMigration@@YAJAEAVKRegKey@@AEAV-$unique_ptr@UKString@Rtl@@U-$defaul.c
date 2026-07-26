/*
 * XREFs of ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C01081BC
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C00318D0 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0033840 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C0108228 (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C0115498 (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?DeleteValue@KRegKey@@QEAAJPEB_W@Z @ 0x1C0122078 (-DeleteValue@KRegKey@@QEAAJPEB_W@Z.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsPseudoMigration(KRegKey *this, const struct _UNICODE_STRING **a2, _BYTE *a3)
{
  const UNICODE_STRING *v7; // rcx
  const wchar_t *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  const wchar_t *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *m_ptr; // rcx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-30h] BYREF
  int Data; // [rsp+40h] [rbp-20h] BYREF
  GUID Guid; // [rsp+48h] [rbp-18h] BYREF

  if ( ndisIsNetSetupV2Interface(*a2) || !ndisIsNetSetupV1Interface(*a2) )
  {
    *a3 = 0;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0xDu,
        0x38u,
        (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
        (*a2)->Buffer);
    v7 = *a2;
    Guid = 0LL;
    if ( RtlGUIDFromString(v7, &Guid) >= 0 )
    {
      ValueName = 0LL;
      v8 = L"SuggestedInstanceId";
      v9 = 0x7FFFLL;
      do
      {
        if ( !*v8 )
          break;
        ++v8;
        --v9;
      }
      while ( v9 );
      v10 = (0x7FFF - v9) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64);
      if ( v9 )
      {
        ValueName.Buffer = L"SuggestedInstanceId";
        ValueName.Length = 2 * v10;
        ValueName.MaximumLength = 2 * v10 + 2;
        ZwSetValueKey(this->m_ptr, &ValueName, 0, 3u, &Guid, 0x10u);
      }
    }
    ValueName = 0LL;
    v11 = L"MigratedFromNetSetupV1";
    v12 = 0x7FFFLL;
    do
    {
      if ( !*v11 )
        break;
      ++v11;
      --v12;
    }
    while ( v12 );
    v13 = (0x7FFF - v12) & -(__int64)(v12 != 0);
    if ( v12 )
    {
      ValueName.Buffer = L"MigratedFromNetSetupV1";
      ValueName.Length = 2 * v13;
      ValueName.MaximumLength = 2 * v13 + 2;
      m_ptr = this->m_ptr;
      Data = 1;
      ZwSetValueKey(m_ptr, &ValueName, 0, 4u, &Data, 4u);
    }
    KRegKey::DeleteValue(this, (const wchar_t *)v12);
    *a3 = 1;
  }
  return 0LL;
}
