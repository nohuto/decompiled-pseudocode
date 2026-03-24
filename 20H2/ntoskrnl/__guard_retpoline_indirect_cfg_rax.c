/*
 * XREFs of __guard_retpoline_indirect_cfg_rax @ 0x140A1A2A0
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_indirect_cfg_rax @ 0x140A1A2A0 (__guard_retpoline_indirect_cfg_rax.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_indirect_cfg_rax @ 0x140A1A2A0
 * Reason: Hex-Rays returned no pseudocode for 0x140A1A2A0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A1A2A0: mov     r11, offset _guard_icall_bitmap
 * 0000000140A1A2AA: mov     r11, [r11]
 * 0000000140A1A2AD: test    rax, rax
 * 0000000140A1A2B0: jge     loc_140A1A358
 * 0000000140A1A2B6: test    r11, r11
 * 0000000140A1A2B9: jz      short __guard_retpoline_indirect_rax
 * 0000000140A1A2BB: mov     r10, rax
 * 0000000140A1A2BE: shr     r10, 9
 * 0000000140A1A2C2: mov     r11, [r11+r10*8]
 * 0000000140A1A2C6: mov     r10, rax
 * 0000000140A1A2C9: shr     r10, 3
 * 0000000140A1A2CD: test    al, 0Fh
 * 0000000140A1A2CF: jnz     loc_140A1A341
 * 0000000140A1A2D5: bt      r11, r10
 * 0000000140A1A2D9: jnb     loc_140A1A358
 * 0000000140A1A2DF: nop
 * 0000000140A1A2E0: mov     r11, offset _retpoline_image_bitmap
 * 0000000140A1A2EA: mov     r11, [r11]
 * 0000000140A1A2ED: test    r11, r11
 * 0000000140A1A2F0: jz      short loc_140A1A33B
 * 0000000140A1A2F2: mov     r10, rax
 * 0000000140A1A2F5: shr     r10, 10h
 * 0000000140A1A2F9: bt      [r11], r10
 * 0000000140A1A2FD: jnb     short loc_140A1A325
 * 0000000140A1A2FF: call    loc_140A1A320
 * 0000000140A1A304: int     3; Trap to Debugger
 * 0000000140A1A320: mov     [rsp+0], rax
 * 0000000140A1A324: retn
 * 0000000140A1A325: or      byte ptr gs:853h, 1
 * 0000000140A1A32E: test    byte ptr gs:853h, 2
 * 0000000140A1A337: jnz     short loc_140A1A33B
 * 0000000140A1A339: jmp     short __guard_retpoline_exit_indirect_rax
 * 0000000140A1A33B: lfence
 * 0000000140A1A33E: jmp     rax
 * 0000000140A1A341: btr     r10, 0
 * 0000000140A1A346: bt      r11, r10
 * 0000000140A1A34A: jnb     short loc_140A1A358
 * 0000000140A1A34C: or      r10, 1
 * 0000000140A1A350: bt      r11, r10
 * 0000000140A1A354: jnb     short loc_140A1A358
 * 0000000140A1A356: jmp     short __guard_retpoline_indirect_rax
 * 0000000140A1A358: mov     rcx, rax
 * 0000000140A1A35B: mov     rax, offset _guard_icall_bugcheck
 * 0000000140A1A365: call    loc_140A1A380
 * 0000000140A1A36A: int     3; Trap to Debugger
 * 0000000140A1A380: mov     [rsp+0], rax
 * 0000000140A1A384: retn
 */
