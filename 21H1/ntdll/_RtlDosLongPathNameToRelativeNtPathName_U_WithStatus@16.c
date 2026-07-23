/*
 * XREFs of _RtlDosLongPathNameToRelativeNtPathName_U_WithStatus@16 @ 0x4B32D110
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpDosPathNameToRelativeNtPathName_U@20 @ 0x4B2D1C18 (_RtlpDosPathNameToRelativeNtPathName_U@20.c)
 */

NTSTATUS __cdecl RtlDosLongPathNameToRelativeNtPathName_U_WithStatus(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return RtlpDosPathNameToRelativeNtPathName_U(6, DosFileName, NtFileName, FilePart, RelativeName);
}
