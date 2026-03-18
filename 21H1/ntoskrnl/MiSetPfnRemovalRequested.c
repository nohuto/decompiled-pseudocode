/*
 * XREFs of MiSetPfnRemovalRequested @ 0x140549908
 * Callers:
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MiInitializeDynamicPfns @ 0x140528A80 (MiInitializeDynamicPfns.c)
 *     MiRemoveBadPages @ 0x1405290A8 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x1405295D8 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140529E10 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMarkFileOnlyPfnBad @ 0x14053BBE8 (MiMarkFileOnlyPfnBad.c)
 *     MiMakePageBad @ 0x14055DE44 (MiMakePageBad.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
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
      v5 = *(_QWORD *)(*(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)) + 16LL)
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
