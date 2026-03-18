/*
 * XREFs of PnpRequestDeviceAction @ 0x14036BAD4
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x14033DC04 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoInvalidateDeviceRelations @ 0x14036BA20 (IoInvalidateDeviceRelations.c)
 *     IoInvalidateDeviceState @ 0x1403A1C20 (IoInvalidateDeviceState.c)
 *     PnpInitializeProcessor @ 0x1405068A8 (PnpInitializeProcessor.c)
 *     PiControlGetSetDeviceStatus @ 0x1407103A0 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14071B3E4 (PiQueueDeviceRequest.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14073279C (PnpProcessQueryRemoveAndEject.c)
 *     PnpInvalidateRelationsInList @ 0x1407338CC (PnpInvalidateRelationsInList.c)
 *     IopReleaseDeviceResources @ 0x140733F88 (IopReleaseDeviceResources.c)
 *     IopReleaseFilteredBootResources @ 0x14073BAE8 (IopReleaseFilteredBootResources.c)
 *     PiResetProblemDevicesWorker @ 0x14075A4A0 (PiResetProblemDevicesWorker.c)
 *     IopDeleteDriver @ 0x14075D590 (IopDeleteDriver.c)
 *     PnpBootPhaseComplete @ 0x14078A6C4 (PnpBootPhaseComplete.c)
 *     PpDevCfgProcessDevices @ 0x14078A78C (PpDevCfgProcessDevices.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407A8AE0 (PiDevCfgProcessDeviceCallback.c)
 *     IoReportRootDevice @ 0x1407B2200 (IoReportRootDevice.c)
 *     PipAttemptDependentStart @ 0x140899694 (PipAttemptDependentStart.c)
 *     IopResourceRequirementsChanged @ 0x14089B610 (IopResourceRequirementsChanged.c)
 *     PpSystemHiveLimitCallback @ 0x14089D5D0 (PpSystemHiveLimitCallback.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x1408AD148 (PipDmgRequestRestartOnBlockedDevice.c)
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 *     PipInitializeCoreDriversByGroup @ 0x140A564C0 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x140A567E8 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140A56C1C (IopInitializeBootDrivers.c)
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x14035B334 (PnpIsSafeToExamineUserModeTeb.c)
 *     PnpDeviceActionWorker @ 0x14036BEB0 (PnpDeviceActionWorker.c)
 *     PnpLogActionQueueEvent @ 0x14036C3A8 (PnpLogActionQueueEvent.c)
 *     PopDirectedDripsSetDisengageReason @ 0x140377694 (PopDirectedDripsSetDisengageReason.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpRequestDeviceAction(
        PVOID Object,
        int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  char *PoolWithTag; // rdi
  char v12; // al
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r13
  __int64 v17; // r8
  unsigned __int64 v18; // r13
  _QWORD *v19; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // edx
  bool v25; // zf
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // rdx
  _DWORD *v32; // r9
  int v33; // eax
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  _DWORD *v36; // r8
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // edx
  unsigned int v42; // [rsp+28h] [rbp-40h]
  GUID v43; // [rsp+30h] [rbp-38h]

  v43 = NullGuid;
  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x32706E50u);
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( !Object )
    Object = (PVOID)*((_QWORD *)IopRootDeviceNode + 4);
  ObfReferenceObjectWithTag(Object, 0x746C6644u);
  *((_QWORD *)PoolWithTag + 2) = Object;
  *((_DWORD *)PoolWithTag + 6) = a2;
  PoolWithTag[28] = a3;
  *((_QWORD *)PoolWithTag + 4) = a4;
  *((_QWORD *)PoolWithTag + 5) = a5;
  *((_QWORD *)PoolWithTag + 6) = a6;
  *((_DWORD *)PoolWithTag + 18) = 1;
  PoolWithTag[76] = 0;
  PoolWithTag[88] = 0;
  *((_QWORD *)PoolWithTag + 10) = 0LL;
  if ( !a2 )
    goto LABEL_42;
  if ( a2 != 6 )
  {
    if ( a2 <= 8 )
    {
LABEL_8:
      v12 = 1;
LABEL_9:
      if ( v12 && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        Flink = KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
        if ( Flink )
        {
          v43 = (GUID)*Flink;
        }
        else if ( PnpIsSafeToExamineUserModeTeb()
               && KeGetPcr()->NtTib.$1CC13EA220102F7150542D4DBFF67C6A::$4027F68EF0E7CC3497C55FD2100A3F4B::Self )
        {
          v43 = *(GUID *)&KeGetPcr()->NtTib.$1CC13EA220102F7150542D4DBFF67C6A::$4027F68EF0E7CC3497C55FD2100A3F4B::Self[105].SubSystemTib;
        }
      }
      goto LABEL_13;
    }
    if ( a2 > 10 && a2 != 14 )
    {
      if ( a2 <= 16 || a2 > 18 )
        goto LABEL_8;
LABEL_42:
      v12 = 0;
      goto LABEL_9;
    }
  }
LABEL_13:
  *(GUID *)(PoolWithTag + 56) = v43;
  if ( Object )
    v14 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v14 = 0LL;
  PnpLogActionQueueEvent(v14, (unsigned int)a2, 0LL, 0LL);
  v42 = *((_DWORD *)PoolWithTag + 6);
  v15 = KeAcquireSpinLockRaiseToDpc(&qword_140C24E48);
  if ( ++dword_140C24E50 == 1 )
    PopDirectedDripsSetDisengageReason(4LL);
  KxReleaseSpinLock(&qword_140C24E48);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        v25 = (v24 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v24;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v15);
  v16 = KeAcquireSpinLockRaiseToDpc(&qword_140C1E9D0);
  v17 = MEMORY[0xFFFFF78000000008];
  ++dword_140C1E9D8;
  ++*((_DWORD *)&PopDirectedDripsDiagSessionContext + v42 + 16);
  if ( byte_140C1EA48 )
  {
    ++*((_DWORD *)&PopDirectedDripsDiagSessionContext + v42 + 102);
    if ( dword_140C1E9D8 == 1 )
      qword_140C1EA58 = v17;
  }
  KxReleaseSpinLock(&qword_140C1E9D0);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v25 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
  }
  __writecr8(v16);
  v18 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v19 = (_QWORD *)qword_140C43568;
  if ( *(__int64 **)qword_140C43568 != &PnpEnumerationRequestList )
    __fastfail(3u);
  *(_QWORD *)PoolWithTag = &PnpEnumerationRequestList;
  *((_QWORD *)PoolWithTag + 1) = v19;
  *v19 = PoolWithTag;
  qword_140C43568 = (__int64)PoolWithTag;
  if ( a7 )
  {
    ++*((_DWORD *)PoolWithTag + 18);
    *a7 = PoolWithTag;
  }
  if ( a2 == 7 || a2 == 10 )
  {
    PnpEnumerationInProgress = 1;
    KeResetEvent(&PnpEnumerationLock);
    KxReleaseSpinLock(&PnpSpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v38 = KeGetCurrentIrql();
        if ( v38 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v38 >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          v40 = v39->SchedulerAssist;
          v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v25 = (v41 & v40[5]) == 0;
          v40[5] &= v41;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v39);
        }
      }
    }
    __writecr8(v18);
    PnpDeviceActionWorker(0LL);
  }
  else if ( PnpEnumerationInProgress || !PnPBootDriversLoaded )
  {
    KxReleaseSpinLock(&PnpSpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v34 = KeGetCurrentIrql();
        if ( v34 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v34 >= 2u )
        {
          v35 = KeGetCurrentPrcb();
          v36 = v35->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v25 = (v37 & v36[5]) == 0;
          v36[5] &= v37;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v35);
        }
      }
    }
    __writecr8(v18);
  }
  else
  {
    PnpEnumerationInProgress = 1;
    KeResetEvent(&PnpEnumerationLock);
    KxReleaseSpinLock(&PnpSpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v30 = KeGetCurrentIrql();
        if ( v30 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v30 >= 2u )
        {
          v31 = KeGetCurrentPrcb();
          v32 = v31->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v25 = (v33 & v32[5]) == 0;
          v32[5] &= v33;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v31);
        }
      }
    }
    __writecr8(v18);
    PnpDeviceEnumerationWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceActionWorker;
    PnpDeviceEnumerationWorkItem.Parameter = 0LL;
    PnpDeviceEnumerationWorkItem.List.Flink = 0LL;
    ExQueueWorkItem(&PnpDeviceEnumerationWorkItem, DelayedWorkQueue);
  }
  return 0LL;
}
