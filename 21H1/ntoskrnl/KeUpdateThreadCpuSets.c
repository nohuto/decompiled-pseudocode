/*
 * XREFs of KeUpdateThreadCpuSets @ 0x1403C20BC
 * Callers:
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140330660 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140359A48 (KiRequestSoftwareInterrupt.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1403C21CC (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
 */

unsigned __int8 __fastcall KeUpdateThreadCpuSets(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int8 result; // al
  _DWORD *v6; // r9
  ULONG_PTR CurrentThread; // rsi
  bool v8; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KPRCB *v13; // rdi
  _DWORD *v14; // rcx
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  _KTHREAD *NextThread; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  int v27; // [rsp+58h] [rbp+10h] BYREF
  __int64 v28; // [rsp+60h] [rbp+18h] BYREF

  v28 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KiUpdateThreadCpuSetAffinitiesFromDpcLevel(a1, &v28);
  CurrentPrcb = KeGetCurrentPrcb();
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v28, v3, v4);
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
      v27 = 0;
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
              KiRemoveSystemWorkPriorityKick(v13);
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
              KiRemoveSystemWorkPriorityKick(v13);
          }
        }
        do
          KeYieldProcessorEx(&v27, v10, v11, v12);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v19, v20);
      LOBYTE(v21) = CurrentIrql;
      v8 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v21) == 0;
    }
    else
    {
      v8 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v8 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          v8 = (v23[5] & 0xFFFF0003) == 0;
          v23[5] &= 0xFFFF0003;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL, v6);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v24 = KeGetCurrentPrcb();
      v25 = v24->SchedulerAssist;
      v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v8 = (v26 & v25[5]) == 0;
      v25[5] &= v26;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick(v24);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
