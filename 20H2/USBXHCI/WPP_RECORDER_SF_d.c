/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C000F118
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x1C0001050 (Isoch_Stage_MapIntoRing.c)
 *     Controller_UcxEvtGetCurrentFrameNumber @ 0x1C0001B40 (Controller_UcxEvtGetCurrentFrameNumber.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0002AE0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_RetrieveNextStage @ 0x1C0002D30 (Isoch_RetrieveNextStage.c)
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0005C8C (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0006130 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0009E10 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Controller_WdfEvtPreprocessSetPowerIrp @ 0x1C000A3C0 (Controller_WdfEvtPreprocessSetPowerIrp.c)
 *     Interrupter_D0ExitPreInterruptsDisabled @ 0x1C000A624 (Interrupter_D0ExitPreInterruptsDisabled.c)
 *     Interrupter_InterruptDisable @ 0x1C000A8B8 (Interrupter_InterruptDisable.c)
 *     RootHub_HandleResumedPorts @ 0x1C000AE10 (RootHub_HandleResumedPorts.c)
 *     RootHub_WaitForResumeCompletion @ 0x1C000AF28 (RootHub_WaitForResumeCompletion.c)
 *     Register_ControllerStop @ 0x1C000B014 (Register_ControllerStop.c)
 *     Controller_D0Exit @ 0x1C000B38C (Controller_D0Exit.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000B4D0 (Controller_WdfEvtDeviceD0Exit.c)
 *     RootHub_D0Exit @ 0x1C000B838 (RootHub_D0Exit.c)
 *     UsbDevice_EnableCompletion @ 0x1C000E630 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C000E990 (UsbDevice_UcxEvtEnable.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C000F634 (XilDeviceSlot_SetDeviceContext.c)
 *     Register_ControllerReset @ 0x1C0010D88 (Register_ControllerReset.c)
 *     Interrupter_InterruptEnable @ 0x1C0010F5C (Interrupter_InterruptEnable.c)
 *     Register_WaitForControllerReady @ 0x1C001102C (Register_WaitForControllerReady.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0011710 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0011BE0 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0011E24 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00120A0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C00128A0 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0013360 (RootHub_UcxEvtSetPortFeature.c)
 *     Register_BiosHandoff @ 0x1C0013F74 (Register_BiosHandoff.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00147B0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0014CE0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0015410 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C0015BCC (XilDeviceSlot_PrepareHardware.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C00161E8 (XilCoreDeviceSlot_AllocateResources.c)
 *     DynamicLock_Create @ 0x1C0016A48 (DynamicLock_Create.c)
 *     DmaEnabler_AllocateCommonBufferPage @ 0x1C0016B3C (DmaEnabler_AllocateCommonBufferPage.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C0016D60 (Controller_UcxEvtQueryUsbCapability.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C001766C (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     RootHub_UcxEvtGetInfo @ 0x1C0017820 (RootHub_UcxEvtGetInfo.c)
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C0017D20 (RootHub_UcxEvtGet30PortInfo.c)
 *     RootHub_Read30PortSpeeds @ 0x1C0017F24 (RootHub_Read30PortSpeeds.c)
 *     RootHub_UcxEvtGet20PortInfo @ 0x1C00180B0 (RootHub_UcxEvtGet20PortInfo.c)
 *     XilUsbDevice_QueryAttributesFromTrustlet @ 0x1C0018F0C (XilUsbDevice_QueryAttributesFromTrustlet.c)
 *     Controller_IsRunningWithIrqlRaisedAndTracked @ 0x1C001A020 (Controller_IsRunningWithIrqlRaisedAndTracked.c)
 *     Controller_PopulateTestRegistrySettings @ 0x1C001A0C0 (Controller_PopulateTestRegistrySettings.c)
 *     RootHub_DetectPortInComplianceMode @ 0x1C001B0A0 (RootHub_DetectPortInComplianceMode.c)
 *     RootHub_DetectPortInInactiveState @ 0x1C001B1D0 (RootHub_DetectPortInInactiveState.c)
 *     Command_ASMediaGetFirmwareVersionHighCommandCompletion @ 0x1C002E900 (Command_ASMediaGetFirmwareVersionHighCommandCompletion.c)
 *     Command_ASMediaGetFirmwareVersionLowCommandCompletion @ 0x1C002EA00 (Command_ASMediaGetFirmwareVersionLowCommandCompletion.c)
 *     Command_GetSupportedExtendedCapabilityCommandCompletion @ 0x1C002EEF0 (Command_GetSupportedExtendedCapabilityCommandCompletion.c)
 *     Command_NvidiaGetFirmwareVersionCommandCompletion @ 0x1C002F270 (Command_NvidiaGetFirmwareVersionCommandCompletion.c)
 *     Command_RenesasGetFirmwareVersionCommandCompletion @ 0x1C002F370 (Command_RenesasGetFirmwareVersionCommandCompletion.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002F490 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_AllocateSecureResources @ 0x1C0030420 (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x1C00305B4 (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x1C0030768 (XilCommand_FreeSecureResources.c)
 *     XilCommand_InitializeSecureResources @ 0x1C00308C8 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C0030A28 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C0030B88 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C0030E7C (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C0030FE0 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilCommand_SendRequestToRingDoorbell @ 0x1C0031150 (XilCommand_SendRequestToRingDoorbell.c)
 *     Controller_AudioOffloadWnfStateUpdateWorker @ 0x1C00316F0 (Controller_AudioOffloadWnfStateUpdateWorker.c)
 *     Controller_GetFrameNumber @ 0x1C00326B4 (Controller_GetFrameNumber.c)
 *     Controller_IdleTimeoutUpdateWorker @ 0x1C0032AC0 (Controller_IdleTimeoutUpdateWorker.c)
 *     Controller_InitiateRecovery @ 0x1C0032C80 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C0032FD8 (Controller_InternalReset.c)
 *     Controller_ReferenceTrustletProcess @ 0x1C0033558 (Controller_ReferenceTrustletProcess.c)
 *     Controller_TelemetryReport @ 0x1C0033DD0 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1C0034170 (Controller_TelemetryReportWorker.c)
 *     Controller_TimeSyncStartTrackingWorker @ 0x1C00344C0 (Controller_TimeSyncStartTrackingWorker.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0034D50 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C0036EE4 (XilDeviceSlot_AllocateSecureResources.c)
 *     XilDeviceSlot_CreateSecureObject @ 0x1C003705C (XilDeviceSlot_CreateSecureObject.c)
 *     XilDeviceSlot_FreeSecureResources @ 0x1C00371E4 (XilDeviceSlot_FreeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C0037368 (XilDeviceSlot_InitializeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C00374D4 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C0037680 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C00377E8 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0037974 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C0037AF8 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C0037F60 (XilEndpoint_CreateSecureObject.c)
 *     Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x1C003C7BC (Interrupter_FlushPendingDpcOrWorkItemPreReset.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003CDE0 (IoControl_WdfEvtIoDeviceControl.c)
 *     Register_MapSecureMmio @ 0x1C003D644 (Register_MapSecureMmio.c)
 *     Register_ReadSecureMmio @ 0x1C003D720 (Register_ReadSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C003DB04 (Register_WriteSecureMmio.c)
 *     RootHub_DisableLPMForSlot @ 0x1C003DCF4 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C003DEC8 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C003E26C (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C003E41C (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C003ED10 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WdfEvtTimerPortOperationPendingTimerDpc @ 0x1C003EF20 (RootHub_WdfEvtTimerPortOperationPendingTimerDpc.c)
 *     RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc @ 0x1C003EFC0 (RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc.c)
 *     TR_AcquireSecureSegments @ 0x1C003F4F4 (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C003FA0C (TR_CreateSecureObject.c)
 *     TR_FreeSecureTransferSegments @ 0x1C003FF3C (TR_FreeSecureTransferSegments.c)
 *     TR_InitializeTransferSegment @ 0x1C0040078 (TR_InitializeTransferSegment.c)
 *     Isoch_CommonBufferCallback @ 0x1C0041A00 (Isoch_CommonBufferCallback.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C0046108 (XilUsbDevice_CreateSecureObject.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C0046450 (XilUsbDevice_SendRequestToRingDoorbell.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C004FED8 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C0050030 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     SecureDmaEnabler_Unmap @ 0x1C00500E8 (SecureDmaEnabler_Unmap.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C00502E8 (SecureChannel_SendRequestSynchronously.c)
 *     Isoch_Initialize @ 0x1C006B510 (Isoch_Initialize.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C006C4A4 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 *     Controller_Create @ 0x1C006C504 (Controller_Create.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C006D1E8 (Controller_PopulateDeviceFlagsFromRegistry.c)
 *     Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x1C006D39C (Controller_PopulateRegistryOverrideForSetMultiTTBitFlag.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C006D470 (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x1C006D5F0 (Controller_SetDeviceDescription.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C006D950 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     Controller_RetrievePciData @ 0x1C006DAF0 (Controller_RetrievePciData.c)
 *     Controller_GetDeviceEnumerator @ 0x1C006DE04 (Controller_GetDeviceEnumerator.c)
 *     Register_PrepareHardware @ 0x1C006DF14 (Register_PrepareHardware.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006E290 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Controller_CreateWdfDevice @ 0x1C006E550 (Controller_CreateWdfDevice.c)
 *     Command_PrepareHardware @ 0x1C006ED08 (Command_PrepareHardware.c)
 *     Interrupter_PrepareHardware @ 0x1C006EE90 (Interrupter_PrepareHardware.c)
 *     DmaEnabler_Create @ 0x1C006F01C (DmaEnabler_Create.c)
 *     Register_Create @ 0x1C006F270 (Register_Create.c)
 *     IoControl_Create @ 0x1C006F394 (IoControl_Create.c)
 *     CommonBuffer_Create @ 0x1C006F564 (CommonBuffer_Create.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0070310 (UsbDevice_UcxEvtDeviceAdd.c)
 *     RootHub_PrepareHardware @ 0x1C0070600 (RootHub_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x1C0070C80 (Register_ParseCapabilityRegister.c)
 *     DeviceSlot_Create @ 0x1C0071338 (DeviceSlot_Create.c)
 *     RootHub_Create @ 0x1C0071464 (RootHub_Create.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C0071640 (Controller_WdfEvtDeviceAdd.c)
 *     Controller_ConfigureSxWakeSettings @ 0x1C007198C (Controller_ConfigureSxWakeSettings.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C0071A14 (Controller_ConfigureS0IdleSettings.c)
 *     Wmi_Create @ 0x1C0071BBC (Wmi_Create.c)
 *     Command_Create @ 0x1C0071CFC (Command_Create.c)
 *     Command_CreateCommandWatchdogTimer @ 0x1C0071E54 (Command_CreateCommandWatchdogTimer.c)
 *     Interrupter_Create @ 0x1C0071F2C (Interrupter_Create.c)
 *     Interrupter_CreateInterrupter @ 0x1C0071FA4 (Interrupter_CreateInterrupter.c)
 *     Controller_PopulateVIAFirmwareVersion @ 0x1C0075D10 (Controller_PopulateVIAFirmwareVersion.c)
 *     Controller_RetrieveAcpiData @ 0x1C0075F20 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C0076180 (Controller_RetrieveUrsData.c)
 *     Controller_TelemetryOkToGenerateReport @ 0x1C0076648 (Controller_TelemetryOkToGenerateReport.c)
 *     Controller_TelemetryUpdateSubmitReportSuccess @ 0x1C0076930 (Controller_TelemetryUpdateSubmitReportSuccess.c)
 *     Controller_UpdateIdleTimeout @ 0x1C0076BE0 (Controller_UpdateIdleTimeout.c)
 *     Controller_UpdateSqmDatapoints @ 0x1C0076CFC (Controller_UpdateSqmDatapoints.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C0077780 (Interrupter_FilterAllMSIResources.c)
 *     Register_CreateSecureObject @ 0x1C0077C60 (Register_CreateSecureObject.c)
 *     IntelPptFilter_Create @ 0x1C0077FB4 (IntelPptFilter_Create.c)
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C007815C (SecureDmaEnabler_AllocateCommonBufferPage.c)
 *     SecureDmaEnabler_Create @ 0x1C0078364 (SecureDmaEnabler_Create.c)
 *     SecureDmaEnabler_CreateSecureObject @ 0x1C00784E4 (SecureDmaEnabler_CreateSecureObject.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C00785E4 (SecureDmaEnabler_MapMemory.c)
 *     SecureChannel_Create @ 0x1C0078828 (SecureChannel_Create.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C007A2E8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_d @ 0x1C000F118
 * Reason: Hex-Rays returned no pseudocode for 0x1C000F118
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000F118: mov     [rsp+arg_0], rbx
 * 00000001C000F11D: mov     [rsp+arg_8], rbp
 * 00000001C000F122: mov     [rsp+arg_10], rsi
 * 00000001C000F127: push    rdi
 * 00000001C000F128: push    r14
 * 00000001C000F12A: push    r15
 * 00000001C000F12C: sub     rsp, 40h
 * 00000001C000F130: mov     r14d, r8d
 * 00000001C000F133: mov     r15, rcx
 * 00000001C000F136: mov     edi, r8d
 * 00000001C000F139: shr     rdi, 10h
 * 00000001C000F13D: movzx   esi, dl
 * 00000001C000F140: lea     ebx, [r14-1]
 * 00000001C000F144: movzx   ebp, r9w
 * 00000001C000F148: mov     r10d, ebx
 * 00000001C000F14B: and     ebx, 1Fh
 * 00000001C000F14E: shr     r10, 5
 * 00000001C000F152: lea     rax, [rdi+rdi*4]
 * 00000001C000F156: and     r10d, 7FFh
 * 00000001C000F15D: mov     edx, ebx
 * 00000001C000F15F: mov     ebx, 4
 * 00000001C000F164: lea     r11, [r10+rax*4]
 * 00000001C000F168: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C000F16F: mov     eax, [r10+r11*4+2Ch]
 * 00000001C000F174: bt      eax, edx
 * 00000001C000F177: jb      loc_1C002161E
 * 00000001C000F17D: and     [rsp+58h+var_20], 0
 * 00000001C000F183: lea     rax, [rsp+58h+arg_28]
 * 00000001C000F18B: mov     r9, [rsp+58h+arg_20]
 * 00000001C000F193: mov     r8d, r14d
 * 00000001C000F196: mov     [rsp+58h+var_28], rbx
 * 00000001C000F19B: mov     edx, esi
 * 00000001C000F19D: mov     [rsp+58h+var_30], rax
 * 00000001C000F1A2: mov     rcx, r15
 * 00000001C000F1A5: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C000F1AA: call    cs:__imp_WppAutoLogTrace
 * 00000001C000F1B1: nop     dword ptr [rax+rax+00h]
 * 00000001C000F1B6: mov     rbx, [rsp+58h+arg_0]
 * 00000001C000F1BB: mov     rbp, [rsp+58h+arg_8]
 * 00000001C000F1C0: mov     rsi, [rsp+58h+arg_10]
 * 00000001C000F1C5: add     rsp, 40h
 * 00000001C000F1C9: pop     r15
 * 00000001C000F1CB: pop     r14
 * 00000001C000F1CD: pop     rdi
 * 00000001C000F1CE: retn
 * 00000001C002161E: lea     rcx, [rdi+rdi*4]
 * 00000001C0021622: add     rcx, rcx
 * 00000001C0021625: cmp     [r10+rcx*8+29h], sil
 * 00000001C002162A: jb      loc_1C000F17D
 * 00000001C0021630: and     [rsp+58h+var_28], 0
 * 00000001C0021636: lea     rdx, [rsp+58h+arg_28]
 * 00000001C002163E: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0021645: mov     r9d, ebp
 * 00000001C0021648: mov     r8, [rsp+58h+arg_20]
 * 00000001C0021650: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0021655: mov     [rsp+58h+var_30], rbx
 * 00000001C002165A: mov     [rsp+58h+var_38], rdx
 * 00000001C002165F: mov     edx, 2Bh ; '+'
 * 00000001C0021664: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002166A: nop
 * 00000001C002166B: jmp     loc_1C000F17D
 */
