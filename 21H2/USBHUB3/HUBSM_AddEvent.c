/*
 * XREFs of HUBSM_AddEvent @ 0x1C000B3FC
 * Callers:
 *     HUBHTX_HubControlTransferComplete @ 0x1C0002ED0 (HUBHTX_HubControlTransferComplete.c)
 *     HUBHTX_GetHubDescriptorUsingControlTransfer @ 0x1C0003190 (HUBHTX_GetHubDescriptorUsingControlTransfer.c)
 *     HUBHTX_GetHubStatusUsingControlTransfer @ 0x1C0003420 (HUBHTX_GetHubStatusUsingControlTransfer.c)
 *     HUBHTX_SendInterruptTransfer @ 0x1C0003544 (HUBHTX_SendInterruptTransfer.c)
 *     HUBHTX_SendInterruptTransferComplete @ 0x1C0003850 (HUBHTX_SendInterruptTransferComplete.c)
 *     HUBHTX_GetRequestedPortStatusUsingControlTransfer @ 0x1C0005E34 (HUBHTX_GetRequestedPortStatusUsingControlTransfer.c)
 *     HUBPARENT_SetHubConfigurationComplete @ 0x1C0006D80 (HUBPARENT_SetHubConfigurationComplete.c)
 *     HUBPARENT_SetHubConfiguration @ 0x1C0006F04 (HUBPARENT_SetHubConfiguration.c)
 *     HUBPARENT_ResetInterruptPipeComplete @ 0x1C0007460 (HUBPARENT_ResetInterruptPipeComplete.c)
 *     HUBPARENT_ResetInterruptPipe @ 0x1C00075E0 (HUBPARENT_ResetInterruptPipe.c)
 *     HUBPARENT_ResetHubComplete @ 0x1C0007790 (HUBPARENT_ResetHubComplete.c)
 *     HUBPARENT_ResetHub @ 0x1C00078C0 (HUBPARENT_ResetHub.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctlComplete @ 0x1C0007B60 (HUBPARENT_GetInfoFromParentUsingParentIoctlComplete.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctl @ 0x1C0007D1C (HUBPARENT_GetInfoFromParentUsingParentIoctl.c)
 *     HUBHSM_QueueingPortStatusChangeEvents @ 0x1C0008880 (HUBHSM_QueueingPortStatusChangeEvents.c)
 *     HUBHSM_SendingAckForHubChange @ 0x1C0008A90 (HUBHSM_SendingAckForHubChange.c)
 *     HUBHSM_WaitingForPortsToReleaseReferenceOnSuspend @ 0x1C0008FD0 (HUBHSM_WaitingForPortsToReleaseReferenceOnSuspend.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength @ 0x1C00090E0 (HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength @ 0x1C0009220 (HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength.c)
 *     HUBHSM_GettingHubStatus @ 0x1C0009390 (HUBHSM_GettingHubStatus.c)
 *     HUBHSM_SettingHubDepth @ 0x1C0009870 (HUBHSM_SettingHubDepth.c)
 *     HUBHSM_ReadingUsb4DromStatus @ 0x1C0009B10 (HUBHSM_ReadingUsb4DromStatus.c)
 *     HUBHSM_ReadingUsb4DromDwordOffset @ 0x1C0009E60 (HUBHSM_ReadingUsb4DromDwordOffset.c)
 *     HUBHSM_WritingUsb4DromMetaData @ 0x1C0009EC0 (HUBHSM_WritingUsb4DromMetaData.c)
 *     HUBHSM_WritingUsb4DromReadOpcode @ 0x1C0009F30 (HUBHSM_WritingUsb4DromReadOpcode.c)
 *     HUBSM_AddHsmEvent @ 0x1C000A238 (HUBSM_AddHsmEvent.c)
 *     HUBSM_AddPsm20Event @ 0x1C000A260 (HUBSM_AddPsm20Event.c)
 *     HUBSM_AddDsmEvent @ 0x1C000A280 (HUBSM_AddDsmEvent.c)
 *     HUBFDO_EvtDeviceD0Entry @ 0x1C000C530 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBFDO_EvtDeviceD0Exit @ 0x1C000C900 (HUBFDO_EvtDeviceD0Exit.c)
 *     HUBFDO_EvtDeviceCleanupCallback @ 0x1C000CCA0 (HUBFDO_EvtDeviceCleanupCallback.c)
 *     HUBFDO_EvtIoInternalDeviceControlFromPDO @ 0x1C000D1F0 (HUBFDO_EvtIoInternalDeviceControlFromPDO.c)
 *     HUBMUX_QueuePowerUpEventToPSMs @ 0x1C000F89C (HUBMUX_QueuePowerUpEventToPSMs.c)
 *     HUBMUX_QueueStopToAllPSMs @ 0x1C000F964 (HUBMUX_QueueStopToAllPSMs.c)
 *     HUBMUX_AcquirePortPowerReference @ 0x1C000FA08 (HUBMUX_AcquirePortPowerReference.c)
 *     HUBMUX_ReleasePortPowerReference @ 0x1C000FA54 (HUBMUX_ReleasePortPowerReference.c)
 *     HUBMUX_ReleaseResetReference @ 0x1C000FAF0 (HUBMUX_ReleaseResetReference.c)
 *     HUBMUX_ReEnableInterruptTransfer @ 0x1C000FC1C (HUBMUX_ReEnableInterruptTransfer.c)
 *     HUBMUX_ReleaseInterruptReference @ 0x1C000FCB8 (HUBMUX_ReleaseInterruptReference.c)
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x1C000FEC0 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 *     HUBMUX_QueuePowerDownEventToDSMs @ 0x1C000FF44 (HUBMUX_QueuePowerDownEventToDSMs.c)
 *     HUBMUX_QueueStopAfterSuspendToAllDSMs @ 0x1C0010178 (HUBMUX_QueueStopAfterSuspendToAllDSMs.c)
 *     HUBMUX_QueuePowerUpEventToDSMs @ 0x1C00103EC (HUBMUX_QueuePowerUpEventToDSMs.c)
 *     HUBMUX_UnregisterWithHSM @ 0x1C0010608 (HUBMUX_UnregisterWithHSM.c)
 *     HUBMUX_AcquireDevicePowerReference @ 0x1C0010774 (HUBMUX_AcquireDevicePowerReference.c)
 *     HUBMUX_ReleaseDevicePowerReference @ 0x1C0010800 (HUBMUX_ReleaseDevicePowerReference.c)
 *     HUBMUX_AckStopAfterSuspend @ 0x1C00108A8 (HUBMUX_AckStopAfterSuspend.c)
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x1C0014C20 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x1C0016E98 (HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess @ 0x1C001720C (HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C00173D0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceD0Entry @ 0x1C00186C0 (HUBPDO_EvtDeviceD0Entry.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C00188D0 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1C0018CF0 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBPDO_PowerSettingCallback @ 0x1C0019910 (HUBPDO_PowerSettingCallback.c)
 *     HUBPDO_NoPingResponse @ 0x1C001A980 (HUBPDO_NoPingResponse.c)
 *     HUBDSM_ResettingPipeInUCXOnClientReset @ 0x1C001D860 (HUBDSM_ResettingPipeInUCXOnClientReset.c)
 *     HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x1C001DA00 (HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe.c)
 *     HUBDSM_SendingGetDeviceDescriptorRequestForExemptSecureBioDevice @ 0x1C001EF60 (HUBDSM_SendingGetDeviceDescriptorRequestForExemptSecureBioDevice.c)
 *     HUBDSM_GettingLanguageIdStringDescriptor @ 0x1C001F110 (HUBDSM_GettingLanguageIdStringDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdDescriptor @ 0x1C001F440 (HUBDSM_GettingMSOSContainerIdDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdHeaderDescriptor @ 0x1C001F4E0 (HUBDSM_GettingMSOSContainerIdHeaderDescriptor.c)
 *     HUBDSM_GettingMSOSDescriptor @ 0x1C001F580 (HUBDSM_GettingMSOSDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptor @ 0x1C001F620 (HUBDSM_GettingMSOSExtendedDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptorHeader @ 0x1C001F720 (HUBDSM_GettingMSOSExtendedDescriptorHeader.c)
 *     HUBDSM_GetMsOs20DescriptorSet @ 0x1C00201F0 (HUBDSM_GetMsOs20DescriptorSet.c)
 *     HUBDSM_GettingAlternateModeStringDescriptor @ 0x1C0020390 (HUBDSM_GettingAlternateModeStringDescriptor.c)
 *     HUBDSM_GettingBillboardStringDescriptor @ 0x1C0020450 (HUBDSM_GettingBillboardStringDescriptor.c)
 *     HUBDSM_SendingDisallowFirmwareUpdateCommand @ 0x1C0020530 (HUBDSM_SendingDisallowFirmwareUpdateCommand.c)
 *     HUBDSM_SendingFirmwareImageHashQuery @ 0x1C0020610 (HUBDSM_SendingFirmwareImageHashQuery.c)
 *     HUBDSM_SendingUsbFeaturesVendorCmd @ 0x1C00206F0 (HUBDSM_SendingUsbFeaturesVendorCmd.c)
 *     HUBDSM_GettingDeviceQualifierDescriptor @ 0x1C0020CC0 (HUBDSM_GettingDeviceQualifierDescriptor.c)
 *     HUBDSM_ConfiguringDevice @ 0x1C00216C0 (HUBDSM_ConfiguringDevice.c)
 *     HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration @ 0x1C00217C0 (HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration.c)
 *     HUBDSM_ArmingDeviceForWake @ 0x1C0021DC0 (HUBDSM_ArmingDeviceForWake.c)
 *     HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure @ 0x1C0021FF0 (HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptor @ 0x1C0022480 (HUBDSM_GettingMSOSExtendedPropertyDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader @ 0x1C0022520 (HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader.c)
 *     HUBDSM_EnablingLTM @ 0x1C0022840 (HUBDSM_EnablingLTM.c)
 *     HUBDSM_SetttingIsochDelay @ 0x1C0022950 (HUBDSM_SetttingIsochDelay.c)
 *     HUBDSM_DisablingU1 @ 0x1C0022CD0 (HUBDSM_DisablingU1.c)
 *     HUBDSM_DisablingU2 @ 0x1C0022E00 (HUBDSM_DisablingU2.c)
 *     HUBDSM_EnablingU1 @ 0x1C0022EE0 (HUBDSM_EnablingU1.c)
 *     HUBDSM_EnablingU2 @ 0x1C0022FC0 (HUBDSM_EnablingU2.c)
 *     HUBDSM_GettingRemoteWakeCapability @ 0x1C0023230 (HUBDSM_GettingRemoteWakeCapability.c)
 *     HUBUCX_EvtResetActionCompletion @ 0x1C0023430 (HUBUCX_EvtResetActionCompletion.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C00234D0 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C0023D84 (HUBUCX_SubmitUcxIoctl.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C0024278 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C00248B0 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctlComplete @ 0x1C0025030 (HUBUCX_GetRootHubInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C0025114 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete @ 0x1C0025360 (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x1C0025404 (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete @ 0x1C0025850 (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl @ 0x1C00258F4 (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl @ 0x1C0025D54 (HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctlComplete @ 0x1C0026040 (HUBUCX_UpdateHubInformationUsingUCXIoctlComplete.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctl @ 0x1C0026134 (HUBUCX_UpdateHubInformationUsingUCXIoctl.c)
 *     HUBUCX_ClientRequestCompleteFromUCX @ 0x1C0026A10 (HUBUCX_ClientRequestCompleteFromUCX.c)
 *     HUBUCX_ForwardRequestToUCX @ 0x1C0026A5C (HUBUCX_ForwardRequestToUCX.c)
 *     HUBDTX_ControlTransferComplete @ 0x1C0027010 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_DisarmDeviceForWakeUsingControlTransfer @ 0x1C0027F44 (HUBDTX_DisarmDeviceForWakeUsingControlTransfer.c)
 *     HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer @ 0x1C00280BC (HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer.c)
 *     HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer @ 0x1C002817C (HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer.c)
 *     HUBDTX_GetDeviceDescriptorUsingControlTransfer @ 0x1C0028280 (HUBDTX_GetDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer @ 0x1C0028310 (HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer @ 0x1C00283A0 (HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer.c)
 *     HUBDTX_GetBOSDescriptorUsingControlTransfer @ 0x1C0028484 (HUBDTX_GetBOSDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer @ 0x1C0028C54 (HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer.c)
 *     HUBDTX_GetProductIdStringDescriptorUsingControlTransfer @ 0x1C0028D58 (HUBDTX_GetProductIdStringDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer @ 0x1C0028E34 (HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer.c)
 *     HUBDTX_SetDeviceInterfaceUsingControlTransfer @ 0x1C0028ED0 (HUBDTX_SetDeviceInterfaceUsingControlTransfer.c)
 *     HUBDTX_SetDeviceNullConfigurationUsingControlTransfer @ 0x1C0028FE4 (HUBDTX_SetDeviceNullConfigurationUsingControlTransfer.c)
 *     HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x1C0029ECC (HUBDTX_ClearEndpointHaltUsingControlTransfer.c)
 *     HUBDTX_SetSelUsingControlTransfer @ 0x1C002AA6C (HUBDTX_SetSelUsingControlTransfer.c)
 *     HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer @ 0x1C002AD00 (HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer.c)
 *     HUBDTX_GetDeviceDescriptorComplete @ 0x1C002ADE0 (HUBDTX_GetDeviceDescriptorComplete.c)
 *     HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb @ 0x1C002AF14 (HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb.c)
 *     HUBMISC_HubEventTimer @ 0x1C002BE00 (HUBMISC_HubEventTimer.c)
 *     HUBMISC_DsmEventTimer @ 0x1C002BE30 (HUBMISC_DsmEventTimer.c)
 *     HUBMISC_AttachDevice @ 0x1C002E4A0 (HUBMISC_AttachDevice.c)
 *     HUBMISC_DetachDevice @ 0x1C002E51C (HUBMISC_DetachDevice.c)
 *     HUBMISC_ReAttachDevice @ 0x1C002E574 (HUBMISC_ReAttachDevice.c)
 *     FWUPDATE_HubVendorControlTransferComplete @ 0x1C003EC70 (FWUPDATE_HubVendorControlTransferComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C000AA98 (HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     HUBSM_RunStateMachine @ 0x1C000B90C (HUBSM_RunStateMachine.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBSM_AddEvent(__int64 a1, int a2)
{
  __int64 v4; // rax
  KIRQL v5; // al
  __int64 v6; // rcx
  KIRQL v7; // si
  unsigned __int8 v8; // cl
  char v9; // r9
  char v10; // al
  unsigned __int8 i; // dl
  int v12; // r8d
  __int64 v13; // rax
  char v14; // dl
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  KIRQL v22; // [rsp+58h] [rbp+10h] BYREF

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 960));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v4,
    "Add Event Tag",
    1136LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
  v6 = *(unsigned __int8 *)(a1 + 833);
  v7 = v5;
  v22 = v5;
  *(_DWORD *)(a1 + 4 * v6 + 768) = a2;
  *(_BYTE *)(a1 + 833) = (*(_BYTE *)(a1 + 833) + 1) & 0xF;
  if ( a2 == 3039 || a2 == 3043 || a2 == 4055 || a2 == 4059 )
  {
    v8 = *(_BYTE *)(a1 + 948);
    v9 = 0;
    v10 = *(_BYTE *)(a1 + 949);
    for ( i = v8; i != v10; i = (i + 1) & 0xF )
    {
      v12 = *(_DWORD *)(a1 + 4LL * i + 884);
      if ( v12 == a2 )
      {
        v9 = 1;
      }
      else
      {
        v13 = v8;
        v8 = (v8 + 1) & 0xF;
        *(_DWORD *)(a1 + 4 * v13 + 884) = v12;
      }
      v10 = *(_BYTE *)(a1 + 949);
    }
    v14 = v8;
    if ( v8 != v10 )
    {
      do
      {
        v15 = v14 & 0xF;
        v14 = (v14 + 1) & 0xF;
        *(_DWORD *)(a1 + 4 * v15 + 884) = 1000;
      }
      while ( v14 != *(_BYTE *)(a1 + 949) );
    }
    *(_BYTE *)(a1 + 949) = v8;
    if ( v9 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), v7);
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
      v22 = v7;
    }
  }
  if ( *(_BYTE *)(a1 + 1048) )
  {
    if ( a2 == 1002 )
    {
      *(_BYTE *)(a1 + 1048) = 0;
      v16 = HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(a1);
      if ( v16 != 1003 )
      {
        v17 = v16;
LABEL_21:
        HUBSM_RunStateMachine(a1, v17, &v22, 0LL);
        v7 = v22;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 949) + 884) = a2;
      *(_BYTE *)(a1 + 949) = (*(_BYTE *)(a1 + 949) + 1) & 0xF;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 949) + 884) = a2;
    *(_BYTE *)(a1 + 949) = (*(_BYTE *)(a1 + 949) + 1) & 0xF;
    if ( !*(_BYTE *)(a1 + 848) )
    {
      v18 = *(_QWORD *)(a1 + 960);
      *(_BYTE *)(a1 + 848) = 1;
      v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v18);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v19,
        "State Machine Tag",
        1235LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
      v17 = 1000LL;
      goto LABEL_21;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), v7);
  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 960));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
           WdfDriverGlobals,
           v20,
           "Add Event Tag",
           1252LL,
           "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
}
