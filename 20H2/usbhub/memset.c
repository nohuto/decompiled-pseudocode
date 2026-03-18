/*
 * XREFs of memset @ 0x1C001D340
 * Callers:
 *     UsbhPostInterrupt @ 0x1C00033C0 (UsbhPostInterrupt.c)
 *     UsbhFdoSystemPowerState @ 0x1C000E9B0 (UsbhFdoSystemPowerState.c)
 *     UsbhQueryBusRelations @ 0x1C0011530 (UsbhQueryBusRelations.c)
 *     UsbhEtwWrite @ 0x1C00125E0 (UsbhEtwWrite.c)
 *     UsbhCheckHubPowerStatus @ 0x1C00139C0 (UsbhCheckHubPowerStatus.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C00177A8 (UsbhSyncSendCommandToDevice.c)
 *     UsbhAllocWorkItem @ 0x1C0017C80 (UsbhAllocWorkItem.c)
 *     UsbhCreateDevice @ 0x1C0019118 (UsbhCreateDevice.c)
 *     UsbhAcquirePowerContext @ 0x1C0019484 (UsbhAcquirePowerContext.c)
 *     UsbhHubSSH_Timer @ 0x1C001AC00 (UsbhHubSSH_Timer.c)
 *     UsbhInitializeDevice @ 0x1C001C46C (UsbhInitializeDevice.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C0029620 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhFdoCleanupDeviceInterfaceForBillBoard @ 0x1C0029EB8 (UsbhFdoCleanupDeviceInterfaceForBillBoard.c)
 *     UsbhFdoCreateDeviceInterfaceForBillBoard @ 0x1C0029FEC (UsbhFdoCreateDeviceInterfaceForBillBoard.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C002AE10 (UsbhGetAcpiPortAttributes.c)
 *     UsbhGetControllerName @ 0x1C002B3F4 (UsbhGetControllerName.c)
 *     UsbhGetDeviceBusInfo @ 0x1C002B680 (UsbhGetDeviceBusInfo.c)
 *     UsbhGetExtendedHubInformation @ 0x1C002BAB8 (UsbhGetExtendedHubInformation.c)
 *     UsbhGetHubClassDescriptor @ 0x1C002BCB8 (UsbhGetHubClassDescriptor.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C002BE50 (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhGetHubDeviceInformation @ 0x1C002C0A0 (UsbhGetHubDeviceInformation.c)
 *     UsbhGetHubPdoName @ 0x1C002C2FC (UsbhGetHubPdoName.c)
 *     UsbhLogStartFailure @ 0x1C002D07C (UsbhLogStartFailure.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C002D68C (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhFdoRecordFailure @ 0x1C00302D0 (UsbhFdoRecordFailure.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C00309F4 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhCreateConfigurationRequestEx @ 0x1C00318A8 (UsbhCreateConfigurationRequestEx.c)
 *     USBD_ValidateConfigurationDescriptorInternal @ 0x1C0031CD4 (USBD_ValidateConfigurationDescriptorInternal.c)
 *     USBD_ValidateExtendedConfigurationDescriptor @ 0x1C00320D4 (USBD_ValidateExtendedConfigurationDescriptor.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x1C00329F0 (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsExtendedConfigDesc @ 0x1C0032E60 (UsbhGetMsOsExtendedConfigDesc.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C0033368 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhBusPnpStart @ 0x1C0036430 (UsbhBusPnpStart.c)
 *     UsbhGetBillboardInfo @ 0x1C00378B0 (UsbhGetBillboardInfo.c)
 *     UsbhGetDeviceInformation @ 0x1C0037D08 (UsbhGetDeviceInformation.c)
 *     UsbhSetupDevice @ 0x1C0039198 (UsbhSetupDevice.c)
 *     UsbhAllocateTimerObject @ 0x1C003B464 (UsbhAllocateTimerObject.c)
 *     UsbhGetDeviceInformationEx @ 0x1C003DAA8 (UsbhGetDeviceInformationEx.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C003DC2C (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C003EF34 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C003F208 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C003F498 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C003F948 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C003FC88 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C003FF9C (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C004028C (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0040574 (UsbhIoctlGetPortConnectorProperties.c)
 *     DriverEntry @ 0x1C0041468 (DriverEntry.c)
 *     UsbhInitGlobal @ 0x1C0043508 (UsbhInitGlobal.c)
 *     UsbhMakePdoName @ 0x1C004373C (UsbhMakePdoName.c)
 *     UsbhGetPdoRegistryParameter @ 0x1C0044BA0 (UsbhGetPdoRegistryParameter.c)
 *     UsbhGetPersistedUsbFlagsPath @ 0x1C0044D14 (UsbhGetPersistedUsbFlagsPath.c)
 *     UsbhGetRegUsbClassFlags @ 0x1C00450B4 (UsbhGetRegUsbClassFlags.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C0045CE0 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhReadPdoRegistryKeys @ 0x1C0045F90 (UsbhReadPdoRegistryKeys.c)
 *     UsbhRegDriverEntry @ 0x1C00461A0 (UsbhRegDriverEntry.c)
 *     UsbhLogAlloc @ 0x1C0048584 (UsbhLogAlloc.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C0048D4C (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C0048FE8 (UsbhGetHubNodeInfo.c)
 *     UsbhGetPerformanceInfo @ 0x1C0049258 (UsbhGetPerformanceInfo.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x1C00496C0 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhWmiDriverEntry @ 0x1C0049D90 (UsbhWmiDriverEntry.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 *     RtlStringCchPrintfExW @ 0x1C004B580 (RtlStringCchPrintfExW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C004B750 (RtlStringExHandleOtherFlagsW.c)
 *     UsbhGetBusInterface @ 0x1C004C0C0 (UsbhGetBusInterface.c)
 *     UsbhBuildClassCompatibleID @ 0x1C004EADC (UsbhBuildClassCompatibleID.c)
 *     UsbhBuildCompatibleID @ 0x1C004F5D0 (UsbhBuildCompatibleID.c)
 *     UsbhBuildContainerID @ 0x1C004F72C (UsbhBuildContainerID.c)
 *     UsbhBuildDeviceCompatibleID @ 0x1C004FDCC (UsbhBuildDeviceCompatibleID.c)
 *     UsbhBuildHardwareID @ 0x1C0050274 (UsbhBuildHardwareID.c)
 *     UsbhGetLanguageIdString @ 0x1C0050D78 (UsbhGetLanguageIdString.c)
 *     UsbhGetProductIdString @ 0x1C0051210 (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x1C00513E0 (UsbhGetSerialNumber.c)
 *     UsbhMakeId @ 0x1C0051798 (UsbhMakeId.c)
 *     UsbhValidateMsOs20ConfigurationSubset @ 0x1C0053330 (UsbhValidateMsOs20ConfigurationSubset.c)
 *     UsbhValidateMsOs20FunctionSubset @ 0x1C0053670 (UsbhValidateMsOs20FunctionSubset.c)
 *     UsbhCloseDeviceConfiguration @ 0x1C0053E00 (UsbhCloseDeviceConfiguration.c)
 *     UsbhGetBosDescriptor @ 0x1C0054F88 (UsbhGetBosDescriptor.c)
 *     UsbhPdoPnp_QueryCapabilities @ 0x1C0055E30 (UsbhPdoPnp_QueryCapabilities.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C0055FD0 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhPdoPnp_QueryId @ 0x1C0056360 (UsbhPdoPnp_QueryId.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0057020 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C0057A60 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhPublishBillboardDetails @ 0x1C0057C60 (UsbhPublishBillboardDetails.c)
 *     UsbhQueryD3ColdSupport @ 0x1C0057F08 (UsbhQueryD3ColdSupport.c)
 *     UsbhBuildUxdPnpId @ 0x1C005A3A0 (UsbhBuildUxdPnpId.c)
 *     UsbhCopyPnpString @ 0x1C005A4F0 (UsbhCopyPnpString.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C005A828 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetUxdLoadKeySettings @ 0x1C005AF90 (UsbhGetUxdLoadKeySettings.c)
 *     UsbhQueryParentHubConfig @ 0x1C005B388 (UsbhQueryParentHubConfig.c)
 *     UsbhQueryUxdDevice @ 0x1C005B530 (UsbhQueryUxdDevice.c)
 *     UsbhUpdateUxdSettings @ 0x1C005B7C4 (UsbhUpdateUxdSettings.c)
 *     WppTraceCallback @ 0x1C00732E0 (WppTraceCallback.c)
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
