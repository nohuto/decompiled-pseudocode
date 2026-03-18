/*
 * XREFs of ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C0142388
 * Callers:
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C01424EC (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02A81A8 (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02A826C (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 * Callees:
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0142818 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall DpiPersistence::WriteDwordToParticularRegValue(
        struct _UNICODE_STRING *this,
        const struct _UNICODE_STRING *a2,
        const struct _UNICODE_STRING *a3,
        const struct _UNICODE_STRING *a4,
        const unsigned __int16 *ValueData)
{
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  HANDLE v11; // r8
  int v12; // eax
  WCHAR *v13; // rdx
  int v14; // eax
  NTSTATUS v15; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-18h] BYREF
  PCWSTR Path; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+88h] [rbp+38h] BYREF
  int v25; // [rsp+8Ch] [rbp+3Ch]

  v25 = HIDWORD(a4);
  Handle = 0LL;
  KeyHandle = 0LL;
  Path = 0LL;
  v24 = 0;
  v7 = OpenRegistrySubkey(&Handle, 0xF003Fu, 0LL, this, 0LL);
  v10 = v7;
  if ( v7 >= 0 )
  {
    v11 = Handle;
    if ( !Handle )
    {
      v17 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v17 + 24) = 599LL;
      WdLogEvent5_WdAssertion(v17);
      v11 = Handle;
    }
    v12 = OpenRegistrySubkey(&KeyHandle, 0xF003Fu, v11, a2, &v24);
    v10 = v12;
    if ( v12 >= 0 )
    {
      v13 = (WCHAR *)KeyHandle;
      if ( !KeyHandle )
      {
        v18 = WdLogNewEntry5_WdAssertion(v9, 0LL);
        *(_QWORD *)(v18 + 24) = 614LL;
        WdLogEvent5_WdAssertion(v18);
        v13 = (WCHAR *)KeyHandle;
      }
      if ( !a3->Length )
      {
LABEL_11:
        v15 = RtlWriteRegistryValue(0x40000000u, v13, L"DpiValue", 4u, &ValueData, 4u);
        v10 = v15;
        if ( v15 >= 0 )
          goto LABEL_12;
        goto LABEL_19;
      }
      v14 = OpenRegistrySubkey((PHANDLE)&Path, 0xF003Fu, v13, a3, &v24);
      v10 = v14;
      if ( v14 >= 0 )
      {
        v13 = (WCHAR *)Path;
        if ( !Path )
        {
          v19 = WdLogNewEntry5_WdAssertion(v9, 0LL);
          *(_QWORD *)(v19 + 24) = 631LL;
          WdLogEvent5_WdAssertion(v19);
          v13 = (WCHAR *)Path;
        }
        goto LABEL_11;
      }
    }
  }
LABEL_19:
  v20 = WdLogNewEntry5_WdError(v9, v8);
  *(_QWORD *)(v20 + 24) = v10;
  WdLogEvent5_WdError(v20);
LABEL_12:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Path )
    ZwClose((HANDLE)Path);
  return (unsigned int)v10;
}
