/*
 * XREFs of KiInsertQueueDpc @ 0x1402C4660
 * Callers:
 *     ObpDeferObjectDeletion @ 0x14023A834 (ObpDeferObjectDeletion.c)
 *     KiGenericCallDpcWorker @ 0x14023AA60 (KiGenericCallDpcWorker.c)
 *     KiForegroundTimerCallback @ 0x14023F010 (KiForegroundTimerCallback.c)
 *     KiEntropyQueueDpc @ 0x1402426B0 (KiEntropyQueueDpc.c)
 *     HalpMcaQueueDpc @ 0x14024EA78 (HalpMcaQueueDpc.c)
 *     HalpTimerDpcRoutine @ 0x14024FA40 (HalpTimerDpcRoutine.c)
 *     ExpTimeRefreshCallback @ 0x140251F70 (ExpTimeRefreshCallback.c)
 *     KeInsertQueueDpc @ 0x1402C4640 (KeInsertQueueDpc.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1402C54D0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KiUpdateTime @ 0x1402CC030 (KiUpdateTime.c)
 *     PoExecutePerfCheck @ 0x1402CC6A0 (PoExecutePerfCheck.c)
 *     PpmCheckContinueExecution @ 0x1402D0030 (PpmCheckContinueExecution.c)
 *     KiTimerWaitTest @ 0x1402EC640 (KiTimerWaitTest.c)
 *     KeMaskInterrupt @ 0x140376A90 (KeMaskInterrupt.c)
 *     PpmPerfQueueAction @ 0x14039921C (PpmPerfQueueAction.c)
 *     HalpDmaControllerCancelTransfer @ 0x1404CE6BC (HalpDmaControllerCancelTransfer.c)
 *     HalpInsertSecondarySignalList @ 0x1404D1140 (HalpInsertSecondarySignalList.c)
 *     HalpDmaControllerInterruptRoutine @ 0x1404DCB90 (HalpDmaControllerInterruptRoutine.c)
 *     HvlSharedIsr @ 0x1404F1E80 (HvlSharedIsr.c)
 *     IoProcessPassiveInterrupts @ 0x14050D294 (IoProcessPassiveInterrupts.c)
 *     KiInsertSecondarySignalList @ 0x140519618 (KiInsertSecondarySignalList.c)
 *     KeUpdatePendingQosRequest @ 0x14051F0A0 (KeUpdatePendingQosRequest.c)
 *     KeAbCrossThreadDelete @ 0x1405210B8 (KeAbCrossThreadDelete.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1405236F0 (KiForceIdleUpdateSchedulerParkState.c)
 *     KiEpfCompletionIsr @ 0x1405243A0 (KiEpfCompletionIsr.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x140577D10 (PpmHeteroDispatchHgsInterrupt.c)
 *     ExpSvmFaultRoutine @ 0x1405B9520 (ExpSvmFaultRoutine.c)
 *     WheaDeferredRecoveryService @ 0x1405BD280 (WheaDeferredRecoveryService.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x1405BD360 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheapWorkQueueAddItem @ 0x1405BD9D8 (WheapWorkQueueAddItem.c)
 * Callees:
 *     KiSetDpcRequestFlag @ 0x140211CF8 (KiSetDpcRequestFlag.c)
 *     HalRequestSoftwareInterrupt @ 0x140211E00 (HalRequestSoftwareInterrupt.c)
 *     HalpInterruptSendIpi @ 0x1402C4B10 (HalpInterruptSendIpi.c)
 *     RtlBackoff @ 0x1402FDE50 (RtlBackoff.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140363010 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x140516ACC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140516BD8 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceDpcEnqueueEvent @ 0x1405A7954 (EtwTraceDpcEnqueueEvent.c)
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
  signed __int16 v26; // dx
  int *v28; // rax
  struct _KPRCB *v29; // rax
  __int64 v30; // rax
  _DWORD *v31; // rcx
  __int16 v32; // r10
  _DWORD *SchedulerAssist; // r9
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  bool v38; // zf
  _DWORD *v39; // rdx
  __int64 v40; // rcx
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // rax
  _DWORD *v43; // r9
  int v44; // edx
  unsigned int Number; // [rsp+30h] [rbp-78h]
  int v46; // [rsp+34h] [rbp-74h]
  int v47; // [rsp+38h] [rbp-70h]
  int v48; // [rsp+3Ch] [rbp-6Ch] BYREF
  __int64 v49; // [rsp+40h] [rbp-68h]
  __int128 v50; // [rsp+48h] [rbp-60h] BYREF
  __int64 v51; // [rsp+58h] [rbp-50h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  char v53; // [rsp+B0h] [rbp+8h]
  __int64 v54; // [rsp+B8h] [rbp+10h]
  __int64 v55; // [rsp+C0h] [rbp+18h]
  volatile signed __int32 *v56; // [rsp+C8h] [rbp+20h]

  v56 = a4;
  v55 = a3;
  v54 = a2;
  v5 = *(unsigned __int16 *)(BugCheckParameter2 + 2);
  v6 = 0;
  v46 = 0;
  v47 = 0;
  v8 = (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0;
  v53 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v49 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 0xFFFC;
    a4 = v56;
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
      v53 = 1;
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
    a3 = v55;
    a2 = v54;
    a4 = v56;
  }
  else
  {
    v14 = KeGetCurrentPrcb();
    v15 = v14->SchedulerAssist;
    if ( v15 )
    {
      if ( v14->NestingLevel <= 1u )
      {
        v34 = v15[6];
        v15[6] = v34 + 1;
        if ( v34 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(v14);
          a3 = v55;
          a2 = v54;
          a4 = v56;
        }
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 16), 0LL) )
    {
      v31 = v14->SchedulerAssist;
      if ( v31 )
      {
        if ( v14->NestingLevel <= 1u )
        {
          v35 = v31[6] - 1;
          v31[6] = v35;
          if ( !v35 )
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
      KxWaitForSpinLockAndAcquire(v13 + 16);
      a3 = v55;
      a2 = v54;
      a4 = v56;
    }
    LOBYTE(CurrentIrql) = v49;
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
      v47 = *(_DWORD *)(v13 + 24);
      v46 = *(_DWORD *)(v13 + 28);
    }
    v19 = (_QWORD *)(BugCheckParameter2 + 8);
    v6 = 1;
    if ( *(_BYTE *)(BugCheckParameter2 + 1) == 2 )
    {
      v30 = *(_QWORD *)v13;
      if ( !*(_QWORD *)v13 )
        *(_QWORD *)(v13 + 8) = v19;
      *v19 = v30;
      *(_QWORD *)v13 = v19;
    }
    else
    {
      *v19 = 0LL;
      **(_QWORD **)(v13 + 8) = v19;
      *(_QWORD *)(v13 + 8) = v19;
    }
    if ( v53 )
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
      v36 = v22[6] - 1;
      v22[6] = v36;
      if ( !v36 )
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
        v47,
        v46,
        v16,
        *(_BYTE *)(BugCheckParameter2 + 1));
      v16 = Number;
    }
    if ( v13 == v11 + 12520 )
    {
      if ( (KiSetDpcRequestFlag((unsigned __int16 *)(v11 + 12590), 2) & 0x2F) != 0 )
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
        if ( (KiSetDpcRequestFlag((unsigned __int16 *)(v11 + 12588), 16) & 0x2F) != 0
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
    v48 = 0;
    _m_prefetchw((const void *)(v11 + 12588));
    v26 = *(_WORD *)(v11 + 12588);
    if ( v26 != _InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 12588), v24 | v26, v26) )
    {
      do
      {
        RtlBackoff(&v48);
        _m_prefetchw((const void *)(v11 + 12588));
        v26 = *(_WORD *)(v11 + 12588);
      }
      while ( v26 != _InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 12588), v32 | v26, v26) );
    }
    if ( ((unsigned __int16)v26 & (unsigned __int16)v25) == 0 )
    {
      if ( (struct _KPRCB *)v11 == CurrentPrcb )
      {
        if ( CurrentPrcb->NestingLevel )
          CurrentPrcb->InterruptRequest = 1;
        else
          HalRequestSoftwareInterrupt(2);
      }
      else if ( *(_QWORD *)(v11 + 8) != *(_QWORD *)(v11 + 24) || *(_BYTE *)(v11 + 7) )
      {
        if ( (KiVelocityFlags & 2) != 0 )
        {
          v28 = *(int **)(v11 + 33976);
          if ( v28 )
          {
            if ( CurrentPrcb->SchedulerAssist )
            {
              if ( KiVpThreadSystemWorkPriority >= 8 )
              {
                v37 = *v28;
                if ( (v37 & 0x100000) != 0
                  || (v37 & 0x40000) != 0 && (unsigned __int8)v37 < KiVpThreadSystemWorkPriority )
                {
                  v38 = HvlpVirtualProcessorsIdentityMapped == 0;
                  v39 = CurrentPrcb->SchedulerAssist;
                  v39[3] = 2;
                  v40 = *(unsigned int *)(v11 + 36);
                  if ( v38 )
                    LODWORD(v40) = (unsigned __int8)byte_140D006C1[2 * (unsigned int)v40] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v40] << 6);
                  v39[2] = v40;
                  __writemsr(0x400000C2u, (unsigned int)v40);
                }
              }
            }
          }
        }
        v29 = KeGetCurrentPrcb();
        v50 = 0LL;
        LODWORD(v50) = 6;
        ++v29->SynchCounters.IpiSendSoftwareInterruptCount;
        v51 = 0LL;
        DWORD2(v50) = v16;
        HalpInterruptSendIpi(&v50, 47LL);
      }
    }
  }
LABEL_44:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v41 = KeGetCurrentIrql();
      if ( v41 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v41 >= 2u )
      {
        v42 = KeGetCurrentPrcb();
        v43 = v42->SchedulerAssist;
        v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
        v38 = (v44 & v43[5]) == 0;
        v43[5] &= v44;
        if ( v38 )
          KiRemoveSystemWorkPriorityKick(v42);
      }
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return v6;
}
