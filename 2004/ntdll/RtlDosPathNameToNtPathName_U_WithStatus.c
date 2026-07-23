/*
 * XREFs of RtlDosPathNameToNtPathName_U_WithStatus @ 0x180016BE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001A974 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

NTSTATUS __cdecl RtlDosPathNameToNtPathName_U_WithStatus(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return RtlpDosPathNameToRelativeNtPathName_U(
           0,
           (_DWORD)DosFileName,
           (_DWORD)NtFileName,
           (_DWORD)FilePart,
           (__int64)RelativeName);
}
