/*
 * XREFs of KeSetSystemMultipleGroupAffinityThread @ 0x14056B9FC
 * Callers:
 *     PsSetSystemMultipleGroupAffinityThread @ 0x1405E0B40 (PsSetSystemMultipleGroupAffinityThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiSetSystemAffinityThread @ 0x14035C1C0 (KiSetSystemAffinityThread.c)
 *     KeFirstGroupAffinityEx @ 0x14035C9C0 (KeFirstGroupAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 *     EtwTraceIdealProcessor @ 0x14062DAE4 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeSetSystemMultipleGroupAffinityThread(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r8
  __int64 v6; // rax
  char v7; // r13
  unsigned __int16 v8; // r9
  unsigned int v9; // r10d
  __int64 SchedulerAssist; // r9
  __int64 v11; // rax
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 CurrentThread; // r14
  _DWORD *v15; // rcx
  int v16; // eax
  _DWORD *v17; // rcx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // ecx
  __int64 *v23; // r10
  __int64 v24; // r8
  _WORD *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r9
  unsigned int v28; // r15d
  _QWORD *v29; // rsi
  char v30; // r14
  ULONG_PTR v31; // r14
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  struct _KPRCB *v35; // rsi
  _DWORD *v36; // rcx
  int v37; // eax
  _DWORD *v38; // rcx
  int v39; // eax
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r9
  _DWORD *v42; // r8
  int v43; // eax
  __int64 NextThread; // rsi
  __int64 v46; // r8
  unsigned int v47; // r8d
  bool v48; // zf
  struct _KPRCB *v49; // rcx
  _DWORD *v50; // rdx
  struct _KPRCB *v51; // r9
  _DWORD *v52; // r8
  int v53; // eax
  unsigned int v54; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v55; // [rsp+34h] [rbp-2Ch]
  _QWORD *v56; // [rsp+38h] [rbp-28h] BYREF
  int v57[8]; // [rsp+40h] [rbp-20h] BYREF
  int v59; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 0;
  v56 = 0LL;
  KeGetCurrentIrql();
  v5 = LOWORD(KeActiveProcessors[0]);
  if ( KeGetCurrentIrql() > 2u )
    return (unsigned int)-1073741811;
  if ( (unsigned __int16)a2 > LOWORD(KeActiveProcessors[0]) )
    return (unsigned int)-1073741811;
  if ( *(_BYTE *)(a3 + 18) >= 3u )
    return (unsigned int)-1073741811;
  v6 = *(_QWORD *)(a3 + 24);
  v7 = 1;
  if ( !*(_WORD *)v6 )
    return (unsigned int)-1073741811;
  v8 = *(_WORD *)(v6 + 2);
  if ( *(_WORD *)v6 > v8 || *(_DWORD *)(v6 + 4) || v8 < LOWORD(KeActiveProcessors[0]) )
    return (unsigned int)-1073741811;
  v9 = (unsigned __int16)a2;
  SchedulerAssist = 0LL;
  v54 = (unsigned __int16)a2;
  if ( (_WORD)a2 )
  {
    v5 = (__int64)a1 + 12;
    while ( !(*(_WORD *)v5 | (unsigned __int16)(*(_WORD *)(v5 + 2) | *(_WORD *)(v5 - 2))) )
    {
      v11 = *(unsigned __int16 *)(v5 - 4);
      if ( (unsigned __int16)v11 >= LOWORD(KeActiveProcessors[0]) )
        break;
      a2 = *(_QWORD *)(v5 - 12);
      if ( (qword_140D06E48[v11] & a2) != a2 )
        break;
      SchedulerAssist = (unsigned int)(SchedulerAssist + 1);
      v5 += 16LL;
      if ( (unsigned int)SchedulerAssist >= v9 )
        goto LABEL_14;
    }
    return (unsigned int)-1073741811;
  }
LABEL_14:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    v5 = (unsigned int)a2 | *(_DWORD *)(SchedulerAssist + 20);
    *(_DWORD *)(SchedulerAssist + 20) = v5;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v59 = 0;
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
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
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
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
      KeYieldProcessorEx(&v59, a2, v5, SchedulerAssist);
    while ( *(_QWORD *)(CurrentThread + 64) );
  }
  v55 = *(_DWORD *)(CurrentThread + 588);
  v19 = *(_DWORD *)(CurrentThread + 116);
  if ( (v19 & 8) == 0 )
  {
    *(_DWORD *)(CurrentThread + 116) = v19 | 8;
    if ( (*(_BYTE *)(a3 + 19) & 1) == 0 )
    {
LABEL_40:
      *(_BYTE *)(a3 + 18) = 0;
      goto LABEL_41;
    }
LABEL_75:
    KiReleaseThreadLockSafe(CurrentThread);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v40 = KeGetCurrentIrql();
        if ( v40 <= 0xFu && CurrentIrql <= 0xFu && v40 >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          v43 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v48 = (v43 & v42[5]) == 0;
          v42[5] &= v43;
          if ( v48 )
            KiRemoveSystemWorkPriorityKick((__int64)v41);
        }
      }
    }
    __writecr8(CurrentIrql);
    return (unsigned int)-1073741811;
  }
  v20 = *(_QWORD *)(CurrentThread + 1104);
  if ( !v20 )
  {
LABEL_32:
    KeFirstGroupAffinityEx(a3 + 8, *(_WORD **)(CurrentThread + 576));
    *(_BYTE *)(a3 + 19) |= 2u;
    *(_BYTE *)(a3 + 18) = 2;
    goto LABEL_41;
  }
  if ( v20 == a3 )
  {
    if ( *(_BYTE *)(a3 + 18) != 1 )
    {
      v7 = 0;
      goto LABEL_41;
    }
    goto LABEL_75;
  }
  if ( (*(_BYTE *)(a3 + 19) & 1) != 0 )
    goto LABEL_75;
  v21 = *(unsigned __int8 *)(v20 + 18);
  if ( !v21 )
    goto LABEL_40;
  v22 = v21 - 1;
  if ( !v22 )
    goto LABEL_32;
  if ( v22 == 1 )
    goto LABEL_40;
LABEL_41:
  if ( v54 )
  {
    v23 = a1;
    v24 = v54;
    while ( 1 )
    {
      v25 = *(_WORD **)(a3 + 24);
      v26 = *((unsigned __int16 *)v23 + 4);
      v27 = *v23;
      if ( *v25 > (unsigned __int16)v26 )
        goto LABEL_46;
      if ( v25[1] > (unsigned __int16)v26 )
        break;
LABEL_47:
      v23 += 2;
      if ( !--v24 )
        goto LABEL_48;
    }
    *v25 = v26 + 1;
LABEL_46:
    *(_QWORD *)&v25[4 * v26 + 4] |= v27;
    goto LABEL_47;
  }
LABEL_48:
  KiSetSystemAffinityThread((__int64)CurrentPrcb, *(unsigned __int16 **)(a3 + 24), 0LL, 0x800u, (__int64)&v56);
  v28 = *(_DWORD *)(CurrentThread + 588);
  if ( v7 )
  {
    *(_BYTE *)(a3 + 19) |= 1u;
    *(_QWORD *)a3 = *(_QWORD *)(CurrentThread + 1104);
    *(_QWORD *)(CurrentThread + 1104) = a3;
  }
  KiReleaseThreadLockSafe(CurrentThread);
  if ( (xmmword_140D06910 & 0x8000000) != 0 )
    EtwTraceIdealProcessor(CurrentThread, 1350LL, v55, v28);
  v29 = v56;
  v30 = 0;
  if ( v56 )
  {
    v56 = (_QWORD *)*v56;
    do
    {
      KiDeferredReadySingleThread((__int64)CurrentPrcb, (ULONG_PTR)(v29 - 27), (__int64)&v56);
      v29 = v56;
      ++v30;
      if ( v56 )
        v56 = (_QWORD *)*v56;
      if ( (v30 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
    }
    while ( v29 );
  }
  KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
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
        v57[0] = 5;
        *(_OWORD *)&v57[1] = 0LL;
        HalpInterruptSendIpi(v57, 0x2Fu);
      }
    }
  }
  else
  {
    v31 = (ULONG_PTR)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v35 = KeGetCurrentPrcb();
      v54 = 0;
      while ( 1 )
      {
        v36 = v35->SchedulerAssist;
        if ( v36 )
        {
          if ( v35->NestingLevel <= 1u )
          {
            v37 = v36[6];
            v36[6] = v37 + 1;
            if ( v37 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v35);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v38 = v35->SchedulerAssist;
        if ( v38 )
        {
          if ( v35->NestingLevel <= 1u )
          {
            v39 = v38[6] - 1;
            v38[6] = v39;
            if ( !v39 )
              KiRemoveSystemWorkPriorityKick((__int64)v35);
          }
        }
        do
          KeYieldProcessorEx(&v54, v32, v33, v34);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = (__int64)CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      LOBYTE(v34) = 1;
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v31, 0LL, v34);
      _enable();
      CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
      {
        v46 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
        *(_DWORD *)(NextThread + 132) = v46 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(v31 + 643) = 32;
      *(_BYTE *)(v31 + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, v31, v46);
      LOBYTE(v47) = CurrentIrql;
      v48 = (unsigned __int8)KiSwapContext(v31, NextThread, v47) == 0;
    }
    else
    {
      v48 = (*(_DWORD *)(v31 + 116) & 0x40) == 0;
    }
    if ( !v48 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v49 = KeGetCurrentPrcb();
          v50 = v49->SchedulerAssist;
          v48 = (v50[5] & 0xFFFF0003) == 0;
          v50[5] &= 0xFFFF0003;
          if ( v48 )
            KiRemoveSystemWorkPriorityKick((__int64)v49);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v31 + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v51 = KeGetCurrentPrcb();
        v52 = v51->SchedulerAssist;
        v53 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v48 = (v53 & v52[5]) == 0;
        v52[5] &= v53;
        if ( v48 )
          KiRemoveSystemWorkPriorityKick((__int64)v51);
      }
    }
    __writecr8(CurrentIrql);
  }
  return v3;
}
