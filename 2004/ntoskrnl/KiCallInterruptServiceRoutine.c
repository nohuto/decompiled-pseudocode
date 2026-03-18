/*
 * XREFs of KiCallInterruptServiceRoutine @ 0x1402DE090
 * Callers:
 *     KiScanInterruptObjectList @ 0x1403F8600 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1403F87E0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403F8930 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1403F8A80 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14051C4BC (KiInvokeInterruptServiceRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1402D7A80 (KxWaitForSpinLockAndAcquire.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x1402DE348 (KiIntRedirectQueueRequestOnProcessor.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402DE3F0 (KeFindFirstSetRightGroupAffinity.c)
 *     KiCheckAndRearmForceIdle @ 0x14035CFEC (KiCheckAndRearmForceIdle.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     KiAcquireSpinLockInstrumented @ 0x14051141C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140511528 (KiReleaseSpinLockInstrumented.c)
 *     KiResetForceIdle @ 0x14051E170 (KiResetForceIdle.c)
 */

char __fastcall KiCallInterruptServiceRoutine(__int64 a1, char a2, __int64 a3)
{
  __int64 v5; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *IsrDpcStats; // r14
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
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
  char v23; // cl
  unsigned int FirstSetRightGroupAffinity; // eax
  unsigned __int64 v25; // rax
  _DWORD *v26; // rcx
  int v27; // eax
  int v28; // eax
  int v29; // eax
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
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
    return v11 != 0;
  }
  v5 = *(_QWORD *)(a1 + 272);
  if ( v5 )
  {
    if ( *(_BYTE *)(v5 + 16) )
    {
      v22 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
      v23 = v22 & 0x3F;
      a3 = v22 >> 6;
      if ( ((unsigned int)(*(_QWORD *)v5 >> v23) & ((_DWORD)a3 == *(unsigned __int16 *)(v5 + 8))) == 0 )
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
  v8 = __rdtsc();
  v9 = (unsigned __int64)HIDWORD(v8) << 32;
  *(_QWORD *)(a1 + 184) = v8;
  v10 = v8;
  if ( a2 )
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
          v27 = SchedulerAssist[6];
          SchedulerAssist[6] = v27 + 1;
          if ( v27 == -1 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
      if ( _interlockedbittestandset64(v16, 0LL) )
      {
        v26 = v17->SchedulerAssist;
        if ( v26 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v28 = v26[6] - 1;
            v26[6] = v28;
            if ( !v28 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
        KxWaitForSpinLockAndAcquire(v16, v9, a3, v5);
      }
    }
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
  if ( a2 )
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
        v29 = v21[6] - 1;
        v21[6] = v29;
        if ( !v29 )
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
    v25 = v12 - v10;
    if ( *((_BYTE *)IsrDpcStats + 48) )
      IsrDpcStats[1] += v25;
    else
      IsrDpcStats[4] += v25;
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
