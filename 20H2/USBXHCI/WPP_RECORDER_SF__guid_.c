/*
 * XREFs of WPP_RECORDER_SF__guid_ @ 0x1C00175EC
 * Callers:
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C0016D60 (Controller_UcxEvtQueryUsbCapability.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF__guid_ @ 0x1C00175EC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00175EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00175EC: mov     [rsp+arg_0], rbx
 * 00000001C00175F1: mov     [rsp+arg_8], rdi
 * 00000001C00175F6: push    r14
 * 00000001C00175F8: sub     rsp, 40h
 * 00000001C00175FC: mov     rbx, [rsp+48h+arg_28]
 * 00000001C0017601: mov     rdi, rcx
 * 00000001C0017604: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C001760B: mov     r14d, 0CBh
 * 00000001C0017611: mov     eax, [rcx+2Ch]
 * 00000001C0017614: test    al, 8
 * 00000001C0017616: jnz     loc_1C00292FE
 * 00000001C001761C: and     [rsp+48h+var_10], 0
 * 00000001C0017622: lea     r9, WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids
 * 00000001C0017629: mov     edx, 4
 * 00000001C001762E: mov     [rsp+48h+var_18], 10h
 * 00000001C0017637: mov     [rsp+48h+var_20], rbx
 * 00000001C001763C: mov     r8d, edx
 * 00000001C001763F: mov     rcx, rdi
 * 00000001C0017642: mov     word ptr [rsp+48h+var_28], r14w
 * 00000001C0017648: call    cs:__imp_WppAutoLogTrace
 * 00000001C001764F: nop     dword ptr [rax+rax+00h]
 * 00000001C0017654: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0017659: mov     rdi, [rsp+48h+arg_8]
 * 00000001C001765E: add     rsp, 40h
 * 00000001C0017662: pop     r14
 * 00000001C0017664: retn
 * 00000001C00292FE: cmp     byte ptr [rcx+29h], 4
 * 00000001C0029302: jb      loc_1C001761C
 * 00000001C0029308: and     [rsp+48h+var_18], 0
 * 00000001C002930E: lea     r8, WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids
 * 00000001C0029315: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C002931C: mov     edx, 2Bh ; '+'
 * 00000001C0029321: mov     rcx, [rcx+18h]
 * 00000001C0029325: mov     [rsp+48h+var_20], 10h
 * 00000001C002932E: movzx   r9d, r14w
 * 00000001C0029332: mov     [rsp+48h+var_28], rbx
 * 00000001C0029337: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002933D: nop
 * 00000001C002933E: jmp     loc_1C001761C
 */
