/*
 * XREFs of WPP_RECORDER_SF_qdqddd @ 0x1C00301B0
 * Callers:
 *     Command_InternalSendCommand @ 0x1C0006D80 (Command_InternalSendCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qdqddd @ 0x1C00301B0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00301B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00301B0: mov     r11, rsp
 * 00000001C00301B3: mov     [r11+8], rbx
 * 00000001C00301B7: mov     [r11+10h], rsi
 * 00000001C00301BB: mov     [r11+18h], rdi
 * 00000001C00301BF: mov     [r11+20h], r14
 * 00000001C00301C3: push    rbp
 * 00000001C00301C4: lea     rbp, [r11-27h]
 * 00000001C00301C8: sub     rsp, 90h
 * 00000001C00301CF: mov     edi, 4
 * 00000001C00301D4: mov     rbx, rcx
 * 00000001C00301D7: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00301DE: lea     esi, [rdi+4]
 * 00000001C00301E1: mov     eax, [rcx+2Ch]
 * 00000001C00301E4: lea     r14d, [rdi+33h]
 * 00000001C00301E8: test    al, 40h
 * 00000001C00301EA: jz      short loc_1C003025E
 * 00000001C00301EC: cmp     byte ptr [rcx+29h], 5
 * 00000001C00301F0: jb      short loc_1C003025E
 * 00000001C00301F2: and     qword ptr [r11-18h], 0
 * 00000001C00301F7: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C00301FB: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0030202: lea     r8, WPP_72168dd6ef593f221f3405957586a4e9_Traceguids
 * 00000001C0030209: mov     rcx, [rcx+18h]
 * 00000001C003020D: mov     [r11-20h], rdi
 * 00000001C0030211: mov     [r11-28h], rdx
 * 00000001C0030215: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C0030219: mov     [r11-30h], rdi
 * 00000001C003021D: mov     [r11-38h], rdx
 * 00000001C0030221: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C0030225: mov     [r11-40h], rdi
 * 00000001C0030229: mov     [r11-48h], rdx
 * 00000001C003022D: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C0030231: mov     [r11-50h], rsi
 * 00000001C0030235: mov     [r11-58h], rdx
 * 00000001C0030239: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C003023D: mov     [r11-60h], rdi
 * 00000001C0030241: mov     [r11-68h], rdx
 * 00000001C0030245: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C0030249: mov     [r11-70h], rsi
 * 00000001C003024D: mov     [r11-78h], rdx
 * 00000001C0030251: lea     edx, [rdi+27h]
 * 00000001C0030254: movzx   r9d, r14w
 * 00000001C0030258: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003025E: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0030267: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C003026B: mov     [rsp+90h+var_10], rdi
 * 00000001C0030273: lea     r9, WPP_72168dd6ef593f221f3405957586a4e9_Traceguids
 * 00000001C003027A: mov     [rsp+90h+var_18], rax
 * 00000001C003027F: mov     edx, 5
 * 00000001C0030284: mov     [rsp+90h+var_20], rdi
 * 00000001C0030289: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C003028D: mov     [rsp+90h+var_28], rax
 * 00000001C0030292: mov     rcx, rbx
 * 00000001C0030295: mov     [rsp+90h+var_30], rdi
 * 00000001C003029A: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C003029E: mov     [rsp+90h+var_38], rax
 * 00000001C00302A3: lea     r8d, [rdx+2]
 * 00000001C00302A7: mov     [rsp+90h+var_40], rsi
 * 00000001C00302AC: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C00302B0: mov     [rsp+90h+var_48], rax
 * 00000001C00302B5: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C00302B9: mov     [rsp+90h+var_50], rdi
 * 00000001C00302BE: mov     [rsp+90h+var_58], rax
 * 00000001C00302C3: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C00302C7: mov     [rsp+90h+var_60], rsi
 * 00000001C00302CC: mov     [rsp+90h+var_68], rax
 * 00000001C00302D1: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C00302D7: call    cs:__imp_WppAutoLogTrace
 * 00000001C00302DE: nop     dword ptr [rax+rax+00h]
 * 00000001C00302E3: lea     r11, [rsp+90h+var_s0]
 * 00000001C00302EB: mov     rbx, [r11+10h]
 * 00000001C00302EF: mov     rsi, [r11+18h]
 * 00000001C00302F3: mov     rdi, [r11+20h]
 * 00000001C00302F7: mov     r14, [r11+28h]
 * 00000001C00302FB: mov     rsp, r11
 * 00000001C00302FE: pop     rbp
 * 00000001C00302FF: retn
 */
