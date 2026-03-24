/*
 * XREFs of WPP_RECORDER_SF__guid_ @ 0x1C0015FAC
 * Callers:
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C0015720 (Controller_UcxEvtQueryUsbCapability.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF__guid_ @ 0x1C0015FAC
 * Reason: Hex-Rays returned no pseudocode for 0x1C0015FAC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0015FAC: mov     [rsp+arg_0], rbx
 * 00000001C0015FB1: mov     [rsp+arg_8], rdi
 * 00000001C0015FB6: push    r14
 * 00000001C0015FB8: sub     rsp, 40h
 * 00000001C0015FBC: mov     rbx, [rsp+48h+arg_28]
 * 00000001C0015FC1: mov     rdi, rcx
 * 00000001C0015FC4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0015FCB: mov     r14d, 0CBh
 * 00000001C0015FD1: mov     eax, [rcx+2Ch]
 * 00000001C0015FD4: test    al, 8
 * 00000001C0015FD6: jnz     loc_1C00273E8
 * 00000001C0015FDC: and     [rsp+48h+var_10], 0
 * 00000001C0015FE2: lea     r9, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C0015FE9: mov     edx, 4
 * 00000001C0015FEE: mov     [rsp+48h+var_18], 10h
 * 00000001C0015FF7: mov     [rsp+48h+var_20], rbx
 * 00000001C0015FFC: mov     r8d, edx
 * 00000001C0015FFF: mov     rcx, rdi
 * 00000001C0016002: mov     word ptr [rsp+48h+var_28], r14w
 * 00000001C0016008: call    cs:__imp_WppAutoLogTrace
 * 00000001C001600F: nop     dword ptr [rax+rax+00h]
 * 00000001C0016014: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0016019: mov     rdi, [rsp+48h+arg_8]
 * 00000001C001601E: add     rsp, 40h
 * 00000001C0016022: pop     r14
 * 00000001C0016024: retn
 * 00000001C00273E8: cmp     byte ptr [rcx+29h], 4
 * 00000001C00273EC: jb      loc_1C0015FDC
 * 00000001C00273F2: and     [rsp+48h+var_18], 0
 * 00000001C00273F8: lea     r8, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C00273FF: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0027406: mov     edx, 2Bh ; '+'
 * 00000001C002740B: mov     rcx, [rcx+18h]
 * 00000001C002740F: mov     [rsp+48h+var_20], 10h
 * 00000001C0027418: movzx   r9d, r14w
 * 00000001C002741C: mov     [rsp+48h+var_28], rbx
 * 00000001C0027421: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0027427: nop
 * 00000001C0027428: jmp     loc_1C0015FDC
 */
