/*
 * XREFs of KiSchedulerApc @ 0x140267BA0
 * Callers:
 *     <none>
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiIsProcessTerminationRequested @ 0x14023C3E0 (KiIsProcessTerminationRequested.c)
 *     KiRemoveQueueApc @ 0x1402433A4 (KiRemoveQueueApc.c)
 *     KiSignalThreadForApc @ 0x140268660 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1402687E4 (KiInsertQueueApc.c)
 *     KiSetProcessorIdle @ 0x14027878C (KiSetProcessorIdle.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14027AF28 (KiCheckForMaxOverQuotaScb.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiSelectReadyThreadEx @ 0x1402D4710 (KiSelectReadyThreadEx.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x1402F1CA0 (KiIsThreadRankNonZero.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406650 (KiSwapContext.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiSetSchedulerAssistPriority @ 0x140520B94 (KiSetSchedulerAssistPriority.c)
 *     DbgkForwardException @ 0x1407323B0 (DbgkForwardException.c)
 *     KiResumeUmsThread @ 0x1408BD9D0 (KiResumeUmsThread.c)
 *     KiSuspendUmsThread @ 0x1408BDA28 (KiSuspendUmsThread.c)
 */

NTSTATUS __fastcall KiSchedulerApc(__int64 a1)
{
  NTSTATUS result; // eax
  int v3; // r14d
  int v4; // r14d
  char v5; // r12
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v8; // rcx
  __int64 NextThread; // rbx
  __int64 v10; // rcx
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  char v13; // r14
  struct _KPRCB *v14; // r15
  _DWORD *v15; // rcx
  bool v16; // zf
  __int64 v17; // r8
  char v18; // cl
  KPROCESSOR_MODE v19; // si
  __int64 v20; // rax
  __int16 v21; // si
  bool v22; // bl
  char IsThreadRankNonZero; // al
  _DWORD *v24; // rcx
  _DWORD *v25; // rcx
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  unsigned __int8 v37; // r14
  _DWORD *v38; // r9
  struct _KPRCB *v39; // rbx
  _DWORD *v40; // rcx
  int v41; // eax
  _DWORD *v42; // rcx
  int v43; // eax
  char v44; // bl
  char v45; // al
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  unsigned __int8 v50; // si
  _DWORD *v51; // r9
  struct _KPRCB *v52; // rbx
  _DWORD *v53; // rcx
  int v54; // eax
  _DWORD *v55; // rcx
  int v56; // eax
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r10
  _DWORD *v59; // r9
  int v60; // eax
  __int64 v61; // rdx
  _DWORD *v62; // r8
  int v63; // eax
  int v64; // eax
  int v65; // [rsp+38h] [rbp-99h]
  int v66; // [rsp+3Ch] [rbp-95h] BYREF
  int v67; // [rsp+40h] [rbp-91h] BYREF
  int v68; // [rsp+44h] [rbp-8Dh] BYREF
  int v69; // [rsp+48h] [rbp-89h] BYREF
  int v70; // [rsp+4Ch] [rbp-85h] BYREF
  int v71; // [rsp+50h] [rbp-81h] BYREF
  _DWORD v72[40]; // [rsp+58h] [rbp-79h] BYREF

  result = (unsigned int)memset(v72, 0, 0x98uLL);
  v3 = *(_DWORD *)(a1 + 120);
  v67 = 0;
  v4 = v3 & 0x8000;
  v66 = 0;
  v5 = 1;
  v65 = v4;
  if ( (*(_DWORD *)(a1 + 120) & 0x400) != 0 && !v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xAu);
    KiAbProcessContextSwitch(a1, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v68 = 0;
    while ( 1 )
    {
      v8 = CurrentPrcb->SchedulerAssist;
      if ( v8 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v27 = v8[6];
          v8[6] = v27 + 1;
          if ( v27 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      v24 = CurrentPrcb->SchedulerAssist;
      if ( v24 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v28 = v24[6] - 1;
          v24[6] = v28;
          if ( !v28 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v68);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = (__int64)CurrentPrcb->NextThread;
    if ( NextThread
      || (NextThread = KiSelectReadyThreadEx(CurrentPrcb, a1)) != 0
      || (*(_DWORD *)(a1 + 120) & 0x200) == 0
      && (v10 = *(_QWORD *)(a1 + 104)) != 0
      && CurrentPrcb->ScbOffset + v10
      && (unsigned __int8)KiCheckForMaxOverQuotaScb()
      && (NextThread = (__int64)CurrentPrcb->IdleThread, KiSetProcessorIdle(CurrentPrcb, 1LL, 1LL), NextThread) )
    {
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(CurrentPrcb, a1, 0LL);
      _enable();
      if ( (*(_BYTE *)(NextThread + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, CurrentPrcb), v18 = 1, !IsThreadRankNonZero) )
      {
        v18 = *(_BYTE *)(NextThread + 195);
      }
      *CurrentPrcb->PriorityState = v18;
      if ( CurrentPrcb->SchedulerAssist )
      {
        v30 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( (_KTHREAD *)NextThread != CurrentPrcb->IdleThread )
          v30 = (unsigned int)v18;
        KiSetSchedulerAssistPriority(CurrentPrcb->SchedulerAssist, v30, 0LL);
      }
      CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(a1 + 643) = 38;
      *(_BYTE *)(a1 + 390) = 0;
      KiQueueReadyThread(CurrentPrcb, a1);
      if ( (unsigned __int8)KiSwapContext(a1, NextThread, 0LL) )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v31 = KeGetCurrentPrcb();
            v32 = v31->SchedulerAssist;
            v16 = (v32[5] & 0xFFFF0003) == 0;
            v32[5] &= 0xFFFF0003;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v31);
          }
        }
        __writecr8(1uLL);
        *(_DWORD *)(a1 + 116) &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
      v11 = KeGetCurrentPrcb();
      v12 = v11->SchedulerAssist;
      if ( v12 )
      {
        if ( v11->NestingLevel <= 1u )
        {
          v29 = v12[6] - 1;
          v12[6] = v29;
          if ( !v29 )
            KiRemoveSystemWorkPriorityKick(v11);
        }
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v33 = KeGetCurrentIrql();
        if ( v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
        {
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v16 = (v36 & v35[5]) == 0;
          v35[5] &= v36;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    v4 = v65;
  }
  if ( !*(_DWORD *)(a1 + 740) && !v4 )
  {
    if ( (*(_BYTE *)(a1 + 3) & 0x40) != 0 )
      KiSuspendUmsThread(a1, &v66);
    else
      v5 = 0;
    v19 = (*(_DWORD *)(a1 + 116) & 0x40000) != 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x40000) == 0 )
    {
      v20 = *(_QWORD *)(a1 + 144);
      if ( v20 )
      {
        --*(_WORD *)(a1 + 486);
        v21 = *(_WORD *)(v20 + 368);
        KiLeaveGuardedRegionUnsafe(a1);
        v19 = v21 & 1;
      }
    }
    v22 = (*(_BYTE *)(a1 + 194) & 2) != 0;
    if ( (*(_BYTE *)(a1 + 194) & 2) != 0 )
    {
      v37 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v37 <= 0xFu )
      {
        v38 = KeGetCurrentPrcb()->SchedulerAssist;
        v38[5] |= (-1 << (v37 + 1)) & 4;
      }
      v39 = KeGetCurrentPrcb();
      v69 = 0;
      while ( 1 )
      {
        v40 = v39->SchedulerAssist;
        if ( v40 )
        {
          if ( v39->NestingLevel <= 1u )
          {
            v41 = v40[6];
            v40[6] = v41 + 1;
            if ( v41 == -1 )
              KiRemoveSystemWorkPriorityKick(v39);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        v42 = v39->SchedulerAssist;
        if ( v42 )
        {
          if ( v39->NestingLevel <= 1u )
          {
            v43 = v42[6] - 1;
            v42[6] = v43;
            if ( !v43 )
              KiRemoveSystemWorkPriorityKick(v39);
          }
        }
        do
          KeYieldProcessorEx(&v69);
        while ( *(_QWORD *)(a1 + 64) );
      }
      v44 = *(_BYTE *)(a1 + 194);
      v45 = v44 & 0xFD;
      v22 = (v44 & 2) != 0;
      *(_BYTE *)(a1 + 194) = v45;
      KiReleaseThreadLockSafe(a1);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v46 = KeGetCurrentIrql();
          if ( v46 <= 0xFu && v37 <= 0xFu && v46 >= 2u )
          {
            v47 = KeGetCurrentPrcb();
            v48 = v47->SchedulerAssist;
            v49 = ~(unsigned __int16)(-1LL << (v37 + 1));
            v16 = (v49 & v48[5]) == 0;
            v48[5] &= v49;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v47);
          }
        }
      }
      __writecr8(v37);
      v4 = v65;
    }
    *(_DWORD *)(a1 + 116) |= 0x80000u;
    result = KeWaitForSingleObject((PVOID)(a1 + 736), Suspended, v19, 0, 0LL);
    *(_DWORD *)(a1 + 116) &= ~0x80000u;
    if ( v22 )
    {
      v50 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v50 <= 0xFu )
      {
        v51 = KeGetCurrentPrcb()->SchedulerAssist;
        v51[5] |= (-1 << (v50 + 1)) & 4;
      }
      v52 = KeGetCurrentPrcb();
      v70 = 0;
      while ( 1 )
      {
        v53 = v52->SchedulerAssist;
        if ( v53 )
        {
          if ( v52->NestingLevel <= 1u )
          {
            v54 = v53[6];
            v53[6] = v54 + 1;
            if ( v54 == -1 )
              KiRemoveSystemWorkPriorityKick(v52);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        v55 = v52->SchedulerAssist;
        if ( v55 )
        {
          if ( v52->NestingLevel <= 1u )
          {
            v56 = v55[6] - 1;
            v55[6] = v56;
            if ( !v56 )
              KiRemoveSystemWorkPriorityKick(v52);
          }
        }
        do
          KeYieldProcessorEx(&v70);
        while ( *(_QWORD *)(a1 + 64) );
      }
      if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
        *(_BYTE *)(a1 + 194) |= 2u;
      KiReleaseThreadLockSafe(a1);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v57 = KeGetCurrentIrql();
          if ( v57 <= 0xFu && v50 <= 0xFu && v57 >= 2u )
          {
            v58 = KeGetCurrentPrcb();
            v59 = v58->SchedulerAssist;
            v60 = ~(unsigned __int16)(-1LL << (v50 + 1));
            v16 = (v60 & v59[5]) == 0;
            v59[5] &= v60;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v58);
          }
        }
      }
      result = v50;
      __writecr8(v50);
    }
    if ( v5 )
      result = KiResumeUmsThread(a1, &v66);
  }
  *(_DWORD *)(a1 + 116) &= ~0x40000u;
  if ( v4 )
  {
    if ( KiIsProcessTerminationRequested(a1, &v67) )
    {
      memset(&v72[2], 0, 0x90uLL);
      v72[0] = v67;
      LOBYTE(v61) = 1;
      v72[1] = 1;
      DbgkForwardException(v72, v61);
      DbgkForwardException(v72, 0LL);
    }
    v13 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v13 <= 0xFu )
    {
      v62 = KeGetCurrentPrcb()->SchedulerAssist;
      v62[5] |= (-1 << (v13 + 1)) & 4;
    }
    v14 = KeGetCurrentPrcb();
    v71 = 0;
    while ( 1 )
    {
      v15 = v14->SchedulerAssist;
      if ( v15 )
      {
        if ( v14->NestingLevel <= 1u )
        {
          v63 = v15[6];
          v15[6] = v63 + 1;
          if ( v63 == -1 )
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v25 = v14->SchedulerAssist;
      if ( v25 )
      {
        if ( v14->NestingLevel <= 1u )
        {
          v64 = v25[6] - 1;
          v25[6] = v64;
          if ( !v64 )
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
      do
        KeYieldProcessorEx(&v71);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      v16 = *(_BYTE *)(a1 + 730) == 0;
      *(_QWORD *)(a1 + 680) = KiSchedulerApcTerminate;
      *(_BYTE *)(a1 + 729) = 1;
      if ( !v16 )
        KiRemoveQueueApc(a1 + 648);
      *(_BYTE *)(a1 + 730) = 1;
      KiInsertQueueApc(a1 + 648);
      LOBYTE(v17) = v13;
      KiSignalThreadForApc(v14, a1 + 648, v17);
    }
    KiReleaseThreadLockSafe(a1);
    return KiExitDispatcher((_DWORD)v14, 0, 1, 0, v13);
  }
  return result;
}
