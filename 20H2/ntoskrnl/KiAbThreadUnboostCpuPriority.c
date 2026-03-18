/*
 * XREFs of KiAbThreadUnboostCpuPriority @ 0x1402F7278
 * Callers:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     ExpWorkerInitialization @ 0x140A6DA34 (ExpWorkerInitialization.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     KiSetPriorityThread @ 0x140291A00 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x1402BE7C0 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1402DAAA0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F7EF4 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140403E60 (KiSwapContext.c)
 */

unsigned __int8 __fastcall KiAbThreadUnboostCpuPriority(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        __int64 a3,
        _DWORD *SchedulerAssist)
{
  unsigned int v4; // ebp
  unsigned __int8 CurrentIrql; // r14
  int v7; // esi
  struct _KPRCB *CurrentPrcb; // rdi
  char v9; // si
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx
  int v12; // eax
  char v13; // al
  char v14; // al
  unsigned int v15; // edx
  char v16; // dl
  signed __int8 v17; // cl
  struct _KPRCB *v18; // rbx
  unsigned __int8 result; // al
  __int64 v20; // rdx
  ULONG_PTR CurrentThread; // rsi
  bool i; // zf
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _KPRCB *v27; // rdi
  _DWORD *v28; // rcx
  _KTHREAD *NextThread; // rdi
  __int64 v30; // r8
  __int64 v31; // r8
  _DWORD *v32; // rcx
  int v33; // eax
  int v34; // eax
  struct _KPRCB *v35; // rcx
  _DWORD *v36; // rdx
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  int v39; // eax
  int v40; // [rsp+30h] [rbp-38h] BYREF
  _SINGLE_LIST_ENTRY v41[6]; // [rsp+38h] [rbp-30h] BYREF
  int v42; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  v41[0].Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  for ( i = !_BitScanForward((unsigned int *)&v7, v4); !i; i = !_BitScanForward((unsigned int *)&v7, v4) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = v7 + 1;
    v42 = 0;
    while ( 1 )
    {
      v10 = CurrentPrcb->SchedulerAssist;
      if ( v10 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v12 = v10[6];
          v10[6] = v12 + 1;
          if ( v12 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        break;
      v11 = CurrentPrcb->SchedulerAssist;
      if ( v11 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v23 = v11[6] - 1;
          v11[6] = v23;
          if ( !v23 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v42, a2, a3, (__int64)SchedulerAssist);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v13 = *(_BYTE *)(v9 + BugCheckParameter1 + 824);
    if ( !v13 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v9, 2uLL, 0LL);
    v14 = v13 - 1;
    *(_BYTE *)(v9 + BugCheckParameter1 + 824) = v14;
    if ( !v14 )
    {
      v15 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v9);
      *(_DWORD *)(BugCheckParameter1 + 856) = v15;
      if ( v15 < 1 << v9 )
      {
        v16 = *(_BYTE *)(BugCheckParameter1 + 195);
        if ( v16 < 16 )
        {
          v17 = *(_BYTE *)(BugCheckParameter1 + 563)
              + (*(_BYTE *)(BugCheckParameter1 + 564) & 0xF)
              + (*(_BYTE *)(BugCheckParameter1 + 564) >> 4);
          if ( v17 < v16 )
            KiSetPriorityThread((_BYTE *)BugCheckParameter1, (__int64)v41, v17);
        }
      }
    }
    KiReleaseThreadLockSafe(BugCheckParameter1);
    v4 &= v4 - 1;
  }
  v18 = KeGetCurrentPrcb();
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)v18, v41);
  if ( CurrentIrql >= 2u )
  {
    if ( v18->NextThread )
    {
      result = v18->DpcRoutineActive;
      if ( !result )
      {
        LOBYTE(v20) = 2;
        return KiRequestSoftwareInterrupt(v18, v20);
      }
    }
  }
  else
  {
    CurrentThread = (ULONG_PTR)v18->CurrentThread;
    if ( v18->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v18->CurrentThread, 0);
      v27 = KeGetCurrentPrcb();
      v40 = 0;
      while ( 1 )
      {
        v28 = v27->SchedulerAssist;
        if ( v28 )
        {
          if ( v27->NestingLevel <= 1u )
          {
            v33 = v28[6];
            v28[6] = v33 + 1;
            if ( v33 == -1 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
          break;
        v32 = v27->SchedulerAssist;
        if ( v32 )
        {
          if ( v27->NestingLevel <= 1u )
          {
            v34 = v32[6] - 1;
            v32[6] = v34;
            if ( !v34 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
        do
          KeYieldProcessorEx(&v40, v24, v25, v26);
        while ( v18->PrcbLock );
      }
      NextThread = v18->NextThread;
      v18->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v18, CurrentThread, 0LL);
      _enable();
      v18->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v30 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v30 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)v18, CurrentThread, v30);
      LOBYTE(v31) = CurrentIrql;
      i = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v31) == 0;
    }
    else
    {
      i = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !i )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v35 = KeGetCurrentPrcb();
          v36 = v35->SchedulerAssist;
          i = (v36[5] & 0xFFFF0003) == 0;
          v36[5] &= 0xFFFF0003;
          if ( i )
            KiRemoveSystemWorkPriorityKick(v35);
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
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        i = (v39 & v38[5]) == 0;
        v38[5] &= v39;
        if ( i )
          KiRemoveSystemWorkPriorityKick(v37);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
