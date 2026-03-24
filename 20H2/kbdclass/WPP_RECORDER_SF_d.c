/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0002BB0
 * Callers:
 *     KbdConfiguration @ 0x1C0010560 (KbdConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002ED0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C0002BB0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002BB0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002BB0: mov     [rsp+arg_0], rbx
 * 00000001C0002BB5: push    rdi
 * 00000001C0002BB6: sub     rsp, 40h
 * 00000001C0002BBA: mov     rdi, rcx
 * 00000001C0002BBD: movzx   ebx, r9w
 * 00000001C0002BC1: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0002BC8: mov     eax, [rcx+2Ch]
 * 00000001C0002BCB: test    al, 1
 * 00000001C0002BCD: jnz     loc_1C0004882
 * 00000001C0002BD3: mov     [rsp+48h+var_10], 0
 * 00000001C0002BDC: lea     rax, [rsp+48h+arg_28]
 * 00000001C0002BE1: mov     edx, 4
 * 00000001C0002BE6: mov     [rsp+48h+var_18], 4
 * 00000001C0002BEF: mov     [rsp+48h+var_20], rax
 * 00000001C0002BF4: lea     r9, WPP_ad73c0fec8af37c73e7c85b872b2d615_Traceguids
 * 00000001C0002BFB: mov     rcx, rdi
 * 00000001C0002BFE: mov     word ptr [rsp+48h+var_28], bx
 * 00000001C0002C03: lea     r8d, [rdx-3]
 * 00000001C0002C07: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002C0E: nop     dword ptr [rax+rax+00h]
 * 00000001C0002C13: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0002C18: add     rsp, 40h
 * 00000001C0002C1C: pop     rdi
 * 00000001C0002C1D: retn
 * 00000001C0004882: cmp     byte ptr [rcx+29h], 4
 * 00000001C0004886: jb      loc_1C0002BD3
 * 00000001C000488C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0004893: lea     rdx, [rsp+48h+arg_28]
 * 00000001C0004898: mov     rcx, [rcx+18h]
 * 00000001C000489C: lea     r8, WPP_ad73c0fec8af37c73e7c85b872b2d615_Traceguids
 * 00000001C00048A3: mov     [rsp+48h+var_18], 0
 * 00000001C00048AC: mov     r9d, ebx
 * 00000001C00048AF: mov     [rsp+48h+var_20], 4
 * 00000001C00048B8: mov     [rsp+48h+var_28], rdx
 * 00000001C00048BD: mov     edx, 2Bh ; '+'
 * 00000001C00048C2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00048C8: nop
 * 00000001C00048C9: jmp     loc_1C0002BD3
 */
