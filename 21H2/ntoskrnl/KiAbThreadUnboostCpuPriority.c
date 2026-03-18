/*
 * XREFs of KiAbThreadUnboostCpuPriority @ 0x14022B5D8
 * Callers:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 */

char __fastcall KiAbThreadUnboostCpuPriority(ULONG_PTR BugCheckParameter1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // r15
  _DWORD *SchedulerAssist; // r9
  char v6; // al
  char v7; // al
  unsigned int v8; // edx
  char v9; // dl
  char v10; // cl
  int v11; // esi
  struct _KPRCB *v12; // rbx
  char v13; // si
  _QWORD *v14; // rdi
  char result; // al
  _KTHREAD *CurrentThread; // rsi
  bool v17; // zf
  struct _KPRCB *CurrentPrcb; // rdi
  char v19; // si
  _DWORD *v20; // rcx
  _DWORD *v21; // rcx
  int v22; // eax
  int v23; // eax
  __int64 v24; // r9
  struct _KPRCB *v25; // rdi
  _DWORD *v26; // rcx
  _KTHREAD *NextThread; // rdi
  __int64 v28; // r8
  _DWORD *v29; // rcx
  int v30; // eax
  int v31; // eax
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  int v36; // eax
  int v37; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v38; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v39[8]; // [rsp+40h] [rbp-20h] BYREF
  int v40; // [rsp+A8h] [rbp+48h] BYREF

  v38 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  while ( 1 )
  {
    v17 = !_BitScanForward((unsigned int *)&v11, a2);
    if ( v17 )
      break;
    CurrentPrcb = KeGetCurrentPrcb();
    v19 = v11 + 1;
    v40 = 0;
    while ( 1 )
    {
      v20 = CurrentPrcb->SchedulerAssist;
      if ( v20 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v22 = v20[6];
          v20[6] = v22 + 1;
          if ( v22 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        break;
      v21 = CurrentPrcb->SchedulerAssist;
      if ( v21 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v23 = v21[6] - 1;
          v21[6] = v23;
          if ( !v23 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v40);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v6 = *(_BYTE *)(v19 + BugCheckParameter1 + 824);
    if ( !v6 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v19, 2uLL, 0LL);
    v7 = v6 - 1;
    *(_BYTE *)(v19 + BugCheckParameter1 + 824) = v7;
    if ( !v7 )
    {
      v8 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v19);
      *(_DWORD *)(BugCheckParameter1 + 856) = v8;
      if ( v8 < 1 << v19 )
      {
        v9 = *(_BYTE *)(BugCheckParameter1 + 195);
        if ( v9 <= 31 )
        {
          v10 = *(_BYTE *)(BugCheckParameter1 + 563)
              + (*(_BYTE *)(BugCheckParameter1 + 564) & 0xF)
              + (*(_BYTE *)(BugCheckParameter1 + 564) >> 4);
          if ( v10 < v9 )
            KiSetPriorityThread(BugCheckParameter1, &v38, (unsigned int)v10);
        }
      }
    }
    KiReleaseThreadLockSafe(BugCheckParameter1);
    a2 &= a2 - 1;
  }
  v12 = KeGetCurrentPrcb();
  v13 = 0;
  v14 = v38;
  if ( v38 )
  {
    v38 = (_QWORD *)*v38;
    do
    {
      KiDeferredReadySingleThread(v12, v14 - 27, &v38);
      v14 = v38;
      ++v13;
      if ( v38 )
        v38 = (_QWORD *)*v38;
      if ( (v13 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(&v12->DeferredDispatchInterrupts);
    }
    while ( v14 );
  }
  result = KiFlushSoftwareInterruptBatch(&v12->DeferredDispatchInterrupts);
  if ( CurrentIrql >= 2u )
  {
    if ( v12->NextThread )
    {
      result = v12->DpcRoutineActive;
      if ( !result )
      {
        if ( v12->NestingLevel )
        {
          v12->InterruptRequest = 1;
        }
        else
        {
          v39[0] = 5;
          *(_OWORD *)&v39[1] = 0LL;
          return HalpInterruptSendIpi(v39, 47LL);
        }
      }
    }
  }
  else
  {
    CurrentThread = v12->CurrentThread;
    if ( v12->NextThread )
    {
      KiAbProcessContextSwitch(v12->CurrentThread, 0LL);
      v25 = KeGetCurrentPrcb();
      v37 = 0;
      while ( 1 )
      {
        v26 = v25->SchedulerAssist;
        if ( v26 )
        {
          if ( v25->NestingLevel <= 1u )
          {
            v30 = v26[6];
            v26[6] = v30 + 1;
            if ( v30 == -1 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v12->PrcbLock, 0LL) )
          break;
        v29 = v25->SchedulerAssist;
        if ( v29 )
        {
          if ( v25->NestingLevel <= 1u )
          {
            v31 = v29[6] - 1;
            v29[6] = v31;
            if ( !v31 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
        do
          KeYieldProcessorEx(&v37);
        while ( v12->PrcbLock );
      }
      NextThread = v12->NextThread;
      v12->NextThread = 0LL;
      _disable();
      LOBYTE(v24) = 1;
      KiEndThreadCycleAccumulation(v12, CurrentThread, 0LL, v24);
      _enable();
      v12->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      CurrentThread->WaitReason = 32;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread(v12, CurrentThread);
      LOBYTE(v28) = CurrentIrql;
      v17 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v28) == 0;
    }
    else
    {
      v17 = (CurrentThread->MiscFlags & 0x40) == 0;
    }
    if ( !v17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          v17 = (v33[5] & 0xFFFF0003) == 0;
          v33[5] &= 0xFFFF0003;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
      __writecr8(1uLL);
      CurrentThread->MiscFlags &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v34 = KeGetCurrentPrcb();
      v35 = v34->SchedulerAssist;
      v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v17 = (v36 & v35[5]) == 0;
      v35[5] &= v36;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(v34);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
