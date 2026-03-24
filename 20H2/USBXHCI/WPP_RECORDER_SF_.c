/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C000A0B8
 * Callers:
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0002AE0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0005C8C (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0006130 (Interrupter_DeferredWorkProcessor.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0006928 (Command_HandleCommandCompletionEvent.c)
 *     Command_InternalSendCommand @ 0x1C0006D80 (Command_InternalSendCommand.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C0009D48 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0009E10 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Register_ControllerStop @ 0x1C000B014 (Register_ControllerStop.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000B4D0 (Controller_WdfEvtDeviceD0Exit.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C000B6F0 (CommonBuffer_FlushWorkItems.c)
 *     Register_ControllerReset @ 0x1C0010D88 (Register_ControllerReset.c)
 *     Register_WaitForControllerReady @ 0x1C001102C (Register_WaitForControllerReady.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C00110F8 (Wmi_CreateControllerCapabilities.c)
 *     Controller_Start @ 0x1C0011474 (Controller_Start.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0011710 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00120A0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C00128A0 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0013360 (RootHub_UcxEvtSetPortFeature.c)
 *     Register_BiosHandoff @ 0x1C0013F74 (Register_BiosHandoff.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C00141B0 (XilCoreDeviceSlot_Initialize.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00147B0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0014C14 (Command_D0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0014CE0 (Controller_WdfEvtDeviceD0Entry.c)
 *     XilCoreCommand_AllocateResources @ 0x1C0015B4C (XilCoreCommand_AllocateResources.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0015F74 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C00161E8 (XilCoreDeviceSlot_AllocateResources.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C0016D60 (Controller_UcxEvtQueryUsbCapability.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C00170F0 (Controller_PopulateDeviceFlagsFromKse.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C001766C (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x1C0017B84 (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C0019468 (CommonBuffer_QueueWorkItem.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002EFA4 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002F490 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C0030B88 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     Controller_D0EntryRestoreState @ 0x1C00317F4 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C0031B1C (Controller_D0ExitSaveState.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x1C0031E64 (Controller_DecrementNumberOfEndpointsOffloaded.c)
 *     Controller_DisableController @ 0x1C00321CC (Controller_DisableController.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x1C00323E0 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InitiateRecovery @ 0x1C0032C80 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C0032FD8 (Controller_InternalReset.c)
 *     Controller_ReferenceTrustletProcess @ 0x1C0033558 (Controller_ReferenceTrustletProcess.c)
 *     Controller_SetControllerGone @ 0x1C0033A48 (Controller_SetControllerGone.c)
 *     Controller_TelemetryReport @ 0x1C0033DD0 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1C0034170 (Controller_TelemetryReportWorker.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C00348E0 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtReset @ 0x1C0034C60 (Controller_UcxEvtReset.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0034D50 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0035390 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003CDE0 (IoControl_WdfEvtIoDeviceControl.c)
 *     RootHub_ForceU0AndWait @ 0x1C003DEC8 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C003E26C (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C003E41C (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C003E5E0 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C003E8C0 (RootHub_UcxEvtGetPortErrorCount.c)
 *     TR_AcquireSecureSegments @ 0x1C003F4F4 (TR_AcquireSecureSegments.c)
 *     Isoch_WdfEvtRingEmptyTimer @ 0x1C0043D50 (Isoch_WdfEvtRingEmptyTimer.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C004FED8 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C00502E8 (SecureChannel_SendRequestSynchronously.c)
 *     Controller_Create @ 0x1C006C504 (Controller_Create.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C006D470 (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x1C006D5F0 (Controller_SetDeviceDescription.c)
 *     Register_PrepareHardware @ 0x1C006DF14 (Register_PrepareHardware.c)
 *     Interrupter_PrepareHardware @ 0x1C006EE90 (Interrupter_PrepareHardware.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C006EFC0 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_PrepareInterrupter @ 0x1C006FE08 (Interrupter_PrepareInterrupter.c)
 *     RootHub_PrepareHardware @ 0x1C0070600 (RootHub_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x1C0070C80 (Register_ParseCapabilityRegister.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C0071A14 (Controller_ConfigureS0IdleSettings.c)
 *     Command_ReleaseHardware @ 0x1C0075824 (Command_ReleaseHardware.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C0077780 (Interrupter_FilterAllMSIResources.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C00785E4 (SecureDmaEnabler_MapMemory.c)
 *     IntelPptFilter_FilterCommand @ 0x1C007A100 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterCommandCompletion @ 0x1C007A220 (IntelPptFilter_FilterCommandCompletion.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C007A2E8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C000A0B8
 * Reason: Hex-Rays returned no pseudocode for 0x1C000A0B8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000A0B8: mov     [rsp+arg_0], rbx
 * 00000001C000A0BD: mov     [rsp+arg_8], rbp
 * 00000001C000A0C2: mov     [rsp+arg_10], rsi
 * 00000001C000A0C7: push    rdi
 * 00000001C000A0C8: push    r14
 * 00000001C000A0CA: push    r15
 * 00000001C000A0CC: sub     rsp, 30h
 * 00000001C000A0D0: mov     r14d, r8d
 * 00000001C000A0D3: mov     r15, rcx
 * 00000001C000A0D6: mov     edi, r8d
 * 00000001C000A0D9: shr     rdi, 10h
 * 00000001C000A0DD: movzx   ebp, r9w
 * 00000001C000A0E1: lea     ebx, [r14-1]
 * 00000001C000A0E5: movzx   esi, dl
 * 00000001C000A0E8: mov     r10d, ebx
 * 00000001C000A0EB: and     ebx, 1Fh
 * 00000001C000A0EE: shr     r10, 5
 * 00000001C000A0F2: lea     rax, [rdi+rdi*4]
 * 00000001C000A0F6: and     r10d, 7FFh
 * 00000001C000A0FD: lea     r11, [r10+rax*4]
 * 00000001C000A101: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C000A108: mov     eax, [r10+r11*4+2Ch]
 * 00000001C000A10D: bt      eax, ebx
 * 00000001C000A110: jb      loc_1C00292C0
 * 00000001C000A116: and     [rsp+48h+var_20], 0
 * 00000001C000A11C: mov     r8d, r14d
 * 00000001C000A11F: mov     r9, [rsp+48h+arg_20]
 * 00000001C000A124: mov     edx, esi
 * 00000001C000A126: mov     rcx, r15
 * 00000001C000A129: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C000A12E: call    cs:__imp_WppAutoLogTrace
 * 00000001C000A135: nop     dword ptr [rax+rax+00h]
 * 00000001C000A13A: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000A13F: mov     rbp, [rsp+48h+arg_8]
 * 00000001C000A144: mov     rsi, [rsp+48h+arg_10]
 * 00000001C000A149: add     rsp, 30h
 * 00000001C000A14D: pop     r15
 * 00000001C000A14F: pop     r14
 * 00000001C000A151: pop     rdi
 * 00000001C000A152: retn
 * 00000001C00292C0: lea     rcx, [rdi+rdi*4]
 * 00000001C00292C4: add     rcx, rcx
 * 00000001C00292C7: cmp     [r10+rcx*8+29h], sil
 * 00000001C00292CC: jb      loc_1C000A116
 * 00000001C00292D2: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C00292D9: mov     r9d, ebp
 * 00000001C00292DC: and     [rsp+48h+var_28], 0
 * 00000001C00292E2: mov     edx, 2Bh ; '+'
 * 00000001C00292E7: mov     r8, [rsp+48h+arg_20]
 * 00000001C00292EC: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00292F1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00292F7: nop
 * 00000001C00292F8: jmp     loc_1C000A116
 */
