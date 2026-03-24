/*
 * XREFs of WPP_RECORDER_SF_DDiqq @ 0x1C004005C
 * Callers:
 *     Control_ProcessTransferEventWithED1 @ 0x1C0004BB0 (Control_ProcessTransferEventWithED1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDiqq @ 0x1C004005C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004005C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004005C: mov     r11, rsp
 * 00000001C004005F: mov     [r11+8], rbx
 * 00000001C0040063: mov     [r11+10h], rbp
 * 00000001C0040067: mov     [r11+18h], rsi
 * 00000001C004006B: push    rdi
 * 00000001C004006C: sub     rsp, 80h
 * 00000001C0040073: mov     rdi, rcx
 * 00000001C0040076: movzx   ebx, r9w
 * 00000001C004007A: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0040081: mov     esi, 8
 * 00000001C0040086: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C004008D: lea     ebp, [rsi-4]
 * 00000001C0040090: jz      short loc_1C00400F7
 * 00000001C0040092: cmp     byte ptr [rcx+29h], 2
 * 00000001C0040096: jb      short loc_1C00400F7
 * 00000001C0040098: and     qword ptr [r11-18h], 0
 * 00000001C004009D: lea     rdx, [r11+50h]
 * 00000001C00400A1: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C00400A8: lea     r8, WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids
 * 00000001C00400AF: mov     rcx, [rcx+18h]
 * 00000001C00400B3: mov     r9d, ebx
 * 00000001C00400B6: mov     [r11-20h], rsi
 * 00000001C00400BA: mov     [r11-28h], rdx
 * 00000001C00400BE: lea     rdx, [r11+48h]
 * 00000001C00400C2: mov     [r11-30h], rsi
 * 00000001C00400C6: mov     [r11-38h], rdx
 * 00000001C00400CA: lea     rdx, [r11+40h]
 * 00000001C00400CE: mov     [r11-40h], rsi
 * 00000001C00400D2: mov     [r11-48h], rdx
 * 00000001C00400D6: lea     rdx, [r11+38h]
 * 00000001C00400DA: mov     [r11-50h], rbp
 * 00000001C00400DE: mov     [r11-58h], rdx
 * 00000001C00400E2: lea     rdx, [r11+30h]
 * 00000001C00400E6: mov     [r11-60h], rbp
 * 00000001C00400EA: mov     [r11-68h], rdx
 * 00000001C00400EE: lea     edx, [rsi+23h]
 * 00000001C00400F1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00400F7: and     [rsp+88h+var_10], 0
 * 00000001C00400FD: lea     rax, [rsp+88h+arg_48]
 * 00000001C0040105: mov     [rsp+88h+var_18], rsi
 * 00000001C004010A: lea     r9, WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids
 * 00000001C0040111: mov     [rsp+88h+var_20], rax
 * 00000001C0040116: mov     edx, 2
 * 00000001C004011B: mov     [rsp+88h+var_28], rsi
 * 00000001C0040120: lea     rax, [rsp+88h+arg_40]
 * 00000001C0040128: mov     [rsp+88h+var_30], rax
 * 00000001C004012D: mov     rcx, rdi
 * 00000001C0040130: mov     [rsp+88h+var_38], rsi
 * 00000001C0040135: lea     rax, [rsp+88h+arg_38]
 * 00000001C004013D: mov     [rsp+88h+var_40], rax
 * 00000001C0040142: lea     r8d, [rdx+0Ch]
 * 00000001C0040146: mov     [rsp+88h+var_48], rbp
 * 00000001C004014B: lea     rax, [rsp+88h+arg_30]
 * 00000001C0040153: mov     [rsp+88h+var_50], rax
 * 00000001C0040158: lea     rax, [rsp+88h+arg_28]
 * 00000001C0040160: mov     [rsp+88h+var_58], rbp
 * 00000001C0040165: mov     [rsp+88h+var_60], rax
 * 00000001C004016A: mov     [rsp+88h+var_68], bx
 * 00000001C004016F: call    cs:__imp_WppAutoLogTrace
 * 00000001C0040176: nop     dword ptr [rax+rax+00h]
 * 00000001C004017B: lea     r11, [rsp+88h+var_8]
 * 00000001C0040183: mov     rbx, [r11+10h]
 * 00000001C0040187: mov     rbp, [r11+18h]
 * 00000001C004018B: mov     rsi, [r11+20h]
 * 00000001C004018F: mov     rsp, r11
 * 00000001C0040192: pop     rdi
 * 00000001C0040193: retn
 */
