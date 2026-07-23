/*
 * XREFs of KiStackFault @ 0x14040D740
 * Callers:
 *     KiStackFaultShadow @ 0x140A15740 (KiStackFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x14040D740 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x1404128C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x14040D740
 * Reason: Hex-Rays returned no pseudocode for 0x14040D740
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040D740: push    rbp
 * 000000014040D741: sub     rsp, 158h
 * 000000014040D748: lea     rbp, [rsp+80h]
 * 000000014040D750: mov     [rbp+0D8h+var_12D], 1
 * 000000014040D754: mov     [rbp+0D8h+var_128], rax
 * 000000014040D758: mov     [rbp+0D8h+var_120], rcx
 * 000000014040D75C: mov     [rbp+0D8h+var_118], rdx
 * 000000014040D760: mov     [rbp+0D8h+var_110], r8
 * 000000014040D764: mov     [rbp+0D8h+var_108], r9
 * 000000014040D768: mov     [rbp+0D8h+var_100], r10
 * 000000014040D76C: mov     [rbp+0D8h+var_F8], r11
 * 000000014040D770: test    [rbp+0D8h+arg_8], 1
 * 000000014040D777: jnz     short loc_14040D7A8
 * 000000014040D779: lfence
 * 000000014040D77C: test    word ptr gs:860h, 1
 * 000000014040D787: jnz     short loc_14040D791
 * 000000014040D789: lfence
 * 000000014040D78C: jmp     loc_14040D9FA
 * 000000014040D791: movzx   eax, word ptr gs:864h
 * 000000014040D79A: mov     ecx, 48h ; 'H'
 * 000000014040D79F: xor     edx, edx
 * 000000014040D7A1: wrmsr
 * 000000014040D7A3: jmp     loc_14040D9FA
 * 000000014040D7A8: test    cs:KiKvaShadow, 1
 * 000000014040D7AF: jnz     short loc_14040D7B4
 * 000000014040D7B1: swapgs
 * 000000014040D7B4: lfence
 * 000000014040D7B7: mov     r10, gs:188h
 * 000000014040D7C0: mov     rcx, gs:188h
 * 000000014040D7C9: mov     rcx, [rcx+220h]
 * 000000014040D7D0: mov     rcx, [rcx+9E0h]
 * 000000014040D7D7: mov     gs:858h, rcx
 * 000000014040D7E0: mov     cx, gs:850h
 * 000000014040D7E9: mov     gs:852h, cx
 * 000000014040D7F2: mov     cx, gs:860h
 * 000000014040D7FB: mov     gs:854h, cx
 * 000000014040D804: movzx   eax, word ptr gs:866h
 * 000000014040D80D: cmp     gs:864h, ax
 * 000000014040D816: jz      short loc_14040D82A
 * 000000014040D818: mov     gs:864h, ax
 * 000000014040D821: mov     ecx, 48h ; 'H'
 * 000000014040D826: xor     edx, edx
 * 000000014040D828: wrmsr
 * 000000014040D82A: movzx   edx, word ptr gs:860h
 * 000000014040D833: test    edx, 8
 * 000000014040D839: jz      short loc_14040D852
 * 000000014040D83B: mov     eax, 1
 * 000000014040D840: xor     edx, edx
 * 000000014040D842: mov     ecx, 49h ; 'I'
 * 000000014040D847: wrmsr
 * 000000014040D849: movzx   edx, word ptr gs:860h
 * 000000014040D852: test    edx, 2
 * 000000014040D858: jz      loc_14040D983
 * 000000014040D85E: call    loc_14040D971
 * 000000014040D863: add     rsp, 8
 * 000000014040D867: call    loc_14040D97A
 * 000000014040D86C: add     rsp, 8
 * 000000014040D870: call    loc_14040D863
 * 000000014040D875: add     rsp, 8
 * 000000014040D879: call    loc_14040D86C
 * 000000014040D87E: add     rsp, 8
 * 000000014040D882: call    loc_14040D875
 * 000000014040D887: add     rsp, 8
 * 000000014040D88B: call    loc_14040D87E
 * 000000014040D890: add     rsp, 8
 * 000000014040D894: call    loc_14040D887
 * 000000014040D899: add     rsp, 8
 * 000000014040D89D: call    loc_14040D890
 * 000000014040D8A2: add     rsp, 8
 * 000000014040D8A6: call    loc_14040D899
 * 000000014040D8AB: add     rsp, 8
 * 000000014040D8AF: call    loc_14040D8A2
 * 000000014040D8B4: add     rsp, 8
 * 000000014040D8B8: call    loc_14040D8AB
 * 000000014040D8BD: add     rsp, 8
 * 000000014040D8C1: call    loc_14040D8B4
 * 000000014040D8C6: add     rsp, 8
 * 000000014040D8CA: call    loc_14040D8BD
 * 000000014040D8CF: add     rsp, 8
 * 000000014040D8D3: call    loc_14040D8C6
 * 000000014040D8D8: add     rsp, 8
 * 000000014040D8DC: call    loc_14040D8CF
 * 000000014040D8E1: add     rsp, 8
 * 000000014040D8E5: call    loc_14040D8D8
 * 000000014040D8EA: add     rsp, 8
 * 000000014040D8EE: call    loc_14040D8E1
 * 000000014040D8F3: add     rsp, 8
 * 000000014040D8F7: call    loc_14040D8EA
 * 000000014040D8FC: add     rsp, 8
 * 000000014040D900: call    loc_14040D8F3
 * 000000014040D905: add     rsp, 8
 * 000000014040D909: call    loc_14040D8FC
 * 000000014040D90E: add     rsp, 8
 * 000000014040D912: call    loc_14040D905
 * 000000014040D917: add     rsp, 8
 * 000000014040D91B: call    loc_14040D90E
 * 000000014040D920: add     rsp, 8
 * 000000014040D924: call    loc_14040D917
 * 000000014040D929: add     rsp, 8
 * 000000014040D92D: call    loc_14040D920
 * 000000014040D932: add     rsp, 8
 * 000000014040D936: call    loc_14040D929
 * 000000014040D93B: add     rsp, 8
 * 000000014040D93F: call    loc_14040D932
 * 000000014040D944: add     rsp, 8
 * 000000014040D948: call    loc_14040D93B
 * 000000014040D94D: add     rsp, 8
 * 000000014040D951: call    loc_14040D944
 * 000000014040D956: add     rsp, 8
 * 000000014040D95A: call    loc_14040D94D
 * 000000014040D95F: add     rsp, 8
 * 000000014040D963: call    loc_14040D956
 * 000000014040D968: add     rsp, 8
 * 000000014040D96C: call    loc_14040D95F
 * 000000014040D971: add     rsp, 8
 * 000000014040D975: call    loc_14040D968
 * 000000014040D97A: add     rsp, 8
 * 000000014040D97E: mov     eax, 0DADAh
 * 000000014040D983: test    edx, 200h
 * 000000014040D989: jz      short loc_14040D990
 * 000000014040D98B: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040D990: lfence
 * 000000014040D993: mov     byte ptr gs:856h, 0
 * 000000014040D99C: test    byte ptr [r10+3], 80h
 * 000000014040D9A1: jz      short loc_14040D9E5
 * 000000014040D9A3: mov     ecx, 0C0000102h
 * 000000014040D9A8: rdmsr
 * 000000014040D9AA: shl     rdx, 20h
 * 000000014040D9AE: or      rax, rdx
 * 000000014040D9B1: cmp     rax, cs:MmUserProbeAddress
 * 000000014040D9B8: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040D9C0: cmp     [r10+0F0h], rax
 * 000000014040D9C7: jz      short loc_14040D9E5
 * 000000014040D9C9: mov     rdx, [r10+1F0h]
 * 000000014040D9D0: bts     dword ptr [r10+74h], 8
 * 000000014040D9D6: dec     word ptr [r10+1E6h]
 * 000000014040D9DE: mov     [rdx+80h], rax
 * 000000014040D9E5: test    byte ptr [r10+3], 3
 * 000000014040D9EA: mov     [rbp+0D8h+var_58], 0
 * 000000014040D9F3: jz      short loc_14040D9FA
 * 000000014040D9F5: call    KiSaveDebugRegisterState
 * 000000014040D9FA: cld
 * 000000014040D9FB: stmxcsr [rbp+0D8h+var_12C]
 * 000000014040D9FF: ldmxcsr dword ptr gs:180h
 * 000000014040DA08: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014040DA0C: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014040DA10: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014040DA14: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014040DA18: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014040DA1C: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014040DA20: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040DA27: jz      short loc_14040DA35
 * 000000014040DA29: test    [rbp+0D8h+arg_8], 1
 * 000000014040DA30: jz      short loc_14040DA35
 * 000000014040DA32: stac
 * 000000014040DA35: mov     eax, [rbp+0E0h]
 * 000000014040DA3B: test    [rbp+0D8h+arg_10], 200h
 * 000000014040DA45: jz      short loc_14040DA48
 * 000000014040DA47: sti
 * 000000014040DA48: mov     ecx, 0C0000005h
 * 000000014040DA4D: mov     edx, 2
 * 000000014040DA52: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040DA59: mov     r9d, [rbp+0E0h]
 * 000000014040DA60: or      r9d, 3
 * 000000014040DA64: and     r9d, 0FFFFh
 * 000000014040DA6B: test    [rbp+0D8h+arg_8], 1
 * 000000014040DA72: jnz     short loc_14040DA78
 * 000000014040DA74: or      r9, 0FFFFFFFFFFFFFFFFh
 * 000000014040DA78: xor     r10, r10
 * 000000014040DA7B: call    KiExceptionDispatch
 * 000000014040DA80: nop
 * 000000014040DA81: retn
 */
