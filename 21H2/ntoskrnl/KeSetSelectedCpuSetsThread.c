/*
 * XREFs of KeSetSelectedCpuSetsThread @ 0x14051CE20
 * Callers:
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 * Callees:
 *     KiSendSoftwareInterrupt @ 0x140211D5C (KiSendSoftwareInterrupt.c)
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiValidateCpuSetMasks @ 0x140229680 (KiValidateCpuSetMasks.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiGetThreadCpuSetMaskPointer @ 0x14029D008 (KiGetThreadCpuSetMaskPointer.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140327620 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     KiUpdateThreadCpuSets @ 0x1403C642C (KiUpdateThreadCpuSets.c)
 *     KiWriteCpuSetMasks @ 0x1403C64C4 (KiWriteCpuSetMasks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406650 (KiSwapContext.c)
 *     EtwTraceIdealProcessor @ 0x1405A7A74 (EtwTraceIdealProcessor.c)
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
  struct _KPRCB *v24; // rbx
  ULONG_PTR CurrentThread; // rsi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _KPRCB *v29; // rdi
  _DWORD *v30; // rcx
  int v31; // eax
  _DWORD *v32; // rcx
  int v33; // eax
  __int64 NextThread; // rdi
  __int64 v35; // r8
  unsigned int v36; // r8d
  bool v37; // zf
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  struct _KPRCB *v40; // r9
  _DWORD *v41; // r8
  int v42; // eax
  int v43; // [rsp+20h] [rbp-38h] BYREF
  int v44; // [rsp+24h] [rbp-34h] BYREF
  _QWORD *v45[6]; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v46; // [rsp+78h] [rbp+20h] BYREF

  v46 = 0;
  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    v45[0] = 0LL;
    ThreadCpuSetMaskPointer = (unsigned __int64 *)KiGetThreadCpuSetMaskPointer(a1, &v46);
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
    v43 = 0;
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
        KeYieldProcessorEx(&v43, v12, v13, v14);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v20 = *(_DWORD *)(a1 + 588);
    KiWriteCpuSetMasks(ThreadCpuSetMaskPointer, v46, (__int64)a3, a2);
    updated = KiUpdateThreadCpuSets(a1, (__int64)v45);
    v22 = *(_DWORD *)(a1 + 588);
    v23 = updated;
    KiReleaseThreadLockSafe(a1);
    if ( (xmmword_140CFC490 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1350LL, v20, v22);
    ExReleaseSpinLockSharedFromDpcLevel(v11);
    if ( v23 && KeGetPcr()->Prcb.Number != *(_DWORD *)(v23 + 36) )
      KiSendSoftwareInterrupt();
    v24 = KeGetCurrentPrcb();
    KiReadyDeferredReadyList((__int64)v24, v45);
    if ( CurrentIrql >= 2u )
    {
      if ( v24->NextThread && !v24->DpcRoutineActive )
        KiRequestSoftwareInterrupt(v24, 2);
    }
    else
    {
      CurrentThread = (ULONG_PTR)v24->CurrentThread;
      if ( v24->NextThread )
      {
        KiAbProcessContextSwitch((__int64)v24->CurrentThread, 0);
        v29 = KeGetCurrentPrcb();
        v44 = 0;
        while ( 1 )
        {
          v30 = v29->SchedulerAssist;
          if ( v30 )
          {
            if ( v29->NestingLevel <= 1u )
            {
              v31 = v30[6];
              v30[6] = v31 + 1;
              if ( v31 == -1 )
                KiRemoveSystemWorkPriorityKick((__int64)v29);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&v24->PrcbLock, 0LL) )
            break;
          v32 = v29->SchedulerAssist;
          if ( v32 )
          {
            if ( v29->NestingLevel <= 1u )
            {
              v33 = v32[6] - 1;
              v32[6] = v33;
              if ( !v33 )
                KiRemoveSystemWorkPriorityKick((__int64)v29);
            }
          }
          do
            KeYieldProcessorEx(&v44, v26, v27, v28);
          while ( v24->PrcbLock );
        }
        NextThread = (__int64)v24->NextThread;
        v24->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)v24, CurrentThread, 0LL);
        _enable();
        v24->CurrentThread = (_KTHREAD *)NextThread;
        if ( *(_BYTE *)(NextThread + 388) == 1 )
        {
          v35 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
          *(_DWORD *)(NextThread + 132) = v35 + MEMORY[0xFFFFF78000000320];
        }
        *(_BYTE *)(NextThread + 388) = 2;
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread(v24, CurrentThread, v35);
        LOBYTE(v36) = CurrentIrql;
        v37 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v36) == 0;
      }
      else
      {
        v37 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
      }
      if ( !v37 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v38 = KeGetCurrentPrcb();
            v39 = v38->SchedulerAssist;
            v37 = (v39[5] & 0xFFFF0003) == 0;
            v39[5] &= 0xFFFF0003;
            if ( v37 )
              KiRemoveSystemWorkPriorityKick((__int64)v38);
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
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v37 = (v42 & v41[5]) == 0;
          v41[5] &= v42;
          if ( v37 )
            KiRemoveSystemWorkPriorityKick((__int64)v40);
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
