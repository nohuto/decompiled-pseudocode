/*
 * XREFs of KiDeliverApc @ 0x140267B30
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x14020245C (KeCpuSetReportParkedProcessors.c)
 *     KiBeginThreadWait @ 0x140226020 (KiBeginThreadWait.c)
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     KiReadyOutSwappedThreads @ 0x140244A20 (KiReadyOutSwappedThreads.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KiSwapThread @ 0x140265350 (KiSwapThread.c)
 *     KeRemoveQueueEx @ 0x140268450 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x14026B3F0 (PsImpersonateContainerOfThread.c)
 *     KiProcessDeferredReadyList @ 0x14026D000 (KiProcessDeferredReadyList.c)
 *     KeBoostPriorityThread @ 0x1402C94E4 (KeBoostPriorityThread.c)
 *     KeSetLegacyAffinityThread @ 0x1402C9F30 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402DC40C (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140303FF4 (KiAbThreadUnboostCpuPriority.c)
 *     KiExitThreadWait @ 0x140329B50 (KiExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x140329BD4 (KiCheckForThreadDispatch.c)
 *     KiContinueEx @ 0x14032EFA0 (KiContinueEx.c)
 *     KeSetBasePriorityThread @ 0x140332450 (KeSetBasePriorityThread.c)
 *     KiSchedulerApc @ 0x1403564C0 (KiSchedulerApc.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbForceProcessLockEntry @ 0x14038C554 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x140395ECC (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C1F94 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C20BC (KeUpdateThreadCpuSets.c)
 *     KiApcInterrupt @ 0x1403F9EB0 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x1403FA370 (KiInitiateUserApc.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140516E38 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1405170E0 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140518AC8 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x14051A864 (KiSetHeteroPolicyThread.c)
 *     KiParkUmsThread @ 0x140520420 (KiParkUmsThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiCheckForSListAddress @ 0x1402EC460 (KiCheckForSListAddress.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiInitializeUserApc @ 0x140329350 (KiInitializeUserApc.c)
 *     KeTestAlertThread @ 0x14032FC90 (KeTestAlertThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

void __fastcall KiDeliverApc(char a1, __int64 a2, _KTRAP_FRAME *a3, _DWORD *SchedulerAssist)
{
  struct _KTHREAD *CurrentThread; // rbx
  bool v7; // zf
  ULONG_PTR Process; // r8
  _KTRAP_FRAME *TrapFrame; // r15
  $C774EFD68449142D8271B1EC1EB7FB26 *v10; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v13; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v15; // rsi
  struct _LIST_ENTRY *v16; // r12
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *v18; // rax
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  ULONG_PTR v21; // r8
  struct _LIST_ENTRY *v22; // rcx
  struct _LIST_ENTRY *v23; // rax
  _DWORD *v24; // rcx
  _DWORD *v25; // rcx
  _LIST_ENTRY *v26; // rsi
  _LIST_ENTRY *v27; // rdi
  unsigned __int8 v28; // cl
  struct _KPRCB *v29; // r13
  _DWORD *v30; // rcx
  unsigned __int8 UserApcPendingAll; // r12
  _LIST_ENTRY *v32; // rcx
  struct _LIST_ENTRY *v33; // r13
  _LIST_ENTRY *v34; // rdx
  struct _LIST_ENTRY *v35; // rax
  unsigned __int8 v36; // al
  __int64 v37; // rcx
  char v38; // al
  _DWORD *v39; // rcx
  _DWORD *v40; // rcx
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  struct _KPRCB *v45; // rcx
  _DWORD *v46; // rdx
  struct _KPRCB *v47; // rcx
  _DWORD *v48; // rdx
  struct _KPRCB *v49; // rcx
  _DWORD *v50; // rdx
  struct _KPRCB *v51; // rcx
  _DWORD *v52; // rdx
  struct _KPRCB *v53; // rcx
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
  v7 = CurrentThread->SpecialApcDisable == 0;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  TrapFrame = CurrentThread->TrapFrame;
  BugCheckParameter1 = Process;
  CurrentThread->TrapFrame = a3;
  CurrentThread->ApcState.KernelApcPending = 0;
  if ( v7 )
  {
    _InterlockedOr(v61, 0);
    v10 = &CurrentThread->152;
    while ( 1 )
    {
      if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v10->ApcState.ApcListHead[0].Flink == v10 )
        goto LABEL_16;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        a2 = (-1LL << (CurrentIrql + 1)) & 4;
        Process = (unsigned int)a2 | SchedulerAssist[5];
        SchedulerAssist[5] = Process;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v69 = 0;
      v13 = CurrentPrcb->SchedulerAssist;
      if ( v13 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v41 = v13[6];
          v13[6] = v41 + 1;
          if ( v41 == -1 )
LABEL_60:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v24 = CurrentPrcb->SchedulerAssist;
        if ( v24 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v42 = v24[6] - 1;
            v24[6] = v42;
            if ( !v42 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v69, a2, Process, (__int64)SchedulerAssist);
        while ( CurrentThread->ThreadLock );
        v25 = CurrentPrcb->SchedulerAssist;
        if ( v25 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v43 = v25[6];
            v25[6] = v43 + 1;
            if ( v43 == -1 )
              goto LABEL_60;
          }
        }
      }
      Flink = v10->ApcState.ApcListHead[0].Flink;
      if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v10->ApcState.ApcListHead[0].Flink == v10 )
        break;
      CurrentThread->ApcState.KernelApcPending = 0;
      v15 = Flink - 1;
      _m_prefetchw(&Flink[-1]);
      v16 = Flink[1].Flink;
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
              v51 = KeGetCurrentPrcb();
              v52 = v51->SchedulerAssist;
              v7 = (v52[5] & 0xFFFF0003) == 0;
              v52[5] &= 0xFFFF0003;
              if ( v7 )
                KiRemoveSystemWorkPriorityKick(v51);
            }
          }
          __writecr8(1uLL);
          goto LABEL_17;
        }
        v22 = Flink->Flink;
        v23 = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || v23->Flink != Flink )
          goto LABEL_112;
        v23->Flink = v22;
        v22->Blink = v23;
        BYTE2(v15[5].Flink) = 0;
        KiReleaseThreadLockSafe(CurrentThread);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v47 = KeGetCurrentPrcb();
            v48 = v47->SchedulerAssist;
            v7 = (v48[5] & 0xFFFF0003) == 0;
            v48[5] &= 0xFFFF0003;
            if ( v7 )
              KiRemoveSystemWorkPriorityKick(v47);
          }
        }
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags = 1;
        ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v16)(
          v15,
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
              v49 = KeGetCurrentPrcb();
              v50 = v49->SchedulerAssist;
              v7 = (v50[5] & 0xFFFF0001) == 0;
              v50[5] &= 0xFFFF0001;
              if ( v7 )
                KiRemoveSystemWorkPriorityKick(v49);
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
        v17 = Flink->Flink;
        v18 = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || v18->Flink != Flink )
          goto LABEL_112;
        v18->Flink = v17;
        v17->Blink = v18;
        BYTE2(v15[5].Flink) = 0;
        CurrentThread->ThreadLock = 0LL;
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        if ( v20 )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v44 = v20[6] - 1;
            v20[6] = v44;
            if ( !v44 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
        }
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v45 = KeGetCurrentPrcb();
          v46 = v45->SchedulerAssist;
          v7 = (v46[5] & 0xFFFF0003) == 0;
          v46[5] &= 0xFFFF0003;
          if ( v7 )
            KiRemoveSystemWorkPriorityKick(v45);
        }
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags |= 2u;
        ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v16)(
          v15,
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
        v53 = KeGetCurrentPrcb();
        a2 = (__int64)v53->SchedulerAssist;
        v7 = (*(_DWORD *)(a2 + 20) & 0xFFFF0003) == 0;
        *(_DWORD *)(a2 + 20) &= 0xFFFF0003;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick(v53);
      }
    }
    __writecr8(1uLL);
LABEL_16:
    if ( a1 == 1 )
    {
      v26 = &CurrentThread->ApcState.ApcListHead[1];
      if ( v26->Flink != v26 )
      {
        v66 = 0LL;
        v27 = 0LL;
        v62 = 0LL;
        Blink = 0LL;
        v64 = 0LL;
        v63 = 0LL;
        v28 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 <= 0xFu )
        {
          Process = (ULONG_PTR)KeGetCurrentPrcb()->SchedulerAssist;
          a2 = (-1 << (v28 + 1)) & 4u | *(_DWORD *)(Process + 20);
          *(_DWORD *)(Process + 20) = a2;
        }
        v29 = KeGetCurrentPrcb();
        v70 = 0;
        v30 = v29->SchedulerAssist;
        if ( v30 )
        {
          if ( v29->NestingLevel <= 1u )
          {
            v54 = v30[6];
            v30[6] = v54 + 1;
            if ( v54 == -1 )
LABEL_98:
              KiRemoveSystemWorkPriorityKick(v29);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v39 = v29->SchedulerAssist;
          if ( v39 )
          {
            if ( v29->NestingLevel <= 1u )
            {
              v55 = v39[6] - 1;
              v39[6] = v55;
              if ( !v55 )
                KiRemoveSystemWorkPriorityKick(v29);
            }
          }
          do
            KeYieldProcessorEx(&v70, a2, Process, (__int64)SchedulerAssist);
          while ( CurrentThread->ThreadLock );
          v40 = v29->SchedulerAssist;
          if ( v40 )
          {
            if ( v29->NestingLevel <= 1u )
            {
              v56 = v40[6];
              v40[6] = v56 + 1;
              if ( v56 == -1 )
                goto LABEL_98;
            }
          }
        }
        UserApcPendingAll = CurrentThread->ApcState.UserApcPendingAll;
        CurrentThread->ApcState.UserApcPendingAll = UserApcPendingAll & 0xFD;
        v32 = v26->Flink;
        if ( v26->Flink == v26 )
        {
          v33 = 0LL;
          goto LABEL_44;
        }
        while ( 1 )
        {
          v27 = v32 - 1;
          _m_prefetchw(&v32[-1]);
          if ( (__int64 (__fastcall *)(int, int, int, int, __int64))v32[1].Flink == KeSpecialUserApcKernelRoutine
            || (UserApcPendingAll & 2) != 0 )
          {
            break;
          }
          v32 = v32->Flink;
          v27 = 0LL;
          if ( v32 == v26 )
          {
            v33 = v66;
            goto LABEL_44;
          }
        }
        v33 = v32[1].Flink;
        v62 = v27[3].Flink;
        Blink = v27[3].Blink;
        v64 = v27[4].Flink;
        v63 = v27[4].Blink;
        v34 = v32->Flink;
        v35 = v32->Blink;
        if ( v32->Flink->Blink != v32 || v35->Flink != v32 )
LABEL_112:
          __fastfail(3u);
        v35->Flink = v34;
        v34->Blink = v35;
        BYTE2(v27[5].Flink) = 0;
        v36 = CurrentThread->ApcState.UserApcPendingAll;
        if ( (v36 & 1) != 0 )
        {
          v57 = v36 & 0xFE;
          CurrentThread->ApcState.UserApcPendingAll = v57;
          v58 = v26->Flink;
          if ( v26->Flink != v26 )
          {
            while ( (__int64 (__fastcall *)(int, int, int, int, __int64))v58[1].Flink != KeSpecialUserApcKernelRoutine )
            {
              v58 = v58->Flink;
              if ( v58 == v26 )
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
            v7 = (v60[5] & 0xFFFF0003) == 0;
            v60[5] &= 0xFFFF0003;
            if ( v7 )
              KiRemoveSystemWorkPriorityKick(v59);
          }
        }
        __writecr8(1uLL);
        if ( v27 )
        {
          ((void (__fastcall *)(_LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v33)(
            v27,
            &v62,
            &Blink,
            &v64,
            &v63);
          if ( (UserApcPendingAll & 2) != 0 )
          {
            if ( !v62 )
            {
              LOBYTE(v37) = 1;
              KeTestAlertThread(v37);
              goto LABEL_17;
            }
            v38 = 1;
          }
          else
          {
            v38 = 0;
          }
          KiInitializeUserApc(v68, (_DWORD)a3, (_DWORD)v62, (_DWORD)Blink, (__int64)v64, (__int64)v63, v38);
        }
      }
    }
  }
LABEL_17:
  v21 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( v21 != BugCheckParameter1 )
    KeBugCheckEx(
      5u,
      BugCheckParameter1,
      v21,
      CurrentThread->ApcStateIndex,
      KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  CurrentThread->TrapFrame = TrapFrame;
}
