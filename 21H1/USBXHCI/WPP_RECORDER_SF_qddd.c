/*
 * XREFs of WPP_RECORDER_SF_qddd @ 0x1C002EBB8
 * Callers:
 *     Command_InternalSendCommand @ 0x1C00069D8 (Command_InternalSendCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qddd @ 0x1C002EBB8
 * Reason: Hex-Rays returned no pseudocode for 0x1C002EBB8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002EBB8: mov     r11, rsp
 * 00000001C002EBBB: mov     [r11+8], rbx
 * 00000001C002EBBF: mov     [r11+10h], rbp
 * 00000001C002EBC3: push    rdi
 * 00000001C002EBC4: sub     rsp, 70h
 * 00000001C002EBC8: mov     rbx, rcx
 * 00000001C002EBCB: mov     ebp, 36h ; '6'
 * 00000001C002EBD0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C002EBD7: lea     edi, [rbp-32h]
 * 00000001C002EBDA: mov     eax, [rcx+2Ch]
 * 00000001C002EBDD: test    al, 40h
 * 00000001C002EBDF: jz      short loc_1C002EC3F
 * 00000001C002EBE1: cmp     byte ptr [rcx+29h], 5
 * 00000001C002EBE5: jb      short loc_1C002EC3F
 * 00000001C002EBE7: and     qword ptr [r11-18h], 0
 * 00000001C002EBEC: lea     rdx, [r11+48h]
 * 00000001C002EBF0: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C002EBF7: lea     r8, WPP_36fa723b951d376375e8eba1d8934b4f_Traceguids
 * 00000001C002EBFE: mov     rcx, [rcx+18h]
 * 00000001C002EC02: mov     [r11-20h], rdi
 * 00000001C002EC06: mov     [r11-28h], rdx
 * 00000001C002EC0A: lea     rdx, [r11+40h]
 * 00000001C002EC0E: mov     [r11-30h], rdi
 * 00000001C002EC12: mov     [r11-38h], rdx
 * 00000001C002EC16: lea     rdx, [r11+38h]
 * 00000001C002EC1A: mov     [r11-40h], rdi
 * 00000001C002EC1E: mov     [r11-48h], rdx
 * 00000001C002EC22: lea     rdx, [r11+30h]
 * 00000001C002EC26: mov     qword ptr [r11-50h], 8
 * 00000001C002EC2E: mov     [r11-58h], rdx
 * 00000001C002EC32: lea     edx, [rbp-0Bh]
 * 00000001C002EC35: movzx   r9d, bp
 * 00000001C002EC39: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002EC3F: and     [rsp+78h+var_10], 0
 * 00000001C002EC45: lea     rax, [rsp+78h+arg_40]
 * 00000001C002EC4D: mov     [rsp+78h+var_18], rdi
 * 00000001C002EC52: lea     r9, WPP_36fa723b951d376375e8eba1d8934b4f_Traceguids
 * 00000001C002EC59: mov     [rsp+78h+var_20], rax
 * 00000001C002EC5E: mov     edx, 5
 * 00000001C002EC63: mov     [rsp+78h+var_28], rdi
 * 00000001C002EC68: lea     rax, [rsp+78h+arg_38]
 * 00000001C002EC70: mov     [rsp+78h+var_30], rax
 * 00000001C002EC75: mov     rcx, rbx
 * 00000001C002EC78: mov     [rsp+78h+var_38], rdi
 * 00000001C002EC7D: lea     rax, [rsp+78h+arg_30]
 * 00000001C002EC85: mov     [rsp+78h+var_40], rax
 * 00000001C002EC8A: lea     r8d, [rdx+2]
 * 00000001C002EC8E: lea     rax, [rsp+78h+arg_28]
 * 00000001C002EC96: mov     [rsp+78h+var_48], 8
 * 00000001C002EC9F: mov     [rsp+78h+var_50], rax
 * 00000001C002ECA4: mov     [rsp+78h+var_58], bp
 * 00000001C002ECA9: call    cs:__imp_WppAutoLogTrace
 * 00000001C002ECB0: nop     dword ptr [rax+rax+00h]
 * 00000001C002ECB5: lea     r11, [rsp+78h+var_8]
 * 00000001C002ECBA: mov     rbx, [r11+10h]
 * 00000001C002ECBE: mov     rbp, [r11+18h]
 * 00000001C002ECC2: mov     rsp, r11
 * 00000001C002ECC5: pop     rdi
 * 00000001C002ECC6: retn
 */
