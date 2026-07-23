/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U @ 0x180016B80
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x18004BDF8 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpIsReparsePoint @ 0x180069FE4 (LdrpIsReparsePoint.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180072650 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180072B9C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpMUIEnumerateFolder @ 0x180086DAC (RtlpMUIEnumerateFolder.c)
 *     LdrpResMapFile @ 0x1800E44B4 (LdrpResMapFile.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001A974 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

BOOLEAN __cdecl RtlDosPathNameToRelativeNtPathName_U(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return (int)RtlpDosPathNameToRelativeNtPathName_U(
                2,
                (_DWORD)DosFileName,
                (_DWORD)NtFileName,
                (_DWORD)FilePart,
                (__int64)RelativeName) >= 0;
}
