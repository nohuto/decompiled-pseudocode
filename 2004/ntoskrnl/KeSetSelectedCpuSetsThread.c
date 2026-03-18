/*
 * XREFs of KeSetSelectedCpuSetsThread @ 0x140517730
 * Callers:
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140224840 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRequestSoftwareInterrupt @ 0x140273DA8 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x1402EB520 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiGetThreadCpuSetMaskPointer @ 0x14030C038 (KiGetThreadCpuSetMaskPointer.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiValidateCpuSetMasks @ 0x14032B988 (KiValidateCpuSetMasks.c)
 *     KiSendSoftwareInterrupt @ 0x14033F4A0 (KiSendSoftwareInterrupt.c)
 *     KiUpdateThreadCpuSets @ 0x1403C312C (KiUpdateThreadCpuSets.c)
 *     KiWriteCpuSetMasks @ 0x1403C31C4 (KiWriteCpuSetMasks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FDDE0 (KiSwapContext.c)
 *     EtwTraceIdealProcessor @ 0x1405A2374 (EtwTraceIdealProcessor.c)
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
  ULONG_PTR CurrentThread; // rsi
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  struct _KPRCB *v31; // rdi
  _DWORD *v32; // rcx
  int v33; // eax
  _DWORD *v34; // rcx
  int v35; // eax
  __int64 NextThread; // rdi
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // r8d
  bool v40; // zf
  struct _KPRCB *v41; // rcx
  _DWORD *v42; // rdx
  struct _KPRCB *v43; // r9
  _DWORD *v44; // r8
  int v45; // eax
  int v46; // [rsp+20h] [rbp-38h] BYREF
  int v47; // [rsp+24h] [rbp-34h] BYREF
  _QWORD *v48[6]; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v49; // [rsp+78h] [rbp+20h] BYREF

  v49 = 0;
  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    v48[0] = 0LL;
    ThreadCpuSetMaskPointer = (unsigned __int64 *)KiGetThreadCpuSetMaskPointer(a1, &v49);
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
    v46 = 0;
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
        KeYieldProcessorEx(&v46, v12, v13, v14);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v20 = *(_DWORD *)(a1 + 588);
    KiWriteCpuSetMasks(ThreadCpuSetMaskPointer, v49, (__int64)a3, a2);
    updated = KiUpdateThreadCpuSets(a1, (__int64)v48);
    v22 = *(_DWORD *)(a1 + 588);
    v23 = updated;
    KiReleaseThreadLockSafe(a1);
    if ( (xmmword_140CFC490 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1350LL, v20, v22);
    ExReleaseSpinLockSharedFromDpcLevel(v11);
    if ( v23 && KeGetPcr()->Prcb.Number != *(_DWORD *)(v23 + 36) )
      KiSendSoftwareInterrupt();
    v26 = KeGetCurrentPrcb();
    KiReadyDeferredReadyList((__int64)v26, v48, v24, v25);
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
        v31 = KeGetCurrentPrcb();
        v47 = 0;
        while ( 1 )
        {
          v32 = v31->SchedulerAssist;
          if ( v32 )
          {
            if ( v31->NestingLevel <= 1u )
            {
              v33 = v32[6];
              v32[6] = v33 + 1;
              if ( v33 == -1 )
                KiRemoveSystemWorkPriorityKick((__int64)v31);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&v26->PrcbLock, 0LL) )
            break;
          v34 = v31->SchedulerAssist;
          if ( v34 )
          {
            if ( v31->NestingLevel <= 1u )
            {
              v35 = v34[6] - 1;
              v34[6] = v35;
              if ( !v35 )
                KiRemoveSystemWorkPriorityKick((__int64)v31);
            }
          }
          do
            KeYieldProcessorEx(&v47, v28, v29, v30);
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
          v37 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
          *(_DWORD *)(NextThread + 132) = v37 + MEMORY[0xFFFFF78000000320];
        }
        *(_BYTE *)(NextThread + 388) = 2;
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread(v26, CurrentThread, v37, v38);
        LOBYTE(v39) = CurrentIrql;
        v40 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v39) == 0;
      }
      else
      {
        v40 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
      }
      if ( !v40 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v41 = KeGetCurrentPrcb();
            v42 = v41->SchedulerAssist;
            v40 = (v42[5] & 0xFFFF0003) == 0;
            v42[5] &= 0xFFFF0003;
            if ( v40 )
              KiRemoveSystemWorkPriorityKick((__int64)v41);
          }
        }
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0LL, 0LL);
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v43 = KeGetCurrentPrcb();
          v44 = v43->SchedulerAssist;
          v45 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v40 = (v45 & v44[5]) == 0;
          v44[5] &= v45;
          if ( v40 )
            KiRemoveSystemWorkPriorityKick((__int64)v43);
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
