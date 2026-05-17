/*
 * XREFs of sub_4B2F5F8D @ 0x4B2F5F8D
 * Callers:
 *     __CIsqrt @ 0x4B2F5F70 (__CIsqrt.c)
 * Callees:
 *     __load_CW @ 0x4B2FAF75 (__load_CW.c)
 *     __convertTOStoQNaN @ 0x4B2FAF8C (__convertTOStoQNaN.c)
 *     __startOneArgErrorHandling @ 0x4B2FB107 (__startOneArgErrorHandling.c)
 */

/*
 * Hex-Rays decompilation failed for sub_4B2F5F8D @ 0x4B2F5F8D
 * Reason: Hex-Rays returned no pseudocode for 0x4B2F5F8D
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B2F5F8D: push    edx
 * 000000004B2F5F8E: fstcw   [esp+4+var_4]
 * 000000004B2F5F92: mov     eax, [esp+4+arg_4]
 * 000000004B2F5F96: jz      short loc_4B2F5FE9
 * 000000004B2F5F98: cmp     [esp+4+var_4], 27Fh
 * 000000004B2F5F9E: jz      short loc_4B2F5FA5
 * 000000004B2F5FA0: call    __load_CW
 * 000000004B2F5FA5: test    eax, 80000000h
 * 000000004B2F5FAA: jnz     short loc_4B2F5FCB
 * 000000004B2F5FAC: fsqrt
 * 000000004B2F5FAE: cmp     ___fastflag, 0
 * 000000004B2F5FB5: jnz     __fast_exit
 * 000000004B2F5FBB: mov     edx, 5
 * 000000004B2F5FC0: lea     ecx, aSqrt_1; "sqrt"
 * 000000004B2F5FC6: jmp     __math_exit
 * 000000004B2F5FCB: test    eax, 7FF00000h
 * 000000004B2F5FD0: jnz     short loc_4B2F5FFE
 * 000000004B2F5FD2: test    eax, 0FFFFFh
 * 000000004B2F5FD7: jnz     short loc_4B2F5FFE
 * 000000004B2F5FD9: cmp     [esp+4+arg_0], 0
 * 000000004B2F5FDE: jnz     short loc_4B2F5FFE
 * 000000004B2F5FE0: jmp     short loc_4B2F5FAE
 * 000000004B2F5FE2: call    __convertTOStoQNaN
 * 000000004B2F5FE7: jmp     short loc_4B2F600B
 * 000000004B2F5FE9: test    eax, 0FFFFFh
 * 000000004B2F5FEE: jnz     short loc_4B2F5FE2
 * 000000004B2F5FF0: cmp     [esp+4+arg_0], 0
 * 000000004B2F5FF5: jnz     short loc_4B2F5FE2
 * 000000004B2F5FF7: and     eax, 80000000h
 * 000000004B2F5FFC: jz      short loc_4B2F5FAE
 * 000000004B2F5FFE: fstp    st
 * 000000004B2F6000: fld     __indefinite
 * 000000004B2F6006: mov     eax, 1
 * 000000004B2F600B: cmp     ___fastflag, 0
 * 000000004B2F6012: jnz     __fast_exit
 * 000000004B2F6018: mov     edx, 5
 * 000000004B2F601D: lea     ecx, aSqrt_1; "sqrt"
 * 000000004B2F6023: call    __startOneArgErrorHandling
 * 000000004B2F6028: pop     edx
 * 000000004B2F6029: retn
 */
