/*
 * XREFs of sub_4B2F5C94 @ 0x4B2F5C94
 * Callers:
 *     __CIpow_default @ 0x4B2F5C72 (__CIpow_default.c)
 * Callees:
 *     sub_4B2F5E59 @ 0x4B2F5E59 (sub_4B2F5E59.c)
 *     __twoToTOS @ 0x4B2FAF60 (__twoToTOS.c)
 *     __load_CW @ 0x4B2FAF75 (__load_CW.c)
 *     __fload_withFB @ 0x4B2FAFA5 (__fload_withFB.c)
 *     __startTwoArgErrorHandling @ 0x4B2FB0F0 (__startTwoArgErrorHandling.c)
 *     __powhlp @ 0x4B2FB3BE (__powhlp.c)
 */

/*
 * Hex-Rays decompilation failed for sub_4B2F5C94 @ 0x4B2F5C94
 * Reason: Hex-Rays returned no pseudocode for 0x4B2F5C94
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B2F5C94: mov     ecx, eax
 * 000000004B2F5C96: push    eax
 * 000000004B2F5C97: fstcw   [esp+4+var_4]
 * 000000004B2F5C9B: cmp     [esp+4+var_4], 27Fh
 * 000000004B2F5CA1: jz      short loc_4B2F5CA8
 * 000000004B2F5CA3: call    __load_CW
 * 000000004B2F5CA8: and     ecx, 7FF00000h
 * 000000004B2F5CAE: lea     edx, [esp+4+arg_0]
 * 000000004B2F5CB2: cmp     ecx, 7FF00000h
 * 000000004B2F5CB8: jz      loc_4B2F5D5B
 * 000000004B2F5CBE: call    __fload_withFB
 * 000000004B2F5CC3: jz      loc_4B2F5D57
 * 000000004B2F5CC9: test    eax, 7FF00000h
 * 000000004B2F5CCE: jz      loc_4B2F5DCA
 * 000000004B2F5CD4: mov     cl, byte ptr [esp+4+arg_4+3]
 * 000000004B2F5CD8: and     cl, 80h
 * 000000004B2F5CDB: jnz     loc_4B2F5E34
 * 000000004B2F5CE1: fyl2x
 * 000000004B2F5CE3: call    __twoToTOS
 * 000000004B2F5CE8: cmp     cl, 1
 * 000000004B2F5CEB: jnz     short loc_4B2F5CEF
 * 000000004B2F5CED: fchs
 * 000000004B2F5CEF: cmp     ___fastflag, 0
 * 000000004B2F5CF6: jnz     __fast_exit
 * 000000004B2F5CFC: lea     ecx, unk_4B3A37F8
 * 000000004B2F5D02: mov     edx, 1Dh
 * 000000004B2F5D07: jmp     __check_range_exit
 * 000000004B2F5D0C: cmp     ___fastflag, 0
 * 000000004B2F5D13: jnz     __fast_exit
 * 000000004B2F5D19: lea     ecx, unk_4B3A37F8
 * 000000004B2F5D1F: mov     edx, 1Dh
 * 000000004B2F5D24: call    __startTwoArgErrorHandling
 * 000000004B2F5D29: pop     edx
 * 000000004B2F5D2A: retn
 * 000000004B2F5D2B: lea     edx, [esp+4+arg_0]
 * 000000004B2F5D2F: call    __fload_withFB
 * 000000004B2F5D34: test    byte ptr [esp+4+arg_C+2], 8
 * 000000004B2F5D39: jnz     short loc_4B2F5D3E
 * 000000004B2F5D3B: inc     ecx
 * 000000004B2F5D3C: jmp     short loc_4B2F5D71
 * 000000004B2F5D3E: faddp   st(1), st
 * 000000004B2F5D40: mov     eax, 1
 * 000000004B2F5D45: jmp     short loc_4B2F5D0C
 * 000000004B2F5D47: test    byte ptr [esp+4+arg_4+2], 8
 * 000000004B2F5D4C: jnz     short loc_4B2F5D3E
 * 000000004B2F5D4E: faddp   st(1), st
 * 000000004B2F5D50: mov     eax, 7
 * 000000004B2F5D55: jmp     short loc_4B2F5D0C
 * 000000004B2F5D57: xor     ecx, ecx
 * 000000004B2F5D59: jmp     short loc_4B2F5D71
 * 000000004B2F5D5B: xor     ecx, ecx
 * 000000004B2F5D5D: and     eax, 0FFFFFh
 * 000000004B2F5D62: or      eax, [esp+4+arg_8]
 * 000000004B2F5D66: jnz     short loc_4B2F5D2B
 * 000000004B2F5D68: lea     edx, [esp+4+arg_0]
 * 000000004B2F5D6C: call    __fload_withFB
 * 000000004B2F5D71: mov     eax, [esp+4+arg_4]
 * 000000004B2F5D75: mov     edx, eax
 * 000000004B2F5D77: and     eax, 7FF00000h
 * 000000004B2F5D7C: and     edx, 0FFFFFh
 * 000000004B2F5D82: cmp     eax, 7FF00000h
 * 000000004B2F5D87: jnz     short loc_4B2F5D8F
 * 000000004B2F5D89: or      edx, [esp+4+arg_0]
 * 000000004B2F5D8D: jnz     short loc_4B2F5D47
 * 000000004B2F5D8F: test    ecx, ecx
 * 000000004B2F5D91: jnz     short loc_4B2F5D4E
 * 000000004B2F5D93: sub     esp, 74h
 * 000000004B2F5D96: mov     ecx, esp
 * 000000004B2F5D98: push    ecx; int
 * 000000004B2F5D99: sub     esp, 10h
 * 000000004B2F5D9C: fstp    [esp+8Ch+var_8C]; double
 * 000000004B2F5D9F: fstp    [esp+8Ch+var_84]; double
 * 000000004B2F5DA3: fsave   byte ptr [ecx+8]
 * 000000004B2F5DA7: call    __powhlp
 * 000000004B2F5DAC: add     esp, 10h
 * 000000004B2F5DAF: pop     ecx
 * 000000004B2F5DB0: frstor  byte ptr [ecx+8]
 * 000000004B2F5DB3: fld     qword ptr [ecx]
 * 000000004B2F5DB5: add     esp, 74h
 * 000000004B2F5DB8: test    eax, eax
 * 000000004B2F5DBA: jz      __fast_exit
 * 000000004B2F5DC0: mov     eax, 1
 * 000000004B2F5DC5: jmp     loc_4B2F5D0C
 * 000000004B2F5DCA: mov     eax, [esp+4+arg_4]
 * 000000004B2F5DCE: and     eax, 0FFFFFh
 * 000000004B2F5DD3: or      eax, [esp+4+arg_0]
 * 000000004B2F5DD7: jnz     loc_4B2F5CD4
 * 000000004B2F5DDD: fstp    st
 * 000000004B2F5DDF: mov     eax, [esp+4+arg_C]
 * 000000004B2F5DE3: and     eax, 7FFFFFFFh
 * 000000004B2F5DE8: or      eax, [esp+4+arg_8]
 * 000000004B2F5DEC: jz      short loc_4B2F5E2B
 * 000000004B2F5DEE: call    sub_4B2F5E59
 * 000000004B2F5DF3: mov     ch, byte ptr [esp+4+arg_4+3]
 * 000000004B2F5DF7: shr     ch, 7
 * 000000004B2F5DFA: test    [esp+4+arg_C+3], 80h
 * 000000004B2F5E02: jz      short loc_4B2F5E1A
 * 000000004B2F5E04: fld     __infinity
 * 000000004B2F5E0A: test    ch, cl
 * 000000004B2F5E0C: jz      short loc_4B2F5E10
 * 000000004B2F5E0E: fchs
 * 000000004B2F5E10: mov     eax, 2
 * 000000004B2F5E15: jmp     loc_4B2F5D0C
 * 000000004B2F5E1A: fldz
 * 000000004B2F5E1C: test    ch, cl
 * 000000004B2F5E1E: jz      __fast_exit
 * 000000004B2F5E24: fchs
 * 000000004B2F5E26: jmp     __fast_exit
 * 000000004B2F5E2B: fstp    st
 * 000000004B2F5E2D: fld1
 * 000000004B2F5E2F: jmp     __fast_exit
 * 000000004B2F5E34: fld     st(1)
 * 000000004B2F5E36: call    sub_4B2F5E59
 * 000000004B2F5E3B: fchs
 * 000000004B2F5E3D: test    cl, cl
 * 000000004B2F5E3F: jnz     loc_4B2F5CE1
 * 000000004B2F5E45: fstp    st
 * 000000004B2F5E47: fstp    st
 * 000000004B2F5E49: fld     __indefinite
 * 000000004B2F5E4F: mov     eax, 1
 * 000000004B2F5E54: jmp     loc_4B2F5D0C
 */
