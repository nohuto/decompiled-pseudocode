/*
 * XREFs of MmQuerySystemWorkingSetInformation @ 0x14023FC60
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetStandbyRepurposed @ 0x14025F744 (MiGetStandbyRepurposed.c)
 *     MiGetCurrentMultiplexedVm @ 0x140260498 (MiGetCurrentMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     memset @ 0x140414300 (memset.c)
 */

void *__fastcall MmQuerySystemWorkingSetInformation(int a1, _QWORD *a2)
{
  void *result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 AnyMultiplexedVm; // rdi
  int v8; // r8d
  __int64 v9; // rbp
  __int64 v10; // rsi
  char v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // al
  __int64 v16; // rdx
  int StandbyRepurposed; // eax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  int v20; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = 0LL;
  *((_DWORD *)a2 + 15) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 2LL;
  v6 = (unsigned int)(a1 - 2);
  if ( (_DWORD)v6 )
  {
    v20 = v6 - 1;
    if ( v20 )
    {
      if ( v20 != 1 )
        return result;
      v5 = 1LL;
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v5);
  }
  else
  {
    AnyMultiplexedVm = MiGetCurrentMultiplexedVm(2LL, v6);
    if ( !AnyMultiplexedVm )
      return memset(a2, 0, 0x40uLL);
  }
  v9 = (unsigned int)(v8 - 2);
  v10 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 174));
  v11 = MiLockWorkingSetShared(AnyMultiplexedVm);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(MiGetSharedVm(AnyMultiplexedVm, v12) + 64);
  KxAcquireQueuedSpinLock(&LockHandle, LockHandle.LockQueue.Lock, v13, v14);
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
  a2[6] = *(_QWORD *)(v10 + 8 * v9 + 4360);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  LOBYTE(v16) = v11;
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v16);
  StandbyRepurposed = MiGetStandbyRepurposed(v10, 1LL);
  v18 = *a2;
  *((_DWORD *)a2 + 14) = StandbyRepurposed;
  result = (void *)a2[6];
  v19 = v18 + *(_QWORD *)(v10 + 4352);
  a2[5] = v19;
  if ( v19 > (unsigned __int64)result )
    a2[5] = result;
  a2[1] <<= 12;
  *a2 = v18 << 12;
  return result;
}
