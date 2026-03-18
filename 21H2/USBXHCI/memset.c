/*
 * XREFs of memset @ 0x1C0019CC0
 * Callers:
 *     TR_InitializeTransferRing @ 0x1C00013FC (TR_InitializeTransferRing.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C00020D0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0002A5C (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_InitializeInputContextCommon @ 0x1C00047AC (UsbDevice_InitializeInputContextCommon.c)
 *     Isoch_Stage_CompleteTD @ 0x1C00070C0 (Isoch_Stage_CompleteTD.c)
 *     Isoch_TransferData_Initialize @ 0x1C00085B0 (Isoch_TransferData_Initialize.c)
 *     Control_TransferData_Initialize @ 0x1C0009C74 (Control_TransferData_Initialize.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C000A058 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C000C0DC (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C000C6A8 (Endpoint_SM_SendStopEndpointCommand.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C000DCAC (DeviceSlot_D0EntryCleanupState.c)
 *     TR_ReleaseSegments @ 0x1C000E380 (TR_ReleaseSegments.c)
 *     Bulk_TransferData_Initialize @ 0x1C000EFC8 (Bulk_TransferData_Initialize.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C000FC10 (UsbDevice_UcxEvtEnable.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C0010670 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_EnableCompletion @ 0x1C00109B0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0010C30 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_SetAddress @ 0x1C00111BC (UsbDevice_SetAddress.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0013700 (RootHub_UcxEvtInterruptTransfer.c)
 *     XilCoreCommand_Initialize @ 0x1C0014460 (XilCoreCommand_Initialize.c)
 *     Interrupter_Initialize @ 0x1C0014810 (Interrupter_Initialize.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0014DE4 (Command_D0EntryPostInterruptsEnabled.c)
 *     Device_QueryCapabilities @ 0x1C0015018 (Device_QueryCapabilities.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0015FA0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     McGenControlCallbackV2 @ 0x1C00177E0 (McGenControlCallbackV2.c)
 *     InitializeTelemetryAssertsKM @ 0x1C0017D40 (InitializeTelemetryAssertsKM.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C001843C (UsbDevice_UpdateUsbDevice.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C00185D0 (UsbDevice_UcxEvtUpdate.c)
 *     memcpy_s @ 0x1C0018EF0 (memcpy_s.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x1C0030810 (CommonBuffer_AcquireSecureBuffer.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1C0036250 (DeviceSlot_ControllerResetPostReset.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C0037038 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0037F40 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C00398A4 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C0039DA8 (Endpoint_SM_ResetControlEndpoint.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C0039E54 (Endpoint_SM_ResetEndpoint.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C003A12C (Endpoint_SendClearStallTransfer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C003A428 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C003AAF0 (Endpoint_UcxEvtEndpointReset.c)
 *     Interrupter_InitializeForOffload @ 0x1C003C1CC (Interrupter_InitializeForOffload.c)
 *     Register_WriteSecureMmio @ 0x1C003D41C (Register_WriteSecureMmio.c)
 *     TR_CreateSecureObject @ 0x1C003F59C (TR_CreateSecureObject.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x1C0043760 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C0045964 (XilUsbDevice_CreateSecureObject.c)
 *     UsbDevice_DisableCompletion @ 0x1C00462A4 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C004703C (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SendStopEndpointToOffloadedEndpoint @ 0x1C0047378 (UsbDevice_SendStopEndpointToOffloadedEndpoint.c)
 *     UsbDevice_SetResourceAssignment @ 0x1C0047420 (UsbDevice_SetResourceAssignment.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C00476E0 (UsbDevice_UcxEvtDisable.c)
 *     Crashdump_Initialize @ 0x1C004A210 (Crashdump_Initialize.c)
 *     Crashdump_EventRing_PrepareForDump @ 0x1C004C69C (Crashdump_EventRing_PrepareForDump.c)
 *     Crashdump_Command_PrepareForDump @ 0x1C004C918 (Crashdump_Command_PrepareForDump.c)
 *     Crashdump_Endpoint_PrepareForHibernate @ 0x1C004D004 (Crashdump_Endpoint_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_Cleanup @ 0x1C004D9CC (Crashdump_UsbDevice_Cleanup.c)
 *     Crashdump_UsbDevice_ConfigureEndpoints @ 0x1C004DDA0 (Crashdump_UsbDevice_ConfigureEndpoints.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x1C004E100 (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x1C004E294 (Crashdump_UsbDevice_GetPortStatus.c)
 *     Crashdump_UsbDevice_PrepareForHibernate @ 0x1C004E590 (Crashdump_UsbDevice_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x1C004EAEC (Crashdump_UsbDevice_SendAddressDeviceCommand.c)
 *     TelemetryData_CreateReport @ 0x1C0050E50 (TelemetryData_CreateReport.c)
 *     WerKernelSubmitReport @ 0x1C0051E18 (WerKernelSubmitReport.c)
 *     WerpAllocateAndInitializeSid @ 0x1C00525EC (WerpAllocateAndInitializeSid.c)
 *     TR_Create @ 0x1C006BCD8 (TR_Create.c)
 *     Controller_CreateWdfDevice @ 0x1C006C580 (Controller_CreateWdfDevice.c)
 *     IoControl_Create @ 0x1C006CCFC (IoControl_Create.c)
 *     Interrupter_CreateInterrupter @ 0x1C006CEC0 (Interrupter_CreateInterrupter.c)
 *     Wmi_Create @ 0x1C006D600 (Wmi_Create.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C006E350 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     DmaEnabler_Create @ 0x1C006E4E0 (DmaEnabler_Create.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C006F1BC (Controller_ConfigureS0IdleSettings.c)
 *     Controller_Create @ 0x1C00702D4 (Controller_Create.c)
 *     RootHub_Create @ 0x1C00716A0 (RootHub_Create.c)
 *     DriverEntry @ 0x1C0071878 (DriverEntry.c)
 *     Controller_RetrievePciData @ 0x1C007215C (Controller_RetrievePciData.c)
 *     SleepstudyHelperInitializeOnce @ 0x1C00729D0 (SleepstudyHelperInitializeOnce.c)
 *     WppTraceCallback @ 0x1C0077680 (WppTraceCallback.c)
 *     Wmi_WdfEvtWmi_GetControllerCapabilities @ 0x1C0078140 (Wmi_WdfEvtWmi_GetControllerCapabilities.c)
 *     TelemetryData_pInitWerContext @ 0x1C0078F88 (TelemetryData_pInitWerContext.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}
