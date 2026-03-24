/*
 * XREFs of WPP_RECORDER_SF_DDi @ 0x1C003F1EC
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001F10 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_Stage_Find @ 0x1C0002730 (Isoch_Stage_Find.c)
 *     Isoch_RetrieveNextStage @ 0x1C0002D30 (Isoch_RetrieveNextStage.c)
 *     Isoch_TransferData_Initialize @ 0x1C00035D0 (Isoch_TransferData_Initialize.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C000508C (Control_Transfer_ValidateBuffer.c)
 *     TR_ValidateSecureTransferType @ 0x1C000CA94 (TR_ValidateSecureTransferType.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x1C003F644 (Control_ValidateED0TrbPointerOnMismatch.c)
 *     Control_WdfEvtIoCanceledOnQueue @ 0x1C003F8D0 (Control_WdfEvtIoCanceledOnQueue.c)
 *     Control_WdfEvtRequestCancel @ 0x1C003FA80 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C003FC10 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C0042660 (Isoch_WdfEvtRequestCancel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDi @ 0x1C003F1EC
 * Reason: Hex-Rays returned no pseudocode for 0x1C003F1EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003F1EC: mov     r11, rsp
 * 00000001C003F1EF: mov     [r11+8], rbx
 * 00000001C003F1F3: mov     [r11+10h], rbp
 * 00000001C003F1F7: mov     [r11+18h], rsi
 * 00000001C003F1FB: push    rdi
 * 00000001C003F1FC: sub     rsp, 60h
 * 00000001C003F200: mov     rsi, rcx
 * 00000001C003F203: movzx   edi, r9w
 * 00000001C003F207: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003F20E: mov     ebp, 4
 * 00000001C003F213: movzx   ebx, dl
 * 00000001C003F216: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C003F21D: jz      short loc_1C003F270
 * 00000001C003F21F: cmp     [rcx+29h], bl
 * 00000001C003F222: jb      short loc_1C003F270
 * 00000001C003F224: and     qword ptr [r11-18h], 0
 * 00000001C003F229: lea     rdx, [r11+40h]
 * 00000001C003F22D: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003F234: mov     r9d, edi
 * 00000001C003F237: mov     r8, [rsp+68h+arg_20]
 * 00000001C003F23F: mov     rcx, [rcx+18h]
 * 00000001C003F243: mov     qword ptr [r11-20h], 8
 * 00000001C003F24B: mov     [r11-28h], rdx
 * 00000001C003F24F: lea     rdx, [r11+38h]
 * 00000001C003F253: mov     [r11-30h], rbp
 * 00000001C003F257: mov     [r11-38h], rdx
 * 00000001C003F25B: lea     rdx, [r11+30h]
 * 00000001C003F25F: mov     [r11-40h], rbp
 * 00000001C003F263: mov     [r11-48h], rdx
 * 00000001C003F267: lea     edx, [rbp+27h]
 * 00000001C003F26A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003F270: and     [rsp+68h+var_10], 0
 * 00000001C003F276: lea     rax, [rsp+68h+arg_38]
 * 00000001C003F27E: mov     r9, [rsp+68h+arg_20]
 * 00000001C003F286: mov     r8d, 0Eh
 * 00000001C003F28C: mov     [rsp+68h+var_18], 8
 * 00000001C003F295: mov     edx, ebx
 * 00000001C003F297: mov     [rsp+68h+var_20], rax
 * 00000001C003F29C: mov     rcx, rsi
 * 00000001C003F29F: mov     [rsp+68h+var_28], rbp
 * 00000001C003F2A4: lea     rax, [rsp+68h+arg_30]
 * 00000001C003F2AC: mov     [rsp+68h+var_30], rax
 * 00000001C003F2B1: lea     rax, [rsp+68h+arg_28]
 * 00000001C003F2B9: mov     [rsp+68h+var_38], rbp
 * 00000001C003F2BE: mov     [rsp+68h+var_40], rax
 * 00000001C003F2C3: mov     [rsp+68h+var_48], di
 * 00000001C003F2C8: call    cs:__imp_WppAutoLogTrace
 * 00000001C003F2CF: nop     dword ptr [rax+rax+00h]
 * 00000001C003F2D4: lea     r11, [rsp+68h+var_8]
 * 00000001C003F2D9: mov     rbx, [r11+10h]
 * 00000001C003F2DD: mov     rbp, [r11+18h]
 * 00000001C003F2E1: mov     rsi, [r11+20h]
 * 00000001C003F2E5: mov     rsp, r11
 * 00000001C003F2E8: pop     rdi
 * 00000001C003F2E9: retn
 */
