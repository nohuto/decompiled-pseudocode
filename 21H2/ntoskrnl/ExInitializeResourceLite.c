/*
 * XREFs of ExInitializeResourceLite @ 0x14030F740
 * Callers:
 *     SepCreateTokenEx @ 0x1402022FC (SepCreateTokenEx.c)
 *     CcAllocateInitializeBcb @ 0x14028D948 (CcAllocateInitializeBcb.c)
 *     DifExInitializeResourceLiteWrapper @ 0x140608C80 (DifExInitializeResourceLiteWrapper.c)
 *     NtCreateJobObject @ 0x140681CB0 (NtCreateJobObject.c)
 *     CmpInitCmRM @ 0x140742E3C (CmpInitCmRM.c)
 *     PnpInitializeNotifyEntry @ 0x140768894 (PnpInitializeNotifyEntry.c)
 *     SepFilterToken @ 0x14078E3F0 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x1407CDED0 (SepDuplicateToken.c)
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 *     PiPnpRtlInit @ 0x140825E70 (PiPnpRtlInit.c)
 *     PiDrvDbCreateNode @ 0x1408268AC (PiDrvDbCreateNode.c)
 *     DrvDbOpenContext @ 0x140827238 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x1408274C4 (DrvDbCreateDatabaseNode.c)
 *     _PnpCtxOpenMachine @ 0x140827888 (_PnpCtxOpenMachine.c)
 *     PiDmObjectManagerInit @ 0x140844B5C (PiDmObjectManagerInit.c)
 *     AdtpObjsInitialize @ 0x14084CD18 (AdtpObjsInitialize.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x1408506E0 (PfSnPrefetchCacheCtxInitialize.c)
 *     FsRtlInitializeTieringHeat @ 0x140855918 (FsRtlInitializeTieringHeat.c)
 *     PiDqObjectManagerInit @ 0x14085D1F8 (PiDqObjectManagerInit.c)
 *     MUIInitializeResourceLock @ 0x14085F65C (MUIInitializeResourceLock.c)
 *     TtmInit @ 0x1408633F0 (TtmInit.c)
 *     IopInitializeBootLogging @ 0x1409346B0 (IopInitializeBootLogging.c)
 *     TtmiCreateEventQueue @ 0x1409AB130 (TtmiCreateEventQueue.c)
 *     PopInitializeAdpm @ 0x140AF33B0 (PopInitializeAdpm.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 *     PipDmgInitPhaseZero @ 0x140B01314 (PipDmgInitPhaseZero.c)
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 *     MiInitializeLoadedModuleList @ 0x140B09D6C (MiInitializeLoadedModuleList.c)
 *     ExpInitSystemPhase0 @ 0x140B0B180 (ExpInitSystemPhase0.c)
 *     ExInitializeTimeRefresh @ 0x140B0E000 (ExInitializeTimeRefresh.c)
 *     CmInitSystem1 @ 0x140B15F88 (CmInitSystem1.c)
 *     PiDeviceDependencyInit @ 0x140B1ADD8 (PiDeviceDependencyInit.c)
 *     SepInitializeWorkList @ 0x140B1F250 (SepInitializeWorkList.c)
 *     PiSwInit @ 0x140B235FC (PiSwInit.c)
 *     FsRtlInitSystem @ 0x140B25C04 (FsRtlInitSystem.c)
 *     SepRmDbInitialization @ 0x140B290EC (SepRmDbInitialization.c)
 *     PpInitializeBootDDB @ 0x140B2E474 (PpInitializeBootDDB.c)
 *     PpInitSystem @ 0x140B2F780 (PpInitSystem.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140B30E74 (WmipGetSMBiosFromLoaderBlock.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14030F870 (ExpAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     RtlStdLogStackTrace @ 0x1405E4840 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x1405E48CC (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1405E4CD4 (RtlpStdGetRecordedStackTraceIndex.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140632710 (PerfLogExecutiveResourceInitialize.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14063D8B0 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

NTSTATUS __stdcall ExInitializeResourceLite(PERESOURCE Resource)
{
  ULONG_PTR v2; // rax
  unsigned __int8 CurrentIrql; // di
  struct _LIST_ENTRY *v4; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v6; // rdx
  KSPIN_LOCK *v8; // rsi
  unsigned __int16 v9; // di
  __int64 v10; // rbp
  int RecordedStackTraceIndex; // eax
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  memset(Resource, 0, sizeof(struct _ERESOURCE));
  Resource->SystemResourcesList.Blink = &Resource->SystemResourcesList;
  Resource->SystemResourcesList.Flink = &Resource->SystemResourcesList;
  *(_OWORD *)&Resource->SharedWaiters = 0LL;
  Resource->SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v8 = RtlpStackTraceDatabase;
    if ( RtlpStackTraceDatabase )
    {
      v10 = RtlStdLogStackTrace(RtlpStackTraceDatabase);
      if ( v10 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v8);
        v9 = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace(v8, v10);
      }
      else
      {
        v9 = 0;
      }
    }
    else
    {
      v9 = 0;
    }
    v2 = v9;
  }
  else
  {
    v2 = 0LL;
  }
  Resource->CreatorBackTraceIndex = v2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&ExpResourceSpinLock, CurrentIrql);
  v4 = (struct _LIST_ENTRY *)qword_140C11758;
  if ( *(__int64 **)qword_140C11758 != &ExpSystemResourcesList )
    __fastfail(3u);
  Resource->SystemResourcesList.Flink = (struct _LIST_ENTRY *)&ExpSystemResourcesList;
  Resource->SystemResourcesList.Blink = v4;
  v4->Flink = &Resource->SystemResourcesList;
  qword_140C11758 = (__int64)Resource;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  else
    ExpResourceSpinLock = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = CurrentPrcb->SchedulerAssist;
  if ( v6 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v13 = v6[6] - 1;
      v6[6] = v13;
      if ( !v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = v15->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v18 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
  }
  __writecr8(CurrentIrql);
  __incgsdword(0x8A58u);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544LL, Resource, 0LL, 0LL);
  return 0;
}
