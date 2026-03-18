/*
 * XREFs of KiActivateWaiterQueueWithNoLocks @ 0x1402EE104
 * Callers:
 *     KiSwitchQueue @ 0x140242498 (KiSwitchQueue.c)
 *     KiSwitchPriQueue @ 0x140259330 (KiSwitchPriQueue.c)
 *     KiPriQueueThreadPriorityChanged @ 0x140291EE4 (KiPriQueueThreadPriorityChanged.c)
 *     KiCommitThreadWait @ 0x1402B5240 (KiCommitThreadWait.c)
 *     KeTerminateThread @ 0x1402F00BC (KeTerminateThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiActivateWaiterPriQueue @ 0x1402EC8A4 (KiActivateWaiterPriQueue.c)
 *     KiActivateWaiterKQueue @ 0x1402EE238 (KiActivateWaiterKQueue.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiActivateWaiterQueueWithNoLocks(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  volatile LONG *v5; // rdi
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v11; // rcx
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  int v15; // [rsp+30h] [rbp+8h] BYREF

  v5 = (volatile LONG *)((char *)&KiObjectRundownLocks + 64 * ((a2 >> 4) & 0x3F));
  ExAcquireSpinLockSharedAtDpcLevel(v5);
  v6 = *(volatile signed __int32 **)(a1 + 232);
  if ( v6 )
  {
    KiAcquireKobjectLockSafe(*(_QWORD *)(a1 + 232));
    if ( !*(_QWORD *)(a1 + 232) )
    {
      _InterlockedAnd(v6, 0xFFFFFF7F);
      v6 = 0LL;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v5);
  if ( v6 )
  {
    if ( a3 )
    {
      if ( (*(_BYTE *)v6 & 0x7F) == 0x15 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = 0;
        while ( 1 )
        {
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v12 = SchedulerAssist[6];
              SchedulerAssist[6] = v12 + 1;
              if ( v12 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
            break;
          v13 = CurrentPrcb->SchedulerAssist;
          if ( v13 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v14 = v13[6] - 1;
              v13[6] = v14;
              if ( !v14 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v15);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v11 = (unsigned __int8)*(_DWORD *)(a1 + 540);
        *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
        _InterlockedDecrement(&v6[v11 + 134]);
        KiReleaseThreadLockSafe(a1);
      }
      else
      {
        _InterlockedDecrement(v6 + 10);
      }
      v7 = *a3;
      v8 = (_QWORD *)a3[1];
      if ( *(_QWORD **)(*a3 + 8LL) != a3 || (_QWORD *)*v8 != a3 )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    if ( (*(_BYTE *)v6 & 0x7F) == 0x15 )
      KiActivateWaiterPriQueue((ULONG_PTR)v6);
    else
      KiActivateWaiterKQueue(v6);
  }
}
