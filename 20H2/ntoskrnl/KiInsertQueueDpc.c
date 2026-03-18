/*
 * XREFs of KiInsertQueueDpc @ 0x14027F690
 * Callers:
 *     PoExecutePerfCheck @ 0x14027D970 (PoExecutePerfCheck.c)
 *     KiUpdateTime @ 0x14027DA20 (KiUpdateTime.c)
 *     KeInsertQueueDpc @ 0x14027F670 (KeInsertQueueDpc.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140280500 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KiTimerWaitTest @ 0x14028BDB0 (KiTimerWaitTest.c)
 *     PpmCheckContinueExecution @ 0x140305FF0 (PpmCheckContinueExecution.c)
 *     ObpDeferObjectDeletion @ 0x14031A0E0 (ObpDeferObjectDeletion.c)
 *     KiGenericCallDpcWorker @ 0x14031A150 (KiGenericCallDpcWorker.c)
 *     KiForegroundTimerCallback @ 0x14031F160 (KiForegroundTimerCallback.c)
 *     KiEntropyQueueDpc @ 0x140322F90 (KiEntropyQueueDpc.c)
 *     HalpMcaQueueDpc @ 0x14032E9B4 (HalpMcaQueueDpc.c)
 *     HalpTimerDpcRoutine @ 0x14032F600 (HalpTimerDpcRoutine.c)
 *     ExpTimeRefreshCallback @ 0x140331A30 (ExpTimeRefreshCallback.c)
 *     KeMaskInterrupt @ 0x140376AB0 (KeMaskInterrupt.c)
 *     PpmPerfQueueAction @ 0x140398C5C (PpmPerfQueueAction.c)
 *     HalpDmaControllerCancelTransfer @ 0x1404CCAAC (HalpDmaControllerCancelTransfer.c)
 *     HalpInsertSecondarySignalList @ 0x1404CF530 (HalpInsertSecondarySignalList.c)
 *     HalpDmaControllerInterruptRoutine @ 0x1404DAF40 (HalpDmaControllerInterruptRoutine.c)
 *     HvlSharedIsr @ 0x1404F0360 (HvlSharedIsr.c)
 *     IoProcessPassiveInterrupts @ 0x14050B524 (IoProcessPassiveInterrupts.c)
 *     KiInsertSecondarySignalList @ 0x140517898 (KiInsertSecondarySignalList.c)
 *     KeUpdatePendingQosRequest @ 0x14051D380 (KeUpdatePendingQosRequest.c)
 *     KeAbCrossThreadDelete @ 0x14051F398 (KeAbCrossThreadDelete.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1405219D0 (KiForceIdleUpdateSchedulerParkState.c)
 *     KiEpfCompletionIsr @ 0x140522680 (KiEpfCompletionIsr.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x1405760C0 (PpmHeteroDispatchHgsInterrupt.c)
 *     ExpSvmFaultRoutine @ 0x1405B78C0 (ExpSvmFaultRoutine.c)
 *     WheaDeferredRecoveryService @ 0x1405BB600 (WheaDeferredRecoveryService.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x1405BB6E0 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheapWorkQueueAddItem @ 0x1405BBD58 (WheapWorkQueueAddItem.c)
 * Callees:
 *     RtlBackoff @ 0x140242080 (RtlBackoff.c)
 *     HalpInterruptSendIpi @ 0x14027FB40 (HalpInterruptSendIpi.c)
 *     KiSetDpcRequestFlag @ 0x1402F7E24 (KiSetDpcRequestFlag.c)
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140340590 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x140514D4C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140514E58 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceDpcEnqueueEvent @ 0x1405A5CF4 (EtwTraceDpcEnqueueEvent.c)
 */

__int64 __fastcall KiInsertQueueDpc(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        volatile signed __int32 *a4,
        unsigned __int8 a5)
{
  ULONG_PTR v5; // r10
  unsigned __int8 v6; // r15
  bool v8; // r12
  __int64 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rsi
  struct _KPRCB *v14; // r13
  _DWORD *v15; // rcx
  unsigned int v16; // r11d
  signed __int64 IsrDpcStats; // rcx
  int v18; // eax
  _QWORD *v19; // rcx
  __int64 v20; // rcx
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  char v23; // al
  __int16 v24; // r10
  __int16 v25; // r9
  unsigned __int16 v26; // dx
  __int64 v27; // rcx
  int *v29; // rax
  struct _KPRCB *v30; // rax
  __int64 v31; // rax
  _DWORD *v32; // rcx
  __int16 v33; // r10
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  bool v39; // zf
  _DWORD *v40; // rdx
  __int64 v41; // rcx
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // rax
  _DWORD *v44; // r9
  int v45; // edx
  unsigned int Number; // [rsp+30h] [rbp-78h]
  int v47; // [rsp+34h] [rbp-74h]
  int v48; // [rsp+38h] [rbp-70h]
  unsigned int v49; // [rsp+3Ch] [rbp-6Ch] BYREF
  __int64 v50; // [rsp+40h] [rbp-68h]
  __int128 v51; // [rsp+48h] [rbp-60h] BYREF
  __int64 v52; // [rsp+58h] [rbp-50h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  char v54; // [rsp+B0h] [rbp+8h]
  __int64 v55; // [rsp+B8h] [rbp+10h]
  __int64 v56; // [rsp+C0h] [rbp+18h]
  volatile signed __int32 *v57; // [rsp+C8h] [rbp+20h]

  v57 = a4;
  v56 = a3;
  v55 = a2;
  v5 = *(unsigned __int16 *)(BugCheckParameter2 + 2);
  v6 = 0;
  v47 = 0;
  v48 = 0;
  v8 = (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0;
  v54 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v50 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 0xFFFC;
    a4 = v57;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (unsigned __int16)v5 >= 0x500u )
  {
    Number = v5 - 1280;
    v11 = KiProcessorBlock[(unsigned int)(v5 - 1280)];
    if ( !v11 )
      KeBugCheckEx(0xC7u, 3uLL, BugCheckParameter2, v5, (unsigned int)KeNumberProcessors_0);
  }
  else
  {
    Number = CurrentPrcb->Number;
    if ( (_WORD)v5 != (_WORD)Number )
      v54 = 1;
    v11 = (__int64)CurrentPrcb;
  }
  if ( (*(_QWORD *)(BugCheckParameter2 + 16) & *(_QWORD *)(v11 + 200)) == 0LL )
    _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 16), *(unsigned __int8 *)(v11 + 209));
  if ( *(_BYTE *)BugCheckParameter2 == 26 && *(_BYTE *)(v11 + 12584) )
    v12 = 12520LL;
  else
    v12 = 12480LL;
  v13 = v11 + v12;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v13 + 16);
    a3 = v56;
    a2 = v55;
    a4 = v57;
  }
  else
  {
    v14 = KeGetCurrentPrcb();
    v15 = v14->SchedulerAssist;
    if ( v15 )
    {
      if ( v14->NestingLevel <= 1u )
      {
        v35 = v15[6];
        v15[6] = v35 + 1;
        if ( v35 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(v14);
          a3 = v56;
          a2 = v55;
          a4 = v57;
        }
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 16), 0LL) )
    {
      v32 = v14->SchedulerAssist;
      if ( v32 )
      {
        if ( v14->NestingLevel <= 1u )
        {
          v36 = v32[6] - 1;
          v32[6] = v36;
          if ( !v36 )
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
      KxWaitForSpinLockAndAcquire(v13 + 16);
      a3 = v56;
      a2 = v55;
      a4 = v57;
    }
    LOBYTE(CurrentIrql) = v50;
  }
  v16 = Number;
  IsrDpcStats = (signed __int64)CurrentPrcb->IsrDpcStats;
  if ( Number != CurrentPrcb->Number )
    IsrDpcStats = 1LL;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 56), IsrDpcStats, 0LL) )
  {
    v18 = *(_DWORD *)(v13 + 24);
    ++*(_DWORD *)(v13 + 28);
    *(_DWORD *)(v13 + 24) = v18 + 1;
    *(_QWORD *)(BugCheckParameter2 + 40) = a2;
    *(_QWORD *)(BugCheckParameter2 + 48) = a3;
    if ( v8 )
    {
      v48 = *(_DWORD *)(v13 + 24);
      v47 = *(_DWORD *)(v13 + 28);
    }
    v19 = (_QWORD *)(BugCheckParameter2 + 8);
    v6 = 1;
    if ( *(_BYTE *)(BugCheckParameter2 + 1) == 2 )
    {
      v31 = *(_QWORD *)v13;
      if ( !*(_QWORD *)v13 )
        *(_QWORD *)(v13 + 8) = v19;
      *v19 = v31;
      *(_QWORD *)v13 = v19;
    }
    else
    {
      *v19 = 0LL;
      **(_QWORD **)(v13 + 8) = v19;
      *(_QWORD *)(v13 + 8) = v19;
    }
    if ( v54 )
      *(_WORD *)(BugCheckParameter2 + 2) = Number;
    v20 = *(_QWORD *)(v11 + 33976);
    if ( v20 && v13 == v11 + 12480 )
      ++*(_DWORD *)(v20 + 28);
  }
  if ( a4 )
    _InterlockedAnd(a4, ~((a5 << 24) | 0x80));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(v13 + 16, retaddr);
    v16 = Number;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 16), 0LL);
  }
  v21 = KeGetCurrentPrcb();
  v22 = v21->SchedulerAssist;
  if ( v22 )
  {
    if ( v21->NestingLevel <= 1u )
    {
      v37 = v22[6] - 1;
      v22[6] = v37;
      if ( !v37 )
      {
        KiRemoveSystemWorkPriorityKick(v21);
        v16 = Number;
      }
    }
  }
  if ( v6 )
  {
    if ( v8 )
    {
      EtwTraceDpcEnqueueEvent(
        -203591049
      * (KiWaitNever ^ __ROR8__(
                         *(_QWORD *)(BugCheckParameter2 + 24) ^ _byteswap_uint64(BugCheckParameter2 ^ KiWaitAlways),
                         KiWaitNever)),
        *(_QWORD *)(BugCheckParameter2 + 24),
        v48,
        v47,
        v16,
        *(_BYTE *)(BugCheckParameter2 + 1));
      v16 = Number;
    }
    if ( v13 == v11 + 12520 )
    {
      if ( (KiSetDpcRequestFlag(v11 + 12590, 2LL) & 0x2F) != 0 )
        goto LABEL_44;
      v16 = Number;
      v24 = 4;
      goto LABEL_37;
    }
    if ( *(_DWORD *)(v13 + 24) < *(_DWORD *)(v11 + 12568) )
    {
      v23 = *(_BYTE *)(BugCheckParameter2 + 1);
      if ( CurrentPrcb == (struct _KPRCB *)v11 )
      {
        if ( !v23 && *(_DWORD *)(v11 + 12572) >= *(_DWORD *)(v11 + 12576) )
          goto LABEL_58;
      }
      else if ( (unsigned __int8)(v23 - 2) > 1u )
      {
LABEL_58:
        if ( (KiSetDpcRequestFlag(v11 + 12588, 16LL) & 0x2F) != 0
          || (*(_QWORD *)(*(_QWORD *)(v11 + 192) + 64LL) & *(_QWORD *)(v11 + 200)) == 0LL )
        {
          goto LABEL_44;
        }
        v16 = Number;
      }
    }
    v24 = 2;
LABEL_37:
    v25 = 47;
    if ( (struct _KPRCB *)v11 == CurrentPrcb )
    {
      v25 = 41;
      v24 |= 0x20u;
    }
    v49 = 0;
    _m_prefetchw((const void *)(v11 + 12588));
    v26 = *(_WORD *)(v11 + 12588);
    v27 = v26;
    BYTE1(v27) = HIBYTE(v24) | HIBYTE(v26);
    if ( v26 != _InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 12588), v24 | v26, v26) )
    {
      do
      {
        RtlBackoff(&v49);
        _m_prefetchw((const void *)(v11 + 12588));
        v26 = *(_WORD *)(v11 + 12588);
        v27 = v26;
        BYTE1(v27) = HIBYTE(v33) | HIBYTE(v26);
      }
      while ( v26 != _InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 12588), v33 | v26, v26) );
    }
    if ( (v26 & (unsigned __int16)v25) == 0 )
    {
      if ( (struct _KPRCB *)v11 == CurrentPrcb )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          LOBYTE(v27) = 2;
          HalRequestSoftwareInterrupt(v27);
        }
      }
      else if ( *(_QWORD *)(v11 + 8) != *(_QWORD *)(v11 + 24) || *(_BYTE *)(v11 + 7) )
      {
        if ( (KiVelocityFlags & 2) != 0 )
        {
          v29 = *(int **)(v11 + 33976);
          if ( v29 )
          {
            if ( CurrentPrcb->SchedulerAssist )
            {
              if ( KiVpThreadSystemWorkPriority >= 8 )
              {
                v38 = *v29;
                if ( (v38 & 0x100000) != 0
                  || (v38 & 0x40000) != 0 && (unsigned __int8)v38 < KiVpThreadSystemWorkPriority )
                {
                  v39 = HvlpVirtualProcessorsIdentityMapped == 0;
                  v40 = CurrentPrcb->SchedulerAssist;
                  v40[3] = 2;
                  v41 = *(unsigned int *)(v11 + 36);
                  if ( v39 )
                    LODWORD(v41) = (unsigned __int8)byte_140D006C1[2 * (unsigned int)v41] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v41] << 6);
                  v40[2] = v41;
                  __writemsr(0x400000C2u, (unsigned int)v41);
                }
              }
            }
          }
        }
        v30 = KeGetCurrentPrcb();
        v51 = 0LL;
        LODWORD(v51) = 6;
        ++v30->SynchCounters.IpiSendSoftwareInterruptCount;
        v52 = 0LL;
        DWORD2(v51) = v16;
        HalpInterruptSendIpi(&v51, 47LL);
      }
    }
  }
LABEL_44:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v42 = KeGetCurrentIrql();
      if ( v42 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v42 >= 2u )
      {
        v43 = KeGetCurrentPrcb();
        v44 = v43->SchedulerAssist;
        v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
        v39 = (v45 & v44[5]) == 0;
        v44[5] &= v45;
        if ( v39 )
          KiRemoveSystemWorkPriorityKick(v43);
      }
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return v6;
}
