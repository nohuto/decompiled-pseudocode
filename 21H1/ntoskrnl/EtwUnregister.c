/*
 * XREFs of EtwUnregister @ 0x140748B40
 * Callers:
 *     BapdWriteEtwEvents @ 0x140397B08 (BapdWriteEtwEvents.c)
 *     HvlPhase2Initialize @ 0x1403CACE8 (HvlPhase2Initialize.c)
 *     PsDispatchIumService @ 0x14057D274 (PsDispatchIumService.c)
 *     WmipGECleanup @ 0x14075DC10 (WmipGECleanup.c)
 *     PopBootLoaderTraceProcess @ 0x1407657EC (PopBootLoaderTraceProcess.c)
 *     WmipLegacyEtwWorker @ 0x1407AFBD0 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x1407AFD30 (WmipProcessLegacyEtwRegister.c)
 *     TraceLoggingUnregister_EtwUnregister @ 0x14087E354 (TraceLoggingUnregister_EtwUnregister.c)
 *     DbgkpStartSystemErrorHandler @ 0x140883440 (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x14088390C (DbgkCaptureLiveDump.c)
 *     SSHSupportEtwUnregister @ 0x1408F7408 (SSHSupportEtwUnregister.c)
 *     PsShutdownSystem @ 0x140906374 (PsShutdownSystem.c)
 *     BapdRecordFirmwareBootStats @ 0x1409948D0 (BapdRecordFirmwareBootStats.c)
 *     BapdpRecordIumStatus @ 0x140A3E04C (BapdpRecordIumStatus.c)
 *     PerfDiagInitialize @ 0x140A46790 (PerfDiagInitialize.c)
 *     VslpIumInitializeTelemetry @ 0x140A6EECC (VslpIumInitializeTelemetry.c)
 *     SshpUninitialize @ 0x140A91444 (SshpUninitialize.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405F7508 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1406C8B78 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x140935500 (EtwpEventWriteTemplateSessAndProv.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall EtwUnregister(REGHANDLE RegHandle)
{
  struct _KTHREAD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rcx
  struct _KTHREAD *CurrentThread; // rax

  if ( !RegHandle )
    return -1073741816;
  if ( (*(_BYTE *)(RegHandle + 98) & 1) == 0 )
    KeBugCheckEx(0x11Du, 4uLL, RegHandle, 1uLL, 0LL);
  if ( *(_QWORD *)(RegHandle + 40) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(RegHandle + 40) + 408LL, 0LL);
    *(_QWORD *)(*(_QWORD *)(RegHandle + 40) + 416LL) = KeGetCurrentThread();
  }
  v2 = KeGetCurrentThread();
  --v2->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(RegHandle + 32) + 408LL, 0LL);
  *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 416LL) = KeGetCurrentThread();
  v3 = *(_QWORD *)RegHandle;
  if ( *(_QWORD *)(*(_QWORD *)RegHandle + 8LL) != RegHandle
    || (v4 = *(_QWORD **)(RegHandle + 8), *v4 != RegHandle)
    || (*v4 = v3, *(_QWORD *)(v3 + 8) = v4, v5 = *(_QWORD *)(RegHandle + 16), *(_QWORD *)(v5 + 8) != RegHandle + 16)
    || (v6 = *(_QWORD **)(RegHandle + 24), *v6 != RegHandle + 16) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 416LL) = 0LL;
  ExReleasePushLockEx(*(_QWORD *)(RegHandle + 32) + 408LL, 0LL);
  KeLeaveCriticalRegion();
  v7 = *(_QWORD *)(RegHandle + 40);
  if ( v7 )
  {
    *(_QWORD *)(v7 + 416) = 0LL;
    ExReleasePushLockEx(*(_QWORD *)(RegHandle + 40) + 408LL, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_UNREGISTERS) )
    EtwpEventWriteTemplateSessAndProv(
      v8,
      &ETW_EVENT_PROVIDER_UNREGISTERS,
      v9,
      1LL,
      0LL,
      *(_QWORD *)(RegHandle + 32) + 40LL);
  EtwpUnreferenceGuidEntry(*(__int64 **)(RegHandle + 32));
  v10 = *(__int64 **)(RegHandle + 40);
  if ( v10 )
    EtwpUnreferenceGuidEntry(v10);
  EtwpReleaseProviderTraitsReference(RegHandle);
  ExFreePoolWithTag((PVOID)RegHandle, 0);
  return 0;
}
