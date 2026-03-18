/*
 * XREFs of KeRecomputeCpuSetAffinityProcess @ 0x140572774
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x1403D3080 (KiUpdateThreadCpuSetAffinitiesProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 */

char __fastcall KeRecomputeCpuSetAffinityProcess(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  char v5; // si
  _QWORD *v6; // rdi
  char result; // al
  ULONG_PTR CurrentThread; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KPRCB *v12; // rdi
  _DWORD *v13; // rcx
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // eax
  __int64 NextThread; // rdi
  __int64 v18; // r8
  unsigned int v19; // r8d
  bool v20; // zf
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  int v26[8]; // [rsp+20h] [rbp-20h] BYREF
  int v27; // [rsp+70h] [rbp+30h] BYREF
  _QWORD *v28; // [rsp+78h] [rbp+38h] BYREF

  v28 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  KiUpdateThreadCpuSetAffinitiesProcess(a1, &v28);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  v6 = v28;
  if ( v28 )
  {
    v28 = (_QWORD *)*v28;
    do
    {
      KiDeferredReadySingleThread((__int64)CurrentPrcb, (ULONG_PTR)(v6 - 27), (__int64)&v28);
      v6 = v28;
      ++v5;
      if ( v28 )
        v28 = (_QWORD *)*v28;
      if ( (v5 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
    }
    while ( v6 );
  }
  result = KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          v26[0] = 5;
          *(_OWORD *)&v26[1] = 0LL;
          return HalpInterruptSendIpi(v26, 0x2Fu);
        }
      }
    }
  }
  else
  {
    CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v12 = KeGetCurrentPrcb();
      v27 = 0;
      while ( 1 )
      {
        v13 = v12->SchedulerAssist;
        if ( v13 )
        {
          if ( v12->NestingLevel <= 1u )
          {
            v14 = v13[6];
            v13[6] = v14 + 1;
            if ( v14 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v12);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v15 = v12->SchedulerAssist;
        if ( v15 )
        {
          if ( v12->NestingLevel <= 1u )
          {
            v16 = v15[6] - 1;
            v15[6] = v16;
            if ( !v16 )
              KiRemoveSystemWorkPriorityKick((__int64)v12);
          }
        }
        do
          KeYieldProcessorEx(&v27, v9, v10, v11);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = (__int64)CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      LOBYTE(v11) = 1;
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL, v11);
      _enable();
      CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
      {
        v18 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
        *(_DWORD *)(NextThread + 132) = v18 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v18);
      LOBYTE(v19) = CurrentIrql;
      v20 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v19) == 0;
    }
    else
    {
      v20 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v20 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          v20 = (v22[5] & 0xFFFF0003) == 0;
          v22[5] &= 0xFFFF0003;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick((__int64)v21);
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
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick((__int64)v23);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
