/*
 * XREFs of SmKmUnlockMdl @ 0x1403592D0
 * Callers:
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1403570D8 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x140358420 (SmKmStoreHelperCommandProcess.c)
 *     SmKmStoreHelperCommandCleanup @ 0x14059C6E4 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmFpFree @ 0x1402580A4 (SmFpFree.c)
 *     MmUnmapLockedPages @ 0x140295370 (MmUnmapLockedPages.c)
 *     MiUnlockStoreLockedPages @ 0x14031E050 (MiUnlockStoreLockedPages.c)
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
  return MiUnlockStoreLockedPages((__int64)MemoryDescriptorList);
}
