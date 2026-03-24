/*
 * XREFs of WPP_RECORDER_SF_qddd @ 0x1C0030098
 * Callers:
 *     Command_InternalSendCommand @ 0x1C0006D80 (Command_InternalSendCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qddd @ 0x1C0030098
 * Reason: Hex-Rays returned no pseudocode for 0x1C0030098
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0030098: mov     r11, rsp
 * 00000001C003009B: mov     [r11+8], rbx
 * 00000001C003009F: mov     [r11+10h], rbp
 * 00000001C00300A3: push    rdi
 * 00000001C00300A4: sub     rsp, 70h
 * 00000001C00300A8: mov     rbx, rcx
 * 00000001C00300AB: mov     ebp, 36h ; '6'
 * 00000001C00300B0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00300B7: lea     edi, [rbp-32h]
 * 00000001C00300BA: mov     eax, [rcx+2Ch]
 * 00000001C00300BD: test    al, 40h
 * 00000001C00300BF: jz      short loc_1C003011F
 * 00000001C00300C1: cmp     byte ptr [rcx+29h], 5
 * 00000001C00300C5: jb      short loc_1C003011F
 * 00000001C00300C7: and     qword ptr [r11-18h], 0
 * 00000001C00300CC: lea     rdx, [r11+48h]
 * 00000001C00300D0: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C00300D7: lea     r8, WPP_72168dd6ef593f221f3405957586a4e9_Traceguids
 * 00000001C00300DE: mov     rcx, [rcx+18h]
 * 00000001C00300E2: mov     [r11-20h], rdi
 * 00000001C00300E6: mov     [r11-28h], rdx
 * 00000001C00300EA: lea     rdx, [r11+40h]
 * 00000001C00300EE: mov     [r11-30h], rdi
 * 00000001C00300F2: mov     [r11-38h], rdx
 * 00000001C00300F6: lea     rdx, [r11+38h]
 * 00000001C00300FA: mov     [r11-40h], rdi
 * 00000001C00300FE: mov     [r11-48h], rdx
 * 00000001C0030102: lea     rdx, [r11+30h]
 * 00000001C0030106: mov     qword ptr [r11-50h], 8
 * 00000001C003010E: mov     [r11-58h], rdx
 * 00000001C0030112: lea     edx, [rbp-0Bh]
 * 00000001C0030115: movzx   r9d, bp
 * 00000001C0030119: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003011F: and     [rsp+78h+var_10], 0
 * 00000001C0030125: lea     rax, [rsp+78h+arg_40]
 * 00000001C003012D: mov     [rsp+78h+var_18], rdi
 * 00000001C0030132: lea     r9, WPP_72168dd6ef593f221f3405957586a4e9_Traceguids
 * 00000001C0030139: mov     [rsp+78h+var_20], rax
 * 00000001C003013E: mov     edx, 5
 * 00000001C0030143: mov     [rsp+78h+var_28], rdi
 * 00000001C0030148: lea     rax, [rsp+78h+arg_38]
 * 00000001C0030150: mov     [rsp+78h+var_30], rax
 * 00000001C0030155: mov     rcx, rbx
 * 00000001C0030158: mov     [rsp+78h+var_38], rdi
 * 00000001C003015D: lea     rax, [rsp+78h+arg_30]
 * 00000001C0030165: mov     [rsp+78h+var_40], rax
 * 00000001C003016A: lea     r8d, [rdx+2]
 * 00000001C003016E: lea     rax, [rsp+78h+arg_28]
 * 00000001C0030176: mov     [rsp+78h+var_48], 8
 * 00000001C003017F: mov     [rsp+78h+var_50], rax
 * 00000001C0030184: mov     [rsp+78h+var_58], bp
 * 00000001C0030189: call    cs:__imp_WppAutoLogTrace
 * 00000001C0030190: nop     dword ptr [rax+rax+00h]
 * 00000001C0030195: lea     r11, [rsp+78h+var_8]
 * 00000001C003019A: mov     rbx, [r11+10h]
 * 00000001C003019E: mov     rbp, [r11+18h]
 * 00000001C00301A2: mov     rsp, r11
 * 00000001C00301A5: pop     rdi
 * 00000001C00301A6: retn
 */
