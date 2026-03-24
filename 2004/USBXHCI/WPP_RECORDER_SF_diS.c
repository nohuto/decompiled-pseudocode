/*
 * XREFs of WPP_RECORDER_SF_diS @ 0x1C0015EB8
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C0015AB0 (Controller_PopulateDeviceFlagsFromKse.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_diS @ 0x1C0015EB8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0015EB8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0015EB8: mov     rax, rsp
 * 00000001C0015EBB: mov     [rax+8], rbx
 * 00000001C0015EBF: mov     [rax+10h], rbp
 * 00000001C0015EC3: mov     [rax+18h], rsi
 * 00000001C0015EC7: mov     [rax+20h], rdi
 * 00000001C0015ECB: push    r12
 * 00000001C0015ECD: push    r14
 * 00000001C0015ECF: push    r15
 * 00000001C0015ED1: sub     rsp, 60h
 * 00000001C0015ED5: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0015EDC: lea     r8, aNull_1; "NULL"
 * 00000001C0015EE3: mov     rbx, [rsp+78h+arg_38]
 * 00000001C0015EEB: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C0015EEF: xor     r15d, r15d
 * 00000001C0015EF2: movzx   ebp, r9w
 * 00000001C0015EF6: mov     r14, rcx
 * 00000001C0015EF9: mov     r12d, 4
 * 00000001C0015EFF: mov     eax, [rdx+2Ch]
 * 00000001C0015F02: lea     esi, [rdi+0Bh]
 * 00000001C0015F05: test    al, 8
 * 00000001C0015F07: jnz     loc_1C0026BB0
 * 00000001C0015F0D: test    rbx, rbx
 * 00000001C0015F10: jz      short loc_1C0015F27
 * 00000001C0015F12: inc     rdi
 * 00000001C0015F15: cmp     [rbx+rdi*2], r15w
 * 00000001C0015F1A: jnz     short loc_1C0015F12
 * 00000001C0015F1C: lea     rsi, ds:2[rdi*2]
 * 00000001C0015F24: test    rbx, rbx
 * 00000001C0015F27: mov     [rsp+78h+var_20], r15
 * 00000001C0015F2C: lea     rax, [rsp+78h+arg_30]
 * 00000001C0015F34: mov     [rsp+78h+var_28], rsi
 * 00000001C0015F39: lea     r9, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C0015F40: cmovz   rbx, r8
 * 00000001C0015F44: mov     edx, r12d
 * 00000001C0015F47: mov     [rsp+78h+var_30], rbx
 * 00000001C0015F4C: mov     r8d, r12d
 * 00000001C0015F4F: mov     [rsp+78h+var_38], 8
 * 00000001C0015F58: mov     rcx, r14
 * 00000001C0015F5B: mov     [rsp+78h+var_40], rax
 * 00000001C0015F60: lea     rax, [rsp+78h+arg_28]
 * 00000001C0015F68: mov     [rsp+78h+var_48], r12
 * 00000001C0015F6D: mov     [rsp+78h+var_50], rax
 * 00000001C0015F72: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C0015F77: call    cs:__imp_WppAutoLogTrace
 * 00000001C0015F7E: nop     dword ptr [rax+rax+00h]
 * 00000001C0015F83: lea     r11, [rsp+78h+var_18]
 * 00000001C0015F88: mov     rbx, [r11+20h]
 * 00000001C0015F8C: mov     rbp, [r11+28h]
 * 00000001C0015F90: mov     rsi, [r11+30h]
 * 00000001C0015F94: mov     rdi, [r11+38h]
 * 00000001C0015F98: mov     rsp, r11
 * 00000001C0015F9B: pop     r15
 * 00000001C0015F9D: pop     r14
 * 00000001C0015F9F: pop     r12
 * 00000001C0015FA1: retn
 * 00000001C0026BB0: cmp     [rdx+29h], r12b
 * 00000001C0026BB4: jb      loc_1C0015F0D
 * 00000001C0026BBA: test    rbx, rbx
 * 00000001C0026BBD: jz      short loc_1C0026BD6
 * 00000001C0026BBF: mov     rax, rdi
 * 00000001C0026BC2: inc     rax
 * 00000001C0026BC5: cmp     [rbx+rax*2], r15w
 * 00000001C0026BCA: jnz     short loc_1C0026BC2
 * 00000001C0026BCC: lea     rdx, ds:2[rax*2]
 * 00000001C0026BD4: jmp     short loc_1C0026BD9
 * 00000001C0026BD6: mov     rdx, rsi
 * 00000001C0026BD9: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0026BE0: test    rbx, rbx
 * 00000001C0026BE3: mov     [rsp+78h+var_28], r15
 * 00000001C0026BE8: mov     rcx, rbx
 * 00000001C0026BEB: cmovz   rcx, r8
 * 00000001C0026BEF: mov     [rsp+78h+var_30], rdx
 * 00000001C0026BF4: mov     [rsp+78h+var_38], rcx
 * 00000001C0026BF9: lea     r8, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C0026C00: mov     [rsp+78h+var_40], 8
 * 00000001C0026C09: lea     rcx, [rsp+78h+arg_30]
 * 00000001C0026C11: mov     [rsp+78h+var_48], rcx
 * 00000001C0026C16: mov     r9d, ebp
 * 00000001C0026C19: lea     rcx, [rsp+78h+arg_28]
 * 00000001C0026C21: mov     [rsp+78h+var_50], r12
 * 00000001C0026C26: mov     [rsp+78h+var_58], rcx
 * 00000001C0026C2B: mov     edx, 2Bh ; '+'
 * 00000001C0026C30: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0026C37: mov     rcx, [rcx+18h]
 * 00000001C0026C3B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0026C41: lea     r8, aNull_1; "NULL"
 * 00000001C0026C48: jmp     loc_1C0015F0D
 */
