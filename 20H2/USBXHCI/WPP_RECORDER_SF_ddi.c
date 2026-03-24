/*
 * XREFs of WPP_RECORDER_SF_DDi @ 0x1C00406CC
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001F10 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_Stage_Find @ 0x1C0002730 (Isoch_Stage_Find.c)
 *     Isoch_RetrieveNextStage @ 0x1C0002D30 (Isoch_RetrieveNextStage.c)
 *     Isoch_TransferData_Initialize @ 0x1C00035F0 (Isoch_TransferData_Initialize.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C000508C (Control_Transfer_ValidateBuffer.c)
 *     TR_ValidateSecureTransferType @ 0x1C000D364 (TR_ValidateSecureTransferType.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x1C0040B24 (Control_ValidateED0TrbPointerOnMismatch.c)
 *     Control_WdfEvtIoCanceledOnQueue @ 0x1C0040DB0 (Control_WdfEvtIoCanceledOnQueue.c)
 *     Control_WdfEvtRequestCancel @ 0x1C0040F60 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C00410F0 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C0043B50 (Isoch_WdfEvtRequestCancel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDi @ 0x1C00406CC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00406CC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00406CC: mov     r11, rsp
 * 00000001C00406CF: mov     [r11+8], rbx
 * 00000001C00406D3: mov     [r11+10h], rbp
 * 00000001C00406D7: mov     [r11+18h], rsi
 * 00000001C00406DB: push    rdi
 * 00000001C00406DC: sub     rsp, 60h
 * 00000001C00406E0: mov     rsi, rcx
 * 00000001C00406E3: movzx   edi, r9w
 * 00000001C00406E7: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00406EE: mov     ebp, 4
 * 00000001C00406F3: movzx   ebx, dl
 * 00000001C00406F6: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00406FD: jz      short loc_1C0040750
 * 00000001C00406FF: cmp     [rcx+29h], bl
 * 00000001C0040702: jb      short loc_1C0040750
 * 00000001C0040704: and     qword ptr [r11-18h], 0
 * 00000001C0040709: lea     rdx, [r11+40h]
 * 00000001C004070D: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0040714: mov     r9d, edi
 * 00000001C0040717: mov     r8, [rsp+68h+arg_20]
 * 00000001C004071F: mov     rcx, [rcx+18h]
 * 00000001C0040723: mov     qword ptr [r11-20h], 8
 * 00000001C004072B: mov     [r11-28h], rdx
 * 00000001C004072F: lea     rdx, [r11+38h]
 * 00000001C0040733: mov     [r11-30h], rbp
 * 00000001C0040737: mov     [r11-38h], rdx
 * 00000001C004073B: lea     rdx, [r11+30h]
 * 00000001C004073F: mov     [r11-40h], rbp
 * 00000001C0040743: mov     [r11-48h], rdx
 * 00000001C0040747: lea     edx, [rbp+27h]
 * 00000001C004074A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0040750: and     [rsp+68h+var_10], 0
 * 00000001C0040756: lea     rax, [rsp+68h+arg_38]
 * 00000001C004075E: mov     r9, [rsp+68h+arg_20]
 * 00000001C0040766: mov     r8d, 0Eh
 * 00000001C004076C: mov     [rsp+68h+var_18], 8
 * 00000001C0040775: mov     edx, ebx
 * 00000001C0040777: mov     [rsp+68h+var_20], rax
 * 00000001C004077C: mov     rcx, rsi
 * 00000001C004077F: mov     [rsp+68h+var_28], rbp
 * 00000001C0040784: lea     rax, [rsp+68h+arg_30]
 * 00000001C004078C: mov     [rsp+68h+var_30], rax
 * 00000001C0040791: lea     rax, [rsp+68h+arg_28]
 * 00000001C0040799: mov     [rsp+68h+var_38], rbp
 * 00000001C004079E: mov     [rsp+68h+var_40], rax
 * 00000001C00407A3: mov     [rsp+68h+var_48], di
 * 00000001C00407A8: call    cs:__imp_WppAutoLogTrace
 * 00000001C00407AF: nop     dword ptr [rax+rax+00h]
 * 00000001C00407B4: lea     r11, [rsp+68h+var_8]
 * 00000001C00407B9: mov     rbx, [r11+10h]
 * 00000001C00407BD: mov     rbp, [r11+18h]
 * 00000001C00407C1: mov     rsi, [r11+20h]
 * 00000001C00407C5: mov     rsp, r11
 * 00000001C00407C8: pop     rdi
 * 00000001C00407C9: retn
 */
