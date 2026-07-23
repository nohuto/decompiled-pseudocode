/*
 * XREFs of MiReplenishTransitionPageHeatList @ 0x14055ABC0
 * Callers:
 *     MmCopyToCachedPage @ 0x140223C10 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 * Callees:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 */

void MiReplenishTransitionPageHeatList()
{
  _SLIST_ENTRY *Pool; // rax

  while ( LOWORD(stru_140C4E810.Alignment) < 0x40u )
  {
    Pool = (_SLIST_ENTRY *)MiAllocatePool(64, 0x90uLL, 0x6C486D4Du);
    if ( !Pool )
    {
      _InterlockedExchange(&dword_140C4E820, 32);
      return;
    }
    *((_DWORD *)&Pool->Next + 2) = 16;
    RtlpInterlockedPushEntrySList(&stru_140C4E810, Pool);
  }
}
