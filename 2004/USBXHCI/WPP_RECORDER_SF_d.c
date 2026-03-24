/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C000E688
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x1C0001050 (Isoch_Stage_MapIntoRing.c)
 *     Controller_UcxEvtGetCurrentFrameNumber @ 0x1C0001B40 (Controller_UcxEvtGetCurrentFrameNumber.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0002AE0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_RetrieveNextStage @ 0x1C0002D30 (Isoch_RetrieveNextStage.c)
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0005BA4 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0005D90 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0009430 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Controller_WdfEvtPreprocessSetPowerIrp @ 0x1C0009B80 (Controller_WdfEvtPreprocessSetPowerIrp.c)
 *     Interrupter_D0ExitPreInterruptsDisabled @ 0x1C0009DE4 (Interrupter_D0ExitPreInterruptsDisabled.c)
 *     Interrupter_InterruptDisable @ 0x1C000A078 (Interrupter_InterruptDisable.c)
 *     RootHub_HandleResumedPorts @ 0x1C000A534 (RootHub_HandleResumedPorts.c)
 *     RootHub_WaitForResumeCompletion @ 0x1C000A64C (RootHub_WaitForResumeCompletion.c)
 *     Register_ControllerStop @ 0x1C000A738 (Register_ControllerStop.c)
 *     Controller_D0Exit @ 0x1C000AABC (Controller_D0Exit.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000AC00 (Controller_WdfEvtDeviceD0Exit.c)
 *     RootHub_D0Exit @ 0x1C000AF68 (RootHub_D0Exit.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C000DF00 (UsbDevice_UcxEvtEnable.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C000EB74 (XilDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_EnableCompletion @ 0x1C000EEE0 (UsbDevice_EnableCompletion.c)
 *     Register_ControllerReset @ 0x1C00102FC (Register_ControllerReset.c)
 *     Interrupter_InterruptEnable @ 0x1C00104D0 (Interrupter_InterruptEnable.c)
 *     Register_WaitForControllerReady @ 0x1C00105A0 (Register_WaitForControllerReady.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0010C80 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0010F2C (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0011170 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00113F0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0011BF0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C00122E0 (RootHub_UcxEvtGetPortStatus.c)
 *     Register_BiosHandoff @ 0x1C0012E98 (Register_BiosHandoff.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0013000 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0013C00 (Controller_WdfEvtDeviceD0Entry.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C00144CC (XilDeviceSlot_PrepareHardware.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C0014BA8 (XilCoreDeviceSlot_AllocateResources.c)
 *     DynamicLock_Create @ 0x1C0015408 (DynamicLock_Create.c)
 *     DmaEnabler_AllocateCommonBufferPage @ 0x1C00154FC (DmaEnabler_AllocateCommonBufferPage.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C0015720 (Controller_UcxEvtQueryUsbCapability.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C00160C4 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     RootHub_UcxEvtGetInfo @ 0x1C0016280 (RootHub_UcxEvtGetInfo.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C00163D0 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C0016A20 (RootHub_UcxEvtGet30PortInfo.c)
 *     RootHub_Read30PortSpeeds @ 0x1C0016C24 (RootHub_Read30PortSpeeds.c)
 *     RootHub_UcxEvtGet20PortInfo @ 0x1C0016DB0 (RootHub_UcxEvtGet20PortInfo.c)
 *     XilUsbDevice_QueryAttributesFromTrustlet @ 0x1C0017C0C (XilUsbDevice_QueryAttributesFromTrustlet.c)
 *     Controller_IsRunningWithIrqlRaisedAndTracked @ 0x1C0018EA0 (Controller_IsRunningWithIrqlRaisedAndTracked.c)
 *     Controller_PopulateTestRegistrySettings @ 0x1C0018F40 (Controller_PopulateTestRegistrySettings.c)
 *     Command_ASMediaGetFirmwareVersionHighCommandCompletion @ 0x1C002D440 (Command_ASMediaGetFirmwareVersionHighCommandCompletion.c)
 *     Command_ASMediaGetFirmwareVersionLowCommandCompletion @ 0x1C002D540 (Command_ASMediaGetFirmwareVersionLowCommandCompletion.c)
 *     Command_GetSupportedExtendedCapabilityCommandCompletion @ 0x1C002DA30 (Command_GetSupportedExtendedCapabilityCommandCompletion.c)
 *     Command_NvidiaGetFirmwareVersionCommandCompletion @ 0x1C002DDB0 (Command_NvidiaGetFirmwareVersionCommandCompletion.c)
 *     Command_RenesasGetFirmwareVersionCommandCompletion @ 0x1C002DE90 (Command_RenesasGetFirmwareVersionCommandCompletion.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002DFB0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_AllocateSecureResources @ 0x1C002EF40 (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x1C002F0D4 (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x1C002F288 (XilCommand_FreeSecureResources.c)
 *     XilCommand_InitializeSecureResources @ 0x1C002F3E8 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C002F548 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C002F6A8 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C002F990 (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C002FAF4 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilCommand_SendRequestToRingDoorbell @ 0x1C002FC64 (XilCommand_SendRequestToRingDoorbell.c)
 *     Controller_AudioOffloadWnfStateUpdateWorker @ 0x1C0030210 (Controller_AudioOffloadWnfStateUpdateWorker.c)
 *     Controller_GetFrameNumber @ 0x1C00311D4 (Controller_GetFrameNumber.c)
 *     Controller_IdleTimeoutUpdateWorker @ 0x1C00315E0 (Controller_IdleTimeoutUpdateWorker.c)
 *     Controller_InitiateRecovery @ 0x1C00317A0 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C0031AF8 (Controller_InternalReset.c)
 *     Controller_ReferenceTrustletProcess @ 0x1C0032078 (Controller_ReferenceTrustletProcess.c)
 *     Controller_TelemetryReport @ 0x1C00328F0 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1C0032C90 (Controller_TelemetryReportWorker.c)
 *     Controller_TimeSyncStartTrackingWorker @ 0x1C0032FE0 (Controller_TimeSyncStartTrackingWorker.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0033870 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C0035A04 (XilDeviceSlot_AllocateSecureResources.c)
 *     XilDeviceSlot_CreateSecureObject @ 0x1C0035B7C (XilDeviceSlot_CreateSecureObject.c)
 *     XilDeviceSlot_FreeSecureResources @ 0x1C0035D04 (XilDeviceSlot_FreeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C0035E88 (XilDeviceSlot_InitializeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C0035FF4 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C00361A0 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C0036308 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0036494 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C0036618 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C0036A80 (XilEndpoint_CreateSecureObject.c)
 *     Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x1C003B2DC (Interrupter_FlushPendingDpcOrWorkItemPreReset.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003B900 (IoControl_WdfEvtIoDeviceControl.c)
 *     Register_MapSecureMmio @ 0x1C003C164 (Register_MapSecureMmio.c)
 *     Register_ReadSecureMmio @ 0x1C003C240 (Register_ReadSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C003C624 (Register_WriteSecureMmio.c)
 *     RootHub_DisableLPMForSlot @ 0x1C003C814 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C003C9E8 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C003CD8C (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C003CF3C (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C003D830 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WdfEvtTimerPortOperationPendingTimerDpc @ 0x1C003DA40 (RootHub_WdfEvtTimerPortOperationPendingTimerDpc.c)
 *     RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc @ 0x1C003DAE0 (RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc.c)
 *     TR_AcquireSecureSegments @ 0x1C003E014 (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C003E52C (TR_CreateSecureObject.c)
 *     TR_FreeSecureTransferSegments @ 0x1C003EA5C (TR_FreeSecureTransferSegments.c)
 *     TR_InitializeTransferSegment @ 0x1C003EB98 (TR_InitializeTransferSegment.c)
 *     Isoch_CommonBufferCallback @ 0x1C0040520 (Isoch_CommonBufferCallback.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C0044C18 (XilUsbDevice_CreateSecureObject.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C0044F60 (XilUsbDevice_SendRequestToRingDoorbell.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C004F368 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C004F4C0 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     SecureDmaEnabler_Unmap @ 0x1C004F578 (SecureDmaEnabler_Unmap.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C004F778 (SecureChannel_SendRequestSynchronously.c)
 *     Isoch_Initialize @ 0x1C006A010 (Isoch_Initialize.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C006AF80 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006AFE0 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Controller_CreateWdfDevice @ 0x1C006B2A0 (Controller_CreateWdfDevice.c)
 *     Command_PrepareHardware @ 0x1C006BA58 (Command_PrepareHardware.c)
 *     Interrupter_PrepareHardware @ 0x1C006BBE0 (Interrupter_PrepareHardware.c)
 *     DmaEnabler_Create @ 0x1C006BD6C (DmaEnabler_Create.c)
 *     Register_Create @ 0x1C006BF5C (Register_Create.c)
 *     IoControl_Create @ 0x1C006C080 (IoControl_Create.c)
 *     CommonBuffer_Create @ 0x1C006C250 (CommonBuffer_Create.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C006D000 (UsbDevice_UcxEvtDeviceAdd.c)
 *     RootHub_PrepareHardware @ 0x1C006D2F0 (RootHub_PrepareHardware.c)
 *     Controller_Create @ 0x1C006D970 (Controller_Create.c)
 *     Register_ParseCapabilityRegister @ 0x1C006E228 (Register_ParseCapabilityRegister.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C006EA54 (Controller_PopulateDeviceFlagsFromRegistry.c)
 *     Register_PrepareHardware @ 0x1C006EC08 (Register_PrepareHardware.c)
 *     Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x1C006EE14 (Controller_PopulateRegistryOverrideForSetMultiTTBitFlag.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C006EEE8 (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x1C006F068 (Controller_SetDeviceDescription.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C006F3C8 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     DeviceSlot_Create @ 0x1C006F4D0 (DeviceSlot_Create.c)
 *     RootHub_Create @ 0x1C006F5FC (RootHub_Create.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C006F7E0 (Controller_WdfEvtDeviceAdd.c)
 *     Controller_ConfigureSxWakeSettings @ 0x1C006FB2C (Controller_ConfigureSxWakeSettings.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C006FBB4 (Controller_ConfigureS0IdleSettings.c)
 *     Wmi_Create @ 0x1C006FD5C (Wmi_Create.c)
 *     Command_Create @ 0x1C006FE9C (Command_Create.c)
 *     Command_CreateCommandWatchdogTimer @ 0x1C006FFF4 (Command_CreateCommandWatchdogTimer.c)
 *     Interrupter_Create @ 0x1C00700CC (Interrupter_Create.c)
 *     Interrupter_CreateInterrupter @ 0x1C0070144 (Interrupter_CreateInterrupter.c)
 *     Controller_RetrievePciData @ 0x1C0070F48 (Controller_RetrievePciData.c)
 *     Controller_GetDeviceEnumerator @ 0x1C00713FC (Controller_GetDeviceEnumerator.c)
 *     Controller_PopulateVIAFirmwareVersion @ 0x1C0074840 (Controller_PopulateVIAFirmwareVersion.c)
 *     Controller_RetrieveAcpiData @ 0x1C0074A50 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C0074CB0 (Controller_RetrieveUrsData.c)
 *     Controller_TelemetryOkToGenerateReport @ 0x1C0075178 (Controller_TelemetryOkToGenerateReport.c)
 *     Controller_TelemetryUpdateSubmitReportSuccess @ 0x1C0075460 (Controller_TelemetryUpdateSubmitReportSuccess.c)
 *     Controller_UpdateIdleTimeout @ 0x1C0075710 (Controller_UpdateIdleTimeout.c)
 *     Controller_UpdateSqmDatapoints @ 0x1C007582C (Controller_UpdateSqmDatapoints.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C00762B0 (Interrupter_FilterAllMSIResources.c)
 *     Register_CreateSecureObject @ 0x1C0076790 (Register_CreateSecureObject.c)
 *     IntelPptFilter_Create @ 0x1C0076AE4 (IntelPptFilter_Create.c)
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C0076C8C (SecureDmaEnabler_AllocateCommonBufferPage.c)
 *     SecureDmaEnabler_Create @ 0x1C0076E94 (SecureDmaEnabler_Create.c)
 *     SecureDmaEnabler_CreateSecureObject @ 0x1C0077014 (SecureDmaEnabler_CreateSecureObject.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C0077114 (SecureDmaEnabler_MapMemory.c)
 *     SecureChannel_Create @ 0x1C0077358 (SecureChannel_Create.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C00782E8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_d @ 0x1C000E688
 * Reason: Hex-Rays returned no pseudocode for 0x1C000E688
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000E688: mov     [rsp+arg_0], rbx
 * 00000001C000E68D: mov     [rsp+arg_8], rbp
 * 00000001C000E692: mov     [rsp+arg_10], rsi
 * 00000001C000E697: push    rdi
 * 00000001C000E698: push    r14
 * 00000001C000E69A: push    r15
 * 00000001C000E69C: sub     rsp, 40h
 * 00000001C000E6A0: mov     r14d, r8d
 * 00000001C000E6A3: mov     r15, rcx
 * 00000001C000E6A6: mov     edi, r8d
 * 00000001C000E6A9: shr     rdi, 10h
 * 00000001C000E6AD: movzx   esi, dl
 * 00000001C000E6B0: lea     ebx, [r14-1]
 * 00000001C000E6B4: movzx   ebp, r9w
 * 00000001C000E6B8: mov     r10d, ebx
 * 00000001C000E6BB: and     ebx, 1Fh
 * 00000001C000E6BE: shr     r10, 5
 * 00000001C000E6C2: lea     rax, [rdi+rdi*4]
 * 00000001C000E6C6: and     r10d, 7FFh
 * 00000001C000E6CD: mov     edx, ebx
 * 00000001C000E6CF: mov     ebx, 4
 * 00000001C000E6D4: lea     r11, [r10+rax*4]
 * 00000001C000E6D8: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C000E6DF: mov     eax, [r10+r11*4+2Ch]
 * 00000001C000E6E4: bt      eax, edx
 * 00000001C000E6E7: jb      loc_1C001E818
 * 00000001C000E6ED: and     [rsp+58h+var_20], 0
 * 00000001C000E6F3: lea     rax, [rsp+58h+arg_28]
 * 00000001C000E6FB: mov     r9, [rsp+58h+arg_20]
 * 00000001C000E703: mov     r8d, r14d
 * 00000001C000E706: mov     [rsp+58h+var_28], rbx
 * 00000001C000E70B: mov     edx, esi
 * 00000001C000E70D: mov     [rsp+58h+var_30], rax
 * 00000001C000E712: mov     rcx, r15
 * 00000001C000E715: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C000E71A: call    cs:__imp_WppAutoLogTrace
 * 00000001C000E721: nop     dword ptr [rax+rax+00h]
 * 00000001C000E726: mov     rbx, [rsp+58h+arg_0]
 * 00000001C000E72B: mov     rbp, [rsp+58h+arg_8]
 * 00000001C000E730: mov     rsi, [rsp+58h+arg_10]
 * 00000001C000E735: add     rsp, 40h
 * 00000001C000E739: pop     r15
 * 00000001C000E73B: pop     r14
 * 00000001C000E73D: pop     rdi
 * 00000001C000E73E: retn
 * 00000001C001E818: lea     rcx, [rdi+rdi*4]
 * 00000001C001E81C: add     rcx, rcx
 * 00000001C001E81F: cmp     [r10+rcx*8+29h], sil
 * 00000001C001E824: jb      loc_1C000E6ED
 * 00000001C001E82A: and     [rsp+58h+var_28], 0
 * 00000001C001E830: lea     rdx, [rsp+58h+arg_28]
 * 00000001C001E838: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C001E83F: mov     r9d, ebp
 * 00000001C001E842: mov     r8, [rsp+58h+arg_20]
 * 00000001C001E84A: mov     rcx, [r10+rcx*8+18h]
 * 00000001C001E84F: mov     [rsp+58h+var_30], rbx
 * 00000001C001E854: mov     [rsp+58h+var_38], rdx
 * 00000001C001E859: mov     edx, 2Bh ; '+'
 * 00000001C001E85E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C001E864: nop
 * 00000001C001E865: jmp     loc_1C000E6ED
 */
