/*
 * XREFs of KeSetSelectedCpuSetsThread @ 0x1405170E0
 * Callers:
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 * Callees:
 *     KiValidateCpuSetMasks @ 0x140202930 (KiValidateCpuSetMasks.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14027D890 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiSendSoftwareInterrupt @ 0x140302858 (KiSendSoftwareInterrupt.c)
 *     KiEndThreadCycleAccumulation @ 0x140330660 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiGetThreadCpuSetMaskPointer @ 0x14033785C (KiGetThreadCpuSetMaskPointer.c)
 *     KiRequestSoftwareInterrupt @ 0x140359A48 (KiRequestSoftwareInterrupt.c)
 *     KiUpdateThreadCpuSets @ 0x1403C226C (KiUpdateThreadCpuSets.c)
 *     KiWriteCpuSetMasks @ 0x1403C2304 (KiWriteCpuSetMasks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
 *     EtwTraceIdealProcessor @ 0x1405A1C84 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeSetSelectedCpuSetsThread(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  __int64 v7; // r10
  unsigned __int64 *ThreadCpuSetMaskPointer; // r13
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  volatile LONG *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v16; // rcx
  int v17; // eax
  _DWORD *v18; // rcx
  int v19; // eax
  unsigned int v20; // esi
  __int64 updated; // rax
  unsigned int v22; // ebp
  __int64 v23; // rbx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _KPRCB *v26; // rbx
  _DWORD *v27; // r9
  ULONG_PTR CurrentThread; // rsi
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  struct _KPRCB *v32; // rdi
  _DWORD *v33; // rcx
  int v34; // eax
  _DWORD *v35; // rcx
  int v36; // eax
  __int64 NextThread; // rdi
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned int v40; // r8d
  bool v41; // zf
  struct _KPRCB *v42; // rcx
  _DWORD *v43; // rdx
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  int v47; // [rsp+20h] [rbp-38h] BYREF
  int v48; // [rsp+24h] [rbp-34h] BYREF
  _QWORD v49[6]; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v50; // [rsp+78h] [rbp+20h] BYREF

  v50 = 0;
  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    v49[0] = 0LL;
    ThreadCpuSetMaskPointer = (unsigned __int64 *)KiGetThreadCpuSetMaskPointer(a1, &v50);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v11 = (volatile LONG *)(v7 + 64);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
    CurrentPrcb = KeGetCurrentPrcb();
    v47 = 0;
    while ( 1 )
    {
      v16 = CurrentPrcb->SchedulerAssist;
      if ( v16 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v17 = v16[6];
          v16[6] = v17 + 1;
          if ( v17 == -1 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v18 = CurrentPrcb->SchedulerAssist;
      if ( v18 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v19 = v18[6] - 1;
          v18[6] = v19;
          if ( !v19 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v47, v12, v13, v14);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v20 = *(_DWORD *)(a1 + 588);
    KiWriteCpuSetMasks(ThreadCpuSetMaskPointer, v50, (__int64)a3, a2);
    updated = KiUpdateThreadCpuSets(a1, (__int64)v49);
    v22 = *(_DWORD *)(a1 + 588);
    v23 = updated;
    KiReleaseThreadLockSafe(a1);
    if ( (xmmword_140CFC490 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1350LL, v20, v22);
    ExReleaseSpinLockSharedFromDpcLevel(v11);
    if ( v23 && KeGetPcr()->Prcb.Number != *(_DWORD *)(v23 + 36) )
      KiSendSoftwareInterrupt();
    v26 = KeGetCurrentPrcb();
    KiReadyDeferredReadyList((__int64)v26, v49, v24, v25);
    if ( CurrentIrql >= 2u )
    {
      if ( v26->NextThread && !v26->DpcRoutineActive )
        KiRequestSoftwareInterrupt(v26, 2);
    }
    else
    {
      CurrentThread = (ULONG_PTR)v26->CurrentThread;
      if ( v26->NextThread )
      {
        KiAbProcessContextSwitch((__int64)v26->CurrentThread, 0);
        v32 = KeGetCurrentPrcb();
        v48 = 0;
        while ( 1 )
        {
          v33 = v32->SchedulerAssist;
          if ( v33 )
          {
            if ( v32->NestingLevel <= 1u )
            {
              v34 = v33[6];
              v33[6] = v34 + 1;
              if ( v34 == -1 )
                KiRemoveSystemWorkPriorityKick((__int64)v32);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&v26->PrcbLock, 0LL) )
            break;
          v35 = v32->SchedulerAssist;
          if ( v35 )
          {
            if ( v32->NestingLevel <= 1u )
            {
              v36 = v35[6] - 1;
              v35[6] = v36;
              if ( !v36 )
                KiRemoveSystemWorkPriorityKick((__int64)v32);
            }
          }
          do
            KeYieldProcessorEx(&v48, v29, v30, v31);
          while ( v26->PrcbLock );
        }
        NextThread = (__int64)v26->NextThread;
        v26->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)v26, CurrentThread, 0LL);
        _enable();
        v26->CurrentThread = (_KTHREAD *)NextThread;
        if ( *(_BYTE *)(NextThread + 388) == 1 )
        {
          v38 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
          *(_DWORD *)(NextThread + 132) = v38 + MEMORY[0xFFFFF78000000320];
        }
        *(_BYTE *)(NextThread + 388) = 2;
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread((__int64)v26, CurrentThread, v38, v39);
        LOBYTE(v40) = CurrentIrql;
        v41 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v40) == 0;
      }
      else
      {
        v41 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
      }
      if ( !v41 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v42 = KeGetCurrentPrcb();
            v43 = v42->SchedulerAssist;
            v41 = (v43[5] & 0xFFFF0003) == 0;
            v43[5] &= 0xFFFF0003;
            if ( v41 )
              KiRemoveSystemWorkPriorityKick((__int64)v42);
          }
        }
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0LL, 0LL, v27);
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v44 = KeGetCurrentPrcb();
          v45 = v44->SchedulerAssist;
          v46 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v41 = (v46 & v45[5]) == 0;
          v45[5] &= v46;
          if ( v41 )
            KiRemoveSystemWorkPriorityKick((__int64)v44);
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
