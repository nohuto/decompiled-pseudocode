/*
 * XREFs of ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C01D62B8
 * Callers:
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C01D642C (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02FA47C (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02FA574 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C01D6784 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall DpiPersistence::WriteDwordToParticularRegValue(
        struct _UNICODE_STRING *this,
        const struct _UNICODE_STRING *a2,
        const struct _UNICODE_STRING *a3,
        const struct _UNICODE_STRING *a4,
        const unsigned __int16 *ValueData)
{
  int v7; // eax
  __int64 v8; // rdi
  HANDLE v9; // r8
  int v10; // eax
  void *v11; // rdx
  int v12; // eax
  NTSTATUS v13; // eax
  const wchar_t *v15; // r9
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-18h] BYREF
  PCWSTR Path; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+A8h] [rbp+38h] BYREF
  int v20; // [rsp+ACh] [rbp+3Ch]

  v20 = HIDWORD(a4);
  Handle = 0LL;
  KeyHandle = 0LL;
  Path = 0LL;
  v19 = 0;
  v7 = OpenRegistrySubkey(&Handle, 0xF003Fu, 0LL, this, 0LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(2LL, v7);
    v15 = L"Failed to open HKey root (Status = 0x%I64x)";
  }
  else
  {
    v9 = Handle;
    if ( !Handle )
    {
      WdLogSingleEntry1(1LL, 601LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"HKeyRootHandle", 601LL, 0LL, 0LL, 0LL, 0LL);
      v9 = Handle;
    }
    v10 = OpenRegistrySubkey(&KeyHandle, 0xF003Fu, v9, a2, &v19);
    v8 = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry1(2LL, v10);
      v15 = L"Unable to open/create HKey subkey (Status = 0x%I64x)";
    }
    else
    {
      v11 = KeyHandle;
      if ( !KeyHandle )
      {
        WdLogSingleEntry1(1LL, 616LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"PerMonSettingsKeyHandle", 616LL, 0LL, 0LL, 0LL, 0LL);
        v11 = KeyHandle;
      }
      if ( a3->Length )
      {
        v12 = OpenRegistrySubkey((PHANDLE)&Path, 0xF003Fu, v11, a3, &v19);
        v8 = v12;
        if ( v12 < 0 )
        {
          WdLogSingleEntry1(2LL, v12);
          v15 = L"Unable to open/create HKey subkey for monitor set (Status = 0x%I64x)";
          goto LABEL_23;
        }
        v11 = (void *)Path;
        if ( !Path )
        {
          WdLogSingleEntry1(1LL, 633LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorIdKeyHandle", 633LL, 0LL, 0LL, 0LL, 0LL);
          v11 = (void *)Path;
        }
      }
      v13 = RtlWriteRegistryValue(0x40000000u, (PCWSTR)v11, L"DpiValue", 4u, &ValueData, 4u);
      v8 = v13;
      if ( v13 >= 0 )
        goto LABEL_12;
      WdLogSingleEntry1(2LL, v13);
      v15 = L"Failed to write DPI value to HKey subkey. (Status = 0x%I64x)";
    }
  }
LABEL_23:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v15, v8, 0LL, 0LL, 0LL, 0LL);
LABEL_12:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Path )
    ZwClose((HANDLE)Path);
  return (unsigned int)v8;
}
