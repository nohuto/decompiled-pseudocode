/*
 * XREFs of KeSetSelectedCpuSetsThread @ 0x140572A90
 * Callers:
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 * Callees:
 *     KiValidateCpuSetMasks @ 0x14020F30C (KiValidateCpuSetMasks.c)
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiSendSoftwareInterrupt @ 0x14022BA48 (KiSendSoftwareInterrupt.c)
 *     KiGetThreadCpuSetMaskPointer @ 0x140293090 (KiGetThreadCpuSetMaskPointer.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateThreadCpuSets @ 0x1403D3170 (KiUpdateThreadCpuSets.c)
 *     KiWriteCpuSetMasks @ 0x1403D3208 (KiWriteCpuSetMasks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 *     EtwTraceIdealProcessor @ 0x14062DAE4 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeSetSelectedCpuSetsThread(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  __int64 v7; // r10
  unsigned __int8 CurrentIrql; // r12
  _DWORD *SchedulerAssist; // r9
  volatile LONG *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v15; // rcx
  int v16; // eax
  _DWORD *v17; // rcx
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 updated; // rax
  unsigned int v23; // r14d
  __int64 v24; // rbx
  struct _KPRCB *v25; // rbx
  char v26; // si
  _QWORD *v27; // rdi
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
  unsigned int v39; // r8d
  bool v40; // zf
  struct _KPRCB *v41; // rcx
  _DWORD *v42; // rdx
  struct _KPRCB *v43; // r9
  _DWORD *v44; // r8
  int v45; // eax
  int v46; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 *ThreadCpuSetMaskPointer; // [rsp+28h] [rbp-28h] BYREF
  _QWORD *v48; // [rsp+30h] [rbp-20h] BYREF
  int v49[6]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v50; // [rsp+98h] [rbp+48h] BYREF

  v50 = 0;
  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    v48 = 0LL;
    ThreadCpuSetMaskPointer = (unsigned __int64 *)KiGetThreadCpuSetMaskPointer(a1, &v50);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v10 = (volatile LONG *)(v7 + 64);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
    CurrentPrcb = KeGetCurrentPrcb();
    v46 = 0;
    while ( 1 )
    {
      v15 = CurrentPrcb->SchedulerAssist;
      if ( v15 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v16 = v15[6];
          v15[6] = v16 + 1;
          if ( v16 == -1 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v17 = CurrentPrcb->SchedulerAssist;
      if ( v17 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v18 = v17[6] - 1;
          v17[6] = v18;
          if ( !v18 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v46, v11, v12, v13);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v19 = *(_DWORD *)(a1 + 588);
    KiWriteCpuSetMasks(ThreadCpuSetMaskPointer, v50, (__int64)a3, a2);
    updated = KiUpdateThreadCpuSets(a1, (__int64)&v48, v20, v21);
    v23 = *(_DWORD *)(a1 + 588);
    v24 = updated;
    KiReleaseThreadLockSafe(a1);
    if ( (xmmword_140D06910 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1350LL, v19, v23);
    ExReleaseSpinLockSharedFromDpcLevel(v10);
    if ( v24 && KeGetPcr()->Prcb.Number != *(_DWORD *)(v24 + 36) )
      KiSendSoftwareInterrupt();
    v25 = KeGetCurrentPrcb();
    v26 = 0;
    v27 = v48;
    if ( v48 )
    {
      v48 = (_QWORD *)*v48;
      do
      {
        KiDeferredReadySingleThread((__int64)v25, (ULONG_PTR)(v27 - 27), (__int64)&v48);
        v27 = v48;
        ++v26;
        if ( v48 )
          v48 = (_QWORD *)*v48;
        if ( (v26 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(&v25->DeferredDispatchInterrupts.Level);
      }
      while ( v27 );
    }
    KiFlushSoftwareInterruptBatch(&v25->DeferredDispatchInterrupts.Level);
    if ( CurrentIrql >= 2u )
    {
      if ( v25->NextThread && !v25->DpcRoutineActive )
      {
        if ( v25->NestingLevel )
        {
          v25->InterruptRequest = 1;
        }
        else
        {
          v49[0] = 5;
          *(_OWORD *)&v49[1] = 0LL;
          HalpInterruptSendIpi(v49, 0x2Fu);
        }
      }
    }
    else
    {
      CurrentThread = (ULONG_PTR)v25->CurrentThread;
      if ( v25->NextThread )
      {
        KiAbProcessContextSwitch((__int64)v25->CurrentThread, 0);
        v32 = KeGetCurrentPrcb();
        LODWORD(ThreadCpuSetMaskPointer) = 0;
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
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&v25->PrcbLock, 0LL) )
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
            KeYieldProcessorEx(&ThreadCpuSetMaskPointer, v29, v30, v31);
          while ( v25->PrcbLock );
        }
        NextThread = (__int64)v25->NextThread;
        v25->NextThread = 0LL;
        _disable();
        LOBYTE(v31) = 1;
        KiEndThreadCycleAccumulation((__int64)v25, CurrentThread, 0LL, v31);
        _enable();
        v25->CurrentThread = (_KTHREAD *)NextThread;
        if ( *(_BYTE *)(NextThread + 388) == 1 )
        {
          v38 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
          *(_DWORD *)(NextThread + 132) = v38 + MEMORY[0xFFFFF78000000320];
        }
        *(_BYTE *)(NextThread + 388) = 2;
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread(v25, CurrentThread, v38);
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
