/*
 * XREFs of MiSetPfnRemovalRequested @ 0x14054F668
 * Callers:
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiInitializeDynamicPfns @ 0x14052E7E0 (MiInitializeDynamicPfns.c)
 *     MiRemoveBadPages @ 0x14052EE08 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x14052F338 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052FB70 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMarkFileOnlyPfnBad @ 0x140541948 (MiMarkFileOnlyPfnBad.c)
 *     MiMakePageBad @ 0x140563B74 (MiMakePageBad.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 */

void __fastcall MiSetPfnRemovalRequested(__int64 a1, int a2)
{
  _BYTE *v2; // r14
  unsigned int v3; // ebx
  __int64 v5; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (_BYTE *)(a1 + 35);
  v3 = *(unsigned __int8 *)(a1 + 35);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( ((v3 >> 6) & 1) != a2 )
  {
    if ( (*(_QWORD *)(a1 + 40) & 0x2000000000000LL) != 0 )
    {
      v5 = 0LL;
    }
    else
    {
      v5 = *(_QWORD *)(*(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)) + 16LL)
         + 4544LL * *((unsigned int *)MiSearchNumaNodeTable((a1 + 0x58000000000LL) / 48) + 2);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 4328);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v5 + 4328));
      *(_QWORD *)(v5 + 4352) += a2 != 0 ? 1LL : -1LL;
    }
    *v2 = v3 ^ (v3 ^ ((_BYTE)a2 << 6)) & 0x40;
    if ( v5 )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
