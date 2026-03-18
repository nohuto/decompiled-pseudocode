/*
 * XREFs of PnpRequestDeviceAction @ 0x1402DCF44
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x14024FC04 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoInvalidateDeviceState @ 0x1402DCE00 (IoInvalidateDeviceState.c)
 *     IoInvalidateDeviceRelations @ 0x1402DCE90 (IoInvalidateDeviceRelations.c)
 *     PnpInitializeProcessor @ 0x14055F378 (PnpInitializeProcessor.c)
 *     PiQueueDeviceRequest @ 0x14065F5D4 (PiQueueDeviceRequest.c)
 *     PiProcessQueryDeviceState @ 0x140749F30 (PiProcessQueryDeviceState.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1407655BC (PnpProcessQueryRemoveAndEject.c)
 *     IopReleaseDeviceResources @ 0x140766A5C (IopReleaseDeviceResources.c)
 *     PiControlGetSetDeviceStatus @ 0x1407793D0 (PiControlGetSetDeviceStatus.c)
 *     PnpInvalidateRelationsInList @ 0x14080E8D0 (PnpInvalidateRelationsInList.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 *     PnpBootPhaseComplete @ 0x140827E8C (PnpBootPhaseComplete.c)
 *     PpDevCfgProcessDevices @ 0x140827F54 (PpDevCfgProcessDevices.c)
 *     IopReleaseFilteredBootResources @ 0x140831280 (IopReleaseFilteredBootResources.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14084F060 (PiDevCfgProcessDeviceCallback.c)
 *     PiResetProblemDevicesWorker @ 0x140852BC0 (PiResetProblemDevicesWorker.c)
 *     IopDeleteDriver @ 0x14085D640 (IopDeleteDriver.c)
 *     PipAttemptDependentStart @ 0x1409428B8 (PipAttemptDependentStart.c)
 *     IoRequestDeviceRemovalForReset @ 0x140945420 (IoRequestDeviceRemovalForReset.c)
 *     PpSystemHiveLimitCallback @ 0x140946B60 (PpSystemHiveLimitCallback.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x140956BF8 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PipDmgRequestUpdateConsoleLockState @ 0x140956ED0 (PipDmgRequestUpdateConsoleLockState.c)
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 *     PipInitializeCoreDriversByGroup @ 0x140B10D98 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x140B110B4 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140B114E8 (IopInitializeBootDrivers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14025013C (PopDirectedDripsSetDisengageReason.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     PnpDeviceActionWorker @ 0x1402DD320 (PnpDeviceActionWorker.c)
 *     PnpLogActionQueueEvent @ 0x1402DD9AC (PnpLogActionQueueEvent.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x1402E08F8 (PnpIsSafeToExamineUserModeTeb.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpRequestDeviceAction(
        PVOID Object,
        int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 Pool2; // rdi
  char v12; // al
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r13
  __int64 v17; // r8
  unsigned __int64 v18; // r13
  __int64 *v19; // rax
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
  Pool2 = ExAllocatePool2(64LL, 96LL, 846229072LL);
  if ( !Pool2 )
    return 3221225626LL;
  if ( !Object )
    Object = (PVOID)*((_QWORD *)IopRootDeviceNode + 4);
  ObfReferenceObjectWithTag(Object, 0x746C6644u);
  *(_QWORD *)(Pool2 + 16) = Object;
  *(_DWORD *)(Pool2 + 24) = a2;
  *(_BYTE *)(Pool2 + 28) = a3;
  *(_QWORD *)(Pool2 + 32) = a4;
  *(_QWORD *)(Pool2 + 40) = a5;
  *(_QWORD *)(Pool2 + 48) = a6;
  *(_DWORD *)(Pool2 + 72) = 1;
  *(_BYTE *)(Pool2 + 76) = 0;
  *(_BYTE *)(Pool2 + 88) = 0;
  *(_QWORD *)(Pool2 + 80) = 0LL;
  if ( !a2 )
    goto LABEL_33;
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
        else if ( (unsigned __int8)PnpIsSafeToExamineUserModeTeb()
               && KeGetPcr()->NtTib.$D930595FF9CFE8BC32A0A90C751D1401::$2ADFB250FDFF3378DEB06B8BF0B21A0F::Self )
        {
          v43 = *(GUID *)&KeGetPcr()->NtTib.$D930595FF9CFE8BC32A0A90C751D1401::$2ADFB250FDFF3378DEB06B8BF0B21A0F::Self[105].SubSystemTib;
        }
      }
      goto LABEL_13;
    }
    if ( a2 > 10 && a2 != 14 )
    {
      if ( a2 <= 16 || a2 > 18 )
        goto LABEL_8;
LABEL_33:
      v12 = 0;
      goto LABEL_9;
    }
  }
LABEL_13:
  *(GUID *)(Pool2 + 56) = v43;
  if ( Object )
    v14 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v14 = 0LL;
  PnpLogActionQueueEvent(v14, (unsigned int)a2, 0LL, 0LL);
  v42 = *(_DWORD *)(Pool2 + 24);
  v15 = KeAcquireSpinLockRaiseToDpc(&qword_140C24268);
  if ( ++dword_140C24270 == 1 )
    PopDirectedDripsSetDisengageReason(4);
  KxReleaseSpinLock(&qword_140C24268);
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
  v16 = KeAcquireSpinLockRaiseToDpc(&qword_140C1CB90);
  v17 = MEMORY[0xFFFFF78000000008];
  ++dword_140C1CB98;
  ++*((_DWORD *)&PopDirectedDripsDiagSessionContext + v42 + 16);
  if ( byte_140C1CC10 )
  {
    ++*((_DWORD *)&PopDirectedDripsDiagSessionContext + v42 + 108);
    if ( dword_140C1CB98 == 1 )
      qword_140C1CC20 = v17;
  }
  KxReleaseSpinLock(&qword_140C1CB90);
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
  v19 = (__int64 *)qword_140C44A48;
  if ( *(__int64 **)qword_140C44A48 != &PnpEnumerationRequestList )
    __fastfail(3u);
  *(_QWORD *)Pool2 = &PnpEnumerationRequestList;
  *(_QWORD *)(Pool2 + 8) = v19;
  *v19 = Pool2;
  qword_140C44A48 = Pool2;
  if ( a7 )
  {
    ++*(_DWORD *)(Pool2 + 72);
    *a7 = Pool2;
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
