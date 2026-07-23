/*
 * XREFs of _LdrAppxHandleIntegrityFailure@4 @ 0x4B32C290
 * Callers:
 *     _LdrpMapDllNtFileName@8 @ 0x4B2DE4D7 (_LdrpMapDllNtFileName@8.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlQueryPackageIdentityEx@28 @ 0x4B2E4E20 (_RtlQueryPackageIdentityEx@28.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlCaptureContext@4 @ 0x4B308820 (_RtlCaptureContext@4.c)
 *     _LdrpAppxEtwGenericIntegrityFailure@4 @ 0x4B32C454 (_LdrpAppxEtwGenericIntegrityFailure@4.c)
 *     _LdrpAppxEtwIntegrityFailure@12 @ 0x4B32C4D5 (_LdrpAppxEtwIntegrityFailure@12.c)
 *     _LdrpAppxGetBinaryNameKeyInformation@12 @ 0x4B32C5D2 (_LdrpAppxGetBinaryNameKeyInformation@12.c)
 *     _LdrpAppxGetRemediationRegistryKey@12 @ 0x4B32C6BD (_LdrpAppxGetRemediationRegistryKey@12.c)
 *     _RtlReportException@12 @ 0x4B33A4D0 (_RtlReportException@12.c)
 */

int __stdcall LdrAppxHandleIntegrityFailure(int a1)
{
  NTSTATUS RemediationRegistryKey; // esi
  int v2; // edi
  size_t v4; // [esp-4h] [ebp-4B8h]
  size_t v5; // [esp-4h] [ebp-4B8h]
  unsigned __int64 Flags; // [esp+10h] [ebp-4A4h] BYREF
  ULONG ResultLength; // [esp+1Ch] [ebp-498h] BYREF
  _UNICODE_STRING ValueName; // [esp+20h] [ebp-494h] BYREF
  PVOID BaseAddress; // [esp+28h] [ebp-48Ch] BYREF
  ULONG_PTR PackageSize; // [esp+2Ch] [ebp-488h] BYREF
  HANDLE KeyHandle; // [esp+34h] [ebp-480h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [esp+38h] [ebp-47Ch] BYREF
  _CONTEXT ContextRecord; // [esp+88h] [ebp-42Ch] BYREF
  WCHAR PackageFullName[128]; // [esp+358h] [ebp-15Ch] BYREF
  _BYTE KeyValueInformation[4]; // [esp+458h] [ebp-5Ch] BYREF
  int v16; // [esp+45Ch] [ebp-58h]
  int v17; // [esp+460h] [ebp-54h]

  ValueName.Length = 20;
  ValueName.MaximumLength = 22;
  LODWORD(PackageSize) = 256;
  ValueName.Buffer = L"BinaryHash";
  RemediationRegistryKey = RtlQueryPackageIdentityEx((HANDLE)0xFFFFFFFC, PackageFullName, &PackageSize, 0, 0, 0, &Flags);
  if ( RemediationRegistryKey < 0 )
    goto LABEL_12;
  RemediationRegistryKey = LdrpAppxGetRemediationRegistryKey(&KeyHandle);
  if ( RemediationRegistryKey < 0 )
    goto LABEL_12;
  RemediationRegistryKey = LdrpAppxGetBinaryNameKeyInformation(KeyHandle, (int)&BaseAddress);
  if ( RemediationRegistryKey >= 0 )
  {
    v2 = HIDWORD(PackageSize);
    LODWORD(v4) = 80;
    memset(KeyValueInformation, 0, v4);
    RemediationRegistryKey = ZwQueryValueKey(
                               KeyHandle,
                               &ValueName,
                               KeyValuePartialInformation,
                               KeyValueInformation,
                               0x50u,
                               &ResultLength);
    if ( RemediationRegistryKey >= 0 )
    {
      if ( v16 != 3 || !v17 )
        RemediationRegistryKey = -1073739509;
      if ( RemediationRegistryKey >= 0 )
        LdrpAppxEtwIntegrityFailure(v2);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  NtClose(KeyHandle);
  if ( RemediationRegistryKey < 0 )
LABEL_12:
    LdrpAppxEtwGenericIntegrityFailure(RemediationRegistryKey);
  if ( a1 != -1073740673 )
  {
    LODWORD(v4) = 80;
    memset(&ExceptionRecord, 0, v4);
    ExceptionRecord.ExceptionCode = 101457950;
    ExceptionRecord.ExceptionFlags = 1;
    ExceptionRecord.ExceptionAddress = LdrAppxHandleIntegrityFailure;
    LODWORD(v5) = 716;
    memset(&ContextRecord, 0, v5);
    RtlCaptureContext(&ContextRecord);
    RtlReportException(&ExceptionRecord, &ContextRecord, 2u);
    ZwTerminateProcess((HANDLE)0xFFFFFFFF, ExceptionRecord.ExceptionCode);
  }
  return -1073741515;
}
