/*
 * XREFs of WPP_RECORDER_SF_qii @ 0x1C0030308
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C0006928 (Command_HandleCommandCompletionEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qii @ 0x1C0030308
 * Reason: Hex-Rays returned no pseudocode for 0x1C0030308
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0030308: mov     r11, rsp
 * 00000001C003030B: mov     [r11+8], rbx
 * 00000001C003030F: mov     [r11+10h], rsi
 * 00000001C0030313: push    rdi
 * 00000001C0030314: sub     rsp, 60h
 * 00000001C0030318: mov     rbx, rcx
 * 00000001C003031B: mov     esi, 2Ch ; ','
 * 00000001C0030320: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0030327: lea     edi, [rsi-24h]
 * 00000001C003032A: mov     eax, [rcx+2Ch]
 * 00000001C003032D: test    al, 40h
 * 00000001C003032F: jz      short loc_1C003037F
 * 00000001C0030331: cmp     byte ptr [rcx+29h], 5
 * 00000001C0030335: jb      short loc_1C003037F
 * 00000001C0030337: and     qword ptr [r11-18h], 0
 * 00000001C003033C: lea     rdx, [r11+40h]
 * 00000001C0030340: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0030347: lea     r8, WPP_72168dd6ef593f221f3405957586a4e9_Traceguids
 * 00000001C003034E: mov     rcx, [rcx+18h]
 * 00000001C0030352: mov     [r11-20h], rdi
 * 00000001C0030356: mov     [r11-28h], rdx
 * 00000001C003035A: lea     rdx, [r11+38h]
 * 00000001C003035E: mov     [r11-30h], rdi
 * 00000001C0030362: mov     [r11-38h], rdx
 * 00000001C0030366: lea     rdx, [r11+30h]
 * 00000001C003036A: mov     [r11-40h], rdi
 * 00000001C003036E: mov     [r11-48h], rdx
 * 00000001C0030372: lea     edx, [rsi-1]
 * 00000001C0030375: movzx   r9d, si
 * 00000001C0030379: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003037F: and     [rsp+68h+var_10], 0
 * 00000001C0030385: lea     rax, [rsp+68h+arg_38]
 * 00000001C003038D: mov     [rsp+68h+var_18], rdi
 * 00000001C0030392: lea     r9, WPP_72168dd6ef593f221f3405957586a4e9_Traceguids
 * 00000001C0030399: mov     [rsp+68h+var_20], rax
 * 00000001C003039E: mov     edx, 5
 * 00000001C00303A3: mov     [rsp+68h+var_28], rdi
 * 00000001C00303A8: lea     rax, [rsp+68h+arg_30]
 * 00000001C00303B0: mov     [rsp+68h+var_30], rax
 * 00000001C00303B5: mov     rcx, rbx
 * 00000001C00303B8: lea     rax, [rsp+68h+arg_28]
 * 00000001C00303C0: mov     [rsp+68h+var_38], rdi
 * 00000001C00303C5: mov     [rsp+68h+var_40], rax
 * 00000001C00303CA: lea     r8d, [rdx+2]
 * 00000001C00303CE: mov     [rsp+68h+var_48], si
 * 00000001C00303D3: call    cs:__imp_WppAutoLogTrace
 * 00000001C00303DA: nop     dword ptr [rax+rax+00h]
 * 00000001C00303DF: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00303E4: mov     rsi, [rsp+68h+arg_8]
 * 00000001C00303E9: add     rsp, 60h
 * 00000001C00303ED: pop     rdi
 * 00000001C00303EE: retn
 */
