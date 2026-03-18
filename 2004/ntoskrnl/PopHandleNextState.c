/*
 * XREFs of PopHandleNextState @ 0x140990110
 * Callers:
 *     PopIssueNextState @ 0x140990050 (PopIssueNextState.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140990090 (PopInvokeStateHandlerTargetProcessor.c)
 * Callees:
 *     KeForceAttachProcess @ 0x14024D7DC (KeForceAttachProcess.c)
 *     KeForceDetachProcess @ 0x140346394 (KeForceDetachProcess.c)
 *     KeSaveExtendedAndSupervisorState @ 0x14034EC5C (KeSaveExtendedAndSupervisorState.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x140350C48 (KeRestoreExtendedAndSupervisorState.c)
 *     PopFxNotifySystemStateTransition @ 0x1403810A0 (PopFxNotifySystemStateTransition.c)
 *     KeResumeClockTimer @ 0x1403810C0 (KeResumeClockTimer.c)
 *     PpmResetPerfEngineForProcessor @ 0x1403811AC (PpmResetPerfEngineForProcessor.c)
 *     KeRestoreIptStateAfterProcessorComesOnline @ 0x140381288 (KeRestoreIptStateAfterProcessorComesOnline.c)
 *     KeSaveIptStateBeforeProcessorGoesOffline @ 0x140381978 (KeSaveIptStateBeforeProcessorGoesOffline.c)
 *     KeSuspendClockTimer @ 0x140381998 (KeSuspendClockTimer.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x1403819FC (KeRestoreProcessorSpecificFeatures.c)
 *     HvlNotifyLongSpinWait @ 0x14038D780 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038E560 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeFlushCurrentTbImmediately @ 0x14039DCF0 (KeFlushCurrentTbImmediately.c)
 *     HvlEnlightenProcessor @ 0x1403A4CD8 (HvlEnlightenProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     KdPowerTransition @ 0x14050BB40 (KdPowerTransition.c)
 *     PopRestoreHiberContext @ 0x140990478 (PopRestoreHiberContext.c)
 */

void __fastcall PopHandleNextState(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbp
  int v3; // r14d
  unsigned int v4; // ebx
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int8 CurrentIrql; // r10
  int v10; // eax
  __int64 v11; // rdx
  unsigned int Number; // ecx
  unsigned __int64 v13; // rbx
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r9
  int v18; // eax
  bool v19; // zf
  __int16 v20; // [rsp+40h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v4 = 0;
  while ( *(_DWORD *)(a1 + 56) == *(_DWORD *)a2 )
  {
    if ( (++v4 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v4);
    }
    else
    {
      _mm_pause();
    }
  }
  v7 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)a2 = v7;
  if ( v7 == 12 )
  {
    v8 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)v8 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))v8)(
        *(unsigned int *)(a1 + 40),
        *(_QWORD *)(v8 + 8),
        *(unsigned __int8 *)(a1 + 44));
  }
  else if ( v7 == 10 )
  {
    KeFlushCurrentTbImmediately();
    __wbinvd();
  }
  else
  {
    switch ( v7 )
    {
      case 2:
        PopFxNotifySystemStateTransition((__int64)CurrentPrcb, 1, dword_140C22E60);
        break;
      case 3:
        KeSaveIptStateBeforeProcessorGoesOffline();
        *(_BYTE *)(a2 + 5) = 0;
        if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          *(_BYTE *)(a2 + 5) = (int)KeSaveExtendedAndSupervisorState(
                                      (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                                      (PVOID *)(a2 + 8)) >= 0;
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
        *(_BYTE *)(a2 + 4) = (v20 & 0x200) != 0;
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
          v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 8LL))(
                  *(_QWORD *)(*(_QWORD *)a1 + 16LL),
                  *(_QWORD *)(a1 + 8),
                  *(_QWORD *)(a1 + 16),
                  *(unsigned int *)(a1 + 48),
                  a1 + 60);
          Number = CurrentPrcb->Number;
          v3 = v10;
          if ( !Number )
          {
            if ( !PoResumeFromHibernate )
            {
              KdPowerTransition(1LL, v11);
              Number = CurrentPrcb->Number;
            }
            if ( !Number )
              qword_140C23480 = __rdtsc();
          }
        }
        *(_DWORD *)(a2 + 112) = v3;
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
          KeForceDetachProcess((_OWORD *)(a2 + 64), 1);
          *(_BYTE *)(a2 + 6) = 0;
        }
        break;
      case 13:
        KeResumeClockTimer();
        if ( *(_BYTE *)(a2 + 4) )
          _enable();
        v13 = *(unsigned __int8 *)(a2 + 7);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v15 = KeGetCurrentIrql();
            if ( v15 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v15 >= 2u )
            {
              v16 = KeGetCurrentPrcb();
              v17 = v16->SchedulerAssist;
              v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
              v19 = (v18 & v17[5]) == 0;
              v17[5] &= v18;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick((__int64)v16);
            }
          }
        }
        __writecr8(v13);
        break;
      case 14:
        PopFxNotifySystemStateTransition((__int64)CurrentPrcb, 0, dword_140C22E60);
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
