/*
 * XREFs of MiUpdatePageAttributeStamp @ 0x140246A30
 * Callers:
 *     MiCopyHeaderIfResident @ 0x14029A080 (MiCopyHeaderIfResident.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 */

void __fastcall MiUpdatePageAttributeStamp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // rcx
  signed __int32 v9[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  if ( !*(_WORD *)(a1 + 32) )
  {
    v5 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
    v6 = *(_BYTE *)(a1 + 34);
    v7 = *(_QWORD *)(v5 + 8LL * (v6 & 7) + 4216);
    if ( (v6 & 7) == 2 )
    {
      v8 = 5LL * (unsigned int)MiGetPfnPriority(a1) + 304;
    }
    else
    {
      if ( *(_DWORD *)(v7 + 8) != 3 || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
        goto LABEL_5;
      v8 = 5LL * *(unsigned int *)(MiSearchNumaNodeTable((a1 + 0x58000000000LL) / 48) + 8) + 432;
    }
    v7 = v5 + 8 * v8;
LABEL_5:
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 32);
    KxAcquireQueuedSpinLock(&LockHandle, v7 + 32, a3, a4);
    _InterlockedOr(v9, 0);
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
