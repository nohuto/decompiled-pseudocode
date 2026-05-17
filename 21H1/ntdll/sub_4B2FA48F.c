/*
 * XREFs of sub_4B2FA48F @ 0x4B2FA48F
 * Callers:
 *     __CItan_default @ 0x4B2FA472 (__CItan_default.c)
 * Callees:
 *     __convertTOStoQNaN @ 0x4B2FAF8C (__convertTOStoQNaN.c)
 *     __startOneArgErrorHandling @ 0x4B2FB107 (__startOneArgErrorHandling.c)
 */

/*
 * Hex-Rays decompilation failed for sub_4B2FA48F @ 0x4B2FA48F
 * Reason: Hex-Rays returned no pseudocode for 0x4B2FA48F
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B2FA48F: push    edx
 * 000000004B2FA490: fstcw   [esp+4+var_4]
 * 000000004B2FA494: jz      short loc_4B2FA4EA
 * 000000004B2FA496: cmp     [esp+4+var_4], 27Fh
 * 000000004B2FA49C: jz      short loc_4B2FA4A4
 * 000000004B2FA49E: fldcw   ds:__DEFAULT_CW_in_mem
 * 000000004B2FA4A4: fptan
 * 000000004B2FA4A6: fstsw   ax
 * 000000004B2FA4A9: sahf
 * 000000004B2FA4AA: jp      short loc_4B2FA4CB
 * 000000004B2FA4AC: fstp    st
 * 000000004B2FA4AE: cmp     ___fastflag, 0
 * 000000004B2FA4B5: jnz     __fast_exit
 * 000000004B2FA4BB: mov     edx, 20h ; ' '
 * 000000004B2FA4C0: lea     ecx, aTan_1; "tan"
 * 000000004B2FA4C6: jmp     __math_exit
 * 000000004B2FA4CB: fld     ds:__pi_by_2_to_61
 * 000000004B2FA4D1: fxch    st(1)
 * 000000004B2FA4D3: fprem1
 * 000000004B2FA4D5: fstsw   ax
 * 000000004B2FA4D8: sahf
 * 000000004B2FA4D9: jp      short loc_4B2FA4D3
 * 000000004B2FA4DB: fstp    st(1)
 * 000000004B2FA4DD: fptan
 * 000000004B2FA4DF: fstp    st
 * 000000004B2FA4E1: jmp     short loc_4B2FA4AE
 * 000000004B2FA4E3: call    __convertTOStoQNaN
 * 000000004B2FA4E8: jmp     short loc_4B2FA505
 * 000000004B2FA4EA: test    eax, 0FFFFFh
 * 000000004B2FA4EF: jnz     short loc_4B2FA4E3
 * 000000004B2FA4F1: cmp     [esp+4+arg_0], 0
 * 000000004B2FA4F6: jnz     short loc_4B2FA4E3
 * 000000004B2FA4F8: fstp    st
 * 000000004B2FA4FA: fld     __indefinite
 * 000000004B2FA500: mov     eax, 1
 * 000000004B2FA505: cmp     ___fastflag, 0
 * 000000004B2FA50C: jnz     __fast_exit
 * 000000004B2FA512: mov     edx, 20h ; ' '
 * 000000004B2FA517: lea     ecx, aTan_1; "tan"
 * 000000004B2FA51D: call    __startOneArgErrorHandling
 * 000000004B2FA522: pop     edx
 * 000000004B2FA523: retn
 */
