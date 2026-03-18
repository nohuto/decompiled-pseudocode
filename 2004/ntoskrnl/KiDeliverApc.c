/*
 * XREFs of KiDeliverApc @ 0x14020EAE0
 * Callers:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KiSwapThread @ 0x14020C300 (KiSwapThread.c)
 *     KeRemoveQueueEx @ 0x14020F400 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x1402123A0 (PsImpersonateContainerOfThread.c)
 *     KiProcessDeferredReadyList @ 0x140213FB0 (KiProcessDeferredReadyList.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     KeWaitForMultipleObjects @ 0x1402801A0 (KeWaitForMultipleObjects.c)
 *     KiReadyOutSwappedThreads @ 0x140281200 (KiReadyOutSwappedThreads.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KiBeginThreadWait @ 0x1402B8CA0 (KiBeginThreadWait.c)
 *     KiExitThreadWait @ 0x1402E4A20 (KiExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x1402E4AA4 (KiCheckForThreadDispatch.c)
 *     KiContinueEx @ 0x1402E9E60 (KiContinueEx.c)
 *     KeSetBasePriorityThread @ 0x1402ED310 (KeSetBasePriorityThread.c)
 *     KiSchedulerApc @ 0x1402FA4E0 (KiSchedulerApc.c)
 *     KeBoostPriorityThread @ 0x14030AEC4 (KeBoostPriorityThread.c)
 *     KeSetLegacyAffinityThread @ 0x14030B910 (KeSetLegacyAffinityThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x14032B4B4 (KeCpuSetReportParkedProcessors.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140340DC4 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetSchedulingGroupRankBias @ 0x140348C48 (KeSetSchedulingGroupRankBias.c)
 *     KiAbForceProcessLockEntry @ 0x14038D0C4 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x140396A9C (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C2E54 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C2F7C (KeUpdateThreadCpuSets.c)
 *     KiApcInterrupt @ 0x1403FB140 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x1403FB600 (KiInitiateUserApc.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140517488 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140517730 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140519118 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x14051AEB4 (KiSetHeteroPolicyThread.c)
 *     KiParkUmsThread @ 0x140520A70 (KiParkUmsThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiInitializeUserApc @ 0x1402E30B0 (KiInitializeUserApc.c)
 *     KeTestAlertThread @ 0x1402EAB50 (KeTestAlertThread.c)
 *     KiCheckForSListAddress @ 0x140325D90 (KiCheckForSListAddress.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

void __fastcall KiDeliverApc(char a1, __int64 a2, _KTRAP_FRAME *a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  bool v6; // zf
  _KTRAP_FRAME *TrapFrame; // r15
  $C774EFD68449142D8271B1EC1EB7FB26 *v8; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v11; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v13; // rsi
  struct _LIST_ENTRY *v14; // r12
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *v16; // rax
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  ULONG_PTR Process; // r8
  struct _LIST_ENTRY *v20; // rcx
  struct _LIST_ENTRY *v21; // rax
  _DWORD *v22; // rcx
  _DWORD *v23; // rcx
  _LIST_ENTRY *v24; // rsi
  _LIST_ENTRY *v25; // rdi
  unsigned __int8 v26; // cl
  struct _KPRCB *v27; // r13
  _DWORD *v28; // rcx
  unsigned __int8 UserApcPendingAll; // r12
  _LIST_ENTRY *v30; // rcx
  struct _LIST_ENTRY *v31; // r13
  _LIST_ENTRY *v32; // rdx
  struct _LIST_ENTRY *v33; // rax
  unsigned __int8 v34; // al
  __int64 v35; // rcx
  char v36; // al
  _DWORD *v37; // rcx
  _DWORD *v38; // rcx
  _DWORD *SchedulerAssist; // r9
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  struct _KPRCB *v44; // rcx
  _DWORD *v45; // rdx
  struct _KPRCB *v46; // rcx
  _DWORD *v47; // rdx
  struct _KPRCB *v48; // rcx
  _DWORD *v49; // rdx
  struct _KPRCB *v50; // rcx
  _DWORD *v51; // rdx
  struct _KPRCB *v52; // rcx
  _DWORD *v53; // r8
  int v54; // eax
  int v55; // eax
  int v56; // eax
  unsigned __int8 v57; // al
  _LIST_ENTRY *v58; // rcx
  struct _KPRCB *v59; // rcx
  _DWORD *v60; // rdx
  signed __int32 v61[8]; // [rsp+0h] [rbp-80h] BYREF
  struct _LIST_ENTRY *v62; // [rsp+40h] [rbp-40h] BYREF
  struct _LIST_ENTRY *v63; // [rsp+48h] [rbp-38h] BYREF
  struct _LIST_ENTRY *v64; // [rsp+50h] [rbp-30h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+58h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v66; // [rsp+60h] [rbp-20h]
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-18h]
  int v68; // [rsp+B8h] [rbp+38h]
  int v69; // [rsp+C0h] [rbp+40h] BYREF
  int v70; // [rsp+C8h] [rbp+48h] BYREF

  v68 = a2;
  Blink = 0LL;
  v62 = 0LL;
  v64 = 0LL;
  v63 = 0LL;
  if ( a3 )
    KiCheckForSListAddress(a3);
  CurrentThread = KeGetCurrentThread();
  v6 = CurrentThread->SpecialApcDisable == 0;
  TrapFrame = CurrentThread->TrapFrame;
  BugCheckParameter1 = (ULONG_PTR)CurrentThread->ApcState.Process;
  CurrentThread->TrapFrame = a3;
  CurrentThread->ApcState.KernelApcPending = 0;
  if ( v6 )
  {
    _InterlockedOr(v61, 0);
    v8 = &CurrentThread->152;
    while ( 1 )
    {
      if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v8->ApcState.ApcListHead[0].Flink == v8 )
        goto LABEL_16;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        a2 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= a2;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v69 = 0;
      v11 = CurrentPrcb->SchedulerAssist;
      if ( v11 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v40 = v11[6];
          v11[6] = v40 + 1;
          if ( v40 == -1 )
LABEL_60:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v22 = CurrentPrcb->SchedulerAssist;
        if ( v22 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v41 = v22[6] - 1;
            v22[6] = v41;
            if ( !v41 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v69, a2);
        while ( CurrentThread->ThreadLock );
        v23 = CurrentPrcb->SchedulerAssist;
        if ( v23 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v42 = v23[6];
            v23[6] = v42 + 1;
            if ( v42 == -1 )
              goto LABEL_60;
          }
        }
      }
      Flink = v8->ApcState.ApcListHead[0].Flink;
      if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v8->ApcState.ApcListHead[0].Flink == v8 )
        break;
      CurrentThread->ApcState.KernelApcPending = 0;
      v13 = Flink - 1;
      _m_prefetchw(&Flink[-1]);
      v14 = Flink[1].Flink;
      v62 = Flink[2].Flink;
      Blink = Flink[2].Blink;
      v64 = Flink[3].Flink;
      v63 = Flink[3].Blink;
      if ( v62 )
      {
        if ( CurrentThread->ApcState.InProgressFlags || CurrentThread->KernelApcDisable )
        {
          KiReleaseThreadLockSafe(CurrentThread);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v50 = KeGetCurrentPrcb();
              v51 = v50->SchedulerAssist;
              v6 = (v51[5] & 0xFFFF0003) == 0;
              v51[5] &= 0xFFFF0003;
              if ( v6 )
                KiRemoveSystemWorkPriorityKick(v50);
            }
          }
          __writecr8(1uLL);
          goto LABEL_17;
        }
        v20 = Flink->Flink;
        v21 = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || v21->Flink != Flink )
          goto LABEL_112;
        v21->Flink = v20;
        v20->Blink = v21;
        BYTE2(v13[5].Flink) = 0;
        KiReleaseThreadLockSafe(CurrentThread);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v46 = KeGetCurrentPrcb();
            v47 = v46->SchedulerAssist;
            v6 = (v47[5] & 0xFFFF0003) == 0;
            v47[5] &= 0xFFFF0003;
            if ( v6 )
              KiRemoveSystemWorkPriorityKick(v46);
          }
        }
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags = 1;
        ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v14)(
          v13,
          &v62,
          &Blink,
          &v64,
          &v63);
        if ( v62 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v48 = KeGetCurrentPrcb();
              v49 = v48->SchedulerAssist;
              v6 = (v49[5] & 0xFFFF0001) == 0;
              v49[5] &= 0xFFFF0001;
              if ( v6 )
                KiRemoveSystemWorkPriorityKick(v48);
            }
          }
          __writecr8(0LL);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *, struct _LIST_ENTRY *))v62)(Blink, v64, v63);
          KeGetCurrentIrql();
          __writecr8(1uLL);
        }
        CurrentThread->ApcState.InProgressFlags = 0;
      }
      else
      {
        v15 = Flink->Flink;
        v16 = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || v16->Flink != Flink )
          goto LABEL_112;
        v16->Flink = v15;
        v15->Blink = v16;
        BYTE2(v13[5].Flink) = 0;
        CurrentThread->ThreadLock = 0LL;
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        if ( v18 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v43 = v18[6] - 1;
            v18[6] = v43;
            if ( !v43 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v44 = KeGetCurrentPrcb();
          v45 = v44->SchedulerAssist;
          v6 = (v45[5] & 0xFFFF0003) == 0;
          v45[5] &= 0xFFFF0003;
          if ( v6 )
            KiRemoveSystemWorkPriorityKick(v44);
        }
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags |= 2u;
        ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v14)(
          v13,
          &v62,
          &Blink,
          &v64,
          &v63);
        CurrentThread->ApcState.InProgressFlags &= ~2u;
      }
    }
    KiReleaseThreadLockSafe(CurrentThread);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v52 = KeGetCurrentPrcb();
        a2 = (__int64)v52->SchedulerAssist;
        v6 = (*(_DWORD *)(a2 + 20) & 0xFFFF0003) == 0;
        *(_DWORD *)(a2 + 20) &= 0xFFFF0003;
        if ( v6 )
          KiRemoveSystemWorkPriorityKick(v52);
      }
    }
    __writecr8(1uLL);
LABEL_16:
    if ( a1 == 1 )
    {
      v24 = &CurrentThread->ApcState.ApcListHead[1];
      if ( v24->Flink != v24 )
      {
        v66 = 0LL;
        v25 = 0LL;
        v62 = 0LL;
        Blink = 0LL;
        v64 = 0LL;
        v63 = 0LL;
        v26 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v26 <= 0xFu )
        {
          v53 = KeGetCurrentPrcb()->SchedulerAssist;
          a2 = (-1 << (v26 + 1)) & 4u | v53[5];
          v53[5] = a2;
        }
        v27 = KeGetCurrentPrcb();
        v70 = 0;
        v28 = v27->SchedulerAssist;
        if ( v28 )
        {
          if ( v27->NestingLevel <= 1u )
          {
            v54 = v28[6];
            v28[6] = v54 + 1;
            if ( v54 == -1 )
LABEL_98:
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v37 = v27->SchedulerAssist;
          if ( v37 )
          {
            if ( v27->NestingLevel <= 1u )
            {
              v55 = v37[6] - 1;
              v37[6] = v55;
              if ( !v55 )
                KiRemoveSystemWorkPriorityKick(v27);
            }
          }
          do
            KeYieldProcessorEx(&v70, a2);
          while ( CurrentThread->ThreadLock );
          v38 = v27->SchedulerAssist;
          if ( v38 )
          {
            if ( v27->NestingLevel <= 1u )
            {
              v56 = v38[6];
              v38[6] = v56 + 1;
              if ( v56 == -1 )
                goto LABEL_98;
            }
          }
        }
        UserApcPendingAll = CurrentThread->ApcState.UserApcPendingAll;
        CurrentThread->ApcState.UserApcPendingAll = UserApcPendingAll & 0xFD;
        v30 = v24->Flink;
        if ( v24->Flink == v24 )
        {
          v31 = 0LL;
          goto LABEL_44;
        }
        while ( 1 )
        {
          v25 = v30 - 1;
          _m_prefetchw(&v30[-1]);
          if ( (__int64 (__fastcall *)(int, int, int, int, __int64))v30[1].Flink == KeSpecialUserApcKernelRoutine
            || (UserApcPendingAll & 2) != 0 )
          {
            break;
          }
          v30 = v30->Flink;
          v25 = 0LL;
          if ( v30 == v24 )
          {
            v31 = v66;
            goto LABEL_44;
          }
        }
        v31 = v30[1].Flink;
        v62 = v25[3].Flink;
        Blink = v25[3].Blink;
        v64 = v25[4].Flink;
        v63 = v25[4].Blink;
        v32 = v30->Flink;
        v33 = v30->Blink;
        if ( v30->Flink->Blink != v30 || v33->Flink != v30 )
LABEL_112:
          __fastfail(3u);
        v33->Flink = v32;
        v32->Blink = v33;
        BYTE2(v25[5].Flink) = 0;
        v34 = CurrentThread->ApcState.UserApcPendingAll;
        if ( (v34 & 1) != 0 )
        {
          v57 = v34 & 0xFE;
          CurrentThread->ApcState.UserApcPendingAll = v57;
          v58 = v24->Flink;
          if ( v24->Flink != v24 )
          {
            while ( (__int64 (__fastcall *)(int, int, int, int, __int64))v58[1].Flink != KeSpecialUserApcKernelRoutine )
            {
              v58 = v58->Flink;
              if ( v58 == v24 )
                goto LABEL_44;
            }
            CurrentThread->ApcState.UserApcPendingAll = v57 | 1;
          }
        }
LABEL_44:
        KiReleaseThreadLockSafe(CurrentThread);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v59 = KeGetCurrentPrcb();
            v60 = v59->SchedulerAssist;
            v6 = (v60[5] & 0xFFFF0003) == 0;
            v60[5] &= 0xFFFF0003;
            if ( v6 )
              KiRemoveSystemWorkPriorityKick(v59);
          }
        }
        __writecr8(1uLL);
        if ( v25 )
        {
          ((void (__fastcall *)(_LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v31)(
            v25,
            &v62,
            &Blink,
            &v64,
            &v63);
          if ( (UserApcPendingAll & 2) != 0 )
          {
            if ( !v62 )
            {
              LOBYTE(v35) = 1;
              KeTestAlertThread(v35);
              goto LABEL_17;
            }
            v36 = 1;
          }
          else
          {
            v36 = 0;
          }
          KiInitializeUserApc(v68, (_DWORD)a3, (_DWORD)v62, (_DWORD)Blink, (__int64)v64, (__int64)v63, v36);
        }
      }
    }
  }
LABEL_17:
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( Process != BugCheckParameter1 )
    KeBugCheckEx(
      5u,
      BugCheckParameter1,
      Process,
      CurrentThread->ApcStateIndex,
      KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  CurrentThread->TrapFrame = TrapFrame;
}
