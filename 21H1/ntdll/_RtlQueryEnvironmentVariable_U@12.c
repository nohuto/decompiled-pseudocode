/*
 * XREFs of _RtlQueryEnvironmentVariable_U@12 @ 0x4B2DB100
 * Callers:
 *     _RtlGetFullPathName_Ustr@24 @ 0x4B2C8CA0 (_RtlGetFullPathName_Ustr@24.c)
 *     _IsProgramFilesPath@8 @ 0x4B2DAE59 (_IsProgramFilesPath@8.c)
 *     _RtlpWow64ThunkEnvironment64To32@0 @ 0x4B2DAFBF (_RtlpWow64ThunkEnvironment64To32@0.c)
 *     _RtlpCheckRelativeDrive@4 @ 0x4B32D619 (_RtlpCheckRelativeDrive@4.c)
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 *     _RtlpLookupSafeCurDirList@0 @ 0x4B33D088 (_RtlpLookupSafeCurDirList@0.c)
 * Callees:
 *     _RtlQueryEnvironmentVariable@24 @ 0x4B2BF830 (_RtlQueryEnvironmentVariable@24.c)
 */

NTSTATUS __cdecl RtlQueryEnvironmentVariable_U(PVOID Environment, PUNICODE_STRING Name, PUNICODE_STRING Value)
{
  NTSTATUS EnvironmentVariable; // ecx
  unsigned __int16 v4; // ax
  SIZE_T v6; // [esp-10h] [ebp-1Ch]
  SIZE_T v7; // [esp-4h] [ebp-10h]
  ULONG_PTR *v8; // [esp+4h] [ebp-8h]
  SIZE_T ValueLength; // [esp+8h] [ebp-4h] BYREF

  LODWORD(v7) = &ValueLength;
  HIDWORD(v6) = Value->Buffer;
  LODWORD(v6) = Name->Length >> 1;
  EnvironmentVariable = RtlQueryEnvironmentVariable(
                          Environment,
                          (PCWSTR)Name->Buffer,
                          v6,
                          (PWSTR)(Value->MaximumLength >> 1),
                          v7,
                          v8);
  if ( (unsigned int)ValueLength > 0x7FFF )
    return -1073741801;
  if ( EnvironmentVariable == -1073741789 )
    v4 = 2 * ValueLength - 2;
  else
    v4 = 2 * ValueLength;
  Value->Length = v4;
  return EnvironmentVariable;
}
