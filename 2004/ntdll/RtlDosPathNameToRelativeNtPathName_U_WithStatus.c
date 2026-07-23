/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x18001AEE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001AF50 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 */

NTSTATUS __cdecl RtlDosPathNameToRelativeNtPathName_U_WithStatus(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  int v4; // esi
  NTSTATUS result; // eax
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  v4 = (int)NtFileName;
  result = RtlInitUnicodeStringEx(&DestinationString, DosFileName);
  if ( result >= 0 )
    return RtlpDosPathNameToRelativeNtPathName(
             2,
             (unsigned int)&DestinationString,
             0,
             v4,
             0LL,
             (__int64)FilePart,
             (__int64)RelativeName);
  return result;
}
