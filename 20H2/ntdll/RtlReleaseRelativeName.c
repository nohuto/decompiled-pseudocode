/*
 * XREFs of RtlReleaseRelativeName @ 0x18001A320
 * Callers:
 *     RtlDoesFileExists_UstrEx @ 0x18001A1F0 (RtlDoesFileExists_UstrEx.c)
 *     LdrpMapResourceFile @ 0x18004BA58 (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18004BDF8 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180072650 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180072B9C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpMUIEnumerateFolder @ 0x180086DAC (RtlpMUIEnumerateFolder.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E125C (LdrpCnvrtShortToLongFileName.c)
 *     LdrpResMapFile @ 0x1800E44B4 (LdrpResMapFile.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 */

void __cdecl RtlReleaseRelativeName(PRTL_RELATIVE_NAME_U RelativeName)
{
  PRTLP_CURDIR_REF CurDirRef; // rbx

  CurDirRef = RelativeName->CurDirRef;
  if ( CurDirRef )
  {
    if ( _InterlockedExchangeAdd(&CurDirRef->ReferenceCount, 0xFFFFFFFF) == 1 )
    {
      NtClose(CurDirRef->DirectoryHandle);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, CurDirRef);
    }
    RelativeName->CurDirRef = 0LL;
  }
}
