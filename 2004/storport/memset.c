/*
 * XREFs of memset @ 0x1C001DA00
 * Callers:
 *     StorpTelemetrySmartCommand @ 0x1C00015E8 (StorpTelemetrySmartCommand.c)
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001AF0 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C00021B0 (RaUnitAtaPassThroughValidateInput.c)
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C00024C8 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1C0003FE0 (StorpTelemetrySendUnitErrorDataSummary.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C0004340 (StorpTelemetrySendUnitPerfData.c)
 *     RaidAllocateSrb @ 0x1C0007B84 (RaidAllocateSrb.c)
 *     RaidUnitCompleteRequest @ 0x1C00089E0 (RaidUnitCompleteRequest.c)
 *     RaidStartIoPacket @ 0x1C000AD20 (RaidStartIoPacket.c)
 *     RaidZeroXrb @ 0x1C000BD00 (RaidZeroXrb.c)
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C000D740 (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     StorpAdapterTopologyWorkItemRoutine @ 0x1C0010600 (StorpAdapterTopologyWorkItemRoutine.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C001091C (RaidBusEnumeratorProbeLunZero.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C0012888 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00131D4 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00144EC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C0014EF8 (RaidGetTelemetryLogPageIds.c)
 *     RaidAdapterRescanBus @ 0x1C0015F7C (RaidAdapterRescanBus.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0016470 (RaidBusEnumeratorVisitUnit.c)
 *     RaidAdapterEnumerateBus @ 0x1C0016824 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0016940 (RaidBusEnumeratorGetLunList.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0016CFC (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C00170F0 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C001783C (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidBusEnumeratorBuildReportLuns @ 0x1C00179F4 (RaidBusEnumeratorBuildReportLuns.c)
 *     RaidCreateUnit @ 0x1C0018588 (RaidCreateUnit.c)
 *     RaidUnitAllocateResources @ 0x1C001874C (RaidUnitAllocateResources.c)
 *     RaidZeroUnit @ 0x1C0018BD8 (RaidZeroUnit.c)
 *     RaidQueryD3ColdInterface @ 0x1C00197DC (RaidQueryD3ColdInterface.c)
 *     RtlStringCchPrintfExW @ 0x1C001A324 (RtlStringCchPrintfExW.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C001A5AC (RaidUnitUnRegisterInterfaces.c)
 *     RaUnitStreamsIoctl @ 0x1C001B0D0 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C001B250 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C001B764 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C001C180 (RaidUnitLogSenseCommandSrb.c)
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1C001CB84 (StorpTelemetrySendUnitScsiDiagnostics.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C0029398 (InitializeBusesWithVmLunsBitmap.c)
 *     RaGetProtocolCommandEffects @ 0x1C0029FF8 (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHack @ 0x1C002BD1C (RaidAdapterHack.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C002C160 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterLogIoError @ 0x1C002C340 (RaidAdapterLogIoError.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C002C950 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterRpmbRequest @ 0x1C002D69C (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C002DA58 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002DE14 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C002EF6C (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterTargetedRescan @ 0x1C002F46C (RaidAdapterTargetedRescan.c)
 *     RaidCreateAdapter @ 0x1C002FB68 (RaidCreateAdapter.c)
 *     RaidInitializeCryptoEngine @ 0x1C0030578 (RaidInitializeCryptoEngine.c)
 *     RaidInitializePerfOptsPassive @ 0x1C0030CD8 (RaidInitializePerfOptsPassive.c)
 *     RaidCreateDeferredQueue @ 0x1C0032CEC (RaidCreateDeferredQueue.c)
 *     McGenControlCallbackV2 @ 0x1C0032F30 (McGenControlCallbackV2.c)
 *     StorEtwMiniportEventProxy @ 0x1C0037520 (StorEtwMiniportEventProxy.c)
 *     StorPortFreeRegistryBuffer @ 0x1C0038350 (StorPortFreeRegistryBuffer.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C00393F8 (StorPortpSetPowerSettingNotificationGuids.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C003970C (StorpAdapterInitializePoFxPower.c)
 *     StorpInitializeTimer @ 0x1C003B330 (StorpInitializeTimer.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003C2D4 (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C003DF38 (RaidRegisterForRuntimePowerManagement.c)
 *     RaidRegisterPerfStates @ 0x1C003E578 (RaidRegisterPerfStates.c)
 *     StorpPopulateErrorData @ 0x1C00423F4 (StorpPopulateErrorData.c)
 *     RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C0042940 (RaBuildHwFirmwareActivateBufferForMiniport.c)
 *     RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C0042A70 (RaBuildHwFirmwareDownloadBufferForMiniport.c)
 *     RaBuildQueryBootLunsBufferForMiniport @ 0x1C0042C88 (RaBuildQueryBootLunsBufferForMiniport.c)
 *     RaBuildQueryEnduranceInfoPropertyBufferForMiniport @ 0x1C0042D38 (RaBuildQueryEnduranceInfoPropertyBufferForMiniport.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C0042E20 (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C0042FA4 (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1C00431A0 (RaBuildSetProtocolSpecificPropertyBufferForMiniport.c)
 *     RaidEvaluateDsmLedState @ 0x1C0044074 (RaidEvaluateDsmLedState.c)
 *     RaidLogAllocationFailure @ 0x1C0044410 (RaidLogAllocationFailure.c)
 *     RaidQueryAcpiDsdStorageD3Property @ 0x1C0044518 (RaidQueryAcpiDsdStorageD3Property.c)
 *     StorCreateSystemLogEntry @ 0x1C0044EB0 (StorCreateSystemLogEntry.c)
 *     StorLogIoError @ 0x1C00451B0 (StorLogIoError.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C0045F70 (RaUnitBuildDsmGeneralBufferForMiniport.c)
 *     RaUnitSmartDataIoctl @ 0x1C0047548 (RaUnitSmartDataIoctl.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0049DB0 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C004ABA4 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C004B200 (RtlStringExHandleOtherFlagsW.c)
 *     DllInitialize @ 0x1C004B4F0 (DllInitialize.c)
 *     RaidpIsControlledUpdateOSEnvironment @ 0x1C004C214 (RaidpIsControlledUpdateOSEnvironment.c)
 *     StorCreateIoGateway @ 0x1C004D35C (StorCreateIoGateway.c)
 *     StorEtwEnableCallback @ 0x1C004DF88 (StorEtwEnableCallback.c)
 *     StorpInitializePerfTelemetry @ 0x1C00515CC (StorpInitializePerfTelemetry.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0051CD4 (StorpLogPhysicalTopologyInfo.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C0054FC8 (StorpTelemetryMiniportEventWStr.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1C0055D70 (StorpTelemetryNvmeGetLogPage.c)
 *     FillBufferWithDriverTelemetryDump @ 0x1C0056CC8 (FillBufferWithDriverTelemetryDump.c)
 *     ReplaceDeviceId @ 0x1C00575B0 (ReplaceDeviceId.c)
 *     RaidCheckD3AllowedOnCurrentPlatform @ 0x1C0057B98 (RaidCheckD3AllowedOnCurrentPlatform.c)
 *     RaidMachineRequireIoPortResource @ 0x1C0057CE4 (RaidMachineRequireIoPortResource.c)
 *     AsciiToWChar @ 0x1C0057EE0 (AsciiToWChar.c)
 *     PortAllocateRegistryBuffer @ 0x1C0057F50 (PortAllocateRegistryBuffer.c)
 *     PortBuildRegKeyName @ 0x1C0057FE4 (PortBuildRegKeyName.c)
 *     PortMiniportRegistryRead @ 0x1C005814C (PortMiniportRegistryRead.c)
 *     PortMiniportRegistryWrite @ 0x1C0058370 (PortMiniportRegistryWrite.c)
 *     PortpPassThroughZeroUnusedBuffers @ 0x1C005958C (PortpPassThroughZeroUnusedBuffers.c)
 *     PortTraceInitTracing @ 0x1C00599B4 (PortTraceInitTracing.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1C0071238 (RaGetUnitStorageDeviceProperty.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0071A28 (RaUnitQueryCapabilitiesIrp.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C0071E18 (PortWdmGetDeviceCapabilities.c)
 *     RaidPrepareSrbForReuse @ 0x1C00725A0 (RaidPrepareSrbForReuse.c)
 *     PortRegistryRead @ 0x1C0072A48 (PortRegistryRead.c)
 *     StorpInititalizePerUnitPerfTelemetry @ 0x1C0072E18 (StorpInititalizePerUnitPerfTelemetry.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0072FB0 (RaUnitRegisterForIdleDetection.c)
 *     RaidUnitGetDeviceParameters @ 0x1C00735D0 (RaidUnitGetDeviceParameters.c)
 *     PortRegistryReadWithHandle @ 0x1C0073F78 (PortRegistryReadWithHandle.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1C00747D0 (RaGetUnitStorageDeviceIdProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C0074934 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidGetStorageMiniportProperty @ 0x1C00749D4 (RaidGetStorageMiniportProperty.c)
 *     RaidAdapterConnectMSIInterrupt @ 0x1C0075DA4 (RaidAdapterConnectMSIInterrupt.c)
 *     RaidAdapterConnectNonMSIInterrupt @ 0x1C0075F48 (RaidAdapterConnectNonMSIInterrupt.c)
 *     RaidAdapterCreateDriverInfo @ 0x1C0076020 (RaidAdapterCreateDriverInfo.c)
 *     RaidAdapterCreateDumpInfo @ 0x1C00762AC (RaidAdapterCreateDumpInfo.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00766E8 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C00772AC (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidInitializeAdapter @ 0x1C0078078 (RaidInitializeAdapter.c)
 *     RaCreateBus @ 0x1C00789C0 (RaCreateBus.c)
 *     RaDeleteBus @ 0x1C00789E4 (RaDeleteBus.c)
 *     RaidInitializeDma @ 0x1C0078AAC (RaidInitializeDma.c)
 *     RaCreateDriver @ 0x1C0078C4C (RaCreateDriver.c)
 *     RaSaveDriverInitData @ 0x1C0078EA4 (RaSaveDriverInitData.c)
 *     WppTraceCallback @ 0x1C0079410 (WppTraceCallback.c)
 *     RaCreateMiniport @ 0x1C0079688 (RaCreateMiniport.c)
 *     RiAllocateMiniportDeviceExtension @ 0x1C00797A0 (RiAllocateMiniportDeviceExtension.c)
 *     RaInitializeConfiguration @ 0x1C0079948 (RaInitializeConfiguration.c)
 *     RaidUnitCreateDumpData @ 0x1C007A55C (RaidUnitCreateDumpData.c)
 *     RaidUnitCreateDumpInfo @ 0x1C007A69C (RaidUnitCreateDumpInfo.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C007C004 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughSrbInitialize @ 0x1C007CD0C (PortPassThroughSrbInitialize.c)
 *     PortpErrorInitRecords @ 0x1C007D074 (PortpErrorInitRecords.c)
 *     StorPortNotificationVrfy @ 0x1C007E440 (StorPortNotificationVrfy.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}
