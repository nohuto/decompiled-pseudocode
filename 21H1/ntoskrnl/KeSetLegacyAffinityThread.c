/*
 * XREFs of KeSetLegacyAffinityThread @ 0x1402C9F30
 * Callers:
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14027D890 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiSetAffinityThread @ 0x1402CA140 (KiSetAffinityThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140330660 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140359A48 (KiRequestSoftwareInterrupt.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
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
  _DWORD *v11; // r9
  _KTHREAD *CurrentThread; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KPRCB *v17; // rdi
  _DWORD *v18; // rcx
  _KTHREAD *NextThread; // rdi
  __int64 v20; // r8
  _DWORD *v21; // rcx
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  int v24; // eax
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  bool v27; // zf
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  int v31; // [rsp+20h] [rbp-68h] BYREF
  __int64 v32; // [rsp+28h] [rbp-60h] BYREF
  __int128 v33; // [rsp+30h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 544);
  v3 = 0LL;
  if ( !a2 )
    return v3;
  v32 = 0LL;
  v33 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  WORD4(v33) = *(_WORD *)(a1 + 560);
  v8 = qword_140CFC838[WORD4(v33)] & a2;
  if ( v8 && (v8 & *(_QWORD *)(v2 + 8LL * WORD4(v33) + 88)) == v8 )
  {
    v3 = *(_QWORD *)(a1 + 552);
    *(_QWORD *)&v33 = v8;
    KiSetAffinityThread(a1, &v32, &v33);
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  KiReadyDeferredReadyList((__int64)CurrentPrcb, &v32, v9, v10);
  if ( CurrentIrql < 2u )
  {
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v17 = KeGetCurrentPrcb();
      v31 = 0;
      while ( 1 )
      {
        v18 = v17->SchedulerAssist;
        if ( v18 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v23 = v18[6];
            v18[6] = v23 + 1;
            if ( v23 == -1 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v21 = v17->SchedulerAssist;
        if ( v21 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v24 = v21[6] - 1;
            v21[6] = v24;
            if ( !v24 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
        do
          KeYieldProcessorEx(&v31, v14, v15, v16);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      CurrentThread->WaitReason = 32;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      LOBYTE(v20) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v20) )
        goto LABEL_9;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
        goto LABEL_39;
    }
    else
    {
      if ( (CurrentThread->MiscFlags & 0x40) == 0 )
        goto LABEL_9;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
      {
LABEL_39:
        __writecr8(1uLL);
        CurrentThread->MiscFlags &= ~0x40u;
        KiDeliverApc(0, 0LL, 0LL, v11);
LABEL_9:
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v28 = KeGetCurrentPrcb();
            v29 = v28->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v27 = (v30 & v29[5]) == 0;
            v29[5] &= v30;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
        __writecr8(CurrentIrql);
        return v3;
      }
    }
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v25 = KeGetCurrentPrcb();
      v26 = v25->SchedulerAssist;
      v27 = (v26[5] & 0xFFFF0003) == 0;
      v26[5] &= 0xFFFF0003;
      if ( v27 )
        KiRemoveSystemWorkPriorityKick(v25);
    }
    goto LABEL_39;
  }
  if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    KiRequestSoftwareInterrupt(CurrentPrcb, 2LL);
  return v3;
}
