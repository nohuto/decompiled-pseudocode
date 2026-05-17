/*
 * XREFs of sub_4B2F5B9F @ 0x4B2F5B9F
 * Callers:
 *     __CIlog_default @ 0x4B2F5B82 (__CIlog_default.c)
 * Callees:
 *     __convertTOStoQNaN @ 0x4B2FAF8C (__convertTOStoQNaN.c)
 *     __startOneArgErrorHandling @ 0x4B2FB107 (__startOneArgErrorHandling.c)
 */

/*
 * Hex-Rays decompilation failed for sub_4B2F5B9F @ 0x4B2F5B9F
 * Reason: Hex-Rays returned no pseudocode for 0x4B2F5B9F
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B2F5B9F: push    edx
 * 000000004B2F5BA0: fstcw   [esp+4+var_4]
 * 000000004B2F5BA4: jz      short loc_4B2F5BF2
 * 000000004B2F5BA6: mov     eax, [esp+4+arg_4]
 * 000000004B2F5BAA: cmp     [esp+4+var_4], 27Fh
 * 000000004B2F5BB0: jz      short loc_4B2F5BB8
 * 000000004B2F5BB2: fldcw   ds:__DEFAULT_CW_in_mem
 * 000000004B2F5BB8: test    eax, 7FF00000h
 * 000000004B2F5BBD: jz      short loc_4B2F5C1D
 * 000000004B2F5BBF: test    eax, 80000000h
 * 000000004B2F5BC4: jnz     short loc_4B2F5C07
 * 000000004B2F5BC6: fldln2
 * 000000004B2F5BC8: fxch    st(1)
 * 000000004B2F5BCA: fyl2x
 * 000000004B2F5BCC: cmp     ___fastflag, 0
 * 000000004B2F5BD3: jnz     __fast_exit
 * 000000004B2F5BD9: lea     ecx, unk_4B3A37E0
 * 000000004B2F5BDF: mov     edx, 1Ah
 * 000000004B2F5BE4: jmp     __math_exit
 * 000000004B2F5BE9: test    eax, 80000000h
 * 000000004B2F5BEE: jnz     short loc_4B2F5C07
 * 000000004B2F5BF0: jmp     short loc_4B2F5BC6
 * 000000004B2F5BF2: test    eax, 0FFFFFh
 * 000000004B2F5BF7: jnz     short loc_4B2F5C16
 * 000000004B2F5BF9: cmp     [esp+4+arg_0], 0
 * 000000004B2F5BFE: jnz     short loc_4B2F5C16
 * 000000004B2F5C00: and     eax, 80000000h
 * 000000004B2F5C05: jz      short loc_4B2F5BCC
 * 000000004B2F5C07: fstp    st
 * 000000004B2F5C09: fld     __indefinite
 * 000000004B2F5C0F: mov     eax, 1
 * 000000004B2F5C14: jmp     short loc_4B2F5C38
 * 000000004B2F5C16: call    __convertTOStoQNaN
 * 000000004B2F5C1B: jmp     short loc_4B2F5C38
 * 000000004B2F5C1D: test    eax, 0FFFFFh
 * 000000004B2F5C22: jnz     short loc_4B2F5BE9
 * 000000004B2F5C24: cmp     [esp+4+arg_0], 0
 * 000000004B2F5C29: jnz     short loc_4B2F5BE9
 * 000000004B2F5C2B: fstp    st
 * 000000004B2F5C2D: fld     __minfinity
 * 000000004B2F5C33: mov     eax, 2
 * 000000004B2F5C38: cmp     ___fastflag, 0
 * 000000004B2F5C3F: jnz     __fast_exit
 * 000000004B2F5C45: lea     ecx, unk_4B3A37E0
 * 000000004B2F5C4B: mov     edx, 1Ah
 * 000000004B2F5C50: call    __startOneArgErrorHandling
 * 000000004B2F5C55: pop     edx
 * 000000004B2F5C56: retn
 */
