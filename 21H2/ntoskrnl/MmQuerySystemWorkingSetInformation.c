/*
 * XREFs of MmQuerySystemWorkingSetInformation @ 0x1402C17C0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 *     MiGetStandbyRepurposed @ 0x1402717A4 (MiGetStandbyRepurposed.c)
 *     MiGetCurrentMultiplexedVm @ 0x1402724F8 (MiGetCurrentMultiplexedVm.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     memset @ 0x140414200 (memset.c)
 */

void *__fastcall MmQuerySystemWorkingSetInformation(int a1, _QWORD *a2)
{
  void *result; // rax
  __int64 v5; // rcx
  int v6; // edx
  __int64 v7; // rdx
  __int64 AnyMultiplexedVm; // rdi
  __int64 v9; // r8
  _DWORD *v10; // r9
  __int64 v11; // rbp
  __int64 v12; // rsi
  unsigned __int8 v13; // r14
  __int64 v14; // r8
  char v15; // al
  int StandbyRepurposed; // eax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  int v19; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = 0LL;
  *((_DWORD *)a2 + 15) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 2LL;
  v6 = a1 - 2;
  if ( v6 )
  {
    v19 = v6 - 1;
    if ( v19 )
    {
      if ( v19 != 1 )
        return result;
      v5 = 1LL;
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v5);
  }
  else
  {
    AnyMultiplexedVm = MiGetCurrentMultiplexedVm();
    if ( !AnyMultiplexedVm )
      return memset(a2, 0, 0x40uLL);
  }
  v11 = (unsigned int)(v9 - 2);
  v12 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 174));
  v13 = MiLockWorkingSetShared(AnyMultiplexedVm, v7, v9, v10);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(MiGetSharedVm(AnyMultiplexedVm) + 16);
  KxAcquireQueuedSpinLock(&LockHandle, LockHandle.LockQueue.Lock, v14);
  *a2 = *(_QWORD *)(AnyMultiplexedVm + 120);
  a2[1] = *(_QWORD *)(AnyMultiplexedVm + 160);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(AnyMultiplexedVm + 4);
  a2[3] = *(_QWORD *)(AnyMultiplexedVm + 112);
  a2[4] = *(_QWORD *)(AnyMultiplexedVm + 152);
  v15 = *(_BYTE *)(AnyMultiplexedVm + 184);
  if ( v15 < 0 )
  {
    *((_DWORD *)a2 + 15) |= 4u;
    v15 = *(_BYTE *)(AnyMultiplexedVm + 184);
  }
  if ( (v15 & 0x40) != 0 )
    *((_DWORD *)a2 + 15) |= 1u;
  a2[6] = *(_QWORD *)(v12 + 8 * v11 + 4360);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v13);
  StandbyRepurposed = MiGetStandbyRepurposed(v12, 1u);
  v17 = *a2;
  *((_DWORD *)a2 + 14) = StandbyRepurposed;
  result = (void *)a2[6];
  v18 = v17 + *(_QWORD *)(v12 + 4352);
  a2[5] = v18;
  if ( v18 > (unsigned __int64)result )
    a2[5] = result;
  a2[1] <<= 12;
  *a2 = v17 << 12;
  return result;
}
