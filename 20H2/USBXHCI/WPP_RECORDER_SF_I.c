/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C00155A4
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0006130 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0009E10 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x1C000A6F4 (ControllerPreInterruptsDisableAcpiCallout.c)
 *     UsbDevice_EnableCompletion @ 0x1C000E630 (UsbDevice_EnableCompletion.c)
 *     Interrupter_UpdateERDP @ 0x1C0014228 (Interrupter_UpdateERDP.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0015410 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C00161E8 (XilCoreDeviceSlot_AllocateResources.c)
 *     XilCoreUsbDevice_Create @ 0x1C001651C (XilCoreUsbDevice_Create.c)
 *     CommonBuffer_WdfEvtCleanupCallback @ 0x1C0031420 (CommonBuffer_WdfEvtCleanupCallback.c)
 *     Controller_LPEEnterExitCallback @ 0x1C00333F0 (Controller_LPEEnterExitCallback.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C00348E0 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0034D50 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0035390 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0035720 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceArmWakeFromSx @ 0x1C0035880 (Controller_WdfEvtDeviceArmWakeFromSx.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0035910 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromSx @ 0x1C0035A70 (Controller_WdfEvtDeviceDisarmWakeFromSx.c)
 *     Controller_WdfEvtDeviceWakeFromS0Triggered @ 0x1C0035B00 (Controller_WdfEvtDeviceWakeFromS0Triggered.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C003A66C (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x1C003C528 (Interrupter_DeInitializeAfterOffload.c)
 *     ESM_SimulatingEndpointHaltReceivedOnTimeout @ 0x1C004FB50 (ESM_SimulatingEndpointHaltReceivedOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout @ 0x1C004FBB0 (ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedOnTimeout @ 0x1C004FC10 (ESM_SimulatingExpectedEventTRBsProcessedOnTimeout.c)
 *     ESM_SimulatingFSEReceivedOnTimeout @ 0x1C004FC70 (ESM_SimulatingFSEReceivedOnTimeout.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x1C0050BA8 (XilCoreCommonBuffer_FreeUnusedResources.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C006C4C8 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C006D470 (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006E290 (Controller_WdfEvtDevicePrepareHardware.c)
 *     DmaEnabler_Create @ 0x1C006F01C (DmaEnabler_Create.c)
 *     Register_Create @ 0x1C006F270 (Register_Create.c)
 *     IoControl_Create @ 0x1C006F394 (IoControl_Create.c)
 *     CommonBuffer_Create @ 0x1C006F564 (CommonBuffer_Create.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0070310 (UsbDevice_UcxEvtDeviceAdd.c)
 *     Register_ParseCapabilityRegister @ 0x1C0070C80 (Register_ParseCapabilityRegister.c)
 *     DeviceSlot_Create @ 0x1C0071338 (DeviceSlot_Create.c)
 *     Command_Create @ 0x1C0071CFC (Command_Create.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C0075B9C (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0076F10 (Controller_WdfEvtDeviceReleaseHardware.c)
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C0077120 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     IntelPptFilter_Create @ 0x1C0077FB4 (IntelPptFilter_Create.c)
 *     SecureDmaEnabler_Create @ 0x1C0078364 (SecureDmaEnabler_Create.c)
 *     SecureChannel_Create @ 0x1C0078828 (SecureChannel_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1C00155A4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00155A4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00155A4: mov     [rsp+arg_0], rbx
 * 00000001C00155A9: mov     [rsp+arg_8], rbp
 * 00000001C00155AE: mov     [rsp+arg_10], rsi
 * 00000001C00155B3: push    rdi
 * 00000001C00155B4: push    r14
 * 00000001C00155B6: push    r15
 * 00000001C00155B8: sub     rsp, 40h
 * 00000001C00155BC: mov     r14d, r8d
 * 00000001C00155BF: mov     r15, rcx
 * 00000001C00155C2: mov     edi, r8d
 * 00000001C00155C5: shr     rdi, 10h
 * 00000001C00155C9: movzx   esi, dl
 * 00000001C00155CC: lea     ebx, [r14-1]
 * 00000001C00155D0: movzx   ebp, r9w
 * 00000001C00155D4: mov     r10d, ebx
 * 00000001C00155D7: and     ebx, 1Fh
 * 00000001C00155DA: shr     r10, 5
 * 00000001C00155DE: lea     rax, [rdi+rdi*4]
 * 00000001C00155E2: and     r10d, 7FFh
 * 00000001C00155E9: mov     edx, ebx
 * 00000001C00155EB: mov     ebx, 8
 * 00000001C00155F0: lea     r11, [r10+rax*4]
 * 00000001C00155F4: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00155FB: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0015600: bt      eax, edx
 * 00000001C0015603: jb      loc_1C0021CCE
 * 00000001C0015609: and     [rsp+58h+var_20], 0
 * 00000001C001560F: lea     rax, [rsp+58h+arg_28]
 * 00000001C0015617: mov     r9, [rsp+58h+arg_20]
 * 00000001C001561F: mov     r8d, r14d
 * 00000001C0015622: mov     [rsp+58h+var_28], rbx
 * 00000001C0015627: mov     edx, esi
 * 00000001C0015629: mov     [rsp+58h+var_30], rax
 * 00000001C001562E: mov     rcx, r15
 * 00000001C0015631: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C0015636: call    cs:__imp_WppAutoLogTrace
 * 00000001C001563D: nop     dword ptr [rax+rax+00h]
 * 00000001C0015642: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0015647: mov     rbp, [rsp+58h+arg_8]
 * 00000001C001564C: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0015651: add     rsp, 40h
 * 00000001C0015655: pop     r15
 * 00000001C0015657: pop     r14
 * 00000001C0015659: pop     rdi
 * 00000001C001565A: retn
 * 00000001C0021CCE: lea     rcx, [rdi+rdi*4]
 * 00000001C0021CD2: add     rcx, rcx
 * 00000001C0021CD5: cmp     [r10+rcx*8+29h], sil
 * 00000001C0021CDA: jb      loc_1C0015609
 * 00000001C0021CE0: and     [rsp+58h+var_28], 0
 * 00000001C0021CE6: lea     rdx, [rsp+58h+arg_28]
 * 00000001C0021CEE: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0021CF5: mov     r9d, ebp
 * 00000001C0021CF8: mov     r8, [rsp+58h+arg_20]
 * 00000001C0021D00: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0021D05: mov     [rsp+58h+var_30], rbx
 * 00000001C0021D0A: mov     [rsp+58h+var_38], rdx
 * 00000001C0021D0F: mov     edx, 2Bh ; '+'
 * 00000001C0021D14: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0021D1A: nop
 * 00000001C0021D1B: jmp     loc_1C0015609
 */
