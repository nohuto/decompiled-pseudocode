/*
 * XREFs of sub_4B2F5ADF @ 0x4B2F5ADF
 * Callers:
 *     __CIcos_default @ 0x4B2F5AC2 (__CIcos_default.c)
 * Callees:
 *     __convertTOStoQNaN @ 0x4B2FAF8C (__convertTOStoQNaN.c)
 *     __startOneArgErrorHandling @ 0x4B2FB107 (__startOneArgErrorHandling.c)
 */

/*
 * Hex-Rays decompilation failed for sub_4B2F5ADF @ 0x4B2F5ADF
 * Reason: Hex-Rays returned no pseudocode for 0x4B2F5ADF
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B2F5ADF: push    edx
 * 000000004B2F5AE0: fstcw   [esp+4+var_4]
 * 000000004B2F5AE4: jz      short loc_4B2F5B36
 * 000000004B2F5AE6: cmp     [esp+4+var_4], 27Fh
 * 000000004B2F5AEC: jz      short loc_4B2F5AF4
 * 000000004B2F5AEE: fldcw   ds:__DEFAULT_CW_in_mem
 * 000000004B2F5AF4: fcos
 * 000000004B2F5AF6: fstsw   ax
 * 000000004B2F5AF9: sahf
 * 000000004B2F5AFA: jp      short loc_4B2F5B19
 * 000000004B2F5AFC: cmp     ___fastflag, 0
 * 000000004B2F5B03: jnz     __fast_exit
 * 000000004B2F5B09: mov     edx, 12h
 * 000000004B2F5B0E: lea     ecx, unk_4B3A37D0
 * 000000004B2F5B14: jmp     __math_exit
 * 000000004B2F5B19: fld     ds:__pi_by_2_to_61
 * 000000004B2F5B1F: fxch    st(1)
 * 000000004B2F5B21: fprem1
 * 000000004B2F5B23: fstsw   ax
 * 000000004B2F5B26: sahf
 * 000000004B2F5B27: jp      short loc_4B2F5B21
 * 000000004B2F5B29: fstp    st(1)
 * 000000004B2F5B2B: fcos
 * 000000004B2F5B2D: jmp     short loc_4B2F5AFC
 * 000000004B2F5B2F: call    __convertTOStoQNaN
 * 000000004B2F5B34: jmp     short loc_4B2F5B51
 * 000000004B2F5B36: test    eax, 0FFFFFh
 * 000000004B2F5B3B: jnz     short loc_4B2F5B2F
 * 000000004B2F5B3D: cmp     [esp+4+arg_0], 0
 * 000000004B2F5B42: jnz     short loc_4B2F5B2F
 * 000000004B2F5B44: fstp    st
 * 000000004B2F5B46: fld     __indefinite
 * 000000004B2F5B4C: mov     eax, 1
 * 000000004B2F5B51: cmp     ___fastflag, 0
 * 000000004B2F5B58: jnz     __fast_exit
 * 000000004B2F5B5E: mov     edx, 12h
 * 000000004B2F5B63: lea     ecx, unk_4B3A37D0
 * 000000004B2F5B69: call    __startOneArgErrorHandling
 * 000000004B2F5B6E: pop     edx
 * 000000004B2F5B6F: retn
 */
