/*
 * XREFs of KiSchedulerApc @ 0x140279C00
 * Callers:
 *     <none>
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022E080 (KiEndThreadCycleAccumulation.c)
 *     KiSelectReadyThreadEx @ 0x14022FEC0 (KiSelectReadyThreadEx.c)
 *     KiDeliverApc @ 0x14024A750 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x14024D450 (KiIsThreadRankNonZero.c)
 *     KiSetProcessorIdle @ 0x14025721C (KiSetProcessorIdle.c)
 *     KiQueueReadyThread @ 0x1402593B0 (KiQueueReadyThread.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1402599B8 (KiCheckForMaxOverQuotaScb.c)
 *     KiSignalThreadForApc @ 0x14027A6C0 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x14027A844 (KiInsertQueueApc.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     KiIsProcessTerminationRequested @ 0x1402BDDA0 (KiIsProcessTerminationRequested.c)
 *     KiRemoveQueueApc @ 0x1402C4E24 (KiRemoveQueueApc.c)
 *     KiExitDispatcher @ 0x140343AC0 (KiExitDispatcher.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     KiAbProcessContextSwitch @ 0x140347C50 (KiAbProcessContextSwitch.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406470 (KiSwapContext.c)
 *     memset @ 0x140414200 (memset.c)
 *     KiSetSchedulerAssistPriority @ 0x140520954 (KiSetSchedulerAssistPriority.c)
 *     DbgkForwardException @ 0x1407321F0 (DbgkForwardException.c)
 *     KiResumeUmsThread @ 0x1408BD870 (KiResumeUmsThread.c)
 *     KiSuspendUmsThread @ 0x1408BD8C8 (KiSuspendUmsThread.c)
 */

NTSTATUS __fastcall KiSchedulerApc(ULONG_PTR a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  _DWORD *v5; // r9
  int v6; // r14d
  int v7; // r14d
  char v8; // r12
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v14; // rcx
  __int64 NextThread; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct _KPRCB *v18; // rcx
  __int64 v19; // rdx
  _DWORD *v20; // r8
  __int64 v21; // r9
  char v22; // r14
  struct _KPRCB *v23; // r15
  _DWORD *v24; // rcx
  bool v25; // zf
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // cl
  KPROCESSOR_MODE v30; // si
  __int64 v31; // rax
  __int16 v32; // si
  bool v33; // bl
  __int64 v34; // rdx
  __int64 v35; // r8
  _DWORD *v36; // r9
  bool IsThreadRankNonZero; // al
  _DWORD *v38; // rcx
  _DWORD *v39; // rcx
  _DWORD *SchedulerAssist; // r9
  int v41; // eax
  int v42; // eax
  int v43; // eax
  __int64 v44; // rdx
  struct _KPRCB *v45; // rcx
  _DWORD *v46; // rdx
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  int v49; // eax
  unsigned __int8 v50; // r14
  struct _KPRCB *v51; // rbx
  _DWORD *v52; // rcx
  int v53; // eax
  _DWORD *v54; // rcx
  int v55; // eax
  char v56; // bl
  char v57; // al
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // eax
  unsigned __int8 v62; // si
  struct _KPRCB *v63; // rbx
  _DWORD *v64; // rcx
  int v65; // eax
  _DWORD *v66; // rcx
  int v67; // eax
  unsigned __int8 v68; // al
  struct _KPRCB *v69; // r10
  _DWORD *v70; // r9
  int v71; // eax
  __int64 v72; // rdx
  int v73; // eax
  int v74; // eax
  int v75; // [rsp+38h] [rbp-99h]
  int v76; // [rsp+3Ch] [rbp-95h] BYREF
  int v77; // [rsp+40h] [rbp-91h] BYREF
  int v78; // [rsp+44h] [rbp-8Dh] BYREF
  int v79; // [rsp+48h] [rbp-89h] BYREF
  int v80; // [rsp+4Ch] [rbp-85h] BYREF
  int v81; // [rsp+50h] [rbp-81h] BYREF
  _DWORD v82[40]; // [rsp+58h] [rbp-79h] BYREF

  result = (unsigned int)memset(v82, 0, 0x98uLL);
  v6 = *(_DWORD *)(a1 + 120);
  v77 = 0;
  v7 = v6 & 0x8000;
  v76 = 0;
  v8 = 1;
  v75 = v7;
  if ( (*(_DWORD *)(a1 + 120) & 0x400) != 0 && !v7 )
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
    v78 = 0;
    while ( 1 )
    {
      v14 = CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v41 = v14[6];
          v14[6] = v41 + 1;
          if ( v41 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      v38 = CurrentPrcb->SchedulerAssist;
      if ( v38 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v42 = v38[6] - 1;
          v38[6] = v42;
          if ( !v42 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v78, v10, v11, v12);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = (__int64)CurrentPrcb->NextThread;
    if ( NextThread
      || (NextThread = KiSelectReadyThreadEx(CurrentPrcb, (_KTHREAD *)a1, 0)) != 0
      || (*(_DWORD *)(a1 + 120) & 0x200) == 0
      && (v16 = *(_QWORD *)(a1 + 104)) != 0
      && (v17 = CurrentPrcb->ScbOffset + v16) != 0
      && KiCheckForMaxOverQuotaScb(v17)
      && (NextThread = (__int64)CurrentPrcb->IdleThread, KiSetProcessorIdle((__int64)CurrentPrcb, 1, 1), NextThread) )
    {
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0LL);
      _enable();
      if ( (*(_BYTE *)(NextThread + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, CurrentPrcb), v29 = 1, !IsThreadRankNonZero) )
      {
        v29 = *(_BYTE *)(NextThread + 195);
      }
      *CurrentPrcb->PriorityState = v29;
      if ( CurrentPrcb->SchedulerAssist )
      {
        v44 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( (_KTHREAD *)NextThread != CurrentPrcb->IdleThread )
          v44 = (unsigned int)v29;
        KiSetSchedulerAssistPriority(CurrentPrcb->SchedulerAssist, v44, 0LL);
      }
      CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(a1 + 643) = 38;
      *(_BYTE *)(a1 + 390) = 0;
      KiQueueReadyThread((__int64)CurrentPrcb, a1, v27, v28);
      if ( (unsigned __int8)KiSwapContext(a1, NextThread, 0LL) )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v45 = KeGetCurrentPrcb();
            v46 = v45->SchedulerAssist;
            v25 = (v46[5] & 0xFFFF0003) == 0;
            v46[5] &= 0xFFFF0003;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(v45);
          }
        }
        __writecr8(1uLL);
        *(_DWORD *)(a1 + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
      v18 = KeGetCurrentPrcb();
      v3 = (__int64)v18->SchedulerAssist;
      if ( v3 )
      {
        if ( v18->NestingLevel <= 1u )
        {
          v43 = *(_DWORD *)(v3 + 24) - 1;
          *(_DWORD *)(v3 + 24) = v43;
          if ( !v43 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v47 = KeGetCurrentIrql();
        if ( v47 <= 0xFu && CurrentIrql <= 0xFu && v47 >= 2u )
        {
          v48 = KeGetCurrentPrcb();
          v3 = -1LL << (CurrentIrql + 1);
          v5 = v48->SchedulerAssist;
          v49 = ~(unsigned __int16)v3;
          v25 = (v49 & v5[5]) == 0;
          v4 = (unsigned int)v49 & v5[5];
          v5[5] = v4;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v48);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    v7 = v75;
  }
  if ( !*(_DWORD *)(a1 + 740) && !v7 )
  {
    if ( (*(_BYTE *)(a1 + 3) & 0x40) != 0 )
      KiSuspendUmsThread(a1, &v76);
    else
      v8 = 0;
    v30 = (*(_DWORD *)(a1 + 116) & 0x40000) != 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x40000) == 0 )
    {
      v31 = *(_QWORD *)(a1 + 144);
      if ( v31 )
      {
        --*(_WORD *)(a1 + 486);
        v32 = *(_WORD *)(v31 + 368);
        KiLeaveGuardedRegionUnsafe(a1);
        v30 = v32 & 1;
      }
    }
    v33 = (*(_BYTE *)(a1 + 194) & 2) != 0;
    if ( (*(_BYTE *)(a1 + 194) & 2) != 0 )
    {
      v50 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v50 <= 0xFu )
      {
        v5 = KeGetCurrentPrcb()->SchedulerAssist;
        v3 = (-1LL << (v50 + 1)) & 4;
        v4 = (unsigned int)v3 | v5[5];
        v5[5] = v4;
      }
      v51 = KeGetCurrentPrcb();
      v79 = 0;
      while ( 1 )
      {
        v52 = v51->SchedulerAssist;
        if ( v52 )
        {
          if ( v51->NestingLevel <= 1u )
          {
            v53 = v52[6];
            v52[6] = v53 + 1;
            if ( v53 == -1 )
              KiRemoveSystemWorkPriorityKick(v51);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        v54 = v51->SchedulerAssist;
        if ( v54 )
        {
          if ( v51->NestingLevel <= 1u )
          {
            v55 = v54[6] - 1;
            v54[6] = v55;
            if ( !v55 )
              KiRemoveSystemWorkPriorityKick(v51);
          }
        }
        do
          KeYieldProcessorEx(&v79, v3, v4, (__int64)v5);
        while ( *(_QWORD *)(a1 + 64) );
      }
      v56 = *(_BYTE *)(a1 + 194);
      v57 = v56 & 0xFD;
      v33 = (v56 & 2) != 0;
      *(_BYTE *)(a1 + 194) = v57;
      KiReleaseThreadLockSafe(a1);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v58 = KeGetCurrentIrql();
          if ( v58 <= 0xFu && v50 <= 0xFu && v58 >= 2u )
          {
            v59 = KeGetCurrentPrcb();
            v60 = v59->SchedulerAssist;
            v61 = ~(unsigned __int16)(-1LL << (v50 + 1));
            v25 = (v61 & v60[5]) == 0;
            v60[5] &= v61;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(v59);
          }
        }
      }
      __writecr8(v50);
      v7 = v75;
    }
    *(_DWORD *)(a1 + 116) |= 0x80000u;
    result = KeWaitForSingleObject((PVOID)(a1 + 736), Suspended, v30, 0, 0LL);
    *(_DWORD *)(a1 + 116) &= ~0x80000u;
    if ( v33 )
    {
      v62 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v62 <= 0xFu )
      {
        v36 = KeGetCurrentPrcb()->SchedulerAssist;
        v34 = (-1LL << (v62 + 1)) & 4;
        v35 = (unsigned int)v34 | v36[5];
        v36[5] = v35;
      }
      v63 = KeGetCurrentPrcb();
      v80 = 0;
      while ( 1 )
      {
        v64 = v63->SchedulerAssist;
        if ( v64 )
        {
          if ( v63->NestingLevel <= 1u )
          {
            v65 = v64[6];
            v64[6] = v65 + 1;
            if ( v65 == -1 )
              KiRemoveSystemWorkPriorityKick(v63);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        v66 = v63->SchedulerAssist;
        if ( v66 )
        {
          if ( v63->NestingLevel <= 1u )
          {
            v67 = v66[6] - 1;
            v66[6] = v67;
            if ( !v67 )
              KiRemoveSystemWorkPriorityKick(v63);
          }
        }
        do
          KeYieldProcessorEx(&v80, v34, v35, (__int64)v36);
        while ( *(_QWORD *)(a1 + 64) );
      }
      if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
        *(_BYTE *)(a1 + 194) |= 2u;
      KiReleaseThreadLockSafe(a1);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v68 = KeGetCurrentIrql();
          if ( v68 <= 0xFu && v62 <= 0xFu && v68 >= 2u )
          {
            v69 = KeGetCurrentPrcb();
            v70 = v69->SchedulerAssist;
            v71 = ~(unsigned __int16)(-1LL << (v62 + 1));
            v25 = (v71 & v70[5]) == 0;
            v70[5] &= v71;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(v69);
          }
        }
      }
      result = v62;
      __writecr8(v62);
    }
    if ( v8 )
      result = KiResumeUmsThread(a1, &v76);
  }
  *(_DWORD *)(a1 + 116) &= ~0x40000u;
  if ( v7 )
  {
    if ( (unsigned __int8)KiIsProcessTerminationRequested(a1, &v77) )
    {
      memset(&v82[2], 0, 0x90uLL);
      v82[0] = v77;
      LOBYTE(v72) = 1;
      v82[1] = 1;
      DbgkForwardException(v82, v72);
      DbgkForwardException(v82, 0LL);
    }
    v22 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v22 <= 0xFu )
    {
      v20 = KeGetCurrentPrcb()->SchedulerAssist;
      v19 = (-1 << (v22 + 1)) & 4u | v20[5];
      v20[5] = v19;
    }
    v23 = KeGetCurrentPrcb();
    v81 = 0;
    while ( 1 )
    {
      v24 = v23->SchedulerAssist;
      if ( v24 )
      {
        if ( v23->NestingLevel <= 1u )
        {
          v73 = v24[6];
          v24[6] = v73 + 1;
          if ( v73 == -1 )
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v39 = v23->SchedulerAssist;
      if ( v39 )
      {
        if ( v23->NestingLevel <= 1u )
        {
          v74 = v39[6] - 1;
          v39[6] = v74;
          if ( !v74 )
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
      do
        KeYieldProcessorEx(&v81, v19, (__int64)v20, v21);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      v25 = *(_BYTE *)(a1 + 730) == 0;
      *(_QWORD *)(a1 + 680) = KiSchedulerApcTerminate;
      *(_BYTE *)(a1 + 729) = 1;
      if ( !v25 )
        KiRemoveQueueApc(a1 + 648);
      *(_BYTE *)(a1 + 730) = 1;
      KiInsertQueueApc(a1 + 648);
      LOBYTE(v26) = v22;
      KiSignalThreadForApc(v23, a1 + 648, v26);
    }
    KiReleaseThreadLockSafe(a1);
    return KiExitDispatcher((_DWORD)v23, 0, 1, 0, v22);
  }
  return result;
}
