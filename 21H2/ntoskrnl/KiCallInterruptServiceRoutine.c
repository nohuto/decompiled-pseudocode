/*
 * XREFs of KiCallInterruptServiceRoutine @ 0x140294110
 * Callers:
 *     KiScanInterruptObjectList @ 0x140421050 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140421230 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140421380 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1404214D0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140576200 (KiInvokeInterruptServiceRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140211E70 (KxWaitForSpinLockAndAcquire.c)
 *     KiCheckAndRearmForceIdle @ 0x1402595B0 (KiCheckAndRearmForceIdle.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x1402943C0 (KiIntRedirectQueueRequestOnProcessor.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402FE230 (KeFindFirstSetRightGroupAffinity.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KiAcquireSpinLockInstrumented @ 0x14045A310 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056E8CC (KiReleaseSpinLockInstrumented.c)
 *     KiProcessDeferredDpcWatchdogViolation @ 0x1405794F8 (KiProcessDeferredDpcWatchdogViolation.c)
 *     KiResetForceIdle @ 0x14057A428 (KiResetForceIdle.c)
 */

char __fastcall KiCallInterruptServiceRoutine(__int64 a1, char a2)
{
  __int64 v4; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *IsrDpcStats; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r15
  char v9; // r14
  unsigned __int64 v10; // rax
  unsigned int DpcWatchdogSequenceNumber; // edx
  unsigned __int64 v12; // rcx
  unsigned __int64 v14; // rax
  volatile signed __int32 *v15; // r14
  struct _KPRCB *v16; // r13
  _DWORD *SchedulerAssist; // rcx
  char v18; // al
  volatile signed __int64 *v19; // rcx
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  unsigned int v22; // r8d
  unsigned int FirstSetRightGroupAffinity; // eax
  _DWORD *v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)(*(_DWORD *)(a1 + 88) - 48) <= 0x9F && !KiForceIdleDisabled )
  {
    if ( KiForceIdleState == 4 )
    {
      KiResetForceIdle(1LL, 0LL);
    }
    else if ( (unsigned int)(KiForceIdleState - 1) <= 1 )
    {
      KiCheckAndRearmForceIdle();
    }
  }
  if ( !*(_BYTE *)(a1 + 93) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
    return v9 != 0;
  }
  v4 = *(_QWORD *)(a1 + 272);
  if ( !v4
    || !*(_BYTE *)(v4 + 16)
    || (v22 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number],
        ((unsigned int)(*(_QWORD *)v4 >> (v22 & 0x3F)) & (v22 >> 6 == *(unsigned __int16 *)(v4 + 8))) != 0) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    IsrDpcStats = CurrentPrcb->IsrDpcStats;
    *(_BYTE *)(a1 + 224) = 1;
    CurrentPrcb->IsrDpcStats = (void *)(a1 + 176);
    v7 = __rdtsc();
    *(_QWORD *)(a1 + 184) = v7;
    v8 = v7;
    if ( a2 )
    {
      v15 = *(volatile signed __int32 **)(a1 + 72);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(*(_QWORD *)(a1 + 72));
        v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
      }
      else
      {
        v16 = KeGetCurrentPrcb();
        SchedulerAssist = v16->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v25 = SchedulerAssist[6];
            SchedulerAssist[6] = v25 + 1;
            if ( v25 == -1 )
              KiRemoveSystemWorkPriorityKick(v16);
          }
        }
        if ( _interlockedbittestandset64(v15, 0LL) )
        {
          v24 = v16->SchedulerAssist;
          if ( v24 )
          {
            if ( v16->NestingLevel <= 1u )
            {
              v26 = v24[6] - 1;
              v24[6] = v26;
              if ( !v26 )
                KiRemoveSystemWorkPriorityKick(v16);
            }
          }
          KxWaitForSpinLockAndAcquire(v15);
        }
        v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
      }
      v9 = v18;
      v19 = *(volatile signed __int64 **)(a1 + 72);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v19, retaddr);
      else
        _InterlockedAnd64(v19, 0LL);
      v20 = KeGetCurrentPrcb();
      v21 = v20->SchedulerAssist;
      if ( v21 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v27 = v21[6] - 1;
          v21[6] = v27;
          if ( !v27 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
    }
    v10 = __rdtsc();
    DpcWatchdogSequenceNumber = CurrentPrcb->DpcWatchdogSequenceNumber;
    v12 = v10 - *(_QWORD *)(a1 + 184);
    if ( DpcWatchdogSequenceNumber != *(_DWORD *)(a1 + 232) )
    {
      *(_DWORD *)(a1 + 232) = DpcWatchdogSequenceNumber;
      *(_QWORD *)(a1 + 240) = 0LL;
      *(_QWORD *)(a1 + 248) = 0LL;
      *(_QWORD *)(a1 + 256) = 0LL;
      *(_QWORD *)(a1 + 264) = 0LL;
    }
    *(_QWORD *)(a1 + 176) += v12;
    *(_QWORD *)(a1 + 240) += v12;
    ++*(_QWORD *)(a1 + 192);
    ++*(_QWORD *)(a1 + 248);
    if ( IsrDpcStats != (_QWORD *)1 )
    {
      v14 = v10 - v8;
      if ( *((_BYTE *)IsrDpcStats + 48) )
        IsrDpcStats[1] += v14;
      else
        IsrDpcStats[4] += v14;
    }
    CurrentPrcb->IsrDpcStats = IsrDpcStats;
    *(_BYTE *)(a1 + 224) = 0;
    if ( CurrentPrcb == (struct _KPRCB *)KiDeferredDpcWatchdogActivePrcb && CurrentPrcb->NestingLevel == 2 )
    {
      if ( CurrentPrcb->DpcRoutineActive )
        KiProcessDeferredDpcWatchdogViolation(*(_QWORD *)(a1 + 136));
    }
    return v9 != 0;
  }
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity(*(_QWORD *)(a1 + 272));
  KiIntRedirectQueueRequestOnProcessor(FirstSetRightGroupAffinity);
  return 2;
}
