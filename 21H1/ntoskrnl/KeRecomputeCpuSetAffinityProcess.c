/*
 * XREFs of KeRecomputeCpuSetAffinityProcess @ 0x140516E38
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiEndThreadCycleAccumulation @ 0x140330660 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140359A48 (KiRequestSoftwareInterrupt.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x1403C217C (KiUpdateThreadCpuSetAffinitiesProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
 */

unsigned __int8 __fastcall KeRecomputeCpuSetAffinityProcess(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int8 result; // al
  _DWORD *v8; // r9
  ULONG_PTR CurrentThread; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KPRCB *v13; // rdi
  _DWORD *v14; // rcx
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  __int64 NextThread; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // r8d
  bool v22; // zf
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  int v28; // [rsp+50h] [rbp+8h] BYREF
  __int64 v29; // [rsp+58h] [rbp+10h] BYREF

  v29 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  KiUpdateThreadCpuSetAffinitiesProcess(a1, &v29);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  CurrentPrcb = KeGetCurrentPrcb();
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v29, v5, v6);
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
      v13 = KeGetCurrentPrcb();
      v28 = 0;
      while ( 1 )
      {
        v14 = v13->SchedulerAssist;
        if ( v14 )
        {
          if ( v13->NestingLevel <= 1u )
          {
            v15 = v14[6];
            v14[6] = v15 + 1;
            if ( v15 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v13);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v16 = v13->SchedulerAssist;
        if ( v16 )
        {
          if ( v13->NestingLevel <= 1u )
          {
            v17 = v16[6] - 1;
            v16[6] = v17;
            if ( !v17 )
              KiRemoveSystemWorkPriorityKick((__int64)v13);
          }
        }
        do
          KeYieldProcessorEx(&v28, v10, v11, v12);
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
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v19, v20);
      LOBYTE(v21) = CurrentIrql;
      v22 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v21) == 0;
    }
    else
    {
      v22 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v22 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v23 = KeGetCurrentPrcb();
          v24 = v23->SchedulerAssist;
          v22 = (v24[5] & 0xFFFF0003) == 0;
          v24[5] &= 0xFFFF0003;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)v23);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL, v8);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v27 & v26[5]) == 0;
        v26[5] &= v27;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick((__int64)v25);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
