/*
 * XREFs of memset @ 0x1C0042D40
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0001130 (McGenControlCallbackV2.c)
 *     HUBHTX_SendInterruptTransfer @ 0x1C0003378 (HUBHTX_SendInterruptTransfer.c)
 *     HUBHTX_ClearTTBuffer @ 0x1C0006480 (HUBHTX_ClearTTBuffer.c)
 *     HUBPARENT_SetHubConfiguration @ 0x1C0006C64 (HUBPARENT_SetHubConfiguration.c)
 *     HUBPARENT_ResetInterruptPipe @ 0x1C0007310 (HUBPARENT_ResetInterruptPipe.c)
 *     HUBPARENT_ResetHub @ 0x1C00075F0 (HUBPARENT_ResetHub.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctlComplete @ 0x1C0007870 (HUBPARENT_GetInfoFromParentUsingParentIoctlComplete.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctl @ 0x1C0007A2C (HUBPARENT_GetInfoFromParentUsingParentIoctl.c)
 *     HUBSM_FindAndSetTargetState @ 0x1C0009F9C (HUBSM_FindAndSetTargetState.c)
 *     HUBFDO_GetDeviceCapabilities @ 0x1C000BEE0 (HUBFDO_GetDeviceCapabilities.c)
 *     HUBFDO_BuildUsb20HubDescriptor @ 0x1C000D098 (HUBFDO_BuildUsb20HubDescriptor.c)
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000D1D4 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     HUBFDO_SetupHubPostErrataQuery @ 0x1C000DD70 (HUBFDO_SetupHubPostErrataQuery.c)
 *     HUBFDO_CreateDeviceInterfaceForBillboard @ 0x1C000E2E0 (HUBFDO_CreateDeviceInterfaceForBillboard.c)
 *     HUBFDO_CleanupDeviceInterfaceForBillboard @ 0x1C000E4E4 (HUBFDO_CleanupDeviceInterfaceForBillboard.c)
 *     HSMMUX_InitializeHSMMuxContext @ 0x1C000E95C (HSMMUX_InitializeHSMMuxContext.c)
 *     HUBMUX_CreatePSM @ 0x1C000E9AC (HUBMUX_CreatePSM.c)
 *     RtlStringCchPrintfExW @ 0x1C0012A00 (RtlStringCchPrintfExW.c)
 *     HUBPDO_GetHubName @ 0x1C0014ADC (HUBPDO_GetHubName.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0014E10 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_QueryForD3ColdSupportInAcpi @ 0x1C0016070 (HUBPDO_QueryForD3ColdSupportInAcpi.c)
 *     HUBPDO_SubmitDeviceWakeNotificationIoctl @ 0x1C0019BF0 (HUBPDO_SubmitDeviceWakeNotificationIoctl.c)
 *     HUBID_AppendStringToIDString @ 0x1C001B100 (HUBID_AppendStringToIDString.c)
 *     HUBID_BuildUxdPnpId @ 0x1C001B2D8 (HUBID_BuildUxdPnpId.c)
 *     HUBDSM_UpdatingDeviceInformationInEnum @ 0x1C001DF20 (HUBDSM_UpdatingDeviceInformationInEnum.c)
 *     HUBDSM_CheckingIf20LPMShouldBeEnabled @ 0x1C0022EF0 (HUBDSM_CheckingIf20LPMShouldBeEnabled.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C0023E38 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C0024470 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C0024CE4 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C00280E0 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C0028598 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C0029B38 (HUBDTX_ValidateAndCacheSerialNumberStringDescriptor.c)
 *     HUBDTX_LogBillboardEvent @ 0x1C0029E78 (HUBDTX_LogBillboardEvent.c)
 *     HUBDTX_LogAlternateMode @ 0x1C0029F8C (HUBDTX_LogAlternateMode.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C002B840 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C002B9E0 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C002C690 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 *     HUBMISC_CreateNewDSM @ 0x1C002E02C (HUBMISC_CreateNewDSM.c)
 *     HUBMISC_ControlTransfer @ 0x1C002F36C (HUBMISC_ControlTransfer.c)
 *     HUBREG_QueryUsbflagsAlternateSettingFilter @ 0x1C0031600 (HUBREG_QueryUsbflagsAlternateSettingFilter.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0035C28 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0038CD0 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_ValidateMsOs20ConfigurationSubset @ 0x1C003A7F0 (HUBDESC_ValidateMsOs20ConfigurationSubset.c)
 *     HUBDESC_ValidateMsOs20FunctionSubset @ 0x1C003AAC0 (HUBDESC_ValidateMsOs20FunctionSubset.c)
 *     WMI_QueryInstanceDeviceNodeInfo @ 0x1C003D300 (WMI_QueryInstanceDeviceNodeInfo.c)
 *     TelemetryData_CreateReport @ 0x1C003EF6C (TelemetryData_CreateReport.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C003F9D4 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBDInternal_BuildServicePath @ 0x1C003FC58 (USBDInternal_BuildServicePath.c)
 *     USBD_CreateHandle @ 0x1C003FE80 (USBD_CreateHandle.c)
 *     WerpAllocateAndInitializeSid @ 0x1C004198C (WerpAllocateAndInitializeSid.c)
 *     WerKernelSubmitReport @ 0x1C00421BC (WerKernelSubmitReport.c)
 *     memcpy_s @ 0x1C0042910 (memcpy_s.c)
 *     WppTraceCallback @ 0x1C0072150 (WppTraceCallback.c)
 *     HUBDRIVER_EtwRundownUsbDevice @ 0x1C0072970 (HUBDRIVER_EtwRundownUsbDevice.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C00732C0 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x1C0074AC8 (HUBFDO_IoctlGetPortStatus.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C0074CA8 (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C0074E94 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C007520C (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x1C007544C (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x1C0075628 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C007585C (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C0075C74 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x1C0076240 (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C00764F8 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C00768D8 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C0077CC0 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_PublishBillboardDetails @ 0x1C0078DB0 (HUBPDO_PublishBillboardDetails.c)
 *     HUBPDO_CreatePdoInternal @ 0x1C00796D4 (HUBPDO_CreatePdoInternal.c)
 *     HUBCONNECTOR_RegisterPort @ 0x1C007B32C (HUBCONNECTOR_RegisterPort.c)
 *     HUBREG_QueryUxdPortKey @ 0x1C0080360 (HUBREG_QueryUxdPortKey.c)
 *     HUBREG_UpdateUxdSettings @ 0x1C00808CC (HUBREG_UpdateUxdSettings.c)
 *     HUBREG_DeleteUxdSubKeys @ 0x1C0080EF8 (HUBREG_DeleteUxdSubKeys.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x1C0082C40 (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C0083130 (HUBACPI_EvalAcpiMethodEx.c)
 *     WMI_AcquireHubName @ 0x1C0084268 (WMI_AcquireHubName.c)
 *     WMI_QueryInstanceHubNodeInfo @ 0x1C0084540 (WMI_QueryInstanceHubNodeInfo.c)
 *     WMI_RegisterHub @ 0x1C0084A74 (WMI_RegisterHub.c)
 *     WMI_RegisterDevice @ 0x1C0084C64 (WMI_RegisterDevice.c)
 *     WMI_RegisterSurpriseRemovalNotificationInstance @ 0x1C0084DA4 (WMI_RegisterSurpriseRemovalNotificationInstance.c)
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x1C00855B8 (FWUPDATE_CreateFirmwareUpdateDevice.c)
 *     TelemetryData_pInitWerContext @ 0x1C0086260 (TelemetryData_pInitWerContext.c)
 *     QueryDeviceResetInterface @ 0x1C0086918 (QueryDeviceResetInterface.c)
 *     DriverEntry @ 0x1C0088008 (DriverEntry.c)
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
