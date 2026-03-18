/*
 * XREFs of MiUpdatePageAttributeStamp @ 0x140326FF8
 * Callers:
 *     MiCopyHeaderIfResident @ 0x140355BE4 (MiCopyHeaderIfResident.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiGetPfnPriority @ 0x140279DB0 (MiGetPfnPriority.c)
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 */

void __fastcall MiUpdatePageAttributeStamp(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // al
  __int64 v4; // rcx
  __int64 v5; // rcx
  signed __int32 v6[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  if ( !*(_WORD *)(a1 + 32) )
  {
    v2 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
    v3 = *(_BYTE *)(a1 + 34);
    v4 = *(_QWORD *)(v2 + 8LL * (v3 & 7) + 4216);
    if ( (v3 & 7) == 2 )
    {
      v5 = 5LL * (unsigned int)MiGetPfnPriority(a1) + 304;
    }
    else
    {
      if ( *(_DWORD *)(v4 + 8) != 3 || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
        goto LABEL_5;
      v5 = 5LL * *((unsigned int *)MiSearchNumaNodeTable((a1 + 0x58000000000LL) / 48) + 2) + 432;
    }
    v4 = v2 + 8 * v5;
LABEL_5:
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v4 + 32);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v4 + 32));
    _InterlockedOr(v6, 0);
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
