/*
 * XREFs of MiPreUnlockWorkingSetShared @ 0x14036C3C0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402ACB50 (MiTrimOrAgeWorkingSet.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiMoveDirtyBitsToPfns @ 0x1403221E0 (MiMoveDirtyBitsToPfns.c)
 *     MiDeletePagablePteRange @ 0x1403420B0 (MiDeletePagablePteRange.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     MiReduceWs @ 0x14036C53C (MiReduceWs.c)
 *     MiForcedTrim @ 0x14036C6D0 (MiForcedTrim.c)
 *     MiForceAgeWorkingSet @ 0x14053B600 (MiForceAgeWorkingSet.c)
 */

char __fastcall MiPreUnlockWorkingSetShared(__int64 a1, char a2)
{
  char result; // al
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r8
  LONG *v10; // rax
  __int64 v11; // rdx
  LONG *SharedVm; // rax
  __int64 v13; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  result = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 187) & 8) != 0 )
    {
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(MiGetSharedVm(a1) + 16);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)LockHandle.LockQueue.Lock);
      *(_BYTE *)(a1 + 187) &= ~8u;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      LOBYTE(v6) = a2;
      if ( !MiForcedTrim(a1, v6) && (*(_BYTE *)(a1 + 184) & 0x40) != 0 )
      {
        v8 = *(_QWORD *)(a1 + 120);
        if ( v8 > *(_QWORD *)(a1 + 152) )
        {
          LOBYTE(v7) = a2;
          if ( (*(_DWORD *)(a1 + 4) & 0xF) != 0 )
            v9 = v8 - 1;
          else
            v9 = *(_QWORD *)(a1 + 152);
          MiReduceWs(a1, v7, v9);
        }
      }
    }
    result = *(_BYTE *)(a1 + 187);
    if ( (result & 4) != 0 )
    {
      SharedVm = MiGetSharedVm(a1);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(SharedVm + 16);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)SharedVm + 8);
      *(_BYTE *)(a1 + 187) &= ~4u;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      LOBYTE(v13) = a2;
      MiForceAgeWorkingSet(a1, v13);
      result = *(_BYTE *)(a1 + 187);
    }
    if ( (result & 0x10) != 0 )
    {
      v10 = MiGetSharedVm(a1);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 16);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v10 + 8);
      *(_BYTE *)(a1 + 187) &= ~0x10u;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      LOBYTE(v11) = a2;
      result = MiReduceWs(a1, v11, *(_QWORD *)(a1 + 152));
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
  }
  return result;
}
