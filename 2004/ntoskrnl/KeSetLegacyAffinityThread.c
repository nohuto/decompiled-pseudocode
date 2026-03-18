/*
 * XREFs of KeSetLegacyAffinityThread @ 0x14030B910
 * Callers:
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140224840 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRequestSoftwareInterrupt @ 0x140273DA8 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x1402EB520 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiSetAffinityThread @ 0x14030BB20 (KiSetAffinityThread.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FDDE0 (KiSwapContext.c)
 */

__int64 __fastcall KeSetLegacyAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG_PTR CurrentThread; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KPRCB *v16; // rdi
  _DWORD *v17; // rcx
  _KTHREAD *NextThread; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  _DWORD *v22; // rcx
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  int v25; // eax
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  bool v28; // zf
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  int v32; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v33; // [rsp+28h] [rbp-60h] BYREF
  __int128 v34; // [rsp+30h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 544);
  v3 = 0LL;
  if ( !a2 )
    return v3;
  v33 = 0LL;
  v34 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  WORD4(v34) = *(_WORD *)(a1 + 560);
  v8 = qword_140CFC848[WORD4(v34)] & a2;
  if ( v8 && (v8 & *(_QWORD *)(v2 + 8LL * WORD4(v34) + 88)) == v8 )
  {
    v3 = *(_QWORD *)(a1 + 552);
    *(_QWORD *)&v34 = v8;
    KiSetAffinityThread(a1, &v33, &v34);
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  KiReadyDeferredReadyList((__int64)CurrentPrcb, &v33, v9, v10);
  if ( CurrentIrql < 2u )
  {
    CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v16 = KeGetCurrentPrcb();
      v32 = 0;
      while ( 1 )
      {
        v17 = v16->SchedulerAssist;
        if ( v17 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v24 = v17[6];
            v17[6] = v24 + 1;
            if ( v24 == -1 )
              KiRemoveSystemWorkPriorityKick(v16);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v22 = v16->SchedulerAssist;
        if ( v22 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v25 = v22[6] - 1;
            v22[6] = v25;
            if ( !v25 )
              KiRemoveSystemWorkPriorityKick(v16);
          }
        }
        do
          KeYieldProcessorEx(&v32, v13, v14, v15);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v19 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v19 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v19, v20);
      LOBYTE(v21) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v21) )
        goto LABEL_9;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
        goto LABEL_39;
    }
    else
    {
      if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
        goto LABEL_9;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
      {
LABEL_39:
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0LL, 0LL);
LABEL_9:
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v29 = KeGetCurrentPrcb();
            v30 = v29->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v28 = (v31 & v30[5]) == 0;
            v30[5] &= v31;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick(v29);
          }
        }
        __writecr8(CurrentIrql);
        return v3;
      }
    }
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v26 = KeGetCurrentPrcb();
      v27 = v26->SchedulerAssist;
      v28 = (v27[5] & 0xFFFF0003) == 0;
      v27[5] &= 0xFFFF0003;
      if ( v28 )
        KiRemoveSystemWorkPriorityKick(v26);
    }
    goto LABEL_39;
  }
  if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  return v3;
}
