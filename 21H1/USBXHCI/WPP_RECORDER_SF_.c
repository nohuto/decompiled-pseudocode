/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0009878
 * Callers:
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0002AE0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0005BA4 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0005D90 (Interrupter_DeferredWorkProcessor.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0006588 (Command_HandleCommandCompletionEvent.c)
 *     Command_InternalSendCommand @ 0x1C00069D8 (Command_InternalSendCommand.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C0009368 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0009430 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Register_ControllerStop @ 0x1C000A738 (Register_ControllerStop.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000AC00 (Controller_WdfEvtDeviceD0Exit.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C000AE20 (CommonBuffer_FlushWorkItems.c)
 *     Register_ControllerReset @ 0x1C00102FC (Register_ControllerReset.c)
 *     Register_WaitForControllerReady @ 0x1C00105A0 (Register_WaitForControllerReady.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C001066C (Wmi_CreateControllerCapabilities.c)
 *     Controller_Start @ 0x1C00109E8 (Controller_Start.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0010C80 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00113F0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0011BF0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C00122E0 (RootHub_UcxEvtGetPortStatus.c)
 *     Register_BiosHandoff @ 0x1C0012E98 (Register_BiosHandoff.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0013000 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C0013288 (XilCoreDeviceSlot_Initialize.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0013B34 (Command_D0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0013C00 (Controller_WdfEvtDeviceD0Entry.c)
 *     XilCoreCommand_AllocateResources @ 0x1C001444C (XilCoreCommand_AllocateResources.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0014874 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C0014BA8 (XilCoreDeviceSlot_AllocateResources.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C0015720 (Controller_UcxEvtQueryUsbCapability.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C0015AB0 (Controller_PopulateDeviceFlagsFromKse.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C00160C4 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x1C0016944 (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C0018168 (CommonBuffer_QueueWorkItem.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002DAE4 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002DFB0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C002F6A8 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     Controller_D0EntryRestoreState @ 0x1C0030314 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C003063C (Controller_D0ExitSaveState.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x1C0030984 (Controller_DecrementNumberOfEndpointsOffloaded.c)
 *     Controller_DisableController @ 0x1C0030CEC (Controller_DisableController.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x1C0030F00 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InitiateRecovery @ 0x1C00317A0 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C0031AF8 (Controller_InternalReset.c)
 *     Controller_ReferenceTrustletProcess @ 0x1C0032078 (Controller_ReferenceTrustletProcess.c)
 *     Controller_SetControllerGone @ 0x1C0032568 (Controller_SetControllerGone.c)
 *     Controller_TelemetryReport @ 0x1C00328F0 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1C0032C90 (Controller_TelemetryReportWorker.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0033400 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtReset @ 0x1C0033780 (Controller_UcxEvtReset.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0033870 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0033EB0 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003B900 (IoControl_WdfEvtIoDeviceControl.c)
 *     RootHub_ForceU0AndWait @ 0x1C003C9E8 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C003CD8C (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C003CF3C (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C003D100 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C003D3E0 (RootHub_UcxEvtGetPortErrorCount.c)
 *     TR_AcquireSecureSegments @ 0x1C003E014 (TR_AcquireSecureSegments.c)
 *     Isoch_WdfEvtRingEmptyTimer @ 0x1C0042860 (Isoch_WdfEvtRingEmptyTimer.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C004F368 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C004F778 (SecureChannel_SendRequestSynchronously.c)
 *     Interrupter_PrepareHardware @ 0x1C006BBE0 (Interrupter_PrepareHardware.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C006BD10 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_PrepareInterrupter @ 0x1C006CAF8 (Interrupter_PrepareInterrupter.c)
 *     RootHub_PrepareHardware @ 0x1C006D2F0 (RootHub_PrepareHardware.c)
 *     Controller_Create @ 0x1C006D970 (Controller_Create.c)
 *     Register_ParseCapabilityRegister @ 0x1C006E228 (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x1C006EC08 (Register_PrepareHardware.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C006EEE8 (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x1C006F068 (Controller_SetDeviceDescription.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C006FBB4 (Controller_ConfigureS0IdleSettings.c)
 *     Command_ReleaseHardware @ 0x1C0074354 (Command_ReleaseHardware.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C00762B0 (Interrupter_FilterAllMSIResources.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C0077114 (SecureDmaEnabler_MapMemory.c)
 *     IntelPptFilter_FilterCommand @ 0x1C0078100 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterCommandCompletion @ 0x1C0078220 (IntelPptFilter_FilterCommandCompletion.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C00782E8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0009878
 * Reason: Hex-Rays returned no pseudocode for 0x1C0009878
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0009878: mov     [rsp+arg_0], rbx
 * 00000001C000987D: mov     [rsp+arg_8], rbp
 * 00000001C0009882: mov     [rsp+arg_10], rsi
 * 00000001C0009887: push    rdi
 * 00000001C0009888: push    r14
 * 00000001C000988A: push    r15
 * 00000001C000988C: sub     rsp, 30h
 * 00000001C0009890: mov     r14d, r8d
 * 00000001C0009893: mov     r15, rcx
 * 00000001C0009896: mov     edi, r8d
 * 00000001C0009899: shr     rdi, 10h
 * 00000001C000989D: movzx   ebp, r9w
 * 00000001C00098A1: lea     ebx, [r14-1]
 * 00000001C00098A5: movzx   esi, dl
 * 00000001C00098A8: mov     r10d, ebx
 * 00000001C00098AB: and     ebx, 1Fh
 * 00000001C00098AE: shr     r10, 5
 * 00000001C00098B2: lea     rax, [rdi+rdi*4]
 * 00000001C00098B6: and     r10d, 7FFh
 * 00000001C00098BD: lea     r11, [r10+rax*4]
 * 00000001C00098C1: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00098C8: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00098CD: bt      eax, ebx
 * 00000001C00098D0: jb      loc_1C00273AA
 * 00000001C00098D6: and     [rsp+48h+var_20], 0
 * 00000001C00098DC: mov     r8d, r14d
 * 00000001C00098DF: mov     r9, [rsp+48h+arg_20]
 * 00000001C00098E4: mov     edx, esi
 * 00000001C00098E6: mov     rcx, r15
 * 00000001C00098E9: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C00098EE: call    cs:__imp_WppAutoLogTrace
 * 00000001C00098F5: nop     dword ptr [rax+rax+00h]
 * 00000001C00098FA: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00098FF: mov     rbp, [rsp+48h+arg_8]
 * 00000001C0009904: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0009909: add     rsp, 30h
 * 00000001C000990D: pop     r15
 * 00000001C000990F: pop     r14
 * 00000001C0009911: pop     rdi
 * 00000001C0009912: retn
 * 00000001C00273AA: lea     rcx, [rdi+rdi*4]
 * 00000001C00273AE: add     rcx, rcx
 * 00000001C00273B1: cmp     [r10+rcx*8+29h], sil
 * 00000001C00273B6: jb      loc_1C00098D6
 * 00000001C00273BC: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C00273C3: mov     r9d, ebp
 * 00000001C00273C6: and     [rsp+48h+var_28], 0
 * 00000001C00273CC: mov     edx, 2Bh ; '+'
 * 00000001C00273D1: mov     r8, [rsp+48h+arg_20]
 * 00000001C00273D6: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00273DB: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00273E1: nop
 * 00000001C00273E2: jmp     loc_1C00098D6
 */
