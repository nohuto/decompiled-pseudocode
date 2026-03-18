/*
 * XREFs of ExInitializeResourceLite @ 0x14026C4C0
 * Callers:
 *     CcAllocateInitializeBcb @ 0x14023210C (CcAllocateInitializeBcb.c)
 *     SepCreateTokenEx @ 0x1402D874C (SepCreateTokenEx.c)
 *     SepDuplicateToken @ 0x1406014E0 (SepDuplicateToken.c)
 *     CmpInitCmRM @ 0x14065A51C (CmpInitCmRM.c)
 *     NtCreateJobObject @ 0x14065B8E0 (NtCreateJobObject.c)
 *     PnpInitializeNotifyEntry @ 0x1406B3954 (PnpInitializeNotifyEntry.c)
 *     SepFilterToken @ 0x1407030D4 (SepFilterToken.c)
 *     RtlCreateHeap @ 0x140752DF0 (RtlCreateHeap.c)
 *     PiDmObjectManagerInit @ 0x14078A450 (PiDmObjectManagerInit.c)
 *     PiDqObjectManagerInit @ 0x14078A644 (PiDqObjectManagerInit.c)
 *     PiPnpRtlInit @ 0x14078A820 (PiPnpRtlInit.c)
 *     PiDrvDbCreateNode @ 0x14078AE9C (PiDrvDbCreateNode.c)
 *     DrvDbOpenContext @ 0x14078B4DC (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x14078B738 (DrvDbCreateDatabaseNode.c)
 *     _PnpCtxOpenMachine @ 0x14078BA2C (_PnpCtxOpenMachine.c)
 *     AdtpObjsInitialize @ 0x1407A7B10 (AdtpObjsInitialize.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x1407AA96C (PfSnPrefetchCacheCtxInitialize.c)
 *     FsRtlInitializeTieringHeat @ 0x1407B0CAC (FsRtlInitializeTieringHeat.c)
 *     MUIInitializeResourceLock @ 0x1407B9EAC (MUIInitializeResourceLock.c)
 *     TtmInit @ 0x1407BCBE8 (TtmInit.c)
 *     IopInitializeBootLogging @ 0x14088D370 (IopInitializeBootLogging.c)
 *     TtmiCreateEventQueue @ 0x140900D38 (TtmiCreateEventQueue.c)
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x140A4B868 (PpInitializeBootDDB.c)
 *     PipDmgInitPhaseZero @ 0x140A4B958 (PipDmgInitPhaseZero.c)
 *     PiSwInit @ 0x140A4BBE8 (PiSwInit.c)
 *     PiDeviceDependencyInit @ 0x140A4C154 (PiDeviceDependencyInit.c)
 *     MiInitializeLoadedModuleList @ 0x140A4E514 (MiInitializeLoadedModuleList.c)
 *     CmInitSystem1 @ 0x140A525D4 (CmInitSystem1.c)
 *     ExInitializeTimeRefresh @ 0x140A537D4 (ExInitializeTimeRefresh.c)
 *     SepInitializeWorkList @ 0x140A61E38 (SepInitializeWorkList.c)
 *     ExpInitSystemPhase0 @ 0x140A64F2C (ExpInitSystemPhase0.c)
 *     FsRtlInitSystem @ 0x140A67DB0 (FsRtlInitSystem.c)
 *     SepRmDbInitialization @ 0x140A6AA54 (SepRmDbInitialization.c)
 *     PopInitializeAdpm @ 0x140A6E654 (PopInitializeAdpm.c)
 *     PpInitSystem @ 0x140A6E880 (PpInitSystem.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140A6FD64 (WmipGetSMBiosFromLoaderBlock.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14026C5F0 (ExpAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlStdLogStackTrace @ 0x140580220 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x1405802AC (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1405806B0 (RtlpStdGetRecordedStackTraceIndex.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405A5304 (PerfLogExecutiveResourceInitialize.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B00F4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
  v5 = (struct _LIST_ENTRY *)qword_140C168E8;
  if ( *(__int64 **)qword_140C168E8 != &ExpSystemResourcesList )
    __fastfail(3u);
  Resource->SystemResourcesList.Flink = (struct _LIST_ENTRY *)&ExpSystemResourcesList;
  Resource->SystemResourcesList.Blink = v5;
  v5->Flink = &Resource->SystemResourcesList;
  qword_140C168E8 = (__int64)Resource;
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
