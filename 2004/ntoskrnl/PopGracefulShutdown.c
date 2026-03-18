/*
 * XREFs of PopGracefulShutdown @ 0x1409AE0F0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeAcquireGuardedMutex @ 0x140273EF0 (KeAcquireGuardedMutex.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeAttachProcess @ 0x140351100 (KeAttachProcess.c)
 *     PopDiagTraceEventNoPayload @ 0x14035B1A4 (PopDiagTraceEventNoPayload.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x14037FD00 (CcWaitForCurrentLazyWriterActivity.c)
 *     IoAddTriageDumpDataBlock @ 0x1403C9218 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     VfShutdownScheduleWatchdog @ 0x14059CC98 (VfShutdownScheduleWatchdog.c)
 *     EtwShutdown @ 0x140761AE0 (EtwShutdown.c)
 *     PopTransitionCheckpoint @ 0x1407631B8 (PopTransitionCheckpoint.c)
 *     EtwWriteEndScenario @ 0x140775FF0 (EtwWriteEndScenario.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14078C344 (PnpWaitForEmptyDeviceActionQueue.c)
 *     CmShutdownSystem @ 0x1408682A8 (CmShutdownSystem.c)
 *     MmZeroPageFileAtShutdown @ 0x1408C15F4 (MmZeroPageFileAtShutdown.c)
 *     ObShutdownSystem @ 0x1408D8E90 (ObShutdownSystem.c)
 *     PopSetCleanShutdownMarker @ 0x1408DE0BC (PopSetCleanShutdownMarker.c)
 *     PsShutdownSystem @ 0x140907624 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x140907A28 (PsWaitForAllProcesses.c)
 *     PopSetDevicesSystemState @ 0x14098DC04 (PopSetDevicesSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x140993E68 (PopBuildDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x1409A7F68 (IoShutdownSystem.c)
 *     MmShutdownSystem @ 0x1409AD310 (MmShutdownSystem.c)
 *     PopShutdownSystem @ 0x1409AF7B4 (PopShutdownSystem.c)
 *     ExShutdownSystem @ 0x1409AFCE8 (ExShutdownSystem.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __noreturn PopGracefulShutdown()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  PVOID *v2; // rbx
  struct _KPROCESS *v3; // rcx

  PopTransitionCheckpoint(10, 1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_GRACEFULSHUTDOWN_START);
  *(_QWORD *)(*(_QWORD *)&qword_140C22E78 + 16LL) = KeGetCurrentThread();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_START);
  MmZeroPageFileAtShutdown();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_STOP);
  if ( !*(_QWORD *)&qword_140C22E70 )
    off_140C00AF8[0]();
  VfShutdownScheduleWatchdog();
  if ( PopShutdownCleanly )
  {
    PsShutdownSystem();
    KeSetEvent(&PopShutdownEvent, 0, 0);
    KeAcquireGuardedMutex(&PopShutdownListMutex);
    PopShutdownListAvailable = 0;
    KeReleaseGuardedMutex(&PopShutdownListMutex);
    while ( 1 )
    {
      v1 = PopShutdownQueue;
      if ( (__int64 *)PopShutdownQueue == &PopShutdownQueue )
        break;
      if ( *(__int64 **)(PopShutdownQueue + 8) != &PopShutdownQueue
        || (v0 = *(_QWORD *)PopShutdownQueue, *(_QWORD *)(*(_QWORD *)PopShutdownQueue + 8LL) != PopShutdownQueue) )
      {
        __fastfail(3u);
      }
      PopShutdownQueue = *(_QWORD *)PopShutdownQueue;
      *(_QWORD *)(v0 + 8) = &PopShutdownQueue;
      (*(void (__fastcall **)(_QWORD))(v1 + 16))(*(_QWORD *)(v1 + 24));
    }
    while ( 1 )
    {
      v2 = (PVOID *)PopShutdownThreadList;
      if ( !PopShutdownThreadList )
        break;
      PopShutdownThreadList = *(PVOID *)PopShutdownThreadList;
      KeWaitForSingleObject(v2[1], Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(v2[1], 0x64536F50u);
      ExFreePoolWithTag(v2, 0);
    }
  }
  TmShutdownSystem();
  CmShutdownSystem(0);
  ExShutdownSystem(0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWNSYSTEM_START);
  IoShutdownSystem(0);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWNSYSTEM_STOP);
  if ( PopShutdownCleanly )
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_START);
    PsWaitForAllProcesses();
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_STOP);
  }
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(0);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_CMSHUTDOWNSYSTEM_START);
  CmShutdownSystem(1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_CMSHUTDOWNSYSTEM_STOP);
  if ( PopDiagHandleRegistered )
    EtwWriteEndScenario(
      (ULONG_PTR *)PopDiagHandle,
      &POP_ETW_EVENT_GRACEFULSHUTDOWN_STOP,
      &PopShutdownDiagnosticsScenarioGuid,
      0,
      0LL);
  EtwShutdown(0);
  ExShutdownSystem(1LL);
  MmShutdownSystem(0);
  PopSetCleanShutdownMarker();
  PopTransitionCheckpoint(10, 2);
  PnpWaitForEmptyDeviceActionQueue();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_START);
  IoShutdownSystem(1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_STOP);
  CcWaitForCurrentLazyWriterActivity();
  if ( *(_QWORD *)&qword_140C22E70 )
  {
    v3 = *(struct _KPROCESS **)(*(_QWORD *)&qword_140C22E70 + 8LL);
    if ( v3 )
      KeAttachProcess(v3);
    IoAddTriageDumpDataBlock(qword_140C22E70, (PVOID)0x48);
    KeBugCheckEx(
      *(_DWORD *)(*(_QWORD *)&qword_140C22E70 + 32LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C22E70 + 40LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C22E70 + 48LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C22E70 + 56LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C22E70 + 64LL));
  }
  PopBootStatCheckpointAvailable = 0;
  *(_DWORD *)(*(_QWORD *)&qword_140C22E78 + 448LL) = 0;
  PopBuildDeviceNotifyList((void *)(*(_QWORD *)&qword_140C22E78 + 48LL));
  PopSetDevicesSystemState();
  ExShutdownSystem(2LL);
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(2);
  MmShutdownSystem(2);
  PopShutdownSystem((unsigned int)qword_140C22E44);
}
