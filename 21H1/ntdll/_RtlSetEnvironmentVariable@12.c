/*
 * XREFs of _RtlSetEnvironmentVariable@12 @ 0x4B2DB170
 * Callers:
 *     _RtlpWow64ThunkEnvironment64To32@0 @ 0x4B2DAFBF (_RtlpWow64ThunkEnvironment64To32@0.c)
 *     _RtlpResetDriveEnvironment@4 @ 0x4B32D76C (_RtlpResetDriveEnvironment@4.c)
 * Callees:
 *     _RtlSetEnvironmentVar@20 @ 0x4B2DB1B0 (_RtlSetEnvironmentVar@20.c)
 */

NTSTATUS __cdecl RtlSetEnvironmentVariable(PVOID *Environment, PUNICODE_STRING Name, PUNICODE_STRING Value)
{
  wchar_t *Buffer; // edx
  const WCHAR *v4; // ecx
  SIZE_T v6; // [esp-Ch] [ebp-10h]
  SIZE_T _0; // [esp+0h] [ebp-4h]

  Buffer = 0;
  if ( Value )
    v4 = (const WCHAR *)(Value->Length >> 1);
  else
    v4 = 0;
  if ( Value )
    Buffer = Value->Buffer;
  HIDWORD(v6) = Buffer;
  LODWORD(v6) = Name->Length >> 1;
  return RtlSetEnvironmentVar(Environment, (PCWSTR)Name->Buffer, v6, v4, _0);
}
