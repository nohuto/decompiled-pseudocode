/*
 * XREFs of KeSetLegacyAffinityThread @ 0x1402F77F0
 * Callers:
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402971C0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiReadyDeferredReadyList @ 0x1402BE7C0 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1402DAAA0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiSetAffinityThread @ 0x1402F7A00 (KiSetAffinityThread.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F7EF4 (KiRequestSoftwareInterrupt.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140403E60 (KiSwapContext.c)
 */

__int64 __fastcall KeSetLegacyAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // rdi
  ULONG_PTR CurrentThread; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KPRCB *v14; // rdi
  _DWORD *v15; // rcx
  _KTHREAD *NextThread; // rdi
  __int64 v17; // r8
  __int64 v18; // r8
  _DWORD *v19; // rcx
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  int v22; // eax
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  bool v25; // zf
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  int v29; // [rsp+20h] [rbp-68h] BYREF
  _SINGLE_LIST_ENTRY v30; // [rsp+28h] [rbp-60h] BYREF
  __int128 v31; // [rsp+30h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 544);
  v3 = 0LL;
  if ( !a2 )
    return v3;
  v30.Next = 0LL;
  v31 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  WORD4(v31) = *(_WORD *)(a1 + 560);
  v8 = qword_140CFC848[WORD4(v31)] & a2;
  if ( v8 && (v8 & *(_QWORD *)(v2 + 8LL * WORD4(v31) + 88)) == v8 )
  {
    v3 = *(_QWORD *)(a1 + 552);
    *(_QWORD *)&v31 = v8;
    KiSetAffinityThread(a1, &v30, &v31);
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  KiReadyDeferredReadyList((__int64)CurrentPrcb, &v30);
  if ( CurrentIrql < 2u )
  {
    CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v14 = KeGetCurrentPrcb();
      v29 = 0;
      while ( 1 )
      {
        v15 = v14->SchedulerAssist;
        if ( v15 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v21 = v15[6];
            v15[6] = v21 + 1;
            if ( v21 == -1 )
              KiRemoveSystemWorkPriorityKick(v14);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v19 = v14->SchedulerAssist;
        if ( v19 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v22 = v19[6] - 1;
            v19[6] = v22;
            if ( !v22 )
              KiRemoveSystemWorkPriorityKick(v14);
          }
        }
        do
          KeYieldProcessorEx(&v29, v11, v12, v13);
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
        v17 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v17 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v17);
      LOBYTE(v18) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v18) )
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
        KiDeliverApc(0, 0, 0LL);
LABEL_9:
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v26 = KeGetCurrentPrcb();
            v27 = v26->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v25 = (v28 & v27[5]) == 0;
            v27[5] &= v28;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
        __writecr8(CurrentIrql);
        return v3;
      }
    }
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v23 = KeGetCurrentPrcb();
      v24 = v23->SchedulerAssist;
      v25 = (v24[5] & 0xFFFF0003) == 0;
      v24[5] &= 0xFFFF0003;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(v23);
    }
    goto LABEL_39;
  }
  if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    KiRequestSoftwareInterrupt(CurrentPrcb, 2LL);
  return v3;
}
