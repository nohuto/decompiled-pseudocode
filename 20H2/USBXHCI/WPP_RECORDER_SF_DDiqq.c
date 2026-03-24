/*
 * XREFs of WPP_RECORDER_SF_DDiqq @ 0x1C004153C
 * Callers:
 *     Control_ProcessTransferEventWithED1 @ 0x1C0004BB0 (Control_ProcessTransferEventWithED1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDiqq @ 0x1C004153C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004153C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004153C: mov     r11, rsp
 * 00000001C004153F: mov     [r11+8], rbx
 * 00000001C0041543: mov     [r11+10h], rbp
 * 00000001C0041547: mov     [r11+18h], rsi
 * 00000001C004154B: push    rdi
 * 00000001C004154C: sub     rsp, 80h
 * 00000001C0041553: mov     rdi, rcx
 * 00000001C0041556: movzx   ebx, r9w
 * 00000001C004155A: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0041561: mov     esi, 8
 * 00000001C0041566: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C004156D: lea     ebp, [rsi-4]
 * 00000001C0041570: jz      short loc_1C00415D7
 * 00000001C0041572: cmp     byte ptr [rcx+29h], 2
 * 00000001C0041576: jb      short loc_1C00415D7
 * 00000001C0041578: and     qword ptr [r11-18h], 0
 * 00000001C004157D: lea     rdx, [r11+50h]
 * 00000001C0041581: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0041588: lea     r8, WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids
 * 00000001C004158F: mov     rcx, [rcx+18h]
 * 00000001C0041593: mov     r9d, ebx
 * 00000001C0041596: mov     [r11-20h], rsi
 * 00000001C004159A: mov     [r11-28h], rdx
 * 00000001C004159E: lea     rdx, [r11+48h]
 * 00000001C00415A2: mov     [r11-30h], rsi
 * 00000001C00415A6: mov     [r11-38h], rdx
 * 00000001C00415AA: lea     rdx, [r11+40h]
 * 00000001C00415AE: mov     [r11-40h], rsi
 * 00000001C00415B2: mov     [r11-48h], rdx
 * 00000001C00415B6: lea     rdx, [r11+38h]
 * 00000001C00415BA: mov     [r11-50h], rbp
 * 00000001C00415BE: mov     [r11-58h], rdx
 * 00000001C00415C2: lea     rdx, [r11+30h]
 * 00000001C00415C6: mov     [r11-60h], rbp
 * 00000001C00415CA: mov     [r11-68h], rdx
 * 00000001C00415CE: lea     edx, [rsi+23h]
 * 00000001C00415D1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00415D7: and     [rsp+88h+var_10], 0
 * 00000001C00415DD: lea     rax, [rsp+88h+arg_48]
 * 00000001C00415E5: mov     [rsp+88h+var_18], rsi
 * 00000001C00415EA: lea     r9, WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids
 * 00000001C00415F1: mov     [rsp+88h+var_20], rax
 * 00000001C00415F6: mov     edx, 2
 * 00000001C00415FB: mov     [rsp+88h+var_28], rsi
 * 00000001C0041600: lea     rax, [rsp+88h+arg_40]
 * 00000001C0041608: mov     [rsp+88h+var_30], rax
 * 00000001C004160D: mov     rcx, rdi
 * 00000001C0041610: mov     [rsp+88h+var_38], rsi
 * 00000001C0041615: lea     rax, [rsp+88h+arg_38]
 * 00000001C004161D: mov     [rsp+88h+var_40], rax
 * 00000001C0041622: lea     r8d, [rdx+0Ch]
 * 00000001C0041626: mov     [rsp+88h+var_48], rbp
 * 00000001C004162B: lea     rax, [rsp+88h+arg_30]
 * 00000001C0041633: mov     [rsp+88h+var_50], rax
 * 00000001C0041638: lea     rax, [rsp+88h+arg_28]
 * 00000001C0041640: mov     [rsp+88h+var_58], rbp
 * 00000001C0041645: mov     [rsp+88h+var_60], rax
 * 00000001C004164A: mov     [rsp+88h+var_68], bx
 * 00000001C004164F: call    cs:__imp_WppAutoLogTrace
 * 00000001C0041656: nop     dword ptr [rax+rax+00h]
 * 00000001C004165B: lea     r11, [rsp+88h+var_8]
 * 00000001C0041663: mov     rbx, [r11+10h]
 * 00000001C0041667: mov     rbp, [r11+18h]
 * 00000001C004166B: mov     rsi, [r11+20h]
 * 00000001C004166F: mov     rsp, r11
 * 00000001C0041672: pop     rdi
 * 00000001C0041673: retn
 */
