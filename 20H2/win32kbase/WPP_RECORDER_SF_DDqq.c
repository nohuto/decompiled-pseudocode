/*
 * XREFs of WPP_RECORDER_SF_DDqq @ 0x1C00776D8
 * Callers:
 *     EtwTraceUIPIHandleValidationError @ 0x1C0077624 (EtwTraceUIPIHandleValidationError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqq @ 0x1C00776D8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00776D8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00776D8: mov     [rsp+arg_0], rbx
 * 00000001C00776DD: mov     [rsp+arg_8], rbp
 * 00000001C00776E2: mov     [rsp+arg_10], rsi
 * 00000001C00776E7: push    rdi
 * 00000001C00776E8: sub     rsp, 70h
 * 00000001C00776EC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00776F3: mov     edi, 4
 * 00000001C00776F8: mov     rbx, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C00776FF: test    dword ptr [rcx+2Ch], 20000h
 * 00000001C0077706: lea     ebp, [rdi+9]
 * 00000001C0077709: lea     esi, [rdi+4]
 * 00000001C007770C: jnz     loc_1C0100C14
 * 00000001C0077712: and     [rsp+78h+var_10], 0
 * 00000001C0077718: lea     rax, [rsp+78h+arg_40]
 * 00000001C0077720: mov     [rsp+78h+var_18], rsi
 * 00000001C0077725: lea     r9, WPP_54d33ffc9e3d3dbf4995411973a3d843_Traceguids
 * 00000001C007772C: mov     [rsp+78h+var_20], rax
 * 00000001C0077731: mov     r8d, 12h
 * 00000001C0077737: mov     [rsp+78h+var_28], rsi
 * 00000001C007773C: lea     rax, [rsp+78h+arg_38]
 * 00000001C0077744: mov     [rsp+78h+var_30], rax
 * 00000001C0077749: mov     edx, edi
 * 00000001C007774B: mov     [rsp+78h+var_38], rdi
 * 00000001C0077750: lea     rax, [rsp+78h+arg_30]
 * 00000001C0077758: mov     [rsp+78h+var_40], rax
 * 00000001C007775D: mov     rcx, rbx
 * 00000001C0077760: lea     rax, [rsp+78h+arg_28]
 * 00000001C0077768: mov     [rsp+78h+var_48], rdi
 * 00000001C007776D: mov     [rsp+78h+var_50], rax
 * 00000001C0077772: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C0077777: call    cs:__imp_WppAutoLogTrace
 * 00000001C007777E: nop     dword ptr [rax+rax+00h]
 * 00000001C0077783: lea     r11, [rsp+78h+var_8]
 * 00000001C0077788: mov     rbx, [r11+10h]
 * 00000001C007778C: mov     rbp, [r11+18h]
 * 00000001C0077790: mov     rsi, [r11+20h]
 * 00000001C0077794: mov     rsp, r11
 * 00000001C0077797: pop     rdi
 * 00000001C0077798: retn
 * 00000001C0100C14: cmp     [rcx+29h], dil
 * 00000001C0100C18: jb      loc_1C0077712
 * 00000001C0100C1E: and     [rsp+78h+var_18], 0
 * 00000001C0100C24: lea     rdx, [rsp+78h+arg_40]
 * 00000001C0100C2C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0100C33: lea     r8, WPP_54d33ffc9e3d3dbf4995411973a3d843_Traceguids
 * 00000001C0100C3A: mov     rcx, [rcx+18h]
 * 00000001C0100C3E: mov     [rsp+78h+var_20], rsi
 * 00000001C0100C43: mov     [rsp+78h+var_28], rdx
 * 00000001C0100C48: lea     rdx, [rsp+78h+arg_38]
 * 00000001C0100C50: mov     [rsp+78h+var_30], rsi
 * 00000001C0100C55: mov     [rsp+78h+var_38], rdx
 * 00000001C0100C5A: lea     rdx, [rsp+78h+arg_30]
 * 00000001C0100C62: mov     [rsp+78h+var_40], rdi
 * 00000001C0100C67: mov     [rsp+78h+var_48], rdx
 * 00000001C0100C6C: lea     rdx, [rsp+78h+arg_28]
 * 00000001C0100C74: mov     [rsp+78h+var_50], rdi
 * 00000001C0100C79: mov     [rsp+78h+var_58], rdx
 * 00000001C0100C7E: mov     edx, 2Bh ; '+'
 * 00000001C0100C83: movzx   r9d, bp
 * 00000001C0100C87: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0100C8D: nop
 * 00000001C0100C8E: jmp     loc_1C0077712
 */
