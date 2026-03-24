/*
 * XREFs of MiUpdatePageAttributeStamp @ 0x1402C81D0
 * Callers:
 *     MiCopyHeaderIfResident @ 0x1402E8D30 (MiCopyHeaderIfResident.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402185D0 (MiGetPfnPriority.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 */

void __fastcall MiUpdatePageAttributeStamp(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  char v5; // al
  __int64 v6; // rcx
  __int64 v7; // rcx
  signed __int32 v8[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  if ( !*(_WORD *)(a1 + 32) )
  {
    v4 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
    v5 = *(_BYTE *)(a1 + 34);
    v6 = *(_QWORD *)(v4 + 8LL * (v5 & 7) + 4216);
    if ( (v5 & 7) == 2 )
    {
      v7 = 5LL * (unsigned int)MiGetPfnPriority(a1) + 304;
    }
    else
    {
      if ( *(_DWORD *)(v6 + 8) != 3 || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
        goto LABEL_5;
      v7 = 5LL * *(unsigned int *)(MiSearchNumaNodeTable((a1 + 0x58000000000LL) / 48) + 8) + 432;
    }
    v6 = v4 + 8 * v7;
LABEL_5:
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 32);
    KxAcquireQueuedSpinLock(&LockHandle, v6 + 32, a3);
    _InterlockedOr(v8, 0);
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
