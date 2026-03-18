/*
 * XREFs of ExInitializeResourceLite @ 0x140213470
 * Callers:
 *     SepCreateTokenEx @ 0x14026E3A0 (SepCreateTokenEx.c)
 *     CcAllocateInitializeBcb @ 0x1402C4F3C (CcAllocateInitializeBcb.c)
 *     SepFilterToken @ 0x140632E90 (SepFilterToken.c)
 *     CmpInitCmRM @ 0x140655B64 (CmpInitCmRM.c)
 *     NtCreateJobObject @ 0x1406570F0 (NtCreateJobObject.c)
 *     SepDuplicateToken @ 0x1406795C0 (SepDuplicateToken.c)
 *     PnpInitializeNotifyEntry @ 0x1406C5A54 (PnpInitializeNotifyEntry.c)
 *     RtlCreateHeap @ 0x140756C80 (RtlCreateHeap.c)
 *     PiDqObjectManagerInit @ 0x14078C514 (PiDqObjectManagerInit.c)
 *     PiPnpRtlInit @ 0x14078C6F0 (PiPnpRtlInit.c)
 *     PiDrvDbCreateNode @ 0x14078CD6C (PiDrvDbCreateNode.c)
 *     DrvDbOpenContext @ 0x14078D3AC (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x14078D608 (DrvDbCreateDatabaseNode.c)
 *     _PnpCtxOpenMachine @ 0x14078D8FC (_PnpCtxOpenMachine.c)
 *     PiDmObjectManagerInit @ 0x1407A47F4 (PiDmObjectManagerInit.c)
 *     AdtpObjsInitialize @ 0x1407AAC70 (AdtpObjsInitialize.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x1407ADACC (PfSnPrefetchCacheCtxInitialize.c)
 *     FsRtlInitializeTieringHeat @ 0x1407B3E1C (FsRtlInitializeTieringHeat.c)
 *     MUIInitializeResourceLock @ 0x1407BD01C (MUIInitializeResourceLock.c)
 *     TtmInit @ 0x1407BFD58 (TtmInit.c)
 *     IopInitializeBootLogging @ 0x14088E690 (IopInitializeBootLogging.c)
 *     TtmiCreateEventQueue @ 0x140902028 (TtmiCreateEventQueue.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x140A51400 (PpInitializeBootDDB.c)
 *     PipDmgInitPhaseZero @ 0x140A514F0 (PipDmgInitPhaseZero.c)
 *     PiSwInit @ 0x140A51818 (PiSwInit.c)
 *     PiDeviceDependencyInit @ 0x140A51E54 (PiDeviceDependencyInit.c)
 *     MiInitializeLoadedModuleList @ 0x140A54214 (MiInitializeLoadedModuleList.c)
 *     CmInitSystem1 @ 0x140A582D4 (CmInitSystem1.c)
 *     ExInitializeTimeRefresh @ 0x140A59540 (ExInitializeTimeRefresh.c)
 *     SepInitializeWorkList @ 0x140A5F2EC (SepInitializeWorkList.c)
 *     ExpInitSystemPhase0 @ 0x140A6490C (ExpInitSystemPhase0.c)
 *     FsRtlInitSystem @ 0x140A68230 (FsRtlInitSystem.c)
 *     SepRmDbInitialization @ 0x140A6ACB4 (SepRmDbInitialization.c)
 *     PopInitializeAdpm @ 0x140A6EF78 (PopInitializeAdpm.c)
 *     PpInitSystem @ 0x140A6F380 (PpInitSystem.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140A709BC (WmipGetSMBiosFromLoaderBlock.c)
 *     PopDripsWatchdogInitialize @ 0x140A70F60 (PopDripsWatchdogInitialize.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x1402135A0 (ExpAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 *     RtlStdLogStackTrace @ 0x1405809A0 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x140580A2C (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140580E30 (RtlpStdGetRecordedStackTraceIndex.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405A59F4 (PerfLogExecutiveResourceInitialize.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B0814 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
  v4 = (struct _LIST_ENTRY *)qword_140C16948;
  if ( *(__int64 **)qword_140C16948 != &ExpSystemResourcesList )
    __fastfail(3u);
  Resource->SystemResourcesList.Flink = (struct _LIST_ENTRY *)&ExpSystemResourcesList;
  Resource->SystemResourcesList.Blink = v4;
  v4->Flink = &Resource->SystemResourcesList;
  qword_140C16948 = (__int64)Resource;
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
  __incgsdword(0x8658u);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544LL, Resource, 0LL, 0LL);
  return 0;
}
