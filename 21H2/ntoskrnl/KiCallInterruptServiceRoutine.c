/*
 * XREFs of KiCallInterruptServiceRoutine @ 0x140268950
 * Callers:
 *     KiScanInterruptObjectList @ 0x1403FFB90 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1403FFD70 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403FFEC0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140400010 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140521BAC (KiInvokeInterruptServiceRoutine.c)
 * Callees:
 *     KiCheckAndRearmForceIdle @ 0x14024DA3C (KiCheckAndRearmForceIdle.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x140268C08 (KiIntRedirectQueueRequestOnProcessor.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402694D0 (KeFindFirstSetRightGroupAffinity.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140363010 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KiAcquireSpinLockInstrumented @ 0x140516ACC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140516BD8 (KiReleaseSpinLockInstrumented.c)
 *     KiResetForceIdle @ 0x140523860 (KiResetForceIdle.c)
 */

char __fastcall KiCallInterruptServiceRoutine(__int64 a1, char a2)
{
  __int64 v4; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *IsrDpcStats; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  char v9; // bp
  unsigned __int64 v10; // rax
  unsigned int DpcWatchdogSequenceNumber; // edx
  unsigned __int64 v12; // rcx
  volatile signed __int32 *v14; // rbp
  struct _KPRCB *v15; // r13
  _DWORD *SchedulerAssist; // rcx
  volatile signed __int64 *v17; // rcx
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  unsigned int v20; // r8d
  unsigned int FirstSetRightGroupAffinity; // eax
  unsigned __int64 v22; // rax
  _DWORD *v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

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
  if ( v4 )
  {
    if ( *(_BYTE *)(v4 + 16) )
    {
      v20 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
      if ( ((unsigned int)(*(_QWORD *)v4 >> (v20 & 0x3F)) & (v20 >> 6 == *(unsigned __int16 *)(v4 + 8))) == 0 )
      {
        FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity(*(_QWORD *)(a1 + 272));
        KiIntRedirectQueueRequestOnProcessor(FirstSetRightGroupAffinity);
        return 2;
      }
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  IsrDpcStats = CurrentPrcb->IsrDpcStats;
  *(_BYTE *)(a1 + 224) = 1;
  CurrentPrcb->IsrDpcStats = (void *)(a1 + 176);
  v7 = __rdtsc();
  *(_QWORD *)(a1 + 184) = v7;
  v8 = v7;
  if ( a2 )
  {
    v14 = *(volatile signed __int32 **)(a1 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(*(_QWORD *)(a1 + 72));
    }
    else
    {
      v15 = KeGetCurrentPrcb();
      SchedulerAssist = v15->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v24 = SchedulerAssist[6];
          SchedulerAssist[6] = v24 + 1;
          if ( v24 == -1 )
            KiRemoveSystemWorkPriorityKick(v15);
        }
      }
      if ( _interlockedbittestandset64(v14, 0LL) )
      {
        v23 = v15->SchedulerAssist;
        if ( v23 )
        {
          if ( v15->NestingLevel <= 1u )
          {
            v25 = v23[6] - 1;
            v23[6] = v25;
            if ( !v25 )
              KiRemoveSystemWorkPriorityKick(v15);
          }
        }
        KxWaitForSpinLockAndAcquire(v14);
      }
    }
  }
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
  if ( a2 )
  {
    v17 = *(volatile signed __int64 **)(a1 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v17, retaddr);
    else
      _InterlockedAnd64(v17, 0LL);
    v18 = KeGetCurrentPrcb();
    v19 = v18->SchedulerAssist;
    if ( v19 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v26 = v19[6] - 1;
        v19[6] = v26;
        if ( !v26 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
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
  if ( IsrDpcStats != (_QWORD *)1 )
  {
    v22 = v10 - v8;
    if ( *((_BYTE *)IsrDpcStats + 48) )
      IsrDpcStats[1] += v22;
    else
      IsrDpcStats[4] += v22;
  }
  CurrentPrcb->IsrDpcStats = IsrDpcStats;
  *(_BYTE *)(a1 + 224) = 0;
  if ( v9 )
  {
    ++*(_QWORD *)(a1 + 192);
    ++*(_QWORD *)(a1 + 248);
    return v9 != 0;
  }
  return 0;
}
