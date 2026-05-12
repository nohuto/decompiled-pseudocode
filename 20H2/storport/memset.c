/*
 * XREFs of memset @ 0x1C001F8C0
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001190 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C0001850 (RaUnitAtaPassThroughValidateInput.c)
 *     StorpTelemetrySmartCommand @ 0x1C0001F30 (StorpTelemetrySmartCommand.c)
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C00024C0 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C0002E4C (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1C00032C4 (StorpTelemetrySendUnitErrorDataSummary.c)
 *     RaidUnitCompleteRequest @ 0x1C00079D0 (RaidUnitCompleteRequest.c)
 *     RaidStartIoPacket @ 0x1C0009FE0 (RaidStartIoPacket.c)
 *     RaidZeroXrb @ 0x1C000AFC0 (RaidZeroXrb.c)
 *     RaidAllocateSrb @ 0x1C000BDD4 (RaidAllocateSrb.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C000BF70 (StorpTelemetrySendUnitPerfData.c)
 *     StorpAdapterTopologyWorkItemRoutine @ 0x1C0010F10 (StorpAdapterTopologyWorkItemRoutine.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00112F0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C0011CFC (RaidGetTelemetryLogPageIds.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C0011E1C (RaidBusEnumeratorProbeLunZero.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C0013DE8 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0014734 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterRescanBus @ 0x1C0016410 (RaidAdapterRescanBus.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0016904 (RaidBusEnumeratorVisitUnit.c)
 *     RaidAdapterEnumerateBus @ 0x1C0016CB8 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0016DD0 (RaidBusEnumeratorGetLunList.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0017194 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0017588 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C0017CD4 (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidBusEnumeratorBuildReportLuns @ 0x1C0017E8C (RaidBusEnumeratorBuildReportLuns.c)
 *     RaidCreateUnit @ 0x1C0018A20 (RaidCreateUnit.c)
 *     RaidUnitAllocateResources @ 0x1C0018C10 (RaidUnitAllocateResources.c)
 *     RaidZeroUnit @ 0x1C001909C (RaidZeroUnit.c)
 *     RaidQueryD3ColdInterface @ 0x1C001A2C0 (RaidQueryD3ColdInterface.c)
 *     RtlStringCchPrintfExW @ 0x1C001AFB8 (RtlStringCchPrintfExW.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C001B240 (RaidUnitUnRegisterInterfaces.c)
 *     RaUnitStreamsIoctl @ 0x1C001BD70 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C001BEF0 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C001C404 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     wil_details_StagingConfig_Load @ 0x1C001D494 (wil_details_StagingConfig_Load.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C001DF50 (RaidUnitLogSenseCommandSrb.c)
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1C001EA4C (StorpTelemetrySendUnitScsiDiagnostics.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C002A1E4 (InitializeBusesWithVmLunsBitmap.c)
 *     RaGetProtocolCommandEffects @ 0x1C002AE48 (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHack @ 0x1C002CB74 (RaidAdapterHack.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C002CFB8 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterLogIoError @ 0x1C002D198 (RaidAdapterLogIoError.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C002D7B0 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterRpmbRequest @ 0x1C002E4FC (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C002E8B8 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EC78 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C002FDD0 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterTargetedRescan @ 0x1C00302D0 (RaidAdapterTargetedRescan.c)
 *     RaidCreateAdapter @ 0x1C00309D4 (RaidCreateAdapter.c)
 *     RaidInitializeCryptoEngine @ 0x1C00313E8 (RaidInitializeCryptoEngine.c)
 *     RaidInitializePerfOptsPassive @ 0x1C0031B48 (RaidInitializePerfOptsPassive.c)
 *     RaidCreateDeferredQueue @ 0x1C0033B6C (RaidCreateDeferredQueue.c)
 *     McGenControlCallbackV2 @ 0x1C0033DB0 (McGenControlCallbackV2.c)
 *     StorEtwMiniportEventProxy @ 0x1C0038390 (StorEtwMiniportEventProxy.c)
 *     StorPortFreeRegistryBuffer @ 0x1C00391C0 (StorPortFreeRegistryBuffer.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C003A2B8 (StorPortpSetPowerSettingNotificationGuids.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C003A5CC (StorpAdapterInitializePoFxPower.c)
 *     StorpInitializeTimer @ 0x1C003C1F0 (StorpInitializeTimer.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003D1F8 (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C003EE58 (RaidRegisterForRuntimePowerManagement.c)
 *     RaidRegisterPerfStates @ 0x1C003F498 (RaidRegisterPerfStates.c)
 *     StorpPopulateErrorData @ 0x1C0043300 (StorpPopulateErrorData.c)
 *     RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C004384C (RaBuildHwFirmwareActivateBufferForMiniport.c)
 *     RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C004397C (RaBuildHwFirmwareDownloadBufferForMiniport.c)
 *     RaBuildQueryBootLunsBufferForMiniport @ 0x1C0043B94 (RaBuildQueryBootLunsBufferForMiniport.c)
 *     RaBuildQueryEnduranceInfoPropertyBufferForMiniport @ 0x1C0043C44 (RaBuildQueryEnduranceInfoPropertyBufferForMiniport.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C0043D2C (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C0043EAC (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1C00440A8 (RaBuildSetProtocolSpecificPropertyBufferForMiniport.c)
 *     RaidEvaluateDsmLedState @ 0x1C0044F78 (RaidEvaluateDsmLedState.c)
 *     RaidLogAllocationFailure @ 0x1C0045314 (RaidLogAllocationFailure.c)
 *     RaidQueryAcpiDsdStorageD3Property @ 0x1C004541C (RaidQueryAcpiDsdStorageD3Property.c)
 *     StorCreateSystemLogEntry @ 0x1C0045DB4 (StorCreateSystemLogEntry.c)
 *     StorLogIoError @ 0x1C00460B4 (StorLogIoError.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C0046D80 (RaUnitBuildDsmGeneralBufferForMiniport.c)
 *     RaUnitSmartDataIoctl @ 0x1C0048358 (RaUnitSmartDataIoctl.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C004ABC0 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C004B9B4 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C004C010 (RtlStringExHandleOtherFlagsW.c)
 *     DllInitialize @ 0x1C004C300 (DllInitialize.c)
 *     RaidpIsControlledUpdateOSEnvironment @ 0x1C004D028 (RaidpIsControlledUpdateOSEnvironment.c)
 *     StorCreateIoGateway @ 0x1C004E16C (StorCreateIoGateway.c)
 *     StorEtwEnableCallback @ 0x1C004EE40 (StorEtwEnableCallback.c)
 *     StorpInitializePerfTelemetry @ 0x1C0052490 (StorpInitializePerfTelemetry.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0052B98 (StorpLogPhysicalTopologyInfo.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C0055E8C (StorpTelemetryMiniportEventWStr.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1C0056C34 (StorpTelemetryNvmeGetLogPage.c)
 *     FillBufferWithDriverTelemetryDump @ 0x1C0057B8C (FillBufferWithDriverTelemetryDump.c)
 *     ReplaceDeviceId @ 0x1C0058470 (ReplaceDeviceId.c)
 *     RaidCheckD3AllowedOnCurrentPlatform @ 0x1C0058A58 (RaidCheckD3AllowedOnCurrentPlatform.c)
 *     RaidMachineRequireIoPortResource @ 0x1C0058BA4 (RaidMachineRequireIoPortResource.c)
 *     AsciiToWChar @ 0x1C0058DA0 (AsciiToWChar.c)
 *     PortAllocateRegistryBuffer @ 0x1C0058E10 (PortAllocateRegistryBuffer.c)
 *     PortBuildRegKeyName @ 0x1C0058EA4 (PortBuildRegKeyName.c)
 *     PortMiniportRegistryRead @ 0x1C005900C (PortMiniportRegistryRead.c)
 *     PortMiniportRegistryWrite @ 0x1C0059230 (PortMiniportRegistryWrite.c)
 *     PortpPassThroughZeroUnusedBuffers @ 0x1C005A44C (PortpPassThroughZeroUnusedBuffers.c)
 *     PortTraceInitTracing @ 0x1C005A874 (PortTraceInitTracing.c)
 *     wil_StagingConfig_QueryFeatureState @ 0x1C00720CC (wil_StagingConfig_QueryFeatureState.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1C0072664 (RaGetUnitStorageDeviceProperty.c)
 *     RaidPrepareSrbForReuse @ 0x1C0073070 (RaidPrepareSrbForReuse.c)
 *     PortRegistryRead @ 0x1C0073518 (PortRegistryRead.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C00737CC (RaUnitQueryCapabilitiesIrp.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C0073BBC (PortWdmGetDeviceCapabilities.c)
 *     StorpInititalizePerUnitPerfTelemetry @ 0x1C0074158 (StorpInititalizePerUnitPerfTelemetry.c)
 *     RaidUnitGetDeviceParameters @ 0x1C00744D4 (RaidUnitGetDeviceParameters.c)
 *     PortRegistryReadWithHandle @ 0x1C0074E7C (PortRegistryReadWithHandle.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1C00756E0 (RaGetUnitStorageDeviceIdProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C0075844 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C00758E4 (RaUnitRegisterForIdleDetection.c)
 *     RaidGetStorageMiniportProperty @ 0x1C0075EA4 (RaidGetStorageMiniportProperty.c)
 *     RaidAdapterConnectMSIInterrupt @ 0x1C0077278 (RaidAdapterConnectMSIInterrupt.c)
 *     RaidAdapterConnectNonMSIInterrupt @ 0x1C007741C (RaidAdapterConnectNonMSIInterrupt.c)
 *     RaidAdapterCreateDriverInfo @ 0x1C00774F4 (RaidAdapterCreateDriverInfo.c)
 *     RaidAdapterCreateDumpInfo @ 0x1C0077780 (RaidAdapterCreateDumpInfo.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0077BBC (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0078780 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidInitializeAdapter @ 0x1C0079570 (RaidInitializeAdapter.c)
 *     RaCreateBus @ 0x1C0079EC8 (RaCreateBus.c)
 *     RaDeleteBus @ 0x1C0079EEC (RaDeleteBus.c)
 *     RaidInitializeDma @ 0x1C0079FB4 (RaidInitializeDma.c)
 *     RaCreateDriver @ 0x1C007A154 (RaCreateDriver.c)
 *     RaSaveDriverInitData @ 0x1C007A3AC (RaSaveDriverInitData.c)
 *     WppTraceCallback @ 0x1C007A910 (WppTraceCallback.c)
 *     RaCreateMiniport @ 0x1C007AB88 (RaCreateMiniport.c)
 *     RiAllocateMiniportDeviceExtension @ 0x1C007ACA0 (RiAllocateMiniportDeviceExtension.c)
 *     RaInitializeConfiguration @ 0x1C007AE48 (RaInitializeConfiguration.c)
 *     RaidUnitCreateDumpData @ 0x1C007BA5C (RaidUnitCreateDumpData.c)
 *     RaidUnitCreateDumpInfo @ 0x1C007BB9C (RaidUnitCreateDumpInfo.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C007D504 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughSrbInitialize @ 0x1C007E20C (PortPassThroughSrbInitialize.c)
 *     PortpErrorInitRecords @ 0x1C007E574 (PortpErrorInitRecords.c)
 *     StorPortNotificationVrfy @ 0x1C007F440 (StorPortNotificationVrfy.c)
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
