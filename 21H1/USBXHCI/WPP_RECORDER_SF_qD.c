/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C00135F0
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0005D90 (Interrupter_DeferredWorkProcessor.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x1C0009EB4 (ControllerPreInterruptsDisableAcpiCallout.c)
 *     XilCoreDeviceSlot_ClearDeviceContext @ 0x1C000A170 (XilCoreDeviceSlot_ClearDeviceContext.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000A1DC (UsbDevice_SetDeviceDisabled.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C000AB5C (DeviceSlot_D0EntryCleanupState.c)
 *     Command_D0Entry @ 0x1C000EB18 (Command_D0Entry.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0013000 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     DeviceSlot_D0Entry @ 0x1C001382C (DeviceSlot_D0Entry.c)
 *     Device_QueryCapabilities @ 0x1C0014014 (Device_QueryCapabilities.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002DFB0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_AcquireWdfPowerReferenceForDebugger @ 0x1C00300F0 (Controller_AcquireWdfPowerReferenceForDebugger.c)
 *     Controller_EvtDeviceFileClose @ 0x1C0030DB0 (Controller_EvtDeviceFileClose.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0033EB0 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Register_PrepareHardware @ 0x1C006EC08 (Register_PrepareHardware.c)
 *     Interrupter_CreateInterrupter @ 0x1C0070144 (Interrupter_CreateInterrupter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qd @ 0x1C00135F0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00135F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00135F0: mov     [rsp+arg_0], rbx
 * 00000001C00135F5: mov     [rsp+arg_8], rbp
 * 00000001C00135FA: mov     [rsp+arg_10], rsi
 * 00000001C00135FF: push    rdi
 * 00000001C0013600: push    r14
 * 00000001C0013602: push    r15
 * 00000001C0013604: sub     rsp, 50h
 * 00000001C0013608: mov     r14d, r8d
 * 00000001C001360B: mov     r15, rcx
 * 00000001C001360E: mov     edi, r8d
 * 00000001C0013611: shr     rdi, 10h
 * 00000001C0013615: movzx   esi, dl
 * 00000001C0013618: lea     ebx, [r14-1]
 * 00000001C001361C: movzx   ebp, r9w
 * 00000001C0013620: mov     r10d, ebx
 * 00000001C0013623: and     ebx, 1Fh
 * 00000001C0013626: shr     r10, 5
 * 00000001C001362A: lea     rax, [rdi+rdi*4]
 * 00000001C001362E: and     r10d, 7FFh
 * 00000001C0013635: mov     edx, ebx
 * 00000001C0013637: mov     ebx, 4
 * 00000001C001363C: lea     r11, [r10+rax*4]
 * 00000001C0013640: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0013647: mov     eax, [r10+r11*4+2Ch]
 * 00000001C001364C: bt      eax, edx
 * 00000001C001364F: jb      loc_1C002A97E
 * 00000001C0013655: and     [rsp+68h+var_20], 0
 * 00000001C001365B: lea     rax, [rsp+68h+arg_30]
 * 00000001C0013663: mov     r9, [rsp+68h+arg_20]
 * 00000001C001366B: mov     r8d, r14d
 * 00000001C001366E: mov     [rsp+68h+var_28], rbx
 * 00000001C0013673: mov     edx, esi
 * 00000001C0013675: mov     [rsp+68h+var_30], rax
 * 00000001C001367A: mov     rcx, r15
 * 00000001C001367D: lea     rax, [rsp+68h+arg_28]
 * 00000001C0013685: mov     [rsp+68h+var_38], 8
 * 00000001C001368E: mov     [rsp+68h+var_40], rax
 * 00000001C0013693: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0013698: call    cs:__imp_WppAutoLogTrace
 * 00000001C001369F: nop     dword ptr [rax+rax+00h]
 * 00000001C00136A4: lea     r11, [rsp+68h+var_18]
 * 00000001C00136A9: mov     rbx, [r11+20h]
 * 00000001C00136AD: mov     rbp, [r11+28h]
 * 00000001C00136B1: mov     rsi, [r11+30h]
 * 00000001C00136B5: mov     rsp, r11
 * 00000001C00136B8: pop     r15
 * 00000001C00136BA: pop     r14
 * 00000001C00136BC: pop     rdi
 * 00000001C00136BD: retn
 * 00000001C002A97E: lea     rcx, [rdi+rdi*4]
 * 00000001C002A982: add     rcx, rcx
 * 00000001C002A985: cmp     [r10+rcx*8+29h], sil
 * 00000001C002A98A: jb      loc_1C0013655
 * 00000001C002A990: and     [rsp+68h+var_28], 0
 * 00000001C002A996: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002A99E: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C002A9A5: mov     r9d, ebp
 * 00000001C002A9A8: mov     r8, [rsp+68h+arg_20]
 * 00000001C002A9B0: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002A9B5: mov     [rsp+68h+var_30], rbx
 * 00000001C002A9BA: mov     [rsp+68h+var_38], rdx
 * 00000001C002A9BF: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002A9C7: mov     [rsp+68h+var_40], 8
 * 00000001C002A9D0: mov     [rsp+68h+var_48], rdx
 * 00000001C002A9D5: mov     edx, 2Bh ; '+'
 * 00000001C002A9DA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002A9E0: nop
 * 00000001C002A9E1: jmp     loc_1C0013655
 */
