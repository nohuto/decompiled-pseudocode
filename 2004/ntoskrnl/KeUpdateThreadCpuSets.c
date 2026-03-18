/*
 * XREFs of KeUpdateThreadCpuSets @ 0x1403C2F7C
 * Callers:
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     KiRequestSoftwareInterrupt @ 0x140273DA8 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x1402EB520 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1403C308C (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FDDE0 (KiSwapContext.c)
 */

unsigned __int8 __fastcall KeUpdateThreadCpuSets(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int8 result; // al
  ULONG_PTR CurrentThread; // rsi
  bool v7; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KPRCB *v12; // rdi
  _DWORD *v13; // rcx
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // eax
  _KTHREAD *NextThread; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  int v26; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v27; // [rsp+60h] [rbp+18h] BYREF

  v27 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KiUpdateThreadCpuSetAffinitiesFromDpcLevel(a1, &v27);
  CurrentPrcb = KeGetCurrentPrcb();
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v27, v3, v4);
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
      v12 = KeGetCurrentPrcb();
      v26 = 0;
      while ( 1 )
      {
        v13 = v12->SchedulerAssist;
        if ( v13 )
        {
          if ( v12->NestingLevel <= 1u )
          {
            v14 = v13[6];
            v13[6] = v14 + 1;
            if ( v14 == -1 )
              KiRemoveSystemWorkPriorityKick(v12);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v15 = v12->SchedulerAssist;
        if ( v15 )
        {
          if ( v12->NestingLevel <= 1u )
          {
            v16 = v15[6] - 1;
            v15[6] = v16;
            if ( !v16 )
              KiRemoveSystemWorkPriorityKick(v12);
          }
        }
        do
          KeYieldProcessorEx(&v26, v9, v10, v11);
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
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v18, v19);
      LOBYTE(v20) = CurrentIrql;
      v7 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v20) == 0;
    }
    else
    {
      v7 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v7 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          v7 = (v22[5] & 0xFFFF0003) == 0;
          v22[5] &= 0xFFFF0003;
          if ( v7 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v23 = KeGetCurrentPrcb();
      v24 = v23->SchedulerAssist;
      v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v7 = (v25 & v24[5]) == 0;
      v24[5] &= v25;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick(v23);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
