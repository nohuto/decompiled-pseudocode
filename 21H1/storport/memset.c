/*
 * XREFs of memset @ 0x1C001B4C0
 * Callers:
 *     StorpTelemetrySmartCommand @ 0x1C00015E8 (StorpTelemetrySmartCommand.c)
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001AF0 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C00020C0 (RaUnitAtaPassThroughValidateInput.c)
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C00023D8 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1C0003EF0 (StorpTelemetrySendUnitErrorDataSummary.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C0004250 (StorpTelemetrySendUnitPerfData.c)
 *     RaidAllocateSrb @ 0x1C0007594 (RaidAllocateSrb.c)
 *     RaidUnitCompleteRequest @ 0x1C00083F0 (RaidUnitCompleteRequest.c)
 *     RaidStartIoPacket @ 0x1C000A730 (RaidStartIoPacket.c)
 *     RaidZeroXrb @ 0x1C000B710 (RaidZeroXrb.c)
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C000D150 (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     StorpAdapterTopologyWorkItemRoutine @ 0x1C000E840 (StorpAdapterTopologyWorkItemRoutine.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C000EB5C (RaidBusEnumeratorProbeLunZero.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C0010A18 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0011364 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001267C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C0013088 (RaidGetTelemetryLogPageIds.c)
 *     RaidAdapterRescanBus @ 0x1C001410C (RaidAdapterRescanBus.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0014600 (RaidBusEnumeratorVisitUnit.c)
 *     RaidAdapterEnumerateBus @ 0x1C00149B4 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0014AD0 (RaidBusEnumeratorGetLunList.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0014E8C (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0015280 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C00159CC (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidBusEnumeratorBuildReportLuns @ 0x1C0015B84 (RaidBusEnumeratorBuildReportLuns.c)
 *     RaidCreateUnit @ 0x1C0016718 (RaidCreateUnit.c)
 *     RaidUnitAllocateResources @ 0x1C00168DC (RaidUnitAllocateResources.c)
 *     RaidZeroUnit @ 0x1C0016D68 (RaidZeroUnit.c)
 *     RaidQueryD3ColdInterface @ 0x1C001796C (RaidQueryD3ColdInterface.c)
 *     RtlStringCchPrintfExW @ 0x1C00184B4 (RtlStringCchPrintfExW.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C001873C (RaidUnitUnRegisterInterfaces.c)
 *     RaUnitStreamsIoctl @ 0x1C0019260 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C00193A8 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C00198BC (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C001A028 (RaidUnitLogSenseCommandSrb.c)
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1C001AA2C (StorpTelemetrySendUnitScsiDiagnostics.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C0028D44 (InitializeBusesWithVmLunsBitmap.c)
 *     RaGetProtocolCommandEffects @ 0x1C0029A58 (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHack @ 0x1C002B77C (RaidAdapterHack.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C002BBC0 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterLogIoError @ 0x1C002BD8C (RaidAdapterLogIoError.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C002C3A0 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterRpmbRequest @ 0x1C002D0EC (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C002D4A8 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002D864 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C002E9B4 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterTargetedRescan @ 0x1C002EEB4 (RaidAdapterTargetedRescan.c)
 *     RaidCreateAdapter @ 0x1C002F5B8 (RaidCreateAdapter.c)
 *     RaidInitializeCryptoEngine @ 0x1C002FFC8 (RaidInitializeCryptoEngine.c)
 *     RaidInitializePerfOptsPassive @ 0x1C0030790 (RaidInitializePerfOptsPassive.c)
 *     RaidCreateDeferredQueue @ 0x1C003276C (RaidCreateDeferredQueue.c)
 *     McGenControlCallbackV2 @ 0x1C00329B0 (McGenControlCallbackV2.c)
 *     StorEtwMiniportEventProxy @ 0x1C0036FA0 (StorEtwMiniportEventProxy.c)
 *     StorPortFreeRegistryBuffer @ 0x1C0037DD0 (StorPortFreeRegistryBuffer.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C0038E78 (StorPortpSetPowerSettingNotificationGuids.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C003918C (StorpAdapterInitializePoFxPower.c)
 *     StorpInitializeTimer @ 0x1C003AD60 (StorpInitializeTimer.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003BD04 (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C003D968 (RaidRegisterForRuntimePowerManagement.c)
 *     RaidRegisterPerfStates @ 0x1C003DFA8 (RaidRegisterPerfStates.c)
 *     StorpPopulateErrorData @ 0x1C0041DC4 (StorpPopulateErrorData.c)
 *     RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C0042310 (RaBuildHwFirmwareActivateBufferForMiniport.c)
 *     RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C0042440 (RaBuildHwFirmwareDownloadBufferForMiniport.c)
 *     RaBuildQueryBootLunsBufferForMiniport @ 0x1C0042658 (RaBuildQueryBootLunsBufferForMiniport.c)
 *     RaBuildQueryEnduranceInfoPropertyBufferForMiniport @ 0x1C0042708 (RaBuildQueryEnduranceInfoPropertyBufferForMiniport.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C00427F0 (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C0042924 (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1C0042B04 (RaBuildSetProtocolSpecificPropertyBufferForMiniport.c)
 *     RaidEvaluateDsmLedState @ 0x1C004398C (RaidEvaluateDsmLedState.c)
 *     RaidLogAllocationFailure @ 0x1C0043D28 (RaidLogAllocationFailure.c)
 *     RaidQueryAcpiDsdStorageD3Property @ 0x1C0043E30 (RaidQueryAcpiDsdStorageD3Property.c)
 *     StorCreateSystemLogEntry @ 0x1C00447A8 (StorCreateSystemLogEntry.c)
 *     StorLogIoError @ 0x1C0044AA8 (StorLogIoError.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C0045860 (RaUnitBuildDsmGeneralBufferForMiniport.c)
 *     RaUnitSmartDataIoctl @ 0x1C0046E38 (RaUnitSmartDataIoctl.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C00496A0 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C004A494 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C004AAF0 (RtlStringExHandleOtherFlagsW.c)
 *     DllInitialize @ 0x1C004ADE0 (DllInitialize.c)
 *     RaidpIsControlledUpdateOSEnvironment @ 0x1C004BB04 (RaidpIsControlledUpdateOSEnvironment.c)
 *     StorCreateIoGateway @ 0x1C004CC4C (StorCreateIoGateway.c)
 *     StorEtwEnableCallback @ 0x1C004D878 (StorEtwEnableCallback.c)
 *     StorpInitializePerfTelemetry @ 0x1C0050EBC (StorpInitializePerfTelemetry.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C00515C4 (StorpLogPhysicalTopologyInfo.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C00548B8 (StorpTelemetryMiniportEventWStr.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1C0055660 (StorpTelemetryNvmeGetLogPage.c)
 *     FillBufferWithDriverTelemetryDump @ 0x1C0056594 (FillBufferWithDriverTelemetryDump.c)
 *     ReplaceDeviceId @ 0x1C0056E80 (ReplaceDeviceId.c)
 *     RaidCheckD3AllowedOnCurrentPlatform @ 0x1C0057468 (RaidCheckD3AllowedOnCurrentPlatform.c)
 *     RaidMachineRequireIoPortResource @ 0x1C00575B4 (RaidMachineRequireIoPortResource.c)
 *     AsciiToWChar @ 0x1C00577B0 (AsciiToWChar.c)
 *     PortAllocateRegistryBuffer @ 0x1C0057820 (PortAllocateRegistryBuffer.c)
 *     PortBuildRegKeyName @ 0x1C00578B4 (PortBuildRegKeyName.c)
 *     PortMiniportRegistryRead @ 0x1C0057A1C (PortMiniportRegistryRead.c)
 *     PortMiniportRegistryWrite @ 0x1C0057C40 (PortMiniportRegistryWrite.c)
 *     PortpPassThroughZeroUnusedBuffers @ 0x1C0058DDC (PortpPassThroughZeroUnusedBuffers.c)
 *     PortTraceInitTracing @ 0x1C0059204 (PortTraceInitTracing.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1C0071330 (RaGetUnitStorageDeviceProperty.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0071B18 (RaUnitQueryCapabilitiesIrp.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C0071F08 (PortWdmGetDeviceCapabilities.c)
 *     RaidPrepareSrbForReuse @ 0x1C0072690 (RaidPrepareSrbForReuse.c)
 *     PortRegistryRead @ 0x1C0072B38 (PortRegistryRead.c)
 *     StorpInititalizePerUnitPerfTelemetry @ 0x1C0072F08 (StorpInititalizePerUnitPerfTelemetry.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C00730A0 (RaUnitRegisterForIdleDetection.c)
 *     RaidUnitGetDeviceParameters @ 0x1C0073284 (RaidUnitGetDeviceParameters.c)
 *     PortRegistryReadWithHandle @ 0x1C0073C2C (PortRegistryReadWithHandle.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1C0074490 (RaGetUnitStorageDeviceIdProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C00745F4 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidGetStorageMiniportProperty @ 0x1C0074694 (RaidGetStorageMiniportProperty.c)
 *     RaidAdapterConnectMSIInterrupt @ 0x1C0075E80 (RaidAdapterConnectMSIInterrupt.c)
 *     RaidAdapterConnectNonMSIInterrupt @ 0x1C0076024 (RaidAdapterConnectNonMSIInterrupt.c)
 *     RaidAdapterCreateDriverInfo @ 0x1C00760FC (RaidAdapterCreateDriverInfo.c)
 *     RaidAdapterCreateDumpInfo @ 0x1C0076388 (RaidAdapterCreateDumpInfo.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00767C4 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0077388 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidInitializeAdapter @ 0x1C0078154 (RaidInitializeAdapter.c)
 *     RaCreateBus @ 0x1C0078A9C (RaCreateBus.c)
 *     RaDeleteBus @ 0x1C0078AC0 (RaDeleteBus.c)
 *     RaidInitializeDma @ 0x1C0078B88 (RaidInitializeDma.c)
 *     RaCreateDriver @ 0x1C0078D28 (RaCreateDriver.c)
 *     RaSaveDriverInitData @ 0x1C0078F80 (RaSaveDriverInitData.c)
 *     WppTraceCallback @ 0x1C00794F0 (WppTraceCallback.c)
 *     RaCreateMiniport @ 0x1C0079768 (RaCreateMiniport.c)
 *     RiAllocateMiniportDeviceExtension @ 0x1C0079880 (RiAllocateMiniportDeviceExtension.c)
 *     RaInitializeConfiguration @ 0x1C0079A28 (RaInitializeConfiguration.c)
 *     RaidUnitCreateDumpData @ 0x1C007A63C (RaidUnitCreateDumpData.c)
 *     RaidUnitCreateDumpInfo @ 0x1C007A77C (RaidUnitCreateDumpInfo.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C007C0E4 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughSrbInitialize @ 0x1C007CC80 (PortPassThroughSrbInitialize.c)
 *     PortpErrorInitRecords @ 0x1C007CFCC (PortpErrorInitRecords.c)
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
