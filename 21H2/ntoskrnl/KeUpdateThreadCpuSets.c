/*
 * XREFs of KeUpdateThreadCpuSets @ 0x1403C60DC
 * Callers:
 *     NtSetInformationThread @ 0x1406FCE80 (NtSetInformationThread.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022E080 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x140230D60 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x14024A750 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiQueueReadyThread @ 0x1402593B0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140293E54 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140347C50 (KiAbProcessContextSwitch.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1403C61EC (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406470 (KiSwapContext.c)
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
  __int64 v17; // r9
  __int64 v18; // r8
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  int v24; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v25; // [rsp+60h] [rbp+18h] BYREF

  v25 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KiUpdateThreadCpuSetAffinitiesFromDpcLevel(a1, &v25);
  CurrentPrcb = KeGetCurrentPrcb();
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v25);
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
      v24 = 0;
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
          KeYieldProcessorEx(&v24, v7, v8, v9);
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
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v16, v17);
      LOBYTE(v18) = CurrentIrql;
      v5 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v18) == 0;
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
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v5 = (v20[5] & 0xFFFF0003) == 0;
          v20[5] &= 0xFFFF0003;
          if ( v5 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v5 = (v23 & v22[5]) == 0;
      v22[5] &= v23;
      if ( v5 )
        KiRemoveSystemWorkPriorityKick(v21);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
