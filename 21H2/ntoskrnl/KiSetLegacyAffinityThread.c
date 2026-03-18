/*
 * XREFs of KiSetLegacyAffinityThread @ 0x14020E6EC
 * Callers:
 *     KeSetAffinityThread @ 0x14056B9C0 (KeSetAffinityThread.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 * Callees:
 *     KiSetAffinityThread @ 0x14020EC24 (KiSetAffinityThread.c)
 *     KeIsSubsetAffinityEx @ 0x14020EF50 (KeIsSubsetAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiAndAffinityEx @ 0x1402FF140 (KiAndAffinityEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KiSetLegacyAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // r13
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // rcx
  _WORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rdi
  char v12; // si
  _KTHREAD *CurrentThread; // rsi
  bool v14; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v17; // r9
  struct _KPRCB *v18; // rdi
  _DWORD *v19; // rcx
  _KTHREAD *NextThread; // rdi
  __int64 v21; // r8
  _DWORD *v22; // rcx
  int v23; // eax
  int v24; // eax
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  _QWORD *v30; // [rsp+20h] [rbp-E0h] BYREF
  int v31; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD v32[8]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v33[68]; // [rsp+50h] [rbp-B0h] BYREF

  memset(&v33[2], 0, 0x100uLL);
  v4 = *(_QWORD *)(a1 + 544);
  v5 = 0LL;
  if ( !a2 )
    return v5;
  v33[0] = 2097153;
  memset(&v33[1], 0, 0x104uLL);
  v30 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v8 = *(unsigned __int16 *)(a1 + 560);
  if ( LOWORD(v33[0]) > (unsigned __int16)v8 )
    goto LABEL_4;
  if ( HIWORD(v33[0]) > (unsigned __int16)v8 )
  {
    LOWORD(v33[0]) = v8 + 1;
LABEL_4:
    *(_QWORD *)&v33[2 * v8 + 2] |= a2;
  }
  KiAndAffinityEx(v33, &KeActiveProcessors, v33, 20LL);
  if ( !(unsigned int)KeIsEmptyAffinityEx(v33) && (unsigned int)KeIsSubsetAffinityEx(v33, v4 + 80) )
  {
    v9 = *(_WORD **)(a1 + 552);
    v10 = *(unsigned __int16 *)(a1 + 560);
    if ( (unsigned __int16)v10 < *v9 )
      v5 = *(_QWORD *)&v9[4 * v10 + 4];
    KiSetAffinityThread(a1, &v30, v33);
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v11 = v30;
  v12 = 0;
  if ( v30 )
  {
    v30 = (_QWORD *)*v30;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, v11 - 27, &v30);
      v11 = v30;
      ++v12;
      if ( v30 )
        v30 = (_QWORD *)*v30;
      if ( (v12 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
    }
    while ( v11 );
  }
  KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    {
      if ( CurrentPrcb->NestingLevel )
      {
        CurrentPrcb->InterruptRequest = 1;
      }
      else
      {
        v32[0] = 5;
        *(_OWORD *)&v32[1] = 0LL;
        HalpInterruptSendIpi(v32, 47LL);
      }
    }
  }
  else
  {
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v18 = KeGetCurrentPrcb();
      v31 = 0;
      while ( 1 )
      {
        v19 = v18->SchedulerAssist;
        if ( v19 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v23 = v19[6];
            v19[6] = v23 + 1;
            if ( v23 == -1 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v22 = v18->SchedulerAssist;
        if ( v22 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v24 = v22[6] - 1;
            v22[6] = v24;
            if ( !v24 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        do
          KeYieldProcessorEx(&v31);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      LOBYTE(v17) = 1;
      KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL, v17);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      CurrentThread->WaitReason = 32;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      LOBYTE(v21) = CurrentIrql;
      v14 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v21) == 0;
    }
    else
    {
      v14 = (CurrentThread->MiscFlags & 0x40) == 0;
    }
    if ( !v14 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v14 = (v26[5] & 0xFFFF0003) == 0;
          v26[5] &= 0xFFFF0003;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
      __writecr8(1uLL);
      CurrentThread->MiscFlags &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
    __writecr8(CurrentIrql);
  }
  return v5;
}
