/*
 * XREFs of KiAbThreadUnboostCpuPriority @ 0x1402119C0
 * Callers:
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ExpWorkerInitialization @ 0x140A6BE74 (ExpWorkerInitialization.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiSetPriorityThread @ 0x1402D4AF0 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140406650 (KiSwapContext.c)
 */

char __fastcall KiAbThreadUnboostCpuPriority(ULONG_PTR BugCheckParameter1, unsigned int a2)
{
  unsigned int v2; // ebp
  unsigned __int8 CurrentIrql; // r14
  int v5; // esi
  struct _KPRCB *CurrentPrcb; // rdi
  char v7; // si
  _DWORD *v8; // rcx
  _DWORD *v9; // rcx
  int v10; // eax
  char v11; // al
  char v12; // al
  unsigned int v13; // edx
  char v14; // dl
  char v15; // cl
  struct _KPRCB *v16; // rbx
  char result; // al
  __int64 v18; // rdx
  _KTHREAD *CurrentThread; // rsi
  bool i; // zf
  int v21; // eax
  struct _KPRCB *v22; // rdi
  _DWORD *v23; // rcx
  _KTHREAD *NextThread; // rdi
  __int64 v25; // r8
  _DWORD *v26; // rcx
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  int v29; // eax
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  int v35; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v36[6]; // [rsp+38h] [rbp-30h] BYREF
  int v37; // [rsp+88h] [rbp+20h] BYREF

  v2 = a2;
  v36[0] = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  for ( i = !_BitScanForward((unsigned int *)&v5, a2); !i; i = !_BitScanForward((unsigned int *)&v5, v2) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = v5 + 1;
    v37 = 0;
    while ( 1 )
    {
      v8 = CurrentPrcb->SchedulerAssist;
      if ( v8 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v10 = v8[6];
          v8[6] = v10 + 1;
          if ( v10 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        break;
      v9 = CurrentPrcb->SchedulerAssist;
      if ( v9 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v21 = v9[6] - 1;
          v9[6] = v21;
          if ( !v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v37);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v11 = *(_BYTE *)(v7 + BugCheckParameter1 + 824);
    if ( !v11 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v7, 2uLL, 0LL);
    v12 = v11 - 1;
    *(_BYTE *)(v7 + BugCheckParameter1 + 824) = v12;
    if ( !v12 )
    {
      v13 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v7);
      *(_DWORD *)(BugCheckParameter1 + 856) = v13;
      if ( v13 < 1 << v7 )
      {
        v14 = *(_BYTE *)(BugCheckParameter1 + 195);
        if ( v14 < 16 )
        {
          v15 = *(_BYTE *)(BugCheckParameter1 + 563)
              + (*(_BYTE *)(BugCheckParameter1 + 564) & 0xF)
              + (*(_BYTE *)(BugCheckParameter1 + 564) >> 4);
          if ( v15 < v14 )
            KiSetPriorityThread(BugCheckParameter1, v36, (unsigned int)v15);
        }
      }
    }
    KiReleaseThreadLockSafe(BugCheckParameter1);
    v2 &= v2 - 1;
  }
  v16 = KeGetCurrentPrcb();
  result = KiReadyDeferredReadyList(v16, v36);
  if ( CurrentIrql >= 2u )
  {
    if ( v16->NextThread )
    {
      result = v16->DpcRoutineActive;
      if ( !result )
      {
        LOBYTE(v18) = 2;
        return KiRequestSoftwareInterrupt(v16, v18);
      }
    }
  }
  else
  {
    CurrentThread = v16->CurrentThread;
    if ( v16->NextThread )
    {
      KiAbProcessContextSwitch(v16->CurrentThread, 0LL);
      v22 = KeGetCurrentPrcb();
      v35 = 0;
      while ( 1 )
      {
        v23 = v22->SchedulerAssist;
        if ( v23 )
        {
          if ( v22->NestingLevel <= 1u )
          {
            v28 = v23[6];
            v23[6] = v28 + 1;
            if ( v28 == -1 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v16->PrcbLock, 0LL) )
          break;
        v26 = v22->SchedulerAssist;
        if ( v26 )
        {
          if ( v22->NestingLevel <= 1u )
          {
            v29 = v26[6] - 1;
            v26[6] = v29;
            if ( !v29 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
        do
          KeYieldProcessorEx(&v35);
        while ( v16->PrcbLock );
      }
      NextThread = v16->NextThread;
      v16->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(v16, CurrentThread, 0LL);
      _enable();
      v16->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      CurrentThread->WaitReason = 32;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread(v16, CurrentThread);
      LOBYTE(v25) = CurrentIrql;
      i = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v25) == 0;
    }
    else
    {
      i = (CurrentThread->MiscFlags & 0x40) == 0;
    }
    if ( !i )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          i = (v31[5] & 0xFFFF0003) == 0;
          v31[5] &= 0xFFFF0003;
          if ( i )
            KiRemoveSystemWorkPriorityKick(v30);
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
        v32 = KeGetCurrentPrcb();
        v33 = v32->SchedulerAssist;
        v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        i = (v34 & v33[5]) == 0;
        v33[5] &= v34;
        if ( i )
          KiRemoveSystemWorkPriorityKick(v32);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
