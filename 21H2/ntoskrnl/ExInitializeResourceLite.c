/*
 * XREFs of ExInitializeResourceLite @ 0x1402C1550
 * Callers:
 *     SepCreateTokenEx @ 0x1402A6428 (SepCreateTokenEx.c)
 *     CcAllocateInitializeBcb @ 0x140327AD0 (CcAllocateInitializeBcb.c)
 *     PnpInitializeNotifyEntry @ 0x140673654 (PnpInitializeNotifyEntry.c)
 *     CmpInitCmRM @ 0x1406C46C8 (CmpInitCmRM.c)
 *     SepFilterToken @ 0x1406CA87C (SepFilterToken.c)
 *     NtCreateJobObject @ 0x1406F7090 (NtCreateJobObject.c)
 *     SepDuplicateToken @ 0x14071B1E0 (SepDuplicateToken.c)
 *     RtlCreateHeap @ 0x140768D20 (RtlCreateHeap.c)
 *     AdtpObjsInitialize @ 0x14079E6C0 (AdtpObjsInitialize.c)
 *     PiDmObjectManagerInit @ 0x1407A3180 (PiDmObjectManagerInit.c)
 *     PiDqObjectManagerInit @ 0x1407A3374 (PiDqObjectManagerInit.c)
 *     PiPnpRtlInit @ 0x1407A3550 (PiPnpRtlInit.c)
 *     PiDrvDbCreateNode @ 0x1407A3BCC (PiDrvDbCreateNode.c)
 *     DrvDbOpenContext @ 0x1407A420C (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x1407A4468 (DrvDbCreateDatabaseNode.c)
 *     _PnpCtxOpenMachine @ 0x1407A475C (_PnpCtxOpenMachine.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x1407C032C (PfSnPrefetchCacheCtxInitialize.c)
 *     FsRtlInitializeTieringHeat @ 0x1407C6C30 (FsRtlInitializeTieringHeat.c)
 *     MUIInitializeResourceLock @ 0x1407CFCDC (MUIInitializeResourceLock.c)
 *     TtmInit @ 0x1407D2B48 (TtmInit.c)
 *     IopInitializeBootLogging @ 0x140891878 (IopInitializeBootLogging.c)
 *     TtmiCreateEventQueue @ 0x140905598 (TtmiCreateEventQueue.c)
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 *     SepInitializeWorkList @ 0x140A499FC (SepInitializeWorkList.c)
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x140A54088 (PpInitializeBootDDB.c)
 *     PipDmgInitPhaseZero @ 0x140A54178 (PipDmgInitPhaseZero.c)
 *     PiSwInit @ 0x140A544A0 (PiSwInit.c)
 *     PiDeviceDependencyInit @ 0x140A54ADC (PiDeviceDependencyInit.c)
 *     MiInitializeLoadedModuleList @ 0x140A56E9C (MiInitializeLoadedModuleList.c)
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 *     ExInitializeTimeRefresh @ 0x140A5C1EC (ExInitializeTimeRefresh.c)
 *     ExpInitSystemPhase0 @ 0x140A6A014 (ExpInitSystemPhase0.c)
 *     FsRtlInitSystem @ 0x140A6C9E0 (FsRtlInitSystem.c)
 *     SepRmDbInitialization @ 0x140A6F540 (SepRmDbInitialization.c)
 *     PopInitializeAdpm @ 0x140A734AC (PopInitializeAdpm.c)
 *     PpInitSystem @ 0x140A73804 (PpInitSystem.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140A74D6C (WmipGetSMBiosFromLoaderBlock.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x1402C1A70 (ExpAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlStdLogStackTrace @ 0x140585F40 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x140585FCC (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1405863D0 (RtlpStdGetRecordedStackTraceIndex.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405AB0D0 (PerfLogExecutiveResourceInitialize.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5FBC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
  v4 = (struct _LIST_ENTRY *)qword_140C16B48;
  if ( *(__int64 **)qword_140C16B48 != &ExpSystemResourcesList )
    __fastfail(3u);
  Resource->SystemResourcesList.Flink = (struct _LIST_ENTRY *)&ExpSystemResourcesList;
  Resource->SystemResourcesList.Blink = v4;
  v4->Flink = &Resource->SystemResourcesList;
  qword_140C16B48 = (__int64)Resource;
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
