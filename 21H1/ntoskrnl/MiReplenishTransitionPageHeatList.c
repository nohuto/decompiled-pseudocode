/*
 * XREFs of MiReplenishTransitionPageHeatList @ 0x14055A570
 * Callers:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MmCopyToCachedPage @ 0x14027CC60 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 */

void MiReplenishTransitionPageHeatList()
{
  _SLIST_ENTRY *Pool; // rax

  while ( LOWORD(stru_140C4E950.Alignment) < 0x40u )
  {
    Pool = (_SLIST_ENTRY *)MiAllocatePool(64, 0x90uLL, 0x6C486D4Du);
    if ( !Pool )
    {
      _InterlockedExchange(&dword_140C4E960, 32);
      return;
    }
    *((_DWORD *)&Pool->Next + 2) = 16;
    RtlpInterlockedPushEntrySList(&stru_140C4E950, Pool);
  }
}
