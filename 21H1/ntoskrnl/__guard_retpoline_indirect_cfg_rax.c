/*
 * XREFs of __guard_retpoline_indirect_cfg_rax @ 0x140A142A0
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_indirect_cfg_rax @ 0x140A142A0 (__guard_retpoline_indirect_cfg_rax.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_indirect_cfg_rax @ 0x140A142A0
 * Reason: Hex-Rays returned no pseudocode for 0x140A142A0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A142A0: mov     r11, offset _guard_icall_bitmap
 * 0000000140A142AA: mov     r11, [r11]
 * 0000000140A142AD: test    rax, rax
 * 0000000140A142B0: jge     loc_140A14358
 * 0000000140A142B6: test    r11, r11
 * 0000000140A142B9: jz      short __guard_retpoline_indirect_rax
 * 0000000140A142BB: mov     r10, rax
 * 0000000140A142BE: shr     r10, 9
 * 0000000140A142C2: mov     r11, [r11+r10*8]
 * 0000000140A142C6: mov     r10, rax
 * 0000000140A142C9: shr     r10, 3
 * 0000000140A142CD: test    al, 0Fh
 * 0000000140A142CF: jnz     loc_140A14341
 * 0000000140A142D5: bt      r11, r10
 * 0000000140A142D9: jnb     loc_140A14358
 * 0000000140A142DF: nop
 * 0000000140A142E0: mov     r11, offset _retpoline_image_bitmap
 * 0000000140A142EA: mov     r11, [r11]
 * 0000000140A142ED: test    r11, r11
 * 0000000140A142F0: jz      short loc_140A1433B
 * 0000000140A142F2: mov     r10, rax
 * 0000000140A142F5: shr     r10, 10h
 * 0000000140A142F9: bt      [r11], r10
 * 0000000140A142FD: jnb     short loc_140A14325
 * 0000000140A142FF: call    loc_140A14320
 * 0000000140A14304: int     3; Trap to Debugger
 * 0000000140A14320: mov     [rsp+0], rax
 * 0000000140A14324: retn
 * 0000000140A14325: or      byte ptr gs:853h, 1
 * 0000000140A1432E: test    byte ptr gs:853h, 2
 * 0000000140A14337: jnz     short loc_140A1433B
 * 0000000140A14339: jmp     short __guard_retpoline_exit_indirect_rax
 * 0000000140A1433B: lfence
 * 0000000140A1433E: jmp     rax
 * 0000000140A14341: btr     r10, 0
 * 0000000140A14346: bt      r11, r10
 * 0000000140A1434A: jnb     short loc_140A14358
 * 0000000140A1434C: or      r10, 1
 * 0000000140A14350: bt      r11, r10
 * 0000000140A14354: jnb     short loc_140A14358
 * 0000000140A14356: jmp     short __guard_retpoline_indirect_rax
 * 0000000140A14358: mov     rcx, rax
 * 0000000140A1435B: mov     rax, offset _guard_icall_bugcheck
 * 0000000140A14365: call    loc_140A14380
 * 0000000140A1436A: int     3; Trap to Debugger
 * 0000000140A14380: mov     [rsp+0], rax
 * 0000000140A14384: retn
 */
