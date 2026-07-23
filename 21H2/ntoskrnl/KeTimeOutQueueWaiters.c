/*
 * XREFs of KeTimeOutQueueWaiters @ 0x14020436C
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x1403B7710 (ExpWorkerFactoryManagerThread.c)
 *     ExpWorkQueueManagerThread @ 0x1407AF9E0 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiTryUnwaitThread @ 0x14034D570 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 */

__int64 __fastcall KeTimeOutQueueWaiters(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebp
  int v6; // r13d
  volatile CCHAR v7; // cl
  unsigned __int64 v8; // rbx
  char CurrentIrql; // r15
  _QWORD *v10; // rdi
  _QWORD *v11; // rdx
  __int64 v13; // rax
  _DWORD *SchedulerAssist; // r9

  v4 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  v7 = KeNumberProcessorsGroup0[1];
  v8 = (unsigned __int64)((a2 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KiAcquireKobjectLockSafe(a1);
  v10 = *(_QWORD **)(a1 + 16);
  while ( v10 != (_QWORD *)(a1 + 8) && v4 < a3 )
  {
    v11 = v10;
    v10 = (_QWORD *)v10[1];
    if ( *((_BYTE *)v11 + 16) == 3 )
    {
      if ( v6 - *(_DWORD *)(v11[3] + 436LL) < (unsigned int)v8 )
        break;
      v13 = *v11;
      if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v10 != v11 )
        __fastfail(3u);
      *v10 = v13;
      *(_QWORD *)(v13 + 8) = v10;
      if ( (unsigned __int8)KiTryUnwaitThread(KeGetCurrentPrcb(), v11, 258LL, 0LL) )
        ++v4;
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((unsigned int)KeGetCurrentPrcb(), 0, 1, 0, CurrentIrql);
  return v4;
}
