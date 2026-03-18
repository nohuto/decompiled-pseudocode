/*
 * XREFs of KiInsertQueueDpc @ 0x14026DC70
 * Callers:
 *     KiTimerWaitTest @ 0x1402450F0 (KiTimerWaitTest.c)
 *     KeInsertQueueDpc @ 0x14026DC50 (KeInsertQueueDpc.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14026EAE0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KiUpdateTime @ 0x140275520 (KiUpdateTime.c)
 *     PoExecutePerfCheck @ 0x140275B90 (PoExecutePerfCheck.c)
 *     PpmCheckContinueExecution @ 0x140279460 (PpmCheckContinueExecution.c)
 *     ObpDeferObjectDeletion @ 0x14030B7E0 (ObpDeferObjectDeletion.c)
 *     KiGenericCallDpcWorker @ 0x14030B850 (KiGenericCallDpcWorker.c)
 *     KiForegroundTimerCallback @ 0x140310D70 (KiForegroundTimerCallback.c)
 *     KiEntropyQueueDpc @ 0x1403146F0 (KiEntropyQueueDpc.c)
 *     HalpMcaQueueDpc @ 0x1403202D4 (HalpMcaQueueDpc.c)
 *     HalpTimerDpcRoutine @ 0x140320E50 (HalpTimerDpcRoutine.c)
 *     ExpTimeRefreshCallback @ 0x140323190 (ExpTimeRefreshCallback.c)
 *     KeMaskInterrupt @ 0x140373D10 (KeMaskInterrupt.c)
 *     PpmPerfQueueAction @ 0x140395BCC (PpmPerfQueueAction.c)
 *     HalpDmaControllerCancelTransfer @ 0x1404C909C (HalpDmaControllerCancelTransfer.c)
 *     HalpInsertSecondarySignalList @ 0x1404CBB20 (HalpInsertSecondarySignalList.c)
 *     HalpDmaControllerInterruptRoutine @ 0x1404D74A0 (HalpDmaControllerInterruptRoutine.c)
 *     HvlSharedIsr @ 0x1404EC4A0 (HvlSharedIsr.c)
 *     IoProcessPassiveInterrupts @ 0x1405075A4 (IoProcessPassiveInterrupts.c)
 *     KiInsertSecondarySignalList @ 0x140513918 (KiInsertSecondarySignalList.c)
 *     KeUpdatePendingQosRequest @ 0x140519360 (KeUpdatePendingQosRequest.c)
 *     KeAbCrossThreadDelete @ 0x14051B378 (KeAbCrossThreadDelete.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14051D9B0 (KiForceIdleUpdateSchedulerParkState.c)
 *     KiEpfCompletionIsr @ 0x14051E660 (KiEpfCompletionIsr.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x140572040 (PpmHeteroDispatchHgsInterrupt.c)
 *     ExpSvmFaultRoutine @ 0x1405B3640 (ExpSvmFaultRoutine.c)
 *     WheaDeferredRecoveryService @ 0x1405B7380 (WheaDeferredRecoveryService.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x1405B7460 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheapWorkQueueAddItem @ 0x1405B7AD8 (WheapWorkQueueAddItem.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x14026E120 (HalpInterruptSendIpi.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402E47D0 (KxWaitForSpinLockAndAcquire.c)
 *     KiSetDpcRequestFlag @ 0x1403027F4 (KiSetDpcRequestFlag.c)
 *     HalRequestSoftwareInterrupt @ 0x140359A80 (HalRequestSoftwareInterrupt.c)
 *     RtlBackoff @ 0x14035A2A0 (RtlBackoff.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x140510DCC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140510ED8 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceDpcEnqueueEvent @ 0x1405A1B64 (EtwTraceDpcEnqueueEvent.c)
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
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int16 v28; // tt
  int *v30; // rax
  struct _KPRCB *v31; // rax
  __int64 v32; // rax
  _DWORD *v33; // rcx
  __int16 v34; // r10
  __int16 v35; // tt
  _DWORD *SchedulerAssist; // r9
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  bool v41; // zf
  _DWORD *v42; // rdx
  __int64 v43; // rcx
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // rax
  _DWORD *v46; // r9
  int v47; // edx
  unsigned int Number; // [rsp+30h] [rbp-78h]
  int v49; // [rsp+34h] [rbp-74h]
  int v50; // [rsp+38h] [rbp-70h]
  int v51; // [rsp+3Ch] [rbp-6Ch] BYREF
  __int64 v52; // [rsp+40h] [rbp-68h]
  __int128 v53; // [rsp+48h] [rbp-60h] BYREF
  __int64 v54; // [rsp+58h] [rbp-50h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  char v56; // [rsp+B0h] [rbp+8h]
  __int64 v57; // [rsp+B8h] [rbp+10h]
  __int64 v58; // [rsp+C0h] [rbp+18h]
  volatile signed __int32 *v59; // [rsp+C8h] [rbp+20h]

  v59 = a4;
  v58 = a3;
  v57 = a2;
  v5 = *(unsigned __int16 *)(BugCheckParameter2 + 2);
  v6 = 0;
  v49 = 0;
  v50 = 0;
  v8 = (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0;
  v56 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v52 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 0xFFFC;
    a4 = v59;
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
      v56 = 1;
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
    KiAcquireSpinLockInstrumented(v13 + 16, a2, a3);
    a3 = v58;
    a2 = v57;
    a4 = v59;
  }
  else
  {
    v14 = KeGetCurrentPrcb();
    v15 = v14->SchedulerAssist;
    if ( v15 )
    {
      if ( v14->NestingLevel <= 1u )
      {
        v37 = v15[6];
        v15[6] = v37 + 1;
        if ( v37 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(v14);
          a3 = v58;
          a2 = v57;
          a4 = v59;
        }
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 16), 0LL) )
    {
      v33 = v14->SchedulerAssist;
      if ( v33 )
      {
        if ( v14->NestingLevel <= 1u )
        {
          v38 = v33[6] - 1;
          v33[6] = v38;
          if ( !v38 )
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
      KxWaitForSpinLockAndAcquire(v13 + 16, a2, a3);
      a3 = v58;
      a2 = v57;
      a4 = v59;
    }
    LOBYTE(CurrentIrql) = v52;
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
      v50 = *(_DWORD *)(v13 + 24);
      v49 = *(_DWORD *)(v13 + 28);
    }
    v19 = (_QWORD *)(BugCheckParameter2 + 8);
    v6 = 1;
    if ( *(_BYTE *)(BugCheckParameter2 + 1) == 2 )
    {
      v32 = *(_QWORD *)v13;
      if ( !*(_QWORD *)v13 )
        *(_QWORD *)(v13 + 8) = v19;
      *v19 = v32;
      *(_QWORD *)v13 = v19;
    }
    else
    {
      *v19 = 0LL;
      **(_QWORD **)(v13 + 8) = v19;
      *(_QWORD *)(v13 + 8) = v19;
    }
    if ( v56 )
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
      v39 = v22[6] - 1;
      v22[6] = v39;
      if ( !v39 )
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
        v50,
        v49,
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
    v25 = 47LL;
    if ( (struct _KPRCB *)v11 == CurrentPrcb )
    {
      v25 = 41LL;
      v24 |= 0x20u;
    }
    v51 = 0;
    _m_prefetchw((const void *)(v11 + 12588));
    v26 = *(unsigned __int16 *)(v11 + 12588);
    v27 = (unsigned __int16)v26;
    BYTE1(v27) = HIBYTE(v24) | BYTE1(v26);
    v28 = *(_WORD *)(v11 + 12588);
    if ( v28 != _InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 12588), v24 | v26, v26) )
    {
      do
      {
        RtlBackoff(&v51, v26, a3, v25);
        _m_prefetchw((const void *)(v11 + 12588));
        v26 = *(unsigned __int16 *)(v11 + 12588);
        v27 = (unsigned __int16)v26;
        BYTE1(v27) = HIBYTE(v34) | BYTE1(v26);
        v35 = *(_WORD *)(v11 + 12588);
      }
      while ( v35 != _InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 12588), v34 | v26, v26) );
    }
    if ( ((unsigned __int16)v26 & (unsigned __int16)v25) == 0 )
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
          v30 = *(int **)(v11 + 33976);
          if ( v30 )
          {
            if ( CurrentPrcb->SchedulerAssist )
            {
              if ( KiVpThreadSystemWorkPriority >= 8 )
              {
                v40 = *v30;
                if ( (v40 & 0x100000) != 0
                  || (v40 & 0x40000) != 0 && (unsigned __int8)v40 < KiVpThreadSystemWorkPriority )
                {
                  v41 = HvlpVirtualProcessorsIdentityMapped == 0;
                  v42 = CurrentPrcb->SchedulerAssist;
                  v42[3] = 2;
                  v43 = *(unsigned int *)(v11 + 36);
                  if ( v41 )
                    LODWORD(v43) = (unsigned __int8)byte_140D00681[2 * (unsigned int)v43] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v43] << 6);
                  v42[2] = v43;
                  __writemsr(0x400000C2u, (unsigned int)v43);
                }
              }
            }
          }
        }
        v31 = KeGetCurrentPrcb();
        v53 = 0LL;
        LODWORD(v53) = 6;
        ++v31->SynchCounters.IpiSendSoftwareInterruptCount;
        v54 = 0LL;
        DWORD2(v53) = v16;
        HalpInterruptSendIpi(&v53, 47LL);
      }
    }
  }
LABEL_44:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v44 = KeGetCurrentIrql();
      if ( v44 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v44 >= 2u )
      {
        v45 = KeGetCurrentPrcb();
        v46 = v45->SchedulerAssist;
        v47 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
        v41 = (v47 & v46[5]) == 0;
        v46[5] &= v47;
        if ( v41 )
          KiRemoveSystemWorkPriorityKick(v45);
      }
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return v6;
}
