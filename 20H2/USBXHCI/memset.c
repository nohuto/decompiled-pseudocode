/*
 * XREFs of memset @ 0x1C001BFC0
 * Callers:
 *     Isoch_Stage_CompleteTD @ 0x1C00021E0 (Isoch_Stage_CompleteTD.c)
 *     Isoch_TransferData_Initialize @ 0x1C00035F0 (Isoch_TransferData_Initialize.c)
 *     Control_TransferData_Initialize @ 0x1C00050E4 (Control_TransferData_Initialize.c)
 *     TR_InitializeTransferRing @ 0x1C0005758 (TR_InitializeTransferRing.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C00058D4 (Endpoint_SM_SendStopEndpointCommand.c)
 *     UsbDevice_InitializeInputContextCommon @ 0x1C00059BC (UsbDevice_InitializeInputContextCommon.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0005FDC (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C00074B0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     Endpoint_Enable @ 0x1C00083B0 (Endpoint_Enable.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C0009D48 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     Etw_EndpointListRundown @ 0x1C000B1C0 (Etw_EndpointListRundown.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C000B42C (DeviceSlot_D0EntryCleanupState.c)
 *     TR_ReleaseSegments @ 0x1C000C5AC (TR_ReleaseSegments.c)
 *     Bulk_TransferData_Initialize @ 0x1C000D390 (Bulk_TransferData_Initialize.c)
 *     UsbDevice_EnableCompletion @ 0x1C000E630 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C000E990 (UsbDevice_UcxEvtEnable.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C000F6C4 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C000F9A0 (UsbDevice_SetAddressCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C00100F4 (Endpoint_OnCancelSetDequeuePointer.c)
 *     UsbDevice_SetAddress @ 0x1C001086C (UsbDevice_SetAddress.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C00110F8 (Wmi_CreateControllerCapabilities.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0011710 (RootHub_UcxEvtInterruptTransfer.c)
 *     XilCoreCommand_Initialize @ 0x1C0014334 (XilCoreCommand_Initialize.c)
 *     Interrupter_Initialize @ 0x1C00146A8 (Interrupter_Initialize.c)
 *     Etw_DeviceListRundown @ 0x1C0014A50 (Etw_DeviceListRundown.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0014C14 (Command_D0EntryPostInterruptsEnabled.c)
 *     Device_QueryCapabilities @ 0x1C00150F4 (Device_QueryCapabilities.c)
 *     Controller_AllocateIrqlTrackingArray @ 0x1C001536C (Controller_AllocateIrqlTrackingArray.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C0015BCC (XilDeviceSlot_PrepareHardware.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C00161E8 (XilCoreDeviceSlot_AllocateResources.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0016620 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     InitializeTelemetryAssertsKM @ 0x1C0018410 (InitializeTelemetryAssertsKM.c)
 *     McGenControlCallbackV2 @ 0x1C0018740 (McGenControlCallbackV2.c)
 *     Etw_EnableCallback @ 0x1C0018870 (Etw_EnableCallback.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C0018940 (UsbDevice_UcxEvtUpdate.c)
 *     XilUsbDevice_QueryAttributesFromTrustlet @ 0x1C0018F0C (XilUsbDevice_QueryAttributesFromTrustlet.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C00195F0 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C0019C94 (Endpoint_SM_ResetControlEndpoint.c)
 *     memcpy_s @ 0x1C0019F70 (memcpy_s.c)
 *     wil_details_StagingConfig_Load @ 0x1C001AAD0 (wil_details_StagingConfig_Load.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C0030B88 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x1C0031230 (CommonBuffer_AcquireSecureBuffer.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C003132C (CommonBuffer_AcquireShadowBuffer.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C0032584 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1C0036D10 (DeviceSlot_ControllerResetPostReset.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C0037AF8 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1C0038730 (XilEndpoint_SendRequestToSetSecureStreamContextArray.c)
 *     Endpoint_CreateClearStallContext @ 0x1C0038A24 (Endpoint_CreateClearStallContext.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C003A294 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C003A714 (Endpoint_SM_ResetEndpoint.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C003A9EC (Endpoint_SendClearStallTransfer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C003ACEC (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C003B230 (Endpoint_UcxEvtEndpointReset.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C003B840 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Interrupter_InitializeForOffload @ 0x1C003C8E8 (Interrupter_InitializeForOffload.c)
 *     Register_WriteSecureMmio @ 0x1C003DB04 (Register_WriteSecureMmio.c)
 *     TR_CreateSecureObject @ 0x1C003FA0C (TR_CreateSecureObject.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x1C00439C0 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C0046108 (XilUsbDevice_CreateSecureObject.c)
 *     UsbDevice_DisableCompletion @ 0x1C0046A44 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C00477DC (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SendStopEndpointToOffloadedEndpoint @ 0x1C0047BF8 (UsbDevice_SendStopEndpointToOffloadedEndpoint.c)
 *     UsbDevice_SetResourceAssignment @ 0x1C0047CA0 (UsbDevice_SetResourceAssignment.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0047F60 (UsbDevice_UcxEvtDisable.c)
 *     Crashdump_Initialize @ 0x1C004A3A0 (Crashdump_Initialize.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C004A6D0 (Crashdump_InitializeDeviceContext.c)
 *     Crashdump_UcxEvtGetDumpData @ 0x1C004B290 (Crashdump_UcxEvtGetDumpData.c)
 *     Crashdump_EventRing_PrepareForDump @ 0x1C004C87C (Crashdump_EventRing_PrepareForDump.c)
 *     Crashdump_Command_PrepareForDump @ 0x1C004CAF8 (Crashdump_Command_PrepareForDump.c)
 *     Crashdump_Endpoint_PrepareForHibernate @ 0x1C004D1E0 (Crashdump_Endpoint_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_Cleanup @ 0x1C004DBA8 (Crashdump_UsbDevice_Cleanup.c)
 *     Crashdump_UsbDevice_ConfigureEndpoints @ 0x1C004DF7C (Crashdump_UsbDevice_ConfigureEndpoints.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x1C004E2DC (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x1C004E470 (Crashdump_UsbDevice_GetPortStatus.c)
 *     Crashdump_UsbDevice_PrepareForHibernate @ 0x1C004E770 (Crashdump_UsbDevice_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x1C004ECD0 (Crashdump_UsbDevice_SendAddressDeviceCommand.c)
 *     TelemetryData_CreateReport @ 0x1C0050EAC (TelemetryData_CreateReport.c)
 *     WerKernelSubmitReport @ 0x1C0051E7C (WerKernelSubmitReport.c)
 *     WerpAllocateAndInitializeSid @ 0x1C005264C (WerpAllocateAndInitializeSid.c)
 *     wil_StagingConfig_QueryFeatureState @ 0x1C006B448 (wil_StagingConfig_QueryFeatureState.c)
 *     TR_Create @ 0x1C006BF6C (TR_Create.c)
 *     Controller_Create @ 0x1C006C504 (Controller_Create.c)
 *     Controller_SetDeviceDescription @ 0x1C006D5F0 (Controller_SetDeviceDescription.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C006D950 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     Controller_RetrievePciData @ 0x1C006DAF0 (Controller_RetrievePciData.c)
 *     Controller_CreateWdfDevice @ 0x1C006E550 (Controller_CreateWdfDevice.c)
 *     Command_PrepareHardware @ 0x1C006ED08 (Command_PrepareHardware.c)
 *     Interrupter_PrepareHardware @ 0x1C006EE90 (Interrupter_PrepareHardware.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C006EFC0 (Interrupter_PopulateInterrupterLookupTable.c)
 *     DmaEnabler_Create @ 0x1C006F01C (DmaEnabler_Create.c)
 *     IoControl_Create @ 0x1C006F394 (IoControl_Create.c)
 *     Controller_ExecuteDSM @ 0x1C00700B8 (Controller_ExecuteDSM.c)
 *     RootHub_PrepareHardware @ 0x1C0070600 (RootHub_PrepareHardware.c)
 *     RootHub_Create @ 0x1C0071464 (RootHub_Create.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C0071A14 (Controller_ConfigureS0IdleSettings.c)
 *     Wmi_Create @ 0x1C0071BBC (Wmi_Create.c)
 *     Interrupter_CreateInterrupter @ 0x1C0071FA4 (Interrupter_CreateInterrupter.c)
 *     DriverEntry @ 0x1C007232C (DriverEntry.c)
 *     Controller_RetrieveAcpiData @ 0x1C0075F20 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C0076180 (Controller_RetrieveUrsData.c)
 *     WppTraceCallback @ 0x1C0077460 (WppTraceCallback.c)
 *     Wmi_WdfEvtWmi_GetControllerCapabilities @ 0x1C0077F20 (Wmi_WdfEvtWmi_GetControllerCapabilities.c)
 *     TelemetryData_pInitWerContext @ 0x1C0078D48 (TelemetryData_pInitWerContext.c)
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
