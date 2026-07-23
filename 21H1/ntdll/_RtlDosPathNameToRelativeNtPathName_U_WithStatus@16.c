/*
 * XREFs of _RtlDosPathNameToRelativeNtPathName_U_WithStatus@16 @ 0x4B2C1E00
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 */

NTSTATUS __cdecl RtlDosPathNameToRelativeNtPathName_U_WithStatus(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  PCWSTR v4; // ecx

  v4 = DosFileName;
  if ( !DosFileName )
    return RtlpDosPathNameToRelativeNtPathName(0, NtFileName, 0, (int)FilePart, (int)RelativeName);
  while ( *v4++ )
    ;
  if ( (unsigned int)(v4 - (DosFileName + 1)) > 0x7FFE )
    return -1073741562;
  else
    return RtlpDosPathNameToRelativeNtPathName(0, NtFileName, 0, (int)FilePart, (int)RelativeName);
}
