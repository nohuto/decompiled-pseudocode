/*
 * XREFs of KiAbThreadUnboostCpuPriority @ 0x140293A50
 * Callers:
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     ExpWorkerInitialization @ 0x140A6AE74 (ExpWorkerInitialization.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022E080 (KiEndThreadCycleAccumulation.c)
 *     KiSetPriorityThread @ 0x1402302A0 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x140230D60 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x14024A750 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiQueueReadyThread @ 0x1402593B0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140293E54 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     KiAbProcessContextSwitch @ 0x140347C50 (KiAbProcessContextSwitch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140406470 (KiSwapContext.c)
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
  __int64 v31; // r9
  __int64 v32; // r8
  _DWORD *v33; // rcx
  int v34; // eax
  int v35; // eax
  struct _KPRCB *v36; // rcx
  _DWORD *v37; // rdx
  struct _KPRCB *v38; // r9
  _DWORD *v39; // r8
  int v40; // eax
  int v41; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v42[6]; // [rsp+38h] [rbp-30h] BYREF
  int v43; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  v42[0] = 0LL;
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
    v43 = 0;
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
        KeYieldProcessorEx(&v43, a2, a3, (__int64)SchedulerAssist);
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
            KiSetPriorityThread((_KTHREAD *)BugCheckParameter1, (__int64)v42, v17);
        }
      }
    }
    KiReleaseThreadLockSafe(BugCheckParameter1);
    v4 &= v4 - 1;
  }
  v18 = KeGetCurrentPrcb();
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)v18, v42);
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
      KiAbProcessContextSwitch(v18->CurrentThread, 0LL);
      v27 = KeGetCurrentPrcb();
      v41 = 0;
      while ( 1 )
      {
        v28 = v27->SchedulerAssist;
        if ( v28 )
        {
          if ( v27->NestingLevel <= 1u )
          {
            v34 = v28[6];
            v28[6] = v34 + 1;
            if ( v34 == -1 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
          break;
        v33 = v27->SchedulerAssist;
        if ( v33 )
        {
          if ( v27->NestingLevel <= 1u )
          {
            v35 = v33[6] - 1;
            v33[6] = v35;
            if ( !v35 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
        do
          KeYieldProcessorEx(&v41, v24, v25, v26);
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
      KiQueueReadyThread((__int64)v18, CurrentThread, v30, v31);
      LOBYTE(v32) = CurrentIrql;
      i = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v32) == 0;
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
          v36 = KeGetCurrentPrcb();
          v37 = v36->SchedulerAssist;
          i = (v37[5] & 0xFFFF0003) == 0;
          v37[5] &= 0xFFFF0003;
          if ( i )
            KiRemoveSystemWorkPriorityKick(v36);
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
        v38 = KeGetCurrentPrcb();
        v39 = v38->SchedulerAssist;
        v40 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        i = (v40 & v39[5]) == 0;
        v39[5] &= v40;
        if ( i )
          KiRemoveSystemWorkPriorityKick(v38);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
