/*
 * XREFs of __check_range_exit @ 0x4B2FB049
 * Callers:
 *     sub_4B2F5C94 @ 0x4B2F5C94 (sub_4B2F5C94.c)
 * Callees:
 *     __startTwoArgErrorHandling @ 0x4B2FB0F0 (__startTwoArgErrorHandling.c)
 *     __startOneArgErrorHandling @ 0x4B2FB107 (__startOneArgErrorHandling.c)
 */

/*
 * Hex-Rays decompilation failed for __check_range_exit @ 0x4B2FB049
 * Reason: Hex-Rays returned no pseudocode for 0x4B2FB049
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B2FB049: sub     esp, 8
 * 000000004B2FB04C: fst     [esp+8+var_8]
 * 000000004B2FB04F: mov     eax, dword ptr [esp+8+var_8+4]
 * 000000004B2FB053: add     esp, 8
 * 000000004B2FB056: and     eax, 7FF00000h
 * 000000004B2FB05B: jz      short loc_4B2FB09A
 * 000000004B2FB05D: cmp     eax, 7FF00000h
 * 000000004B2FB062: jz      short loc_4B2FB0C3
 * 000000004B2FB064: mov     ax, [esp+0]
 * 000000004B2FB068: cmp     ax, 27Fh
 * 000000004B2FB06C: jz      short loc_4B2FB098
 * 000000004B2FB06E: and     ax, 20h
 * 000000004B2FB072: jnz     short loc_4B2FB095
 * 000000004B2FB074: fstsw   ax
 * 000000004B2FB077: and     ax, 20h
 * 000000004B2FB07B: jz      short loc_4B2FB095
 * 000000004B2FB07D: mov     eax, 8
 * 000000004B2FB082: cmp     edx, 1Dh
 * 000000004B2FB085: jz      short loc_4B2FB08E
 * 000000004B2FB087: call    __startOneArgErrorHandling
 * 000000004B2FB08C: pop     edx
 * 000000004B2FB08D: retn
 * 000000004B2FB08E: call    __startTwoArgErrorHandling
 * 000000004B2FB093: pop     edx
 * 000000004B2FB094: retn
 * 000000004B2FB095: fldcw   word ptr [esp+0]
 * 000000004B2FB098: pop     edx
 * 000000004B2FB099: retn
 * 000000004B2FB09A: fld     ds:dbl_4B285F0C
 * 000000004B2FB0A0: fxch    st(1)
 * 000000004B2FB0A2: fscale
 * 000000004B2FB0A4: fstp    st(1)
 * 000000004B2FB0A6: fld     st
 * 000000004B2FB0A8: fabs
 * 000000004B2FB0AA: fcomp   ds:dbl_4B285EFC
 * 000000004B2FB0B0: fstsw   ax
 * 000000004B2FB0B3: sahf
 * 000000004B2FB0B4: mov     eax, 4
 * 000000004B2FB0B9: jnb     short loc_4B2FB082
 * 000000004B2FB0BB: fmul    ds:dbl_4B285F1C
 * 000000004B2FB0C1: jmp     short loc_4B2FB082
 * 000000004B2FB0C3: fld     ds:dbl_4B285F04
 * 000000004B2FB0C9: fxch    st(1)
 * 000000004B2FB0CB: fscale
 * 000000004B2FB0CD: fstp    st(1)
 * 000000004B2FB0CF: fld     st
 * 000000004B2FB0D1: fabs
 * 000000004B2FB0D3: fcomp   ds:dbl_4B285EF4
 * 000000004B2FB0D9: fstsw   ax
 * 000000004B2FB0DC: sahf
 * 000000004B2FB0DD: mov     eax, 3
 * 000000004B2FB0E2: jbe     short loc_4B2FB082
 * 000000004B2FB0E4: fmul    ds:dbl_4B285F14
 * 000000004B2FB0EA: jmp     short loc_4B2FB082
 */
