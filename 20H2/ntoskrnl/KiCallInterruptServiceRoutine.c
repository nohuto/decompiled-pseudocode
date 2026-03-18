/*
 * XREFs of KiCallInterruptServiceRoutine @ 0x14033E8C0
 * Callers:
 *     KiScanInterruptObjectList @ 0x1403FD6C0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1403FD8A0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403FD9F0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1403FDB40 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14051FE8C (KiInvokeInterruptServiceRoutine.c)
 * Callees:
 *     KiCheckAndRearmForceIdle @ 0x14032DADC (KiCheckAndRearmForceIdle.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x14033EB78 (KiIntRedirectQueueRequestOnProcessor.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x14033EC20 (KeFindFirstSetRightGroupAffinity.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140340590 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     KiAcquireSpinLockInstrumented @ 0x140514D4C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140514E58 (KiReleaseSpinLockInstrumented.c)
 *     KiResetForceIdle @ 0x140521B40 (KiResetForceIdle.c)
 */

char __fastcall KiCallInterruptServiceRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r15
  __int64 v6; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *IsrDpcStats; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r12
  char v11; // bp
  unsigned __int64 v12; // rax
  unsigned int DpcWatchdogSequenceNumber; // edx
  unsigned __int64 v14; // rcx
  volatile signed __int32 *v16; // rbp
  struct _KPRCB *v17; // r13
  _DWORD *SchedulerAssist; // rcx
  volatile signed __int64 *v19; // rcx
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  unsigned int v22; // r8d
  unsigned int FirstSetRightGroupAffinity; // eax
  unsigned __int64 v24; // rax
  _DWORD *v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a2;
  if ( (unsigned int)(*(_DWORD *)(a1 + 88) - 48) <= 0x9F && !KiForceIdleDisabled )
  {
    if ( KiForceIdleState == 4 )
    {
      KiResetForceIdle(1LL, 0LL);
    }
    else if ( (unsigned int)(KiForceIdleState - 1) <= 1 )
    {
      KiCheckAndRearmForceIdle(a1, a2, a3, a4);
    }
  }
  if ( !*(_BYTE *)(a1 + 93) )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
    return v11 != 0;
  }
  v6 = *(_QWORD *)(a1 + 272);
  if ( v6 )
  {
    if ( *(_BYTE *)(v6 + 16) )
    {
      v22 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
      if ( ((unsigned int)(*(_QWORD *)v6 >> (v22 & 0x3F)) & (v22 >> 6 == *(unsigned __int16 *)(v6 + 8))) == 0 )
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
  v9 = __rdtsc();
  *(_QWORD *)(a1 + 184) = v9;
  v10 = v9;
  if ( v4 )
  {
    v16 = *(volatile signed __int32 **)(a1 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(*(_QWORD *)(a1 + 72));
    }
    else
    {
      v17 = KeGetCurrentPrcb();
      SchedulerAssist = v17->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v17->NestingLevel <= 1u )
        {
          v26 = SchedulerAssist[6];
          SchedulerAssist[6] = v26 + 1;
          if ( v26 == -1 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
      if ( _interlockedbittestandset64(v16, 0LL) )
      {
        v25 = v17->SchedulerAssist;
        if ( v25 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v27 = v25[6] - 1;
            v25[6] = v27;
            if ( !v27 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
        KxWaitForSpinLockAndAcquire(v16);
      }
    }
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
  if ( v4 )
  {
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
        v28 = v21[6] - 1;
        v21[6] = v28;
        if ( !v28 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  v12 = __rdtsc();
  DpcWatchdogSequenceNumber = CurrentPrcb->DpcWatchdogSequenceNumber;
  v14 = v12 - *(_QWORD *)(a1 + 184);
  if ( DpcWatchdogSequenceNumber != *(_DWORD *)(a1 + 232) )
  {
    *(_DWORD *)(a1 + 232) = DpcWatchdogSequenceNumber;
    *(_QWORD *)(a1 + 240) = 0LL;
    *(_QWORD *)(a1 + 248) = 0LL;
    *(_QWORD *)(a1 + 256) = 0LL;
    *(_QWORD *)(a1 + 264) = 0LL;
  }
  *(_QWORD *)(a1 + 176) += v14;
  *(_QWORD *)(a1 + 240) += v14;
  if ( IsrDpcStats != (_QWORD *)1 )
  {
    v24 = v12 - v10;
    if ( *((_BYTE *)IsrDpcStats + 48) )
      IsrDpcStats[1] += v24;
    else
      IsrDpcStats[4] += v24;
  }
  CurrentPrcb->IsrDpcStats = IsrDpcStats;
  *(_BYTE *)(a1 + 224) = 0;
  if ( v11 )
  {
    ++*(_QWORD *)(a1 + 192);
    ++*(_QWORD *)(a1 + 248);
    return v11 != 0;
  }
  return 0;
}
