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

bool __fastcall RtlDosPathNameToRelativeNtPathName_U(int a1, int a2, int a3, __int64 a4)
{
  return (int)RtlpDosPathNameToRelativeNtPathName_U(2, a1, a2, a3, a4) >= 0;
}
