/*
 * XREFs of KeRecomputeCpuSetAffinityProcess @ 0x14051AE58
 * Callers:
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiReadyDeferredReadyList @ 0x1402BE7C0 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1402DAAA0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F7EF4 (KiRequestSoftwareInterrupt.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x1403C57AC (KiUpdateThreadCpuSetAffinitiesProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140403E60 (KiSwapContext.c)
 */

unsigned __int8 __fastcall KeRecomputeCpuSetAffinityProcess(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int8 result; // al
  ULONG_PTR CurrentThread; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KPRCB *v10; // rdi
  _DWORD *v11; // rcx
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  __int64 NextThread; // rdi
  __int64 v16; // r8
  unsigned int v17; // r8d
  bool v18; // zf
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  int v24; // [rsp+50h] [rbp+8h] BYREF
  _SINGLE_LIST_ENTRY v25; // [rsp+58h] [rbp+10h] BYREF

  v25.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  KiUpdateThreadCpuSetAffinitiesProcess(a1, &v25);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  CurrentPrcb = KeGetCurrentPrcb();
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v25);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
        return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
  }
  else
  {
    CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v10 = KeGetCurrentPrcb();
      v24 = 0;
      while ( 1 )
      {
        v11 = v10->SchedulerAssist;
        if ( v11 )
        {
          if ( v10->NestingLevel <= 1u )
          {
            v12 = v11[6];
            v11[6] = v12 + 1;
            if ( v12 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v10);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v13 = v10->SchedulerAssist;
        if ( v13 )
        {
          if ( v10->NestingLevel <= 1u )
          {
            v14 = v13[6] - 1;
            v13[6] = v14;
            if ( !v14 )
              KiRemoveSystemWorkPriorityKick((__int64)v10);
          }
        }
        do
          KeYieldProcessorEx(&v24, v7, v8, v9);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = (__int64)CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v16);
      LOBYTE(v17) = CurrentIrql;
      v18 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v17) == 0;
    }
    else
    {
      v18 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v18 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v18 = (v20[5] & 0xFFFF0003) == 0;
          v20[5] &= 0xFFFF0003;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick((__int64)v19);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v21 = KeGetCurrentPrcb();
        v22 = v21->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v18 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick((__int64)v21);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
