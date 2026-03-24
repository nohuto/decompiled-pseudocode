/*
 * XREFs of ExInitializeResourceLite @ 0x14021CC50
 * Callers:
 *     SepCreateTokenEx @ 0x140201AA0 (SepCreateTokenEx.c)
 *     CcAllocateInitializeBcb @ 0x14031CD80 (CcAllocateInitializeBcb.c)
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     PnpInitializeNotifyEntry @ 0x1406C4D64 (PnpInitializeNotifyEntry.c)
 *     SepDuplicateToken @ 0x140703E00 (SepDuplicateToken.c)
 *     CmpInitCmRM @ 0x140716078 (CmpInitCmRM.c)
 *     NtCreateJobObject @ 0x14071EF90 (NtCreateJobObject.c)
 *     RtlCreateHeap @ 0x140768B60 (RtlCreateHeap.c)
 *     AdtpObjsInitialize @ 0x14079E4C0 (AdtpObjsInitialize.c)
 *     PiDmObjectManagerInit @ 0x1407A2F80 (PiDmObjectManagerInit.c)
 *     PiDqObjectManagerInit @ 0x1407A3174 (PiDqObjectManagerInit.c)
 *     PiPnpRtlInit @ 0x1407A3350 (PiPnpRtlInit.c)
 *     PiDrvDbCreateNode @ 0x1407A39CC (PiDrvDbCreateNode.c)
 *     DrvDbOpenContext @ 0x1407A400C (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x1407A4268 (DrvDbCreateDatabaseNode.c)
 *     _PnpCtxOpenMachine @ 0x1407A455C (_PnpCtxOpenMachine.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x1407BFE10 (PfSnPrefetchCacheCtxInitialize.c)
 *     FsRtlInitializeTieringHeat @ 0x1407C6910 (FsRtlInitializeTieringHeat.c)
 *     MUIInitializeResourceLock @ 0x1407CFB6C (MUIInitializeResourceLock.c)
 *     TtmInit @ 0x1407D29D8 (TtmInit.c)
 *     IopInitializeBootLogging @ 0x140891718 (IopInitializeBootLogging.c)
 *     TtmiCreateEventQueue @ 0x140905438 (TtmiCreateEventQueue.c)
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 *     SepInitializeWorkList @ 0x140A489FC (SepInitializeWorkList.c)
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x140A53088 (PpInitializeBootDDB.c)
 *     PipDmgInitPhaseZero @ 0x140A53178 (PipDmgInitPhaseZero.c)
 *     PiSwInit @ 0x140A534A0 (PiSwInit.c)
 *     PiDeviceDependencyInit @ 0x140A53ADC (PiDeviceDependencyInit.c)
 *     MiInitializeLoadedModuleList @ 0x140A55E9C (MiInitializeLoadedModuleList.c)
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 *     ExInitializeTimeRefresh @ 0x140A5B1EC (ExInitializeTimeRefresh.c)
 *     ExpInitSystemPhase0 @ 0x140A69014 (ExpInitSystemPhase0.c)
 *     FsRtlInitSystem @ 0x140A6B9E0 (FsRtlInitSystem.c)
 *     SepRmDbInitialization @ 0x140A6E540 (SepRmDbInitialization.c)
 *     PopInitializeAdpm @ 0x140A725E8 (PopInitializeAdpm.c)
 *     PpInitSystem @ 0x140A72804 (PpInitSystem.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140A73D6C (WmipGetSMBiosFromLoaderBlock.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14021D170 (ExpAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414200 (memset.c)
 *     RtlStdLogStackTrace @ 0x140585D10 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x140585D9C (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1405861A0 (RtlpStdGetRecordedStackTraceIndex.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405AAEA0 (PerfLogExecutiveResourceInitialize.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5BA8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5D8C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
  v4 = (struct _LIST_ENTRY *)qword_140C16B08;
  if ( *(__int64 **)qword_140C16B08 != &ExpSystemResourcesList )
    __fastfail(3u);
  Resource->SystemResourcesList.Flink = (struct _LIST_ENTRY *)&ExpSystemResourcesList;
  Resource->SystemResourcesList.Blink = v4;
  v4->Flink = &Resource->SystemResourcesList;
  qword_140C16B08 = (__int64)Resource;
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
