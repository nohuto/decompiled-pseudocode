/*
 * XREFs of memset @ 0x1C00194C0
 * Callers:
 *     Isoch_Stage_CompleteTD @ 0x1C00021E0 (Isoch_Stage_CompleteTD.c)
 *     Isoch_TransferData_Initialize @ 0x1C00035D0 (Isoch_TransferData_Initialize.c)
 *     Control_TransferData_Initialize @ 0x1C00050E4 (Control_TransferData_Initialize.c)
 *     TR_InitializeTransferRing @ 0x1C0005758 (TR_InitializeTransferRing.c)
 *     UsbDevice_InitializeInputContextCommon @ 0x1C00058D4 (UsbDevice_InitializeInputContextCommon.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0005C40 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0006F40 (UsbDevice_EndpointsConfigureCompletion.c)
 *     Endpoint_Enable @ 0x1C0007CC0 (Endpoint_Enable.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C0009368 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     Etw_EndpointListRundown @ 0x1C000A8F0 (Etw_EndpointListRundown.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C000AB5C (DeviceSlot_D0EntryCleanupState.c)
 *     TR_ReleaseSegments @ 0x1C000BCDC (TR_ReleaseSegments.c)
 *     Bulk_TransferData_Initialize @ 0x1C000CAC0 (Bulk_TransferData_Initialize.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C000DF00 (UsbDevice_UcxEvtEnable.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C000EC04 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_EnableCompletion @ 0x1C000EEE0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C000F010 (UsbDevice_SetAddressCompletion.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C000F288 (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C000F664 (Endpoint_OnCancelSetDequeuePointer.c)
 *     UsbDevice_SetAddress @ 0x1C000FDE0 (UsbDevice_SetAddress.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C001066C (Wmi_CreateControllerCapabilities.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0010C80 (RootHub_UcxEvtInterruptTransfer.c)
 *     XilCoreCommand_Initialize @ 0x1C001340C (XilCoreCommand_Initialize.c)
 *     Interrupter_Initialize @ 0x1C0013780 (Interrupter_Initialize.c)
 *     Etw_DeviceListRundown @ 0x1C0013970 (Etw_DeviceListRundown.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0013B34 (Command_D0EntryPostInterruptsEnabled.c)
 *     Device_QueryCapabilities @ 0x1C0014014 (Device_QueryCapabilities.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C00144CC (XilDeviceSlot_PrepareHardware.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C0014BA8 (XilCoreDeviceSlot_AllocateResources.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0014FE0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     InitializeTelemetryAssertsKM @ 0x1C0017110 (InitializeTelemetryAssertsKM.c)
 *     McGenControlCallbackV2 @ 0x1C0017440 (McGenControlCallbackV2.c)
 *     Etw_EnableCallback @ 0x1C0017570 (Etw_EnableCallback.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C0017640 (UsbDevice_UcxEvtUpdate.c)
 *     XilUsbDevice_QueryAttributesFromTrustlet @ 0x1C0017C0C (XilUsbDevice_QueryAttributesFromTrustlet.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0018350 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C00189F4 (Endpoint_SM_ResetControlEndpoint.c)
 *     Controller_AllocateIrqlTrackingArray @ 0x1C0018B0C (Controller_AllocateIrqlTrackingArray.c)
 *     memcpy_s @ 0x1C0018DF0 (memcpy_s.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C002F6A8 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x1C002FD44 (CommonBuffer_AcquireSecureBuffer.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C002FE40 (CommonBuffer_AcquireShadowBuffer.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C00310A4 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1C0035830 (DeviceSlot_ControllerResetPostReset.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C0036618 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1C0037250 (XilEndpoint_SendRequestToSetSecureStreamContextArray.c)
 *     Endpoint_CreateClearStallContext @ 0x1C0037544 (Endpoint_CreateClearStallContext.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C0038DB4 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C0039234 (Endpoint_SM_ResetEndpoint.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C003950C (Endpoint_SendClearStallTransfer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C003980C (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C0039D50 (Endpoint_UcxEvtEndpointReset.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C003A360 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Interrupter_InitializeForOffload @ 0x1C003B408 (Interrupter_InitializeForOffload.c)
 *     Register_WriteSecureMmio @ 0x1C003C624 (Register_WriteSecureMmio.c)
 *     TR_CreateSecureObject @ 0x1C003E52C (TR_CreateSecureObject.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x1C00424D0 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C0044C18 (XilUsbDevice_CreateSecureObject.c)
 *     UsbDevice_DisableCompletion @ 0x1C0045554 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C00462EC (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SendStopEndpointToOffloadedEndpoint @ 0x1C0046708 (UsbDevice_SendStopEndpointToOffloadedEndpoint.c)
 *     UsbDevice_SetResourceAssignment @ 0x1C00467B0 (UsbDevice_SetResourceAssignment.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0046A60 (UsbDevice_UcxEvtDisable.c)
 *     Crashdump_Initialize @ 0x1C0049870 (Crashdump_Initialize.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C0049BA0 (Crashdump_InitializeDeviceContext.c)
 *     Crashdump_UcxEvtGetDumpData @ 0x1C004A760 (Crashdump_UcxEvtGetDumpData.c)
 *     Crashdump_EventRing_PrepareForDump @ 0x1C004BD4C (Crashdump_EventRing_PrepareForDump.c)
 *     Crashdump_Command_PrepareForDump @ 0x1C004BFC8 (Crashdump_Command_PrepareForDump.c)
 *     Crashdump_Endpoint_PrepareForHibernate @ 0x1C004C6B0 (Crashdump_Endpoint_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_Cleanup @ 0x1C004D078 (Crashdump_UsbDevice_Cleanup.c)
 *     Crashdump_UsbDevice_ConfigureEndpoints @ 0x1C004D44C (Crashdump_UsbDevice_ConfigureEndpoints.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x1C004D7AC (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x1C004D940 (Crashdump_UsbDevice_GetPortStatus.c)
 *     Crashdump_UsbDevice_PrepareForHibernate @ 0x1C004DC40 (Crashdump_UsbDevice_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x1C004E1A0 (Crashdump_UsbDevice_SendAddressDeviceCommand.c)
 *     TelemetryData_CreateReport @ 0x1C005033C (TelemetryData_CreateReport.c)
 *     WerKernelSubmitReport @ 0x1C005130C (WerKernelSubmitReport.c)
 *     WerpAllocateAndInitializeSid @ 0x1C0051ADC (WerpAllocateAndInitializeSid.c)
 *     TR_Create @ 0x1C006AA48 (TR_Create.c)
 *     Controller_CreateWdfDevice @ 0x1C006B2A0 (Controller_CreateWdfDevice.c)
 *     Command_PrepareHardware @ 0x1C006BA58 (Command_PrepareHardware.c)
 *     Interrupter_PrepareHardware @ 0x1C006BBE0 (Interrupter_PrepareHardware.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C006BD10 (Interrupter_PopulateInterrupterLookupTable.c)
 *     DmaEnabler_Create @ 0x1C006BD6C (DmaEnabler_Create.c)
 *     IoControl_Create @ 0x1C006C080 (IoControl_Create.c)
 *     Controller_ExecuteDSM @ 0x1C006CDA8 (Controller_ExecuteDSM.c)
 *     RootHub_PrepareHardware @ 0x1C006D2F0 (RootHub_PrepareHardware.c)
 *     Controller_Create @ 0x1C006D970 (Controller_Create.c)
 *     Controller_SetDeviceDescription @ 0x1C006F068 (Controller_SetDeviceDescription.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C006F3C8 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     RootHub_Create @ 0x1C006F5FC (RootHub_Create.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C006FBB4 (Controller_ConfigureS0IdleSettings.c)
 *     Wmi_Create @ 0x1C006FD5C (Wmi_Create.c)
 *     Interrupter_CreateInterrupter @ 0x1C0070144 (Interrupter_CreateInterrupter.c)
 *     DriverEntry @ 0x1C00704CC (DriverEntry.c)
 *     Controller_RetrievePciData @ 0x1C0070F48 (Controller_RetrievePciData.c)
 *     Controller_RetrieveAcpiData @ 0x1C0074A50 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C0074CB0 (Controller_RetrieveUrsData.c)
 *     WppTraceCallback @ 0x1C0075F90 (WppTraceCallback.c)
 *     Wmi_WdfEvtWmi_GetControllerCapabilities @ 0x1C0076A50 (Wmi_WdfEvtWmi_GetControllerCapabilities.c)
 *     TelemetryData_pInitWerContext @ 0x1C0077878 (TelemetryData_pInitWerContext.c)
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
