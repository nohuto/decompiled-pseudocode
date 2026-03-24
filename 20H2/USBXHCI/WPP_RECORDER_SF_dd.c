/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C003CD0C
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C006EE90 (Interrupter_PrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C003CD0C
 * Reason: Hex-Rays returned no pseudocode for 0x1C003CD0C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003CD0C: mov     r11, rsp
 * 00000001C003CD0F: mov     [r11+8], rbx
 * 00000001C003CD13: mov     [r11+10h], rsi
 * 00000001C003CD17: push    rdi
 * 00000001C003CD18: sub     rsp, 50h
 * 00000001C003CD1C: mov     rdi, rcx
 * 00000001C003CD1F: movzx   ebx, r9w
 * 00000001C003CD23: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003CD2A: mov     esi, 4
 * 00000001C003CD2F: test    dword ptr [rcx+2Ch], 100h
 * 00000001C003CD36: jz      short loc_1C003CD79
 * 00000001C003CD38: cmp     byte ptr [rcx+29h], 2
 * 00000001C003CD3C: jb      short loc_1C003CD79
 * 00000001C003CD3E: and     qword ptr [r11-18h], 0
 * 00000001C003CD43: lea     rdx, [r11+38h]
 * 00000001C003CD47: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C003CD4E: lea     r8, WPP_260d7188460d377ee27ff5eb6158db37_Traceguids
 * 00000001C003CD55: mov     rcx, [rcx+18h]
 * 00000001C003CD59: mov     r9d, ebx
 * 00000001C003CD5C: mov     [r11-20h], rsi
 * 00000001C003CD60: mov     [r11-28h], rdx
 * 00000001C003CD64: lea     rdx, [r11+30h]
 * 00000001C003CD68: mov     [r11-30h], rsi
 * 00000001C003CD6C: mov     [r11-38h], rdx
 * 00000001C003CD70: lea     edx, [rsi+27h]
 * 00000001C003CD73: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003CD79: and     [rsp+58h+var_10], 0
 * 00000001C003CD7F: lea     rax, [rsp+58h+arg_30]
 * 00000001C003CD87: mov     [rsp+58h+var_18], rsi
 * 00000001C003CD8C: lea     r9, WPP_260d7188460d377ee27ff5eb6158db37_Traceguids
 * 00000001C003CD93: mov     [rsp+58h+var_20], rax
 * 00000001C003CD98: mov     edx, 2
 * 00000001C003CD9D: lea     rax, [rsp+58h+arg_28]
 * 00000001C003CDA5: mov     [rsp+58h+var_28], rsi
 * 00000001C003CDAA: mov     [rsp+58h+var_30], rax
 * 00000001C003CDAF: mov     rcx, rdi
 * 00000001C003CDB2: mov     [rsp+58h+var_38], bx
 * 00000001C003CDB7: lea     r8d, [rdx+7]
 * 00000001C003CDBB: call    cs:__imp_WppAutoLogTrace
 * 00000001C003CDC2: nop     dword ptr [rax+rax+00h]
 * 00000001C003CDC7: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003CDCC: mov     rsi, [rsp+58h+arg_8]
 * 00000001C003CDD1: add     rsp, 50h
 * 00000001C003CDD5: pop     rdi
 * 00000001C003CDD6: retn
 */
