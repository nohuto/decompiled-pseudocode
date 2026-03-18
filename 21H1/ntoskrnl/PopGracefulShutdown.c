/*
 * XREFs of PopGracefulShutdown @ 0x1409AD290
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KeAttachProcess @ 0x140313250 (KeAttachProcess.c)
 *     PopDiagTraceEventNoPayload @ 0x14031D664 (PopDiagTraceEventNoPayload.c)
 *     KeAcquireGuardedMutex @ 0x140359B90 (KeAcquireGuardedMutex.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x14037F3A0 (CcWaitForCurrentLazyWriterActivity.c)
 *     IoAddTriageDumpDataBlock @ 0x1403C8408 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     VfShutdownScheduleWatchdog @ 0x14059C5A8 (VfShutdownScheduleWatchdog.c)
 *     EtwShutdown @ 0x140760200 (EtwShutdown.c)
 *     PopTransitionCheckpoint @ 0x1407618D8 (PopTransitionCheckpoint.c)
 *     EtwWriteEndScenario @ 0x140773BE0 (EtwWriteEndScenario.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x140793514 (PnpWaitForEmptyDeviceActionQueue.c)
 *     CmShutdownSystem @ 0x140866F58 (CmShutdownSystem.c)
 *     MmZeroPageFileAtShutdown @ 0x1408C02A4 (MmZeroPageFileAtShutdown.c)
 *     ObShutdownSystem @ 0x1408D7B20 (ObShutdownSystem.c)
 *     PopSetCleanShutdownMarker @ 0x1408DCD4C (PopSetCleanShutdownMarker.c)
 *     PsShutdownSystem @ 0x140906374 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x140906778 (PsWaitForAllProcesses.c)
 *     PopSetDevicesSystemState @ 0x14098D3EC (PopSetDevicesSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x140992828 (PopBuildDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x1409A7108 (IoShutdownSystem.c)
 *     MmShutdownSystem @ 0x1409AC4B0 (MmShutdownSystem.c)
 *     PopShutdownSystem @ 0x1409AE954 (PopShutdownSystem.c)
 *     ExShutdownSystem @ 0x1409AEE88 (ExShutdownSystem.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __noreturn PopGracefulShutdown()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  PVOID *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  _DWORD *v5; // r9
  struct _KPROCESS *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9

  PopTransitionCheckpoint(10, 1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_GRACEFULSHUTDOWN_START);
  *(_QWORD *)(*(_QWORD *)&qword_140C23438 + 16LL) = KeGetCurrentThread();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_START);
  MmZeroPageFileAtShutdown();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_STOP);
  if ( !*(_QWORD *)&qword_140C23430 )
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
  MmShutdownSystem(0, v3, v4, v5);
  PopSetCleanShutdownMarker();
  PopTransitionCheckpoint(10, 2);
  PnpWaitForEmptyDeviceActionQueue();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_START);
  IoShutdownSystem(1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_STOP);
  CcWaitForCurrentLazyWriterActivity();
  if ( *(_QWORD *)&qword_140C23430 )
  {
    v6 = *(struct _KPROCESS **)(*(_QWORD *)&qword_140C23430 + 8LL);
    if ( v6 )
      KeAttachProcess(v6);
    IoAddTriageDumpDataBlock(qword_140C23430, (PVOID)0x48);
    KeBugCheckEx(
      *(_DWORD *)(*(_QWORD *)&qword_140C23430 + 32LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C23430 + 40LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C23430 + 48LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C23430 + 56LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C23430 + 64LL));
  }
  PopBootStatCheckpointAvailable = 0;
  *(_DWORD *)(*(_QWORD *)&qword_140C23438 + 448LL) = 0;
  PopBuildDeviceNotifyList((void *)(*(_QWORD *)&qword_140C23438 + 48LL));
  PopSetDevicesSystemState();
  ExShutdownSystem(2LL);
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(2);
  MmShutdownSystem(2, v7, v8, v9);
  PopShutdownSystem((unsigned int)qword_140C23404);
}
