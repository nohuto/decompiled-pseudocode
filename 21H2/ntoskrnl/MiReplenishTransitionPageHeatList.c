/*
 * XREFs of MiReplenishTransitionPageHeatList @ 0x1405B809C
 * Callers:
 *     MmCopyToCachedPage @ 0x1402BE8E0 (MmCopyToCachedPage.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MmCheckCachedPageStates @ 0x140328690 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 */

void MiReplenishTransitionPageHeatList()
{
  struct _SLIST_ENTRY *Pool; // rax

  while ( LOWORD(stru_140C52E60.Alignment) < 0x40u )
  {
    Pool = (struct _SLIST_ENTRY *)MiAllocatePool(64, 0x90uLL, 0x6C486D4Du);
    if ( !Pool )
    {
      _InterlockedExchange(&dword_140C52E70, 32);
      return;
    }
    *((_DWORD *)&Pool->Next + 2) = 16;
    RtlpInterlockedPushEntrySList(&stru_140C52E60, Pool);
  }
}
