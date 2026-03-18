/*
 * XREFs of KiDeliverApc @ 0x1402F1DC0
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x140207F60 (KeSetSchedulingGroupRankBias.c)
 *     KeCpuSetReportParkedProcessors @ 0x14020E1DC (KeCpuSetReportParkedProcessors.c)
 *     KiSetLegacyAffinityThread @ 0x14020E6EC (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x14020E9E8 (KeSetUserAffinityThread.c)
 *     KiReadyOutSwappedThreads @ 0x1402112F8 (KiReadyOutSwappedThreads.c)
 *     KiBeginThreadWait @ 0x140217CA0 (KiBeginThreadWait.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14022B5D8 (KiAbThreadUnboostCpuPriority.c)
 *     KeBoostPriorityThread @ 0x140255110 (KeBoostPriorityThread.c)
 *     KiExitThreadWait @ 0x1402947A0 (KiExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x140294824 (KiCheckForThreadDispatch.c)
 *     KiContinueEx @ 0x1402987C0 (KiContinueEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x1402B3140 (KiSwapThread.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     KiSchedulerApc @ 0x1402EFA40 (KiSchedulerApc.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PsImpersonateContainerOfThread @ 0x14030F330 (PsImpersonateContainerOfThread.c)
 *     KeRemovePriQueue @ 0x14033D110 (KeRemovePriQueue.c)
 *     KiProcessDeferredReadyList @ 0x140344800 (KiProcessDeferredReadyList.c)
 *     KiAbForceProcessLockEntry @ 0x14039C4BC (KiAbForceProcessLockEntry.c)
 *     KeSetCpuSetsProcess @ 0x1403D2D98 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403D2F9C (KeUpdateThreadCpuSets.c)
 *     KiApcInterrupt @ 0x140425050 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x140425700 (KiInitiateUserApc.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14056B410 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14056B9FC (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140572774 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140574FA4 (KiSetHeteroPolicyThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140576AA4 (KeSetThreadSchedulerAssist.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KeIsExecutingDpc @ 0x140233690 (KeIsExecutingDpc.c)
 *     KeTestAlertThread @ 0x140299000 (KeTestAlertThread.c)
 *     KiInitializeUserApc @ 0x14029A86C (KiInitializeUserApc.c)
 *     KiCheckForSListAddress @ 0x1402F2540 (KiCheckForSListAddress.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

char __fastcall KiDeliverApc(char a1, __int64 a2, __int64 a3)
{
  struct _LIST_ENTRY *v3; // r12
  struct _KTHREAD *CurrentThread; // rbx
  _KTRAP_FRAME *TrapFrame; // r9
  ULONG_PTR Process; // rax
  $CEA84C04E3712D858E5667A507841A2A *v9; // r14
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v13; // rcx
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // eax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v18; // rdi
  struct _LIST_ENTRY *v19; // rsi
  struct _LIST_ENTRY *v20; // rcx
  struct _LIST_ENTRY *v21; // rax
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  int v24; // eax
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  struct _LIST_ENTRY *v27; // rcx
  struct _LIST_ENTRY *v28; // rax
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  struct _KPRCB *v35; // rcx
  _DWORD *v36; // rdx
  _LIST_ENTRY *v37; // r14
  _LIST_ENTRY *v38; // rsi
  unsigned int v39; // r15d
  unsigned __int8 v40; // cl
  _DWORD *v41; // r8
  struct _KPRCB *v42; // rdi
  _DWORD *v43; // rcx
  int v44; // eax
  _DWORD *v45; // rcx
  int v46; // eax
  unsigned __int8 UserApcPendingAll; // di
  _LIST_ENTRY *v48; // rcx
  __int64 (__fastcall *v49)(int, int, int, int, __int64); // rdx
  bool v50; // zf
  struct _KPRCB *v51; // rcx
  _DWORD *v52; // rdx
  char v53; // al
  int v54; // r9d
  int v55; // r8d
  _LIST_ENTRY *v56; // rdx
  struct _LIST_ENTRY *v57; // rax
  unsigned __int8 v58; // cl
  unsigned __int8 v59; // cl
  _LIST_ENTRY *v60; // rax
  ULONG_PTR v61; // rdi
  ULONG_PTR v62; // rsi
  unsigned int IsExecutingDpc; // eax
  signed __int32 v65[8]; // [rsp+0h] [rbp-59h] BYREF
  int v66; // [rsp+40h] [rbp-19h] BYREF
  struct _LIST_ENTRY *v67; // [rsp+48h] [rbp-11h] BYREF
  struct _LIST_ENTRY *v68; // [rsp+50h] [rbp-9h] BYREF
  struct _LIST_ENTRY *v69; // [rsp+58h] [rbp-1h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+60h] [rbp+7h] BYREF
  _KTRAP_FRAME *v71; // [rsp+68h] [rbp+Fh]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp+17h]
  int v75; // [rsp+D8h] [rbp+7Fh] BYREF

  v3 = 0LL;
  Blink = 0LL;
  v67 = 0LL;
  v69 = 0LL;
  v68 = 0LL;
  if ( a3 )
    KiCheckForSListAddress(a3);
  CurrentThread = KeGetCurrentThread();
  TrapFrame = CurrentThread->TrapFrame;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  v71 = TrapFrame;
  BugCheckParameter1 = Process;
  CurrentThread->TrapFrame = (_KTRAP_FRAME *)a3;
  CurrentThread->ApcState.KernelApcPending = 0;
  if ( !CurrentThread->SpecialApcDisable )
  {
    _InterlockedOr(v65, 0);
    v9 = &CurrentThread->152;
    while ( ($CEA84C04E3712D858E5667A507841A2A *)v9->ApcState.ApcListHead[0].Flink != v9 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v75 = 0;
      while ( 1 )
      {
        v13 = CurrentPrcb->SchedulerAssist;
        if ( v13 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v14 = v13[6];
            v13[6] = v14 + 1;
            if ( v14 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          break;
        v15 = CurrentPrcb->SchedulerAssist;
        if ( v15 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v16 = v15[6] - 1;
            v15[6] = v16;
            if ( !v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v75);
        while ( CurrentThread->ThreadLock );
      }
      Flink = v9->ApcState.ApcListHead[0].Flink;
      if ( ($CEA84C04E3712D858E5667A507841A2A *)v9->ApcState.ApcListHead[0].Flink == v9 )
      {
        KiReleaseThreadLockSafe((__int64)CurrentThread);
        LOBYTE(Process) = KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            LOBYTE(Process) = KeGetCurrentIrql() - 2;
            if ( (unsigned __int8)Process <= 0xDu )
            {
              v35 = KeGetCurrentPrcb();
              v36 = v35->SchedulerAssist;
              v50 = (v36[5] & 0xFFFF0003) == 0;
              LODWORD(Process) = v36[5] & 0xFFFF0003;
              v36[5] = Process;
              if ( v50 )
                LOBYTE(Process) = KiRemoveSystemWorkPriorityKick(v35);
            }
          }
        }
        __writecr8(1uLL);
        break;
      }
      CurrentThread->ApcState.KernelApcPending = 0;
      v18 = Flink - 1;
      _m_prefetchw(&Flink[-1]);
      v19 = Flink[1].Flink;
      v67 = Flink[2].Flink;
      Blink = Flink[2].Blink;
      v69 = Flink[3].Flink;
      v68 = Flink[3].Blink;
      if ( v67 )
      {
        if ( CurrentThread->ApcState.InProgressFlags || CurrentThread->KernelApcDisable )
        {
          KiReleaseThreadLockSafe((__int64)CurrentThread);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v33 = KeGetCurrentPrcb();
              v34 = v33->SchedulerAssist;
              v50 = (v34[5] & 0xFFFF0003) == 0;
              v34[5] &= 0xFFFF0003;
              if ( v50 )
                KiRemoveSystemWorkPriorityKick(v33);
            }
          }
          LOBYTE(Process) = 1;
          __writecr8(1uLL);
          goto LABEL_112;
        }
        v27 = Flink->Flink;
        v28 = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || v28->Flink != Flink )
          goto LABEL_109;
        v28->Flink = v27;
        v27->Blink = v28;
        BYTE2(v18[5].Flink) = 0;
        KiReleaseThreadLockSafe((__int64)CurrentThread);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v29 = KeGetCurrentPrcb();
            v30 = v29->SchedulerAssist;
            v50 = (v30[5] & 0xFFFF0003) == 0;
            v30[5] &= 0xFFFF0003;
            if ( v50 )
              KiRemoveSystemWorkPriorityKick(v29);
          }
        }
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags = 1;
        LOBYTE(Process) = ((__int64 (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v19)(
                            v18,
                            &v67,
                            &Blink,
                            &v69,
                            &v68);
        if ( v67 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v31 = KeGetCurrentPrcb();
              v32 = v31->SchedulerAssist;
              v50 = (v32[5] & 0xFFFF0001) == 0;
              v32[5] &= 0xFFFF0001;
              if ( v50 )
                KiRemoveSystemWorkPriorityKick(v31);
            }
          }
          __writecr8(0LL);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *, struct _LIST_ENTRY *))v67)(Blink, v69, v68);
          LOBYTE(Process) = KeGetCurrentIrql();
          __writecr8(1uLL);
          CurrentThread->ApcState.InProgressFlags = 0;
        }
        else
        {
          CurrentThread->ApcState.InProgressFlags = 0;
        }
      }
      else
      {
        v20 = Flink->Flink;
        v21 = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || v21->Flink != Flink )
          goto LABEL_109;
        v21->Flink = v20;
        v20->Blink = v21;
        BYTE2(v18[5].Flink) = 0;
        CurrentThread->ThreadLock = 0LL;
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        if ( v23 )
        {
          if ( v22->NestingLevel <= 1u )
          {
            v24 = v23[6] - 1;
            v23[6] = v24;
            if ( !v24 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v25 = KeGetCurrentPrcb();
            v26 = v25->SchedulerAssist;
            v50 = (v26[5] & 0xFFFF0003) == 0;
            v26[5] &= 0xFFFF0003;
            if ( v50 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags |= 2u;
        LOBYTE(Process) = ((__int64 (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v19)(
                            v18,
                            &v67,
                            &Blink,
                            &v69,
                            &v68);
        CurrentThread->ApcState.InProgressFlags &= ~2u;
      }
    }
    if ( a1 == 1 )
    {
      v37 = &CurrentThread->ApcState.ApcListHead[1];
      if ( v37->Flink != v37 )
      {
        v67 = 0LL;
        v38 = 0LL;
        Blink = 0LL;
        v39 = 0;
        v69 = 0LL;
        v68 = 0LL;
        v40 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v40 <= 0xFu )
        {
          v41 = KeGetCurrentPrcb()->SchedulerAssist;
          v41[5] |= (-1 << (v40 + 1)) & 4;
        }
        v42 = KeGetCurrentPrcb();
        v66 = 0;
        while ( 1 )
        {
          v43 = v42->SchedulerAssist;
          if ( v43 )
          {
            if ( v42->NestingLevel <= 1u )
            {
              v44 = v43[6];
              v43[6] = v44 + 1;
              if ( v44 == -1 )
                KiRemoveSystemWorkPriorityKick(v42);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            break;
          v45 = v42->SchedulerAssist;
          if ( v45 )
          {
            if ( v42->NestingLevel <= 1u )
            {
              v46 = v45[6] - 1;
              v45[6] = v46;
              if ( !v46 )
                KiRemoveSystemWorkPriorityKick(v42);
            }
          }
          do
            KeYieldProcessorEx(&v66);
          while ( CurrentThread->ThreadLock );
        }
        UserApcPendingAll = CurrentThread->ApcState.UserApcPendingAll;
        CurrentThread->ApcState.UserApcPendingAll = UserApcPendingAll & 0xFD;
        v48 = v37->Flink;
        if ( v37->Flink != v37 )
        {
          while ( 1 )
          {
            v38 = v48 - 1;
            _m_prefetchw(&v48[-1]);
            v49 = (__int64 (__fastcall *)(int, int, int, int, __int64))v48[1].Flink;
            v50 = v49 == KeSpecialUserApcKernelRoutine;
            if ( v49 == KeSpecialUserApcKernelRoutine )
              break;
            if ( (UserApcPendingAll & 2) != 0 )
            {
              v50 = v49 == KeSpecialUserApcKernelRoutine;
              break;
            }
            v48 = v48->Flink;
            v38 = 0LL;
            if ( v48 == v37 )
              goto LABEL_87;
          }
          v53 = BYTE1(v38->Flink);
          v54 = 2;
          if ( !v50 )
            v54 = 0;
          v3 = v48[1].Flink;
          v55 = v54 | 4;
          v67 = v38[3].Flink;
          if ( (v53 & 1) == 0 )
            v55 = v54;
          Blink = v38[3].Blink;
          v69 = v38[4].Flink;
          v68 = v38[4].Blink;
          v56 = v48->Flink;
          v57 = v48->Blink;
          if ( v48->Flink->Blink != v48 || v57->Flink != v48 )
LABEL_109:
            __fastfail(3u);
          v57->Flink = v56;
          v56->Blink = v57;
          BYTE2(v38[5].Flink) = 0;
          v39 = v55;
          v58 = CurrentThread->ApcState.UserApcPendingAll;
          if ( (v58 & 1) != 0 )
          {
            v59 = v58 & 0xFE;
            CurrentThread->ApcState.UserApcPendingAll = v59;
            v60 = v37->Flink;
            if ( v37->Flink != v37 )
            {
              while ( (__int64 (__fastcall *)(int, int, int, int, __int64))v60[1].Flink != KeSpecialUserApcKernelRoutine )
              {
                v60 = v60->Flink;
                if ( v60 == v37 )
                  goto LABEL_87;
              }
              CurrentThread->ApcState.UserApcPendingAll = v59 | 1;
            }
          }
        }
LABEL_87:
        KiReleaseThreadLockSafe((__int64)CurrentThread);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v51 = KeGetCurrentPrcb();
            v52 = v51->SchedulerAssist;
            v50 = (v52[5] & 0xFFFF0003) == 0;
            v52[5] &= 0xFFFF0003;
            if ( v50 )
              KiRemoveSystemWorkPriorityKick(v51);
          }
        }
        LOBYTE(Process) = 1;
        __writecr8(1uLL);
        if ( v38 )
        {
          ((void (__fastcall *)(_LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v3)(
            v38,
            &v67,
            &Blink,
            &v69,
            &v68);
          if ( (UserApcPendingAll & 2) != 0 )
          {
            if ( !v67 )
            {
              LOBYTE(Process) = KeTestAlertThread(1);
              goto LABEL_112;
            }
            v39 |= 1u;
          }
          LOBYTE(Process) = KiInitializeUserApc(a2, a3, (__int64)v67, (__int64)Blink, (__int64)v69, (__int64)v68, v39);
        }
      }
    }
LABEL_112:
    TrapFrame = v71;
  }
  v61 = (ULONG_PTR)CurrentThread->ApcState.Process;
  v62 = BugCheckParameter1;
  if ( v61 != BugCheckParameter1 )
  {
    IsExecutingDpc = KeIsExecutingDpc();
    KeBugCheckEx(5u, v62, v61, CurrentThread->ApcStateIndex, IsExecutingDpc);
  }
  CurrentThread->TrapFrame = TrapFrame;
  return Process;
}
