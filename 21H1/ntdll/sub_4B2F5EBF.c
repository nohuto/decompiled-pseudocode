/*
 * XREFs of sub_4B2F5EBF @ 0x4B2F5EBF
 * Callers:
 *     __CIsin_default @ 0x4B2F5EA2 (__CIsin_default.c)
 * Callees:
 *     __convertTOStoQNaN @ 0x4B2FAF8C (__convertTOStoQNaN.c)
 *     __startOneArgErrorHandling @ 0x4B2FB107 (__startOneArgErrorHandling.c)
 */

/*
 * Hex-Rays decompilation failed for sub_4B2F5EBF @ 0x4B2F5EBF
 * Reason: Hex-Rays returned no pseudocode for 0x4B2F5EBF
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B2F5EBF: push    edx
 * 000000004B2F5EC0: fstcw   [esp+4+var_4]
 * 000000004B2F5EC4: jz      short loc_4B2F5F16
 * 000000004B2F5EC6: cmp     [esp+4+var_4], 27Fh
 * 000000004B2F5ECC: jz      short loc_4B2F5ED4
 * 000000004B2F5ECE: fldcw   ds:__DEFAULT_CW_in_mem
 * 000000004B2F5ED4: fsin
 * 000000004B2F5ED6: fstsw   ax
 * 000000004B2F5ED9: sahf
 * 000000004B2F5EDA: jp      short loc_4B2F5EF9
 * 000000004B2F5EDC: cmp     ___fastflag, 0
 * 000000004B2F5EE3: jnz     __fast_exit
 * 000000004B2F5EE9: mov     edx, 1Eh
 * 000000004B2F5EEE: lea     ecx, unk_4B3A3800
 * 000000004B2F5EF4: jmp     __math_exit
 * 000000004B2F5EF9: fld     ds:__pi_by_2_to_61
 * 000000004B2F5EFF: fxch    st(1)
 * 000000004B2F5F01: fprem1
 * 000000004B2F5F03: fstsw   ax
 * 000000004B2F5F06: sahf
 * 000000004B2F5F07: jp      short loc_4B2F5F01
 * 000000004B2F5F09: fstp    st(1)
 * 000000004B2F5F0B: fsin
 * 000000004B2F5F0D: jmp     short loc_4B2F5EDC
 * 000000004B2F5F0F: call    __convertTOStoQNaN
 * 000000004B2F5F14: jmp     short loc_4B2F5F31
 * 000000004B2F5F16: test    eax, 0FFFFFh
 * 000000004B2F5F1B: jnz     short loc_4B2F5F0F
 * 000000004B2F5F1D: cmp     [esp+4+arg_0], 0
 * 000000004B2F5F22: jnz     short loc_4B2F5F0F
 * 000000004B2F5F24: fstp    st
 * 000000004B2F5F26: fld     __indefinite
 * 000000004B2F5F2C: mov     eax, 1
 * 000000004B2F5F31: cmp     ___fastflag, 0
 * 000000004B2F5F38: jnz     __fast_exit
 * 000000004B2F5F3E: mov     edx, 1Eh
 * 000000004B2F5F43: lea     ecx, unk_4B3A3800
 * 000000004B2F5F49: call    __startOneArgErrorHandling
 * 000000004B2F5F4E: pop     edx
 * 000000004B2F5F4F: retn
 */
