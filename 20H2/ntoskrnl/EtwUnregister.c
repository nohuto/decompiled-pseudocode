/*
 * XREFs of EtwUnregister @ 0x14075BB40
 * Callers:
 *     BapdWriteEtwEvents @ 0x1403A73CC (BapdWriteEtwEvents.c)
 *     HvlPhase2Initialize @ 0x1403CE6C8 (HvlPhase2Initialize.c)
 *     PsDispatchIumService @ 0x1405812E4 (PsDispatchIumService.c)
 *     WmipGECleanup @ 0x14076E590 (WmipGECleanup.c)
 *     PopBootLoaderTraceProcess @ 0x1407761DC (PopBootLoaderTraceProcess.c)
 *     WmipLegacyEtwWorker @ 0x1407C0C90 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x1407C0DF0 (WmipProcessLegacyEtwRegister.c)
 *     TraceLoggingUnregister_EtwUnregister @ 0x140885198 (TraceLoggingUnregister_EtwUnregister.c)
 *     DbgkpStartSystemErrorHandler @ 0x14088A2B0 (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x14088A77C (DbgkCaptureLiveDump.c)
 *     SSHSupportEtwUnregister @ 0x1408FE308 (SSHSupportEtwUnregister.c)
 *     PsShutdownSystem @ 0x14090D244 (PsShutdownSystem.c)
 *     BapdRecordFirmwareBootStats @ 0x14099DF40 (BapdRecordFirmwareBootStats.c)
 *     BapdpRecordIumStatus @ 0x140A49BA0 (BapdpRecordIumStatus.c)
 *     PerfDiagInitialize @ 0x140A694B8 (PerfDiagInitialize.c)
 *     VslpIumInitializeTelemetry @ 0x140A75E10 (VslpIumInitializeTelemetry.c)
 *     SshpUninitialize @ 0x140A96734 (SshpUninitialize.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405F494C (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405F5200 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x14093C5D0 (EtwpEventWriteTemplateSessAndProv.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
