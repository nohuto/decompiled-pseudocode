/*
 * XREFs of MmQuerySystemWorkingSetInformation @ 0x14034F4C0
 * Callers:
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiGetCurrentMultiplexedVm @ 0x14027C7A4 (MiGetCurrentMultiplexedVm.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     MiGetStandbyRepurposed @ 0x1402F2348 (MiGetStandbyRepurposed.c)
 *     memset @ 0x14040A280 (memset.c)
 */

void *__fastcall MmQuerySystemWorkingSetInformation(int a1, _QWORD *a2)
{
  void *result; // rax
  int v5; // ecx
  int v6; // edx
  __int64 AnyMultiplexedVm; // rdi
  int v8; // r8d
  __int64 v9; // rbp
  __int64 v10; // rsi
  unsigned __int8 v11; // r14
  char v12; // al
  int StandbyRepurposed; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  int v16; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = 0LL;
  *((_DWORD *)a2 + 15) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 2;
  v6 = a1 - 2;
  if ( v6 )
  {
    v16 = v6 - 1;
    if ( v16 )
    {
      if ( v16 != 1 )
        return result;
      v5 = 1;
    }
    AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(v5);
  }
  else
  {
    AnyMultiplexedVm = MiGetCurrentMultiplexedVm();
    if ( !AnyMultiplexedVm )
      return memset(a2, 0, 0x40uLL);
  }
  v9 = (unsigned int)(v8 - 2);
  v10 = *(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 174));
  v11 = MiLockWorkingSetShared(AnyMultiplexedVm);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(MiGetSharedVm(AnyMultiplexedVm) + 16);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)LockHandle.LockQueue.Lock);
  *a2 = *(_QWORD *)(AnyMultiplexedVm + 120);
  a2[1] = *(_QWORD *)(AnyMultiplexedVm + 160);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(AnyMultiplexedVm + 4);
  a2[3] = *(_QWORD *)(AnyMultiplexedVm + 112);
  a2[4] = *(_QWORD *)(AnyMultiplexedVm + 152);
  v12 = *(_BYTE *)(AnyMultiplexedVm + 184);
  if ( v12 < 0 )
  {
    *((_DWORD *)a2 + 15) |= 4u;
    v12 = *(_BYTE *)(AnyMultiplexedVm + 184);
  }
  if ( (v12 & 0x40) != 0 )
    *((_DWORD *)a2 + 15) |= 1u;
  a2[6] = *(_QWORD *)(v10 + 8 * v9 + 4360);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v11);
  StandbyRepurposed = MiGetStandbyRepurposed(v10, 1u);
  v14 = *a2;
  *((_DWORD *)a2 + 14) = StandbyRepurposed;
  result = (void *)a2[6];
  v15 = v14 + *(_QWORD *)(v10 + 4352);
  a2[5] = v15;
  if ( v15 > (unsigned __int64)result )
    a2[5] = result;
  a2[1] <<= 12;
  *a2 = v14 << 12;
  return result;
}
