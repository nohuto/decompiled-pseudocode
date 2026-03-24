/*
 * XREFs of __guard_retpoline_exit_indirect_rax @ 0x140A1A3A0
 * Callers:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     __guard_retpoline_indirect_cfg_rax @ 0x140A1A2A0 (__guard_retpoline_indirect_cfg_rax.c)
 * Callees:
 *     EtwTraceRetpolineExit @ 0x1405A6680 (EtwTraceRetpolineExit.c)
 *     __guard_retpoline_exit @ 0x140A1A560 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit_indirect_rax @ 0x140A1A3A0
 * Reason: Hex-Rays returned no pseudocode for 0x140A1A3A0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A1A3A0: sub     rsp, 48h
 * 0000000140A1A3A4: call    __guard_retpoline_exit
 * 0000000140A1A3A9: lfence
 * 0000000140A1A3AC: mov     r10, (offset xmmword_140CFC490+4)
 * 0000000140A1A3B6: mov     r10d, [r10]
 * 0000000140A1A3B9: test    r10d, 2
 * 0000000140A1A3C0: jz      short loc_140A1A403
 * 0000000140A1A3C2: mov     [rsp+48h+var_28], rax
 * 0000000140A1A3C7: mov     [rsp+48h+var_20], rcx
 * 0000000140A1A3CC: mov     [rsp+48h+var_18], rdx
 * 0000000140A1A3D1: mov     [rsp+48h+var_10], r8
 * 0000000140A1A3D6: mov     [rsp+48h+var_8], r9
 * 0000000140A1A3DB: mov     rcx, rax
 * 0000000140A1A3DE: mov     rax, offset EtwTraceRetpolineExit
 * 0000000140A1A3E8: call    rax ; EtwTraceRetpolineExit
 * 0000000140A1A3EA: mov     rax, [rsp+48h+var_28]
 * 0000000140A1A3EF: mov     rcx, [rsp+48h+var_20]
 * 0000000140A1A3F4: mov     rdx, [rsp+48h+var_18]
 * 0000000140A1A3F9: mov     r8, [rsp+48h+var_10]
 * 0000000140A1A3FE: mov     r9, [rsp+48h+var_8]
 * 0000000140A1A403: add     rsp, 48h
 * 0000000140A1A407: jmp     rax
 */
