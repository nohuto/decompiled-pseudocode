/*
 * XREFs of KeSetLegacyAffinityThread @ 0x14029DE40
 * Callers:
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiSetAffinityThread @ 0x14029D724 (KiSetAffinityThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140327620 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406650 (KiSwapContext.c)
 */

__int64 __fastcall KeSetLegacyAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // rdi
  ULONG_PTR CurrentThread; // rsi
  struct _KPRCB *v11; // rdi
  _DWORD *v12; // rcx
  _KTHREAD *NextThread; // rdi
  __int64 v14; // r8
  __int64 v15; // r8
  _DWORD *v16; // rcx
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  int v19; // eax
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  bool v22; // zf
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  int v26; // [rsp+20h] [rbp-68h] BYREF
  __int64 v27; // [rsp+28h] [rbp-60h] BYREF
  __int128 v28; // [rsp+30h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 544);
  v3 = 0LL;
  if ( !a2 )
    return v3;
  v27 = 0LL;
  v28 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  WORD4(v28) = *(_WORD *)(a1 + 560);
  v8 = qword_140CFC848[WORD4(v28)] & a2;
  if ( v8 && (v8 & *(_QWORD *)(v2 + 8LL * WORD4(v28) + 88)) == v8 )
  {
    v3 = *(_QWORD *)(a1 + 552);
    *(_QWORD *)&v28 = v8;
    KiSetAffinityThread(a1, (__int64)&v27, &v28);
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  KiReadyDeferredReadyList(CurrentPrcb, &v27);
  if ( CurrentIrql < 2u )
  {
    CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v11 = KeGetCurrentPrcb();
      v26 = 0;
      while ( 1 )
      {
        v12 = v11->SchedulerAssist;
        if ( v12 )
        {
          if ( v11->NestingLevel <= 1u )
          {
            v18 = v12[6];
            v12[6] = v18 + 1;
            if ( v18 == -1 )
              KiRemoveSystemWorkPriorityKick(v11);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v16 = v11->SchedulerAssist;
        if ( v16 )
        {
          if ( v11->NestingLevel <= 1u )
          {
            v19 = v16[6] - 1;
            v16[6] = v19;
            if ( !v19 )
              KiRemoveSystemWorkPriorityKick(v11);
          }
        }
        do
          KeYieldProcessorEx(&v26);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v14 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v14 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v14);
      LOBYTE(v15) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v15) )
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
        KiDeliverApc(0LL, 0LL, 0LL);
LABEL_9:
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v23 = KeGetCurrentPrcb();
            v24 = v23->SchedulerAssist;
            v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v22 = (v25 & v24[5]) == 0;
            v24[5] &= v25;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
        __writecr8(CurrentIrql);
        return v3;
      }
    }
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v20 = KeGetCurrentPrcb();
      v21 = v20->SchedulerAssist;
      v22 = (v21[5] & 0xFFFF0003) == 0;
      v21[5] &= 0xFFFF0003;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick(v20);
    }
    goto LABEL_39;
  }
  if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  return v3;
}
