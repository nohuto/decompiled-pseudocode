/*
 * XREFs of KeTimeOutQueueWaiters @ 0x1402871CC
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x1403B75A0 (ExpWorkerFactoryManagerThread.c)
 *     ExpWorkQueueManagerThread @ 0x1407AF840 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x14024C4A0 (KiAcquireKobjectLockSafe.c)
 *     KiTryUnwaitThread @ 0x140342820 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x140343AC0 (KiExitDispatcher.c)
 */

__int64 __fastcall KeTimeOutQueueWaiters(__int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned int v5; // ebp
  unsigned int v6; // r12d
  int v7; // r13d
  volatile CCHAR v8; // cl
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  char CurrentIrql; // r15
  _QWORD *v12; // rdi
  _QWORD *v13; // rdx
  __int64 v15; // rax

  v5 = 0;
  v6 = a3;
  v7 = MEMORY[0xFFFFF78000000320];
  v8 = KeNumberProcessorsGroup0[3];
  v9 = (a2 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64;
  v10 = v9 >> v8;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v9 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)v9 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, v9, a3, (__int64)SchedulerAssist);
  v12 = *(_QWORD **)(a1 + 16);
  while ( v12 != (_QWORD *)(a1 + 8) && v5 < v6 )
  {
    v13 = v12;
    v12 = (_QWORD *)v12[1];
    if ( *((_BYTE *)v13 + 16) == 3 )
    {
      if ( v7 - *(_DWORD *)(v13[3] + 436LL) < (unsigned int)v10 )
        break;
      v15 = *v13;
      if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v12 != v13 )
        __fastfail(3u);
      *v12 = v15;
      *(_QWORD *)(v15 + 8) = v12;
      if ( (unsigned __int8)KiTryUnwaitThread(KeGetCurrentPrcb(), v13, 258LL, 0LL) )
        ++v5;
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((unsigned int)KeGetCurrentPrcb(), 0, 1, 0, CurrentIrql);
  return v5;
}
