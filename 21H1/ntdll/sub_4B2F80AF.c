/*
 * XREFs of sub_4B2F80AF @ 0x4B2F80AF
 * Callers:
 *     __CIatan_default @ 0x4B2F8092 (__CIatan_default.c)
 * Callees:
 *     __convertTOStoQNaN @ 0x4B2FAF8C (__convertTOStoQNaN.c)
 *     __startOneArgErrorHandling @ 0x4B2FB107 (__startOneArgErrorHandling.c)
 */

/*
 * Hex-Rays decompilation failed for sub_4B2F80AF @ 0x4B2F80AF
 * Reason: Hex-Rays returned no pseudocode for 0x4B2F80AF
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B2F80AF: push    edx
 * 000000004B2F80B0: fstcw   [esp+4+var_4]
 * 000000004B2F80B4: jz      short loc_4B2F80EC
 * 000000004B2F80B6: cmp     [esp+4+var_4], 27Fh
 * 000000004B2F80BC: jz      short loc_4B2F80C4
 * 000000004B2F80BE: fldcw   ds:__DEFAULT_CW_in_mem
 * 000000004B2F80C4: fld1
 * 000000004B2F80C6: fpatan
 * 000000004B2F80C8: cmp     ___fastflag, 0
 * 000000004B2F80CF: jnz     __fast_exit
 * 000000004B2F80D5: mov     edx, 0Fh
 * 000000004B2F80DA: lea     ecx, aAtan_1; "atan"
 * 000000004B2F80E0: jmp     __math_exit
 * 000000004B2F80E5: call    __convertTOStoQNaN
 * 000000004B2F80EA: jmp     short loc_4B2F8112
 * 000000004B2F80EC: test    eax, 0FFFFFh
 * 000000004B2F80F1: jnz     short loc_4B2F80E5
 * 000000004B2F80F3: cmp     [esp+4+arg_0], 0
 * 000000004B2F80F8: jnz     short loc_4B2F80E5
 * 000000004B2F80FA: fstp    st
 * 000000004B2F80FC: fld     __piby2
 * 000000004B2F8102: test    eax, 80000000h
 * 000000004B2F8107: jz      short loc_4B2F80C8
 * 000000004B2F8109: fchs
 * 000000004B2F810B: jmp     short loc_4B2F80C8
 * 000000004B2F810D: mov     eax, 1
 * 000000004B2F8112: cmp     ___fastflag, 0
 * 000000004B2F8119: jnz     __fast_exit
 * 000000004B2F811F: mov     edx, 0Fh
 * 000000004B2F8124: lea     ecx, aAtan_1; "atan"
 * 000000004B2F812A: call    __startOneArgErrorHandling
 * 000000004B2F812F: pop     edx
 * 000000004B2F8130: retn
 */
