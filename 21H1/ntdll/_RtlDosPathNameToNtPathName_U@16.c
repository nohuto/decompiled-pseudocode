/*
 * XREFs of _RtlDosPathNameToNtPathName_U@16 @ 0x4B2D1B70
 * Callers:
 *     _LdrpCheckForSecuROMImage@4 @ 0x4B33163B (_LdrpCheckForSecuROMImage@4.c)
 *     _LdrpResValidateFilePath@4 @ 0x4B343BC4 (_LdrpResValidateFilePath@4.c)
 * Callees:
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 */

BOOLEAN __cdecl RtlDosPathNameToNtPathName_U(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  NTSTATUS inited; // eax
  bool v5; // sf
  _UNICODE_STRING DestinationString; // [esp+0h] [ebp-8h] BYREF

  inited = RtlInitUnicodeStringEx(&DestinationString, DosFileName);
  v5 = inited < 0;
  if ( inited >= 0 )
    v5 = RtlpDosPathNameToRelativeNtPathName(0, &DestinationString, 0, NtFileName, 0, FilePart, RelativeName) < 0;
  return !v5;
}
