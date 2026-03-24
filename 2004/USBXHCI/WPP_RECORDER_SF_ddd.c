/*
 * XREFs of WPP_RECORDER_SF_dDd @ 0x1C003DF20
 * Callers:
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0011170 (RootHub_DetectAndAcknowledgePortResume.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dDd @ 0x1C003DF20
 * Reason: Hex-Rays returned no pseudocode for 0x1C003DF20
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003DF20: mov     r11, rsp
 * 00000001C003DF23: mov     [r11+8], rbx
 * 00000001C003DF27: mov     [r11+10h], rsi
 * 00000001C003DF2B: push    rdi
 * 00000001C003DF2C: sub     rsp, 60h
 * 00000001C003DF30: mov     rbx, rcx
 * 00000001C003DF33: mov     esi, 0CBh
 * 00000001C003DF38: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003DF3F: mov     edi, 4
 * 00000001C003DF44: test    dword ptr [rcx+2Ch], 400h
 * 00000001C003DF4B: jz      short loc_1C003DF9B
 * 00000001C003DF4D: cmp     byte ptr [rcx+29h], 3
 * 00000001C003DF51: jb      short loc_1C003DF9B
 * 00000001C003DF53: and     qword ptr [r11-18h], 0
 * 00000001C003DF58: lea     rdx, [r11+40h]
 * 00000001C003DF5C: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003DF63: lea     r8, WPP_f97631885c123b34877e2ec176e34bf2_Traceguids
 * 00000001C003DF6A: mov     rcx, [rcx+18h]
 * 00000001C003DF6E: mov     [r11-20h], rdi
 * 00000001C003DF72: mov     [r11-28h], rdx
 * 00000001C003DF76: lea     rdx, [r11+38h]
 * 00000001C003DF7A: mov     [r11-30h], rdi
 * 00000001C003DF7E: mov     [r11-38h], rdx
 * 00000001C003DF82: lea     rdx, [r11+30h]
 * 00000001C003DF86: mov     [r11-40h], rdi
 * 00000001C003DF8A: mov     [r11-48h], rdx
 * 00000001C003DF8E: lea     edx, [rdi+27h]
 * 00000001C003DF91: movzx   r9d, si
 * 00000001C003DF95: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003DF9B: and     [rsp+68h+var_10], 0
 * 00000001C003DFA1: lea     rax, [rsp+68h+arg_38]
 * 00000001C003DFA9: mov     [rsp+68h+var_18], rdi
 * 00000001C003DFAE: lea     r9, WPP_f97631885c123b34877e2ec176e34bf2_Traceguids
 * 00000001C003DFB5: mov     [rsp+68h+var_20], rax
 * 00000001C003DFBA: mov     edx, 3
 * 00000001C003DFBF: mov     [rsp+68h+var_28], rdi
 * 00000001C003DFC4: lea     rax, [rsp+68h+arg_30]
 * 00000001C003DFCC: mov     [rsp+68h+var_30], rax
 * 00000001C003DFD1: mov     rcx, rbx
 * 00000001C003DFD4: lea     rax, [rsp+68h+arg_28]
 * 00000001C003DFDC: mov     [rsp+68h+var_38], rdi
 * 00000001C003DFE1: mov     [rsp+68h+var_40], rax
 * 00000001C003DFE6: lea     r8d, [rdx+8]
 * 00000001C003DFEA: mov     [rsp+68h+var_48], si
 * 00000001C003DFEF: call    cs:__imp_WppAutoLogTrace
 * 00000001C003DFF6: nop     dword ptr [rax+rax+00h]
 * 00000001C003DFFB: mov     rbx, [rsp+68h+arg_0]
 * 00000001C003E000: mov     rsi, [rsp+68h+arg_8]
 * 00000001C003E005: add     rsp, 60h
 * 00000001C003E009: pop     rdi
 * 00000001C003E00A: retn
 */
