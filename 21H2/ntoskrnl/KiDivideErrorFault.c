/*
 * XREFs of KiDivideErrorFault @ 0x14040A700
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x140A15100 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x14040A700 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x1404128C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x14040A700
 * Reason: Hex-Rays returned no pseudocode for 0x14040A700
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040A700: sub     rsp, 8
 * 000000014040A704: push    rbp
 * 000000014040A705: sub     rsp, 158h
 * 000000014040A70C: lea     rbp, [rsp+80h]
 * 000000014040A714: mov     [rbp+0E8h+var_13D], 1
 * 000000014040A718: mov     [rbp+0E8h+var_138], rax
 * 000000014040A71C: mov     [rbp+0E8h+var_130], rcx
 * 000000014040A720: mov     [rbp+0E8h+var_128], rdx
 * 000000014040A724: mov     [rbp+0E8h+var_120], r8
 * 000000014040A728: mov     [rbp+0E8h+var_118], r9
 * 000000014040A72C: mov     [rbp+0E8h+var_110], r10
 * 000000014040A730: mov     [rbp+0E8h+var_108], r11
 * 000000014040A734: test    [rbp+0E8h+arg_0], 1
 * 000000014040A73B: jnz     short loc_14040A76C
 * 000000014040A73D: lfence
 * 000000014040A740: test    word ptr gs:860h, 1
 * 000000014040A74B: jnz     short loc_14040A755
 * 000000014040A74D: lfence
 * 000000014040A750: jmp     loc_14040A9BE
 * 000000014040A755: movzx   eax, word ptr gs:864h
 * 000000014040A75E: mov     ecx, 48h ; 'H'
 * 000000014040A763: xor     edx, edx
 * 000000014040A765: wrmsr
 * 000000014040A767: jmp     loc_14040A9BE
 * 000000014040A76C: test    cs:KiKvaShadow, 1
 * 000000014040A773: jnz     short loc_14040A778
 * 000000014040A775: swapgs
 * 000000014040A778: lfence
 * 000000014040A77B: mov     r10, gs:188h
 * 000000014040A784: mov     rcx, gs:188h
 * 000000014040A78D: mov     rcx, [rcx+220h]
 * 000000014040A794: mov     rcx, [rcx+9E0h]
 * 000000014040A79B: mov     gs:858h, rcx
 * 000000014040A7A4: mov     cx, gs:850h
 * 000000014040A7AD: mov     gs:852h, cx
 * 000000014040A7B6: mov     cx, gs:860h
 * 000000014040A7BF: mov     gs:854h, cx
 * 000000014040A7C8: movzx   eax, word ptr gs:866h
 * 000000014040A7D1: cmp     gs:864h, ax
 * 000000014040A7DA: jz      short loc_14040A7EE
 * 000000014040A7DC: mov     gs:864h, ax
 * 000000014040A7E5: mov     ecx, 48h ; 'H'
 * 000000014040A7EA: xor     edx, edx
 * 000000014040A7EC: wrmsr
 * 000000014040A7EE: movzx   edx, word ptr gs:860h
 * 000000014040A7F7: test    edx, 8
 * 000000014040A7FD: jz      short loc_14040A816
 * 000000014040A7FF: mov     eax, 1
 * 000000014040A804: xor     edx, edx
 * 000000014040A806: mov     ecx, 49h ; 'I'
 * 000000014040A80B: wrmsr
 * 000000014040A80D: movzx   edx, word ptr gs:860h
 * 000000014040A816: test    edx, 2
 * 000000014040A81C: jz      loc_14040A947
 * 000000014040A822: call    loc_14040A935
 * 000000014040A827: add     rsp, 8
 * 000000014040A82B: call    loc_14040A93E
 * 000000014040A830: add     rsp, 8
 * 000000014040A834: call    loc_14040A827
 * 000000014040A839: add     rsp, 8
 * 000000014040A83D: call    loc_14040A830
 * 000000014040A842: add     rsp, 8
 * 000000014040A846: call    loc_14040A839
 * 000000014040A84B: add     rsp, 8
 * 000000014040A84F: call    loc_14040A842
 * 000000014040A854: add     rsp, 8
 * 000000014040A858: call    loc_14040A84B
 * 000000014040A85D: add     rsp, 8
 * 000000014040A861: call    loc_14040A854
 * 000000014040A866: add     rsp, 8
 * 000000014040A86A: call    loc_14040A85D
 * 000000014040A86F: add     rsp, 8
 * 000000014040A873: call    loc_14040A866
 * 000000014040A878: add     rsp, 8
 * 000000014040A87C: call    loc_14040A86F
 * 000000014040A881: add     rsp, 8
 * 000000014040A885: call    loc_14040A878
 * 000000014040A88A: add     rsp, 8
 * 000000014040A88E: call    loc_14040A881
 * 000000014040A893: add     rsp, 8
 * 000000014040A897: call    loc_14040A88A
 * 000000014040A89C: add     rsp, 8
 * 000000014040A8A0: call    loc_14040A893
 * 000000014040A8A5: add     rsp, 8
 * 000000014040A8A9: call    loc_14040A89C
 * 000000014040A8AE: add     rsp, 8
 * 000000014040A8B2: call    loc_14040A8A5
 * 000000014040A8B7: add     rsp, 8
 * 000000014040A8BB: call    loc_14040A8AE
 * 000000014040A8C0: add     rsp, 8
 * 000000014040A8C4: call    loc_14040A8B7
 * 000000014040A8C9: add     rsp, 8
 * 000000014040A8CD: call    loc_14040A8C0
 * 000000014040A8D2: add     rsp, 8
 * 000000014040A8D6: call    loc_14040A8C9
 * 000000014040A8DB: add     rsp, 8
 * 000000014040A8DF: call    loc_14040A8D2
 * 000000014040A8E4: add     rsp, 8
 * 000000014040A8E8: call    loc_14040A8DB
 * 000000014040A8ED: add     rsp, 8
 * 000000014040A8F1: call    loc_14040A8E4
 * 000000014040A8F6: add     rsp, 8
 * 000000014040A8FA: call    loc_14040A8ED
 * 000000014040A8FF: add     rsp, 8
 * 000000014040A903: call    loc_14040A8F6
 * 000000014040A908: add     rsp, 8
 * 000000014040A90C: call    loc_14040A8FF
 * 000000014040A911: add     rsp, 8
 * 000000014040A915: call    loc_14040A908
 * 000000014040A91A: add     rsp, 8
 * 000000014040A91E: call    loc_14040A911
 * 000000014040A923: add     rsp, 8
 * 000000014040A927: call    loc_14040A91A
 * 000000014040A92C: add     rsp, 8
 * 000000014040A930: call    loc_14040A923
 * 000000014040A935: add     rsp, 8
 * 000000014040A939: call    loc_14040A92C
 * 000000014040A93E: add     rsp, 8
 * 000000014040A942: mov     eax, 0DADAh
 * 000000014040A947: test    edx, 200h
 * 000000014040A94D: jz      short loc_14040A954
 * 000000014040A94F: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040A954: lfence
 * 000000014040A957: mov     byte ptr gs:856h, 0
 * 000000014040A960: test    byte ptr [r10+3], 80h
 * 000000014040A965: jz      short loc_14040A9A9
 * 000000014040A967: mov     ecx, 0C0000102h
 * 000000014040A96C: rdmsr
 * 000000014040A96E: shl     rdx, 20h
 * 000000014040A972: or      rax, rdx
 * 000000014040A975: cmp     rax, cs:MmUserProbeAddress
 * 000000014040A97C: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040A984: cmp     [r10+0F0h], rax
 * 000000014040A98B: jz      short loc_14040A9A9
 * 000000014040A98D: mov     rdx, [r10+1F0h]
 * 000000014040A994: bts     dword ptr [r10+74h], 8
 * 000000014040A99A: dec     word ptr [r10+1E6h]
 * 000000014040A9A2: mov     [rdx+80h], rax
 * 000000014040A9A9: test    byte ptr [r10+3], 3
 * 000000014040A9AE: mov     [rbp+0E8h+var_68], 0
 * 000000014040A9B7: jz      short loc_14040A9BE
 * 000000014040A9B9: call    KiSaveDebugRegisterState
 * 000000014040A9BE: cld
 * 000000014040A9BF: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040A9C3: ldmxcsr dword ptr gs:180h
 * 000000014040A9CC: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014040A9D0: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040A9D4: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040A9D8: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040A9DC: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040A9E0: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040A9E4: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040A9EB: jz      short loc_14040A9F9
 * 000000014040A9ED: test    [rbp+0E8h+arg_0], 1
 * 000000014040A9F4: jz      short loc_14040A9F9
 * 000000014040A9F6: stac
 * 000000014040A9F9: test    [rbp+0E8h+arg_8], 200h
 * 000000014040AA03: jz      short loc_14040AA06
 * 000000014040AA05: sti
 * 000000014040AA06: mov     ecx, 10000003h
 * 000000014040AA0B: xor     edx, edx
 * 000000014040AA0D: mov     r8, [rbp+0E8h]
 * 000000014040AA14: call    KiExceptionDispatch
 * 000000014040AA19: nop
 * 000000014040AA1A: retn
 */
