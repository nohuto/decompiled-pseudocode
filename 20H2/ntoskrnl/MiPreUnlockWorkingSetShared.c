/*
 * XREFs of MiPreUnlockWorkingSetShared @ 0x14031ACE0
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x14022F4F0 (MiMoveDirtyBitsToPfns.c)
 *     MiTrimOrAgeWorkingSet @ 0x140269570 (MiTrimOrAgeWorkingSet.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiDeletePagablePteRange @ 0x1402BA840 (MiDeletePagablePteRange.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     MiReduceWs @ 0x14031AE58 (MiReduceWs.c)
 *     MiForcedTrim @ 0x14036BEF0 (MiForcedTrim.c)
 *     MiForceAgeWorkingSet @ 0x1405398C0 (MiForceAgeWorkingSet.c)
 */

char __fastcall MiPreUnlockWorkingSetShared(__int64 a1, char a2)
{
  char result; // al
  struct _KTHREAD *CurrentThread; // rdi
  LONG *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r8
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
      LOBYTE(v8) = a2;
      if ( !MiForcedTrim(a1, v8) && (*(_BYTE *)(a1 + 184) & 0x40) != 0 )
      {
        v10 = *(_QWORD *)(a1 + 120);
        if ( v10 > *(_QWORD *)(a1 + 152) )
        {
          LOBYTE(v9) = a2;
          if ( (*(_DWORD *)(a1 + 4) & 0xF) != 0 )
            v11 = v10 - 1;
          else
            v11 = *(_QWORD *)(a1 + 152);
          MiReduceWs(a1, v9, v11);
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
      v6 = MiGetSharedVm(a1);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 16);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v6 + 8);
      *(_BYTE *)(a1 + 187) &= ~0x10u;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      LOBYTE(v7) = a2;
      result = MiReduceWs(a1, v7, *(_QWORD *)(a1 + 152));
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
  }
  return result;
}
