/*
 * XREFs of KiAbThreadUnboostCpuPriority @ 0x140303FF4
 * Callers:
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExpWorkerInitialization @ 0x140A66D84 (ExpWorkerInitialization.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     KiSetPriorityThread @ 0x14026C6D0 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiEndThreadCycleAccumulation @ 0x140330660 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140359A48 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
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
  char v12; // al
  char v13; // al
  unsigned int v14; // edx
  char v15; // dl
  signed __int8 v16; // cl
  struct _KPRCB *v17; // rbx
  unsigned __int8 result; // al
  __int64 v19; // rdx
  _DWORD *v20; // r9
  _KTHREAD *CurrentThread; // rsi
  bool i; // zf
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _KPRCB *v28; // rdi
  _DWORD *v29; // rcx
  _KTHREAD *NextThread; // rdi
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
  _QWORD v41[6]; // [rsp+38h] [rbp-30h] BYREF
  int v42; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  v41[0] = 0LL;
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
          v23 = v10[6];
          v10[6] = v23 + 1;
          if ( v23 == -1 )
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
          v24 = v11[6] - 1;
          v11[6] = v24;
          if ( !v24 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v42, a2, a3, (__int64)SchedulerAssist);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v12 = *(_BYTE *)(v9 + BugCheckParameter1 + 824);
    if ( !v12 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v9, 2uLL, 0LL);
    v13 = v12 - 1;
    *(_BYTE *)(v9 + BugCheckParameter1 + 824) = v13;
    if ( !v13 )
    {
      v14 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v9);
      *(_DWORD *)(BugCheckParameter1 + 856) = v14;
      if ( v14 < 1 << v9 )
      {
        v15 = *(_BYTE *)(BugCheckParameter1 + 195);
        if ( v15 < 16 )
        {
          v16 = *(_BYTE *)(BugCheckParameter1 + 563)
              + (*(_BYTE *)(BugCheckParameter1 + 564) & 0xF)
              + (*(_BYTE *)(BugCheckParameter1 + 564) >> 4);
          if ( v16 < v15 )
            KiSetPriorityThread((_KTHREAD *)BugCheckParameter1, (__int64)v41, v16);
        }
      }
    }
    KiReleaseThreadLockSafe(BugCheckParameter1);
    v4 &= v4 - 1;
  }
  v17 = KeGetCurrentPrcb();
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)v17, v41, a3, (__int64)SchedulerAssist);
  if ( CurrentIrql >= 2u )
  {
    if ( v17->NextThread )
    {
      result = v17->DpcRoutineActive;
      if ( !result )
      {
        LOBYTE(v19) = 2;
        return KiRequestSoftwareInterrupt(v17, v19);
      }
    }
  }
  else
  {
    CurrentThread = v17->CurrentThread;
    if ( v17->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v17->CurrentThread, 0);
      v28 = KeGetCurrentPrcb();
      v40 = 0;
      while ( 1 )
      {
        v29 = v28->SchedulerAssist;
        if ( v29 )
        {
          if ( v28->NestingLevel <= 1u )
          {
            v33 = v29[6];
            v29[6] = v33 + 1;
            if ( v33 == -1 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v17->PrcbLock, 0LL) )
          break;
        v32 = v28->SchedulerAssist;
        if ( v32 )
        {
          if ( v28->NestingLevel <= 1u )
          {
            v34 = v32[6] - 1;
            v32[6] = v34;
            if ( !v34 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
        do
          KeYieldProcessorEx(&v40, v25, v26, v27);
        while ( v17->PrcbLock );
      }
      NextThread = v17->NextThread;
      v17->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(v17, CurrentThread, 0LL);
      _enable();
      v17->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      CurrentThread->WaitReason = 32;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread(v17, CurrentThread);
      LOBYTE(v31) = CurrentIrql;
      i = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v31) == 0;
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
          v35 = KeGetCurrentPrcb();
          v36 = v35->SchedulerAssist;
          i = (v36[5] & 0xFFFF0003) == 0;
          v36[5] &= 0xFFFF0003;
          if ( i )
            KiRemoveSystemWorkPriorityKick(v35);
        }
      }
      __writecr8(1uLL);
      CurrentThread->MiscFlags &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL, v20);
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
