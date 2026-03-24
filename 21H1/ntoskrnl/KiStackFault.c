/*
 * XREFs of KiStackFault @ 0x140403580
 * Callers:
 *     KiStackFaultShadow @ 0x140A11740 (KiStackFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x140403580 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x140407D80 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x140403580
 * Reason: Hex-Rays returned no pseudocode for 0x140403580
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140403580: push    rbp
 * 0000000140403581: sub     rsp, 158h
 * 0000000140403588: lea     rbp, [rsp+80h]
 * 0000000140403590: mov     [rbp+0D8h+var_12D], 1
 * 0000000140403594: mov     [rbp+0D8h+var_128], rax
 * 0000000140403598: mov     [rbp+0D8h+var_120], rcx
 * 000000014040359C: mov     [rbp+0D8h+var_118], rdx
 * 00000001404035A0: mov     [rbp+0D8h+var_110], r8
 * 00000001404035A4: mov     [rbp+0D8h+var_108], r9
 * 00000001404035A8: mov     [rbp+0D8h+var_100], r10
 * 00000001404035AC: mov     [rbp+0D8h+var_F8], r11
 * 00000001404035B0: test    [rbp+0D8h+arg_8], 1
 * 00000001404035B7: jnz     short loc_1404035E6
 * 00000001404035B9: lfence
 * 00000001404035BC: test    byte ptr gs:278h, 1
 * 00000001404035C5: jnz     short loc_1404035CF
 * 00000001404035C7: lfence
 * 00000001404035CA: jmp     loc_14040382B
 * 00000001404035CF: movzx   eax, byte ptr gs:27Ah
 * 00000001404035D8: mov     ecx, 48h ; 'H'
 * 00000001404035DD: xor     edx, edx
 * 00000001404035DF: wrmsr
 * 00000001404035E1: jmp     loc_14040382B
 * 00000001404035E6: test    cs:KiKvaShadow, 1
 * 00000001404035ED: jnz     short loc_1404035F2
 * 00000001404035EF: swapgs
 * 00000001404035F2: lfence
 * 00000001404035F5: mov     r10, gs:188h
 * 00000001404035FE: mov     rcx, gs:188h
 * 0000000140403607: mov     rcx, [rcx+220h]
 * 000000014040360E: mov     rcx, [rcx+9E0h]
 * 0000000140403615: mov     gs:270h, rcx
 * 000000014040361E: mov     cl, gs:850h
 * 0000000140403626: mov     gs:851h, cl
 * 000000014040362E: mov     cl, gs:278h
 * 0000000140403636: mov     gs:852h, cl
 * 000000014040363E: movzx   eax, byte ptr gs:27Bh
 * 0000000140403647: cmp     gs:27Ah, al
 * 000000014040364F: jz      short loc_140403662
 * 0000000140403651: mov     gs:27Ah, al
 * 0000000140403659: mov     ecx, 48h ; 'H'
 * 000000014040365E: xor     edx, edx
 * 0000000140403660: wrmsr
 * 0000000140403662: movzx   edx, byte ptr gs:278h
 * 000000014040366B: test    edx, 8
 * 0000000140403671: jz      short loc_140403686
 * 0000000140403673: mov     eax, 1
 * 0000000140403678: xor     edx, edx
 * 000000014040367A: mov     ecx, 49h ; 'I'
 * 000000014040367F: wrmsr
 * 0000000140403681: jmp     loc_1404037C4
 * 0000000140403686: test    edx, 2
 * 000000014040368C: jz      loc_1404037C1
 * 0000000140403692: test    byte ptr gs:279h, 4
 * 000000014040369B: jnz     loc_1404037C1
 * 00000001404036A1: call    loc_1404037B4
 * 00000001404036A6: add     rsp, 8
 * 00000001404036AA: call    loc_1404037BD
 * 00000001404036AF: add     rsp, 8
 * 00000001404036B3: call    loc_1404036A6
 * 00000001404036B8: add     rsp, 8
 * 00000001404036BC: call    loc_1404036AF
 * 00000001404036C1: add     rsp, 8
 * 00000001404036C5: call    loc_1404036B8
 * 00000001404036CA: add     rsp, 8
 * 00000001404036CE: call    loc_1404036C1
 * 00000001404036D3: add     rsp, 8
 * 00000001404036D7: call    loc_1404036CA
 * 00000001404036DC: add     rsp, 8
 * 00000001404036E0: call    loc_1404036D3
 * 00000001404036E5: add     rsp, 8
 * 00000001404036E9: call    loc_1404036DC
 * 00000001404036EE: add     rsp, 8
 * 00000001404036F2: call    loc_1404036E5
 * 00000001404036F7: add     rsp, 8
 * 00000001404036FB: call    loc_1404036EE
 * 0000000140403700: add     rsp, 8
 * 0000000140403704: call    loc_1404036F7
 * 0000000140403709: add     rsp, 8
 * 000000014040370D: call    loc_140403700
 * 0000000140403712: add     rsp, 8
 * 0000000140403716: call    loc_140403709
 * 000000014040371B: add     rsp, 8
 * 000000014040371F: call    loc_140403712
 * 0000000140403724: add     rsp, 8
 * 0000000140403728: call    loc_14040371B
 * 000000014040372D: add     rsp, 8
 * 0000000140403731: call    loc_140403724
 * 0000000140403736: add     rsp, 8
 * 000000014040373A: call    loc_14040372D
 * 000000014040373F: add     rsp, 8
 * 0000000140403743: call    loc_140403736
 * 0000000140403748: add     rsp, 8
 * 000000014040374C: call    loc_14040373F
 * 0000000140403751: add     rsp, 8
 * 0000000140403755: call    loc_140403748
 * 000000014040375A: add     rsp, 8
 * 000000014040375E: call    loc_140403751
 * 0000000140403763: add     rsp, 8
 * 0000000140403767: call    loc_14040375A
 * 000000014040376C: add     rsp, 8
 * 0000000140403770: call    loc_140403763
 * 0000000140403775: add     rsp, 8
 * 0000000140403779: call    loc_14040376C
 * 000000014040377E: add     rsp, 8
 * 0000000140403782: call    loc_140403775
 * 0000000140403787: add     rsp, 8
 * 000000014040378B: call    loc_14040377E
 * 0000000140403790: add     rsp, 8
 * 0000000140403794: call    loc_140403787
 * 0000000140403799: add     rsp, 8
 * 000000014040379D: call    loc_140403790
 * 00000001404037A2: add     rsp, 8
 * 00000001404037A6: call    loc_140403799
 * 00000001404037AB: add     rsp, 8
 * 00000001404037AF: call    loc_1404037A2
 * 00000001404037B4: add     rsp, 8
 * 00000001404037B8: call    loc_1404037AB
 * 00000001404037BD: add     rsp, 8
 * 00000001404037C1: lfence
 * 00000001404037C4: mov     byte ptr gs:853h, 0
 * 00000001404037CD: test    byte ptr [r10+3], 80h
 * 00000001404037D2: jz      short loc_140403816
 * 00000001404037D4: mov     ecx, 0C0000102h
 * 00000001404037D9: rdmsr
 * 00000001404037DB: shl     rdx, 20h
 * 00000001404037DF: or      rax, rdx
 * 00000001404037E2: cmp     rax, cs:MmUserProbeAddress
 * 00000001404037E9: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001404037F1: cmp     [r10+0F0h], rax
 * 00000001404037F8: jz      short loc_140403816
 * 00000001404037FA: mov     rdx, [r10+1F0h]
 * 0000000140403801: bts     dword ptr [r10+74h], 8
 * 0000000140403807: dec     word ptr [r10+1E6h]
 * 000000014040380F: mov     [rdx+80h], rax
 * 0000000140403816: test    byte ptr [r10+3], 3
 * 000000014040381B: mov     [rbp+0D8h+var_58], 0
 * 0000000140403824: jz      short loc_14040382B
 * 0000000140403826: call    KiSaveDebugRegisterState
 * 000000014040382B: cld
 * 000000014040382C: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140403830: ldmxcsr dword ptr gs:180h
 * 0000000140403839: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014040383D: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140403841: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140403845: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140403849: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014040384D: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140403851: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140403858: jz      short loc_140403866
 * 000000014040385A: test    [rbp+0D8h+arg_8], 1
 * 0000000140403861: jz      short loc_140403866
 * 0000000140403863: stac
 * 0000000140403866: mov     eax, [rbp+0E0h]
 * 000000014040386C: test    [rbp+0D8h+arg_10], 200h
 * 0000000140403876: jz      short loc_140403879
 * 0000000140403878: sti
 * 0000000140403879: mov     ecx, 0C0000005h
 * 000000014040387E: mov     edx, 2
 * 0000000140403883: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040388A: mov     r9d, [rbp+0E0h]
 * 0000000140403891: or      r9d, 3
 * 0000000140403895: and     r9d, 0FFFFh
 * 000000014040389C: test    [rbp+0D8h+arg_8], 1
 * 00000001404038A3: jnz     short loc_1404038A9
 * 00000001404038A5: or      r9, 0FFFFFFFFFFFFFFFFh
 * 00000001404038A9: xor     r10, r10
 * 00000001404038AC: call    KiExceptionDispatch
 * 00000001404038B1: nop
 * 00000001404038B2: retn
 */
