/*
 * XREFs of ExInitializeResourceLite @ 0x14027F200
 * Callers:
 *     CcAllocateInitializeBcb @ 0x1402A04D4 (CcAllocateInitializeBcb.c)
 *     SepCreateTokenEx @ 0x1402FB674 (SepCreateTokenEx.c)
 *     SepFilterToken @ 0x1405D7198 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x140601150 (SepDuplicateToken.c)
 *     PnpInitializeNotifyEntry @ 0x1406ECF54 (PnpInitializeNotifyEntry.c)
 *     CmpInitCmRM @ 0x14071037C (CmpInitCmRM.c)
 *     NtCreateJobObject @ 0x140710B60 (NtCreateJobObject.c)
 *     RtlCreateHeap @ 0x1407658C0 (RtlCreateHeap.c)
 *     PiDmObjectManagerInit @ 0x140798A60 (PiDmObjectManagerInit.c)
 *     PiDqObjectManagerInit @ 0x140798C54 (PiDqObjectManagerInit.c)
 *     PiPnpRtlInit @ 0x140798E30 (PiPnpRtlInit.c)
 *     PiDrvDbCreateNode @ 0x1407994AC (PiDrvDbCreateNode.c)
 *     DrvDbOpenContext @ 0x140799AEC (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x140799D48 (DrvDbCreateDatabaseNode.c)
 *     _PnpCtxOpenMachine @ 0x14079A03C (_PnpCtxOpenMachine.c)
 *     AdtpObjsInitialize @ 0x1407B8BB0 (AdtpObjsInitialize.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x1407BBA0C (PfSnPrefetchCacheCtxInitialize.c)
 *     FsRtlInitializeTieringHeat @ 0x1407C2654 (FsRtlInitializeTieringHeat.c)
 *     MUIInitializeResourceLock @ 0x1407CB8AC (MUIInitializeResourceLock.c)
 *     TtmInit @ 0x1407CE5E8 (TtmInit.c)
 *     IopInitializeBootLogging @ 0x140894150 (IopInitializeBootLogging.c)
 *     TtmiCreateEventQueue @ 0x140907C88 (TtmiCreateEventQueue.c)
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x140A51A80 (PpInitializeBootDDB.c)
 *     PipDmgInitPhaseZero @ 0x140A51B70 (PipDmgInitPhaseZero.c)
 *     PiSwInit @ 0x140A51E98 (PiSwInit.c)
 *     PiDeviceDependencyInit @ 0x140A524D4 (PiDeviceDependencyInit.c)
 *     MiInitializeLoadedModuleList @ 0x140A54894 (MiInitializeLoadedModuleList.c)
 *     CmInitSystem1 @ 0x140A58954 (CmInitSystem1.c)
 *     ExInitializeTimeRefresh @ 0x140A59BC0 (ExInitializeTimeRefresh.c)
 *     SepInitializeWorkList @ 0x140A6664C (SepInitializeWorkList.c)
 *     ExpInitSystemPhase0 @ 0x140A6BBDC (ExpInitSystemPhase0.c)
 *     FsRtlInitSystem @ 0x140A6EA60 (FsRtlInitSystem.c)
 *     SepRmDbInitialization @ 0x140A715C0 (SepRmDbInitialization.c)
 *     PopInitializeAdpm @ 0x140A75668 (PopInitializeAdpm.c)
 *     PpInitSystem @ 0x140A75884 (PpInitSystem.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140A76D60 (WmipGetSMBiosFromLoaderBlock.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14027F330 (ExpAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlStdLogStackTrace @ 0x140584300 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x14058438C (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140584790 (RtlpStdGetRecordedStackTraceIndex.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405A9494 (PerfLogExecutiveResourceInitialize.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B4374 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

NTSTATUS __stdcall ExInitializeResourceLite(PERESOURCE Resource)
{
  __int64 v2; // r8
  ULONG_PTR v3; // rax
  unsigned __int8 CurrentIrql; // di
  struct _LIST_ENTRY *v5; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v7; // rdx
  KSPIN_LOCK *v9; // rsi
  unsigned __int16 v10; // di
  __int64 v11; // rbp
  int RecordedStackTraceIndex; // eax
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  memset(Resource, 0, sizeof(struct _ERESOURCE));
  Resource->SystemResourcesList.Blink = &Resource->SystemResourcesList;
  Resource->SystemResourcesList.Flink = &Resource->SystemResourcesList;
  *(_OWORD *)&Resource->SharedWaiters = 0LL;
  Resource->SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v9 = RtlpStackTraceDatabase;
    if ( RtlpStackTraceDatabase )
    {
      v11 = RtlStdLogStackTrace(RtlpStackTraceDatabase);
      if ( v11 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v9);
        v10 = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace(v9, v11);
      }
      else
      {
        v10 = 0;
      }
    }
    else
    {
      v10 = 0;
    }
    v3 = v10;
  }
  else
  {
    v3 = 0LL;
  }
  Resource->CreatorBackTraceIndex = v3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v2 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = v2;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&ExpResourceSpinLock, CurrentIrql, v2);
  v5 = (struct _LIST_ENTRY *)qword_140C169B8;
  if ( *(__int64 **)qword_140C169B8 != &ExpSystemResourcesList )
    __fastfail(3u);
  Resource->SystemResourcesList.Flink = (struct _LIST_ENTRY *)&ExpSystemResourcesList;
  Resource->SystemResourcesList.Blink = v5;
  v5->Flink = &Resource->SystemResourcesList;
  qword_140C169B8 = (__int64)Resource;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  else
    ExpResourceSpinLock = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = CurrentPrcb->SchedulerAssist;
  if ( v7 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v14 = v7[6] - 1;
      v7[6] = v14;
      if ( !v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
  }
  __writecr8(CurrentIrql);
  __incgsdword(0x8658u);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544LL, Resource, 0LL, 0LL);
  return 0;
}
