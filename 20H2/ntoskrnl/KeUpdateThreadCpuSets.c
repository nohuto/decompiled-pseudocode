/*
 * XREFs of KeUpdateThreadCpuSets @ 0x1403C56EC
 * Callers:
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     KiReadyDeferredReadyList @ 0x1402BE7C0 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1402DAAA0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F7EF4 (KiRequestSoftwareInterrupt.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1403C57FC (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140403E60 (KiSwapContext.c)
 */

unsigned __int8 __fastcall KeUpdateThreadCpuSets(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int8 result; // al
  ULONG_PTR CurrentThread; // rsi
  bool v5; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KPRCB *v10; // rdi
  _DWORD *v11; // rcx
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  _KTHREAD *NextThread; // rdi
  __int64 v16; // r8
  __int64 v17; // r8
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  int v23; // [rsp+58h] [rbp+10h] BYREF
  _SINGLE_LIST_ENTRY v24; // [rsp+60h] [rbp+18h] BYREF

  v24.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KiUpdateThreadCpuSetAffinitiesFromDpcLevel(a1, &v24);
  CurrentPrcb = KeGetCurrentPrcb();
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v24);
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
      v10 = KeGetCurrentPrcb();
      v23 = 0;
      while ( 1 )
      {
        v11 = v10->SchedulerAssist;
        if ( v11 )
        {
          if ( v10->NestingLevel <= 1u )
          {
            v12 = v11[6];
            v11[6] = v12 + 1;
            if ( v12 == -1 )
              KiRemoveSystemWorkPriorityKick(v10);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v13 = v10->SchedulerAssist;
        if ( v13 )
        {
          if ( v10->NestingLevel <= 1u )
          {
            v14 = v13[6] - 1;
            v13[6] = v14;
            if ( !v14 )
              KiRemoveSystemWorkPriorityKick(v10);
          }
        }
        do
          KeYieldProcessorEx(&v23, v7, v8, v9);
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
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v16);
      LOBYTE(v17) = CurrentIrql;
      v5 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v17) == 0;
    }
    else
    {
      v5 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v5 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v18 = KeGetCurrentPrcb();
          v19 = v18->SchedulerAssist;
          v5 = (v19[5] & 0xFFFF0003) == 0;
          v19[5] &= 0xFFFF0003;
          if ( v5 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v20 = KeGetCurrentPrcb();
      v21 = v20->SchedulerAssist;
      v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v5 = (v22 & v21[5]) == 0;
      v21[5] &= v22;
      if ( v5 )
        KiRemoveSystemWorkPriorityKick(v20);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
