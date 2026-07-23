/*
 * XREFs of KeBoostPriorityThread @ 0x140293860
 * Callers:
 *     ExpCreateWorkerThread @ 0x1406A7208 (ExpCreateWorkerThread.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402D4110 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSetPriorityThread @ 0x1402D4AF0 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406650 (KiSwapContext.c)
 *     EtwTracePriority @ 0x1405A80D4 (EtwTracePriority.c)
 */

char __fastcall KeBoostPriorityThread(__int64 a1, int a2)
{
  void *v2; // rax
  unsigned int v5; // r13d
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *CurrentThread; // r14
  _DWORD *v9; // rcx
  int v10; // r12d
  int v11; // eax
  __int64 updated; // rcx
  __int64 v13; // rdx
  ULONG_PTR v14; // rbp
  struct _KPRCB *v15; // rsi
  _DWORD *v16; // rcx
  _KTHREAD *NextThread; // rsi
  __int64 v18; // r8
  __int64 v19; // r8
  _DWORD *v20; // rcx
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  int v23; // eax
  int v24; // eax
  _DWORD *v25; // rcx
  int v26; // eax
  _DWORD *v27; // rcx
  int v28; // eax
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  bool v31; // zf
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  _QWORD v36[9]; // [rsp+30h] [rbp-48h] BYREF
  int v37; // [rsp+80h] [rbp+8h] BYREF
  int v38; // [rsp+90h] [rbp+18h] BYREF
  int v39; // [rsp+98h] [rbp+20h]

  v2 = &KiInitialProcess;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return (char)v2;
  v36[0] = 0LL;
  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v37 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( 1 )
  {
    v9 = CurrentPrcb->SchedulerAssist;
    if ( v9 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v22 = v9[6];
        v9[6] = v22 + 1;
        if ( v22 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v20 = CurrentPrcb->SchedulerAssist;
    if ( v20 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v23 = v20[6] - 1;
        v20[6] = v23;
        if ( !v23 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v37);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v10 = *(char *)(a1 + 195);
  v39 = v10;
  if ( v10 < 16 && !*(_BYTE *)(a1 + 564) )
  {
    v11 = a2 + *(char *)(a1 + 563);
    if ( v11 > v10 )
    {
      v5 = a2 + *(char *)(a1 + 563);
      if ( v11 >= 16 )
        v5 = 15;
      if ( (_KTHREAD *)a1 != CurrentThread || CurrentPrcb->NestingLevel )
      {
        updated = *(_QWORD *)(a1 + 72);
      }
      else
      {
        _disable();
        updated = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, a1, 0LL);
        _enable();
      }
      v13 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
      if ( (*(_DWORD *)(a1 + 120) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
      *(_QWORD *)(a1 + 32) = v13;
      KiSetPriorityThread(a1, v36, v5);
    }
  }
  KiReleaseThreadLockSafe(a1);
  LOBYTE(v2) = KiReadyDeferredReadyList(CurrentPrcb, v36);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      LOBYTE(v2) = CurrentPrcb->DpcRoutineActive;
      if ( !(_BYTE)v2 )
        LOBYTE(v2) = KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
    goto LABEL_21;
  }
  v14 = (ULONG_PTR)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
    v15 = KeGetCurrentPrcb();
    v38 = 0;
    v16 = v15->SchedulerAssist;
    if ( v16 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v24 = v16[6];
        v16[6] = v24 + 1;
        if ( v24 == -1 )
LABEL_55:
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v25 = v15->SchedulerAssist;
      if ( v25 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v26 = v25[6] - 1;
          v25[6] = v26;
          if ( !v26 )
            KiRemoveSystemWorkPriorityKick(v15);
        }
      }
      do
        KeYieldProcessorEx(&v38);
      while ( CurrentPrcb->PrcbLock );
      v27 = v15->SchedulerAssist;
      if ( v27 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v28 = v27[6];
          v27[6] = v28 + 1;
          if ( v28 == -1 )
            goto LABEL_55;
        }
      }
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation(CurrentPrcb, v14, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    v10 = v39;
    if ( NextThread->WaitBlockFill6[68] == 1 )
    {
      v18 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
      NextThread->ReadyTime = v18 + MEMORY[0xFFFFF78000000320];
    }
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v14 + 643) = 32;
    *(_BYTE *)(v14 + 390) = CurrentIrql;
    KiQueueReadyThread(CurrentPrcb, v14, v18);
    LOBYTE(v19) = CurrentIrql;
    if ( !(unsigned __int8)KiSwapContext(v14, NextThread, v19) )
      goto LABEL_19;
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
      goto LABEL_61;
    goto LABEL_58;
  }
  if ( (*(_DWORD *)(v14 + 116) & 0x40) == 0 )
    goto LABEL_19;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
  {
LABEL_58:
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v29 = KeGetCurrentPrcb();
      v30 = v29->SchedulerAssist;
      v31 = (v30[5] & 0xFFFF0003) == 0;
      v30[5] &= 0xFFFF0003;
      if ( v31 )
        KiRemoveSystemWorkPriorityKick(v29);
    }
  }
LABEL_61:
  __writecr8(1uLL);
  *(_DWORD *)(v14 + 116) &= ~0x40u;
  KiDeliverApc(0LL, 0LL, 0LL);
LABEL_19:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v32 = KeGetCurrentPrcb();
      v33 = v32->SchedulerAssist;
      v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v31 = (v34 & v33[5]) == 0;
      v33[5] &= v34;
      if ( v31 )
        KiRemoveSystemWorkPriorityKick(v32);
    }
  }
  LOBYTE(v2) = CurrentIrql;
  __writecr8(CurrentIrql);
LABEL_21:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 && v5 )
    LOBYTE(v2) = EtwTracePriority(a1, 1328, v10, v5, 0LL);
  return (char)v2;
}
