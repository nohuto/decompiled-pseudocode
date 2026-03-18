/*
 * XREFs of KiDeliverApc @ 0x1402DDAB0
 * Callers:
 *     KeRemoveQueueEx @ 0x140207B10 (KeRemoveQueueEx.c)
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KiSwapThread @ 0x14021C4C0 (KiSwapThread.c)
 *     PsImpersonateContainerOfThread @ 0x14027E130 (PsImpersonateContainerOfThread.c)
 *     KiReadyOutSwappedThreads @ 0x14028D410 (KiReadyOutSwappedThreads.c)
 *     KiBeginThreadWait @ 0x14028EC70 (KiBeginThreadWait.c)
 *     KiProcessDeferredReadyList @ 0x1402BE630 (KiProcessDeferredReadyList.c)
 *     KiSchedulerApc @ 0x1402D7C50 (KiSchedulerApc.c)
 *     KiExitThreadWait @ 0x1402D8240 (KiExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x1402D82C4 (KiCheckForThreadDispatch.c)
 *     KeSetBasePriorityThread @ 0x1402DBEC0 (KeSetBasePriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x1402DCE40 (KeWaitForMultipleObjects.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiContinueEx @ 0x1402E6780 (KiContinueEx.c)
 *     KeCpuSetReportParkedProcessors @ 0x1402F7040 (KeCpuSetReportParkedProcessors.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402F7278 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetLegacyAffinityThread @ 0x1402F77F0 (KeSetLegacyAffinityThread.c)
 *     KeBoostPriorityThread @ 0x140336FA0 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x14035E3E8 (KeSetSchedulingGroupRankBias.c)
 *     KiAbForceProcessLockEntry @ 0x14038F584 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x140398F5C (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C55C4 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C56EC (KeUpdateThreadCpuSets.c)
 *     KiApcInterrupt @ 0x140400A90 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051AE58 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051B100 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14051CAE8 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x14051E884 (KiSetHeteroPolicyThread.c)
 *     KiParkUmsThread @ 0x140524440 (KiParkUmsThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiCheckForSListAddress @ 0x1402DF2E0 (KiCheckForSListAddress.c)
 *     KeTestAlertThread @ 0x1402E75F0 (KeTestAlertThread.c)
 *     KiInitializeUserApc @ 0x1402E8960 (KiInitializeUserApc.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

void __fastcall KiDeliverApc(char a1, int a2, _KTRAP_FRAME *a3)
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
  _DWORD *v53; // rdx
  _DWORD *v54; // r8
  int v55; // eax
  int v56; // eax
  int v57; // eax
  unsigned __int8 v58; // al
  _LIST_ENTRY *v59; // rcx
  struct _KPRCB *v60; // rcx
  _DWORD *v61; // rdx
  signed __int32 v62[8]; // [rsp+0h] [rbp-80h] BYREF
  struct _LIST_ENTRY *v63; // [rsp+40h] [rbp-40h] BYREF
  struct _LIST_ENTRY *v64; // [rsp+48h] [rbp-38h] BYREF
  struct _LIST_ENTRY *v65; // [rsp+50h] [rbp-30h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+58h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v67; // [rsp+60h] [rbp-20h]
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-18h]
  int v70; // [rsp+C0h] [rbp+40h] BYREF
  int v71; // [rsp+C8h] [rbp+48h] BYREF

  Blink = 0LL;
  v63 = 0LL;
  v65 = 0LL;
  v64 = 0LL;
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
    _InterlockedOr(v62, 0);
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
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v70 = 0;
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
          KeYieldProcessorEx(&v70);
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
      v63 = Flink[2].Flink;
      Blink = Flink[2].Blink;
      v65 = Flink[3].Flink;
      v64 = Flink[3].Blink;
      if ( v63 )
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
          &v63,
          &Blink,
          &v65,
          &v64);
        if ( v63 )
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
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *, struct _LIST_ENTRY *))v63)(Blink, v65, v64);
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
          &v63,
          &Blink,
          &v65,
          &v64);
        CurrentThread->ApcState.InProgressFlags &= ~2u;
      }
    }
    KiReleaseThreadLockSafe(CurrentThread);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v52 = KeGetCurrentPrcb();
        v53 = v52->SchedulerAssist;
        v6 = (v53[5] & 0xFFFF0003) == 0;
        v53[5] &= 0xFFFF0003;
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
        v67 = 0LL;
        v25 = 0LL;
        v63 = 0LL;
        Blink = 0LL;
        v65 = 0LL;
        v64 = 0LL;
        v26 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v26 <= 0xFu )
        {
          v54 = KeGetCurrentPrcb()->SchedulerAssist;
          v54[5] |= (-1 << (v26 + 1)) & 4;
        }
        v27 = KeGetCurrentPrcb();
        v71 = 0;
        v28 = v27->SchedulerAssist;
        if ( v28 )
        {
          if ( v27->NestingLevel <= 1u )
          {
            v55 = v28[6];
            v28[6] = v55 + 1;
            if ( v55 == -1 )
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
              v56 = v37[6] - 1;
              v37[6] = v56;
              if ( !v56 )
                KiRemoveSystemWorkPriorityKick(v27);
            }
          }
          do
            KeYieldProcessorEx(&v71);
          while ( CurrentThread->ThreadLock );
          v38 = v27->SchedulerAssist;
          if ( v38 )
          {
            if ( v27->NestingLevel <= 1u )
            {
              v57 = v38[6];
              v38[6] = v57 + 1;
              if ( v57 == -1 )
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
            v31 = v67;
            goto LABEL_44;
          }
        }
        v31 = v30[1].Flink;
        v63 = v25[3].Flink;
        Blink = v25[3].Blink;
        v65 = v25[4].Flink;
        v64 = v25[4].Blink;
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
          v58 = v34 & 0xFE;
          CurrentThread->ApcState.UserApcPendingAll = v58;
          v59 = v24->Flink;
          if ( v24->Flink != v24 )
          {
            while ( (__int64 (__fastcall *)(int, int, int, int, __int64))v59[1].Flink != KeSpecialUserApcKernelRoutine )
            {
              v59 = v59->Flink;
              if ( v59 == v24 )
                goto LABEL_44;
            }
            CurrentThread->ApcState.UserApcPendingAll = v58 | 1;
          }
        }
LABEL_44:
        KiReleaseThreadLockSafe(CurrentThread);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v60 = KeGetCurrentPrcb();
            v61 = v60->SchedulerAssist;
            v6 = (v61[5] & 0xFFFF0003) == 0;
            v61[5] &= 0xFFFF0003;
            if ( v6 )
              KiRemoveSystemWorkPriorityKick(v60);
          }
        }
        __writecr8(1uLL);
        if ( v25 )
        {
          ((void (__fastcall *)(_LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v31)(
            v25,
            &v63,
            &Blink,
            &v65,
            &v64);
          if ( (UserApcPendingAll & 2) != 0 )
          {
            if ( !v63 )
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
          KiInitializeUserApc(a2, (_DWORD)a3, (_DWORD)v63, (_DWORD)Blink, (__int64)v65, (__int64)v64, v36);
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
