/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C0014AE8
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0005D90 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0009430 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x1C0009EB4 (ControllerPreInterruptsDisableAcpiCallout.c)
 *     UsbDevice_EnableCompletion @ 0x1C000EEE0 (UsbDevice_EnableCompletion.c)
 *     Interrupter_UpdateERDP @ 0x1C0013300 (Interrupter_UpdateERDP.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C0014BA8 (XilCoreDeviceSlot_AllocateResources.c)
 *     XilCoreUsbDevice_Create @ 0x1C0014EDC (XilCoreUsbDevice_Create.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C00163D0 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     CommonBuffer_WdfEvtCleanupCallback @ 0x1C002FF40 (CommonBuffer_WdfEvtCleanupCallback.c)
 *     Controller_LPEEnterExitCallback @ 0x1C0031F10 (Controller_LPEEnterExitCallback.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0033400 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0033870 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0033EB0 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0034240 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceArmWakeFromSx @ 0x1C00343A0 (Controller_WdfEvtDeviceArmWakeFromSx.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0034430 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromSx @ 0x1C0034590 (Controller_WdfEvtDeviceDisarmWakeFromSx.c)
 *     Controller_WdfEvtDeviceWakeFromS0Triggered @ 0x1C0034620 (Controller_WdfEvtDeviceWakeFromS0Triggered.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C003918C (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x1C003B048 (Interrupter_DeInitializeAfterOffload.c)
 *     ESM_SimulatingEndpointHaltReceivedOnTimeout @ 0x1C004EFE0 (ESM_SimulatingEndpointHaltReceivedOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout @ 0x1C004F040 (ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedOnTimeout @ 0x1C004F0A0 (ESM_SimulatingExpectedEventTRBsProcessedOnTimeout.c)
 *     ESM_SimulatingFSEReceivedOnTimeout @ 0x1C004F100 (ESM_SimulatingFSEReceivedOnTimeout.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x1C0050038 (XilCoreCommonBuffer_FreeUnusedResources.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C006AFA4 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006AFE0 (Controller_WdfEvtDevicePrepareHardware.c)
 *     DmaEnabler_Create @ 0x1C006BD6C (DmaEnabler_Create.c)
 *     Register_Create @ 0x1C006BF5C (Register_Create.c)
 *     IoControl_Create @ 0x1C006C080 (IoControl_Create.c)
 *     CommonBuffer_Create @ 0x1C006C250 (CommonBuffer_Create.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C006D000 (UsbDevice_UcxEvtDeviceAdd.c)
 *     Register_ParseCapabilityRegister @ 0x1C006E228 (Register_ParseCapabilityRegister.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C006EEE8 (Controller_PopulateHardwareVerifierFlags.c)
 *     DeviceSlot_Create @ 0x1C006F4D0 (DeviceSlot_Create.c)
 *     Command_Create @ 0x1C006FE9C (Command_Create.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C00746CC (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0075A40 (Controller_WdfEvtDeviceReleaseHardware.c)
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C0075C50 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     IntelPptFilter_Create @ 0x1C0076AE4 (IntelPptFilter_Create.c)
 *     SecureDmaEnabler_Create @ 0x1C0076E94 (SecureDmaEnabler_Create.c)
 *     SecureChannel_Create @ 0x1C0077358 (SecureChannel_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1C0014AE8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0014AE8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0014AE8: mov     [rsp+arg_0], rbx
 * 00000001C0014AED: mov     [rsp+arg_8], rbp
 * 00000001C0014AF2: mov     [rsp+arg_10], rsi
 * 00000001C0014AF7: push    rdi
 * 00000001C0014AF8: push    r14
 * 00000001C0014AFA: push    r15
 * 00000001C0014AFC: sub     rsp, 40h
 * 00000001C0014B00: mov     r14d, r8d
 * 00000001C0014B03: mov     r15, rcx
 * 00000001C0014B06: mov     edi, r8d
 * 00000001C0014B09: shr     rdi, 10h
 * 00000001C0014B0D: movzx   esi, dl
 * 00000001C0014B10: lea     ebx, [r14-1]
 * 00000001C0014B14: movzx   ebp, r9w
 * 00000001C0014B18: mov     r10d, ebx
 * 00000001C0014B1B: and     ebx, 1Fh
 * 00000001C0014B1E: shr     r10, 5
 * 00000001C0014B22: lea     rax, [rdi+rdi*4]
 * 00000001C0014B26: and     r10d, 7FFh
 * 00000001C0014B2D: mov     edx, ebx
 * 00000001C0014B2F: mov     ebx, 8
 * 00000001C0014B34: lea     r11, [r10+rax*4]
 * 00000001C0014B38: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0014B3F: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0014B44: bt      eax, edx
 * 00000001C0014B47: jb      loc_1C001F258
 * 00000001C0014B4D: and     [rsp+58h+var_20], 0
 * 00000001C0014B53: lea     rax, [rsp+58h+arg_28]
 * 00000001C0014B5B: mov     r9, [rsp+58h+arg_20]
 * 00000001C0014B63: mov     r8d, r14d
 * 00000001C0014B66: mov     [rsp+58h+var_28], rbx
 * 00000001C0014B6B: mov     edx, esi
 * 00000001C0014B6D: mov     [rsp+58h+var_30], rax
 * 00000001C0014B72: mov     rcx, r15
 * 00000001C0014B75: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C0014B7A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0014B81: nop     dword ptr [rax+rax+00h]
 * 00000001C0014B86: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0014B8B: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0014B90: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0014B95: add     rsp, 40h
 * 00000001C0014B99: pop     r15
 * 00000001C0014B9B: pop     r14
 * 00000001C0014B9D: pop     rdi
 * 00000001C0014B9E: retn
 * 00000001C001F258: lea     rcx, [rdi+rdi*4]
 * 00000001C001F25C: add     rcx, rcx
 * 00000001C001F25F: cmp     [r10+rcx*8+29h], sil
 * 00000001C001F264: jb      loc_1C0014B4D
 * 00000001C001F26A: and     [rsp+58h+var_28], 0
 * 00000001C001F270: lea     rdx, [rsp+58h+arg_28]
 * 00000001C001F278: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C001F27F: mov     r9d, ebp
 * 00000001C001F282: mov     r8, [rsp+58h+arg_20]
 * 00000001C001F28A: mov     rcx, [r10+rcx*8+18h]
 * 00000001C001F28F: mov     [rsp+58h+var_30], rbx
 * 00000001C001F294: mov     [rsp+58h+var_38], rdx
 * 00000001C001F299: mov     edx, 2Bh ; '+'
 * 00000001C001F29E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C001F2A4: nop
 * 00000001C001F2A5: jmp     loc_1C0014B4D
 */
