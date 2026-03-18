/*
 * XREFs of SmKmUnlockMdl @ 0x14035DBEC
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x1403037A0 (SmKmStoreHelperCommandProcess.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140305B0C (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140598C44 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140224B70 (MmUnmapLockedPages.c)
 *     SmFpFree @ 0x1402D03CC (SmFpFree.c)
 *     MiUnlockStoreLockedPages @ 0x14034D0D0 (MiUnlockStoreLockedPages.c)
 */

void __fastcall SmKmUnlockMdl(PMDL MemoryDescriptorList, __int64 a2, __int64 a3)
{
  struct _MDL *Next; // r9

  if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
  {
    if ( a2 )
      SmFpFree(a2, 5, a3, MemoryDescriptorList);
    else
      MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  }
  Next = MemoryDescriptorList->Next;
  if ( MemoryDescriptorList->Next )
  {
    SmFpFree(a2, 4, a3, Next);
    MemoryDescriptorList->Next = 0LL;
  }
  MiUnlockStoreLockedPages((__int64)MemoryDescriptorList, a2, a3, Next);
}
