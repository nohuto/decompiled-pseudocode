/*
 * XREFs of WPP_RECORDER_SF_DDLi @ 0x1C0042ED8
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0041708 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDLi @ 0x1C0042ED8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0042ED8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0042ED8: mov     r11, rsp
 * 00000001C0042EDB: mov     [r11+8], rbx
 * 00000001C0042EDF: mov     [r11+10h], rbp
 * 00000001C0042EE3: push    rdi
 * 00000001C0042EE4: sub     rsp, 70h
 * 00000001C0042EE8: mov     rbx, rcx
 * 00000001C0042EEB: mov     edi, 4
 * 00000001C0042EF0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0042EF7: lea     ebp, [rdi+26h]
 * 00000001C0042EFA: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0042F01: jz      short loc_1C0042F61
 * 00000001C0042F03: cmp     [rcx+29h], dil
 * 00000001C0042F07: jb      short loc_1C0042F61
 * 00000001C0042F09: and     qword ptr [r11-18h], 0
 * 00000001C0042F0E: lea     rdx, [r11+48h]
 * 00000001C0042F12: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0042F19: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0042F20: mov     rcx, [rcx+18h]
 * 00000001C0042F24: mov     qword ptr [r11-20h], 8
 * 00000001C0042F2C: mov     [r11-28h], rdx
 * 00000001C0042F30: lea     rdx, [r11+40h]
 * 00000001C0042F34: mov     [r11-30h], rdi
 * 00000001C0042F38: mov     [r11-38h], rdx
 * 00000001C0042F3C: lea     rdx, [r11+38h]
 * 00000001C0042F40: mov     [r11-40h], rdi
 * 00000001C0042F44: mov     [r11-48h], rdx
 * 00000001C0042F48: lea     rdx, [r11+30h]
 * 00000001C0042F4C: mov     [r11-50h], rdi
 * 00000001C0042F50: mov     [r11-58h], rdx
 * 00000001C0042F54: lea     edx, [rdi+27h]
 * 00000001C0042F57: movzx   r9d, bp
 * 00000001C0042F5B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0042F61: and     [rsp+78h+var_10], 0
 * 00000001C0042F67: lea     rax, [rsp+78h+arg_40]
 * 00000001C0042F6F: mov     [rsp+78h+var_18], 8
 * 00000001C0042F78: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0042F7F: mov     [rsp+78h+var_20], rax
 * 00000001C0042F84: mov     r8d, 0Eh
 * 00000001C0042F8A: mov     [rsp+78h+var_28], rdi
 * 00000001C0042F8F: lea     rax, [rsp+78h+arg_38]
 * 00000001C0042F97: mov     [rsp+78h+var_30], rax
 * 00000001C0042F9C: mov     edx, edi
 * 00000001C0042F9E: mov     [rsp+78h+var_38], rdi
 * 00000001C0042FA3: lea     rax, [rsp+78h+arg_30]
 * 00000001C0042FAB: mov     [rsp+78h+var_40], rax
 * 00000001C0042FB0: mov     rcx, rbx
 * 00000001C0042FB3: lea     rax, [rsp+78h+arg_28]
 * 00000001C0042FBB: mov     [rsp+78h+var_48], rdi
 * 00000001C0042FC0: mov     [rsp+78h+var_50], rax
 * 00000001C0042FC5: mov     [rsp+78h+var_58], bp
 * 00000001C0042FCA: call    cs:__imp_WppAutoLogTrace
 * 00000001C0042FD1: nop     dword ptr [rax+rax+00h]
 * 00000001C0042FD6: lea     r11, [rsp+78h+var_8]
 * 00000001C0042FDB: mov     rbx, [r11+10h]
 * 00000001C0042FDF: mov     rbp, [r11+18h]
 * 00000001C0042FE3: mov     rsp, r11
 * 00000001C0042FE6: pop     rdi
 * 00000001C0042FE7: retn
 */
