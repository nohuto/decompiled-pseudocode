/*
 * XREFs of PopHandleNextState @ 0x14098F3C0
 * Callers:
 *     PopIssueNextState @ 0x14098F2FC (PopIssueNextState.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x14098F340 (PopInvokeStateHandlerTargetProcessor.c)
 * Callees:
 *     KeForceAttachProcess @ 0x1402A680C (KeForceAttachProcess.c)
 *     KeForceDetachProcess @ 0x140308594 (KeForceDetachProcess.c)
 *     KeSaveExtendedAndSupervisorState @ 0x1403111AC (KeSaveExtendedAndSupervisorState.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x140312D98 (KeRestoreExtendedAndSupervisorState.c)
 *     PopFxNotifySystemStateTransition @ 0x140380860 (PopFxNotifySystemStateTransition.c)
 *     KeResumeClockTimer @ 0x140380880 (KeResumeClockTimer.c)
 *     PpmResetPerfEngineForProcessor @ 0x14038096C (PpmResetPerfEngineForProcessor.c)
 *     KeRestoreIptStateAfterProcessorComesOnline @ 0x140380A48 (KeRestoreIptStateAfterProcessorComesOnline.c)
 *     KeSaveIptStateBeforeProcessorGoesOffline @ 0x140381138 (KeSaveIptStateBeforeProcessorGoesOffline.c)
 *     KeSuspendClockTimer @ 0x140381158 (KeSuspendClockTimer.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x1403811BC (KeRestoreProcessorSpecificFeatures.c)
 *     HvlNotifyLongSpinWait @ 0x14038CC10 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038D9F0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeFlushCurrentTbImmediately @ 0x14039D560 (KeFlushCurrentTbImmediately.c)
 *     HvlEnlightenProcessor @ 0x1403A4558 (HvlEnlightenProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KdPowerTransition @ 0x14050B4F0 (KdPowerTransition.c)
 *     PopRestoreHiberContext @ 0x14098F728 (PopRestoreHiberContext.c)
 */

void __fastcall PopHandleNextState(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct _KPRCB *CurrentPrcb; // rbp
  int v5; // r14d
  unsigned int v6; // ebx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 CurrentIrql; // r10
  int v14; // eax
  __int64 v15; // rdx
  unsigned int Number; // ecx
  unsigned __int64 v17; // rbx
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v22; // eax
  bool v23; // zf
  __int16 v24; // [rsp+40h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  v6 = 0;
  while ( *(_DWORD *)(a1 + 56) == *(_DWORD *)a2 )
  {
    if ( (++v6 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v6);
    }
    else
    {
      _mm_pause();
    }
  }
  v9 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)a2 = v9;
  if ( v9 == 12 )
  {
    v10 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)v10 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))v10)(
        *(unsigned int *)(a1 + 40),
        *(_QWORD *)(v10 + 8),
        *(unsigned __int8 *)(a1 + 44));
  }
  else if ( v9 == 10 )
  {
    KeFlushCurrentTbImmediately();
    __wbinvd();
  }
  else
  {
    switch ( v9 )
    {
      case 2:
        PopFxNotifySystemStateTransition((__int64)CurrentPrcb, 1, dword_140C23420);
        break;
      case 3:
        KeSaveIptStateBeforeProcessorGoesOffline();
        *(_BYTE *)(a2 + 5) = 0;
        if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          *(_BYTE *)(a2 + 5) = (int)KeSaveExtendedAndSupervisorState(
                                      (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                                      (PVOID *)(a2 + 8),
                                      v11,
                                      v12) >= 0;
        *(_QWORD *)(a2 + 120) = KeGetPcr();
        break;
      case 4:
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
        }
        *(_BYTE *)(a2 + 7) = CurrentIrql;
        _disable();
        *(_BYTE *)(a2 + 4) = (v24 & 0x200) != 0;
        KeSuspendClockTimer();
        break;
      case 5:
        if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
        {
          *(_BYTE *)(a2 + 6) = 1;
          KeForceAttachProcess((ULONG_PTR)PsInitialSystemProcess, a2 + 64);
        }
        break;
      case 6:
        if ( (PopSimulate & 0x800000) != 0 && *(_QWORD *)(a1 + 8) )
        {
          PoResumeFromHibernate = 1;
        }
        else
        {
          if ( !CurrentPrcb->Number && !*(_QWORD *)(a1 + 8) )
            KdPowerTransition(4LL, a2);
          v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 8LL))(
                  *(_QWORD *)(*(_QWORD *)a1 + 16LL),
                  *(_QWORD *)(a1 + 8),
                  *(_QWORD *)(a1 + 16),
                  *(unsigned int *)(a1 + 48),
                  a1 + 60);
          Number = CurrentPrcb->Number;
          v5 = v14;
          if ( !Number )
          {
            if ( !PoResumeFromHibernate )
            {
              KdPowerTransition(1LL, v15);
              Number = CurrentPrcb->Number;
            }
            if ( !Number )
              qword_140C23A40 = __rdtsc();
          }
        }
        *(_DWORD *)(a2 + 112) = v5;
        break;
      case 7:
        HvlEnlightenProcessor(1);
        break;
      case 8:
        KeRestoreProcessorSpecificFeatures();
        break;
      case 9:
        PopRestoreHiberContext(*(_QWORD *)(a1 + 24));
        break;
      case 11:
        if ( *(_BYTE *)(a2 + 6) )
        {
          KeForceDetachProcess((_OWORD *)(a2 + 64), 1, a3, a4);
          *(_BYTE *)(a2 + 6) = 0;
        }
        break;
      case 13:
        KeResumeClockTimer();
        if ( *(_BYTE *)(a2 + 4) )
          _enable();
        v17 = *(unsigned __int8 *)(a2 + 7);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v19 = KeGetCurrentIrql();
            if ( v19 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v19 >= 2u )
            {
              v20 = KeGetCurrentPrcb();
              v21 = v20->SchedulerAssist;
              v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
              v23 = (v22 & v21[5]) == 0;
              v21[5] &= v22;
              if ( v23 )
                KiRemoveSystemWorkPriorityKick((__int64)v20);
            }
          }
        }
        __writecr8(v17);
        break;
      case 14:
        PopFxNotifySystemStateTransition((__int64)CurrentPrcb, 0, dword_140C23420);
        break;
      case 15:
        if ( *(_BYTE *)(a2 + 5) )
          KeRestoreExtendedAndSupervisorState(a2 + 8);
        KeRestoreIptStateAfterProcessorComesOnline();
        PpmResetPerfEngineForProcessor((__int64)CurrentPrcb);
        break;
      default:
        break;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
}
