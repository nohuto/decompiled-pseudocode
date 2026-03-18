/*
 * XREFs of KiActivateWaiterQueueWithNoLocks @ 0x140303618
 * Callers:
 *     KiCommitThreadWait @ 0x14021BDA0 (KiCommitThreadWait.c)
 *     KeTerminateThread @ 0x1402D602C (KeTerminateThread.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1403034BC (KiPriQueueThreadPriorityChanged.c)
 *     KiSwitchQueue @ 0x140303594 (KiSwitchQueue.c)
 *     KiSwitchPriQueue @ 0x14032D42C (KiSwitchPriQueue.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402971C0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiActivateWaiterKQueue @ 0x14030374C (KiActivateWaiterKQueue.c)
 *     KiActivateWaiterPriQueue @ 0x1403037E0 (KiActivateWaiterPriQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiActivateWaiterQueueWithNoLocks(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  volatile LONG *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  _QWORD *v14; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v17; // rcx
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // eax
  int v21; // [rsp+30h] [rbp+8h] BYREF

  v5 = &KiObjectRundownLocks[16 * ((a2 >> 4) & 0x3F)];
  ExAcquireSpinLockSharedAtDpcLevel(v5);
  v9 = *(volatile signed __int32 **)(a1 + 232);
  if ( v9 )
  {
    KiAcquireKobjectLockSafe(*(volatile signed __int32 **)(a1 + 232), v6, v7, v8);
    if ( !*(_QWORD *)(a1 + 232) )
    {
      _InterlockedAnd(v9, 0xFFFFFF7F);
      v9 = 0LL;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v5);
  if ( v9 )
  {
    if ( a3 )
    {
      if ( (*(_BYTE *)v9 & 0x7F) == 0x15 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v21 = 0;
        while ( 1 )
        {
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v18 = SchedulerAssist[6];
              SchedulerAssist[6] = v18 + 1;
              if ( v18 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
            break;
          v19 = CurrentPrcb->SchedulerAssist;
          if ( v19 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v20 = v19[6] - 1;
              v19[6] = v20;
              if ( !v20 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v21, v10, v11, v12);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v17 = (unsigned __int8)*(_DWORD *)(a1 + 540);
        *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
        _InterlockedDecrement(&v9[v17 + 134]);
        KiReleaseThreadLockSafe(a1);
      }
      else
      {
        _InterlockedDecrement(v9 + 10);
      }
      v13 = *a3;
      v14 = (_QWORD *)a3[1];
      if ( *(_QWORD **)(*a3 + 8LL) != a3 || (_QWORD *)*v14 != a3 )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    if ( (*(_BYTE *)v9 & 0x7F) == 0x15 )
      KiActivateWaiterPriQueue(v9);
    else
      KiActivateWaiterKQueue(v9);
  }
}
