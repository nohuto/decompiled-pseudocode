/*
 * XREFs of SmKmUnlockMdl @ 0x14032009C
 * Callers:
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1402C385C (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x1403092F0 (SmKmStoreHelperCommandProcess.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140598554 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmFpFree @ 0x14023D59C (SmFpFree.c)
 *     MmUnmapLockedPages @ 0x14027DBC0 (MmUnmapLockedPages.c)
 *     MiUnlockStoreLockedPages @ 0x14030FA40 (MiUnlockStoreLockedPages.c)
 */

__int64 __fastcall SmKmUnlockMdl(PMDL MemoryDescriptorList, __int64 a2, __int64 a3)
{
  if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
  {
    if ( a2 )
      SmFpFree(a2, 5, a3, MemoryDescriptorList);
    else
      MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  }
  if ( MemoryDescriptorList->Next )
  {
    SmFpFree(a2, 4, a3, MemoryDescriptorList->Next);
    MemoryDescriptorList->Next = 0LL;
  }
  return MiUnlockStoreLockedPages((__int64)MemoryDescriptorList, a2, a3);
}
