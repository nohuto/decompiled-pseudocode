/*
 * XREFs of EtwUnregister @ 0x140760390
 * Callers:
 *     BapdWriteEtwEvents @ 0x14039B178 (BapdWriteEtwEvents.c)
 *     HvlPhase2Initialize @ 0x1403CF228 (HvlPhase2Initialize.c)
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 *     WmipGECleanup @ 0x1407728C0 (WmipGECleanup.c)
 *     PopBootLoaderTraceProcess @ 0x14077A2D8 (PopBootLoaderTraceProcess.c)
 *     WmipLegacyEtwWorker @ 0x1407C54E0 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x1407C5640 (WmipProcessLegacyEtwRegister.c)
 *     TraceLoggingUnregister_EtwUnregister @ 0x140882890 (TraceLoggingUnregister_EtwUnregister.c)
 *     DbgkpStartSystemErrorHandler @ 0x1408879B0 (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x140887E7C (DbgkCaptureLiveDump.c)
 *     SSHSupportEtwUnregister @ 0x1408FBC18 (SSHSupportEtwUnregister.c)
 *     PsShutdownSystem @ 0x14090AB54 (PsShutdownSystem.c)
 *     BapdRecordFirmwareBootStats @ 0x14099A260 (BapdRecordFirmwareBootStats.c)
 *     BapdpRecordIumStatus @ 0x140A42AAC (BapdpRecordIumStatus.c)
 *     PerfDiagInitialize @ 0x140A43BBC (PerfDiagInitialize.c)
 *     VslpIumInitializeTelemetry @ 0x140A73D90 (VslpIumInitializeTelemetry.c)
 *     SshpUninitialize @ 0x140A945A4 (SshpUninitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405F8C48 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406ECBA8 (EtwpUnreferenceGuidEntry.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x140939F70 (EtwpEventWriteTemplateSessAndProv.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  volatile signed __int64 *v10; // rcx
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
  EtwpUnreferenceGuidEntry(*(volatile signed __int64 **)(RegHandle + 32));
  v10 = *(volatile signed __int64 **)(RegHandle + 40);
  if ( v10 )
    EtwpUnreferenceGuidEntry(v10);
  EtwpReleaseProviderTraitsReference(RegHandle);
  ExFreePoolWithTag((PVOID)RegHandle, 0);
  return 0;
}
