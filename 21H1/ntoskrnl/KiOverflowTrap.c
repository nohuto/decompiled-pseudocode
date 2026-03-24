/*
 * XREFs of KiOverflowTrap @ 0x140401840
 * Callers:
 *     KiOverflowTrapShadow @ 0x140A11340 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x140401840 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x140407D80 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x140401840
 * Reason: Hex-Rays returned no pseudocode for 0x140401840
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140401840: sub     rsp, 8
 * 0000000140401844: push    rbp
 * 0000000140401845: sub     rsp, 158h
 * 000000014040184C: lea     rbp, [rsp+80h]
 * 0000000140401854: mov     [rbp+0E8h+var_13D], 1
 * 0000000140401858: mov     [rbp+0E8h+var_138], rax
 * 000000014040185C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140401860: mov     [rbp+0E8h+var_128], rdx
 * 0000000140401864: mov     [rbp+0E8h+var_120], r8
 * 0000000140401868: mov     [rbp+0E8h+var_118], r9
 * 000000014040186C: mov     [rbp+0E8h+var_110], r10
 * 0000000140401870: mov     [rbp+0E8h+var_108], r11
 * 0000000140401874: test    [rbp+0E8h+arg_0], 1
 * 000000014040187B: jnz     short loc_1404018AA
 * 000000014040187D: lfence
 * 0000000140401880: test    byte ptr gs:278h, 1
 * 0000000140401889: jnz     short loc_140401893
 * 000000014040188B: lfence
 * 000000014040188E: jmp     loc_140401AEF
 * 0000000140401893: movzx   eax, byte ptr gs:27Ah
 * 000000014040189C: mov     ecx, 48h ; 'H'
 * 00000001404018A1: xor     edx, edx
 * 00000001404018A3: wrmsr
 * 00000001404018A5: jmp     loc_140401AEF
 * 00000001404018AA: test    cs:KiKvaShadow, 1
 * 00000001404018B1: jnz     short loc_1404018B6
 * 00000001404018B3: swapgs
 * 00000001404018B6: lfence
 * 00000001404018B9: mov     r10, gs:188h
 * 00000001404018C2: mov     rcx, gs:188h
 * 00000001404018CB: mov     rcx, [rcx+220h]
 * 00000001404018D2: mov     rcx, [rcx+9E0h]
 * 00000001404018D9: mov     gs:270h, rcx
 * 00000001404018E2: mov     cl, gs:850h
 * 00000001404018EA: mov     gs:851h, cl
 * 00000001404018F2: mov     cl, gs:278h
 * 00000001404018FA: mov     gs:852h, cl
 * 0000000140401902: movzx   eax, byte ptr gs:27Bh
 * 000000014040190B: cmp     gs:27Ah, al
 * 0000000140401913: jz      short loc_140401926
 * 0000000140401915: mov     gs:27Ah, al
 * 000000014040191D: mov     ecx, 48h ; 'H'
 * 0000000140401922: xor     edx, edx
 * 0000000140401924: wrmsr
 * 0000000140401926: movzx   edx, byte ptr gs:278h
 * 000000014040192F: test    edx, 8
 * 0000000140401935: jz      short loc_14040194A
 * 0000000140401937: mov     eax, 1
 * 000000014040193C: xor     edx, edx
 * 000000014040193E: mov     ecx, 49h ; 'I'
 * 0000000140401943: wrmsr
 * 0000000140401945: jmp     loc_140401A88
 * 000000014040194A: test    edx, 2
 * 0000000140401950: jz      loc_140401A85
 * 0000000140401956: test    byte ptr gs:279h, 4
 * 000000014040195F: jnz     loc_140401A85
 * 0000000140401965: call    loc_140401A78
 * 000000014040196A: add     rsp, 8
 * 000000014040196E: call    loc_140401A81
 * 0000000140401973: add     rsp, 8
 * 0000000140401977: call    loc_14040196A
 * 000000014040197C: add     rsp, 8
 * 0000000140401980: call    loc_140401973
 * 0000000140401985: add     rsp, 8
 * 0000000140401989: call    loc_14040197C
 * 000000014040198E: add     rsp, 8
 * 0000000140401992: call    loc_140401985
 * 0000000140401997: add     rsp, 8
 * 000000014040199B: call    loc_14040198E
 * 00000001404019A0: add     rsp, 8
 * 00000001404019A4: call    loc_140401997
 * 00000001404019A9: add     rsp, 8
 * 00000001404019AD: call    loc_1404019A0
 * 00000001404019B2: add     rsp, 8
 * 00000001404019B6: call    loc_1404019A9
 * 00000001404019BB: add     rsp, 8
 * 00000001404019BF: call    loc_1404019B2
 * 00000001404019C4: add     rsp, 8
 * 00000001404019C8: call    loc_1404019BB
 * 00000001404019CD: add     rsp, 8
 * 00000001404019D1: call    loc_1404019C4
 * 00000001404019D6: add     rsp, 8
 * 00000001404019DA: call    loc_1404019CD
 * 00000001404019DF: add     rsp, 8
 * 00000001404019E3: call    loc_1404019D6
 * 00000001404019E8: add     rsp, 8
 * 00000001404019EC: call    loc_1404019DF
 * 00000001404019F1: add     rsp, 8
 * 00000001404019F5: call    loc_1404019E8
 * 00000001404019FA: add     rsp, 8
 * 00000001404019FE: call    loc_1404019F1
 * 0000000140401A03: add     rsp, 8
 * 0000000140401A07: call    loc_1404019FA
 * 0000000140401A0C: add     rsp, 8
 * 0000000140401A10: call    loc_140401A03
 * 0000000140401A15: add     rsp, 8
 * 0000000140401A19: call    loc_140401A0C
 * 0000000140401A1E: add     rsp, 8
 * 0000000140401A22: call    loc_140401A15
 * 0000000140401A27: add     rsp, 8
 * 0000000140401A2B: call    loc_140401A1E
 * 0000000140401A30: add     rsp, 8
 * 0000000140401A34: call    loc_140401A27
 * 0000000140401A39: add     rsp, 8
 * 0000000140401A3D: call    loc_140401A30
 * 0000000140401A42: add     rsp, 8
 * 0000000140401A46: call    loc_140401A39
 * 0000000140401A4B: add     rsp, 8
 * 0000000140401A4F: call    loc_140401A42
 * 0000000140401A54: add     rsp, 8
 * 0000000140401A58: call    loc_140401A4B
 * 0000000140401A5D: add     rsp, 8
 * 0000000140401A61: call    loc_140401A54
 * 0000000140401A66: add     rsp, 8
 * 0000000140401A6A: call    loc_140401A5D
 * 0000000140401A6F: add     rsp, 8
 * 0000000140401A73: call    loc_140401A66
 * 0000000140401A78: add     rsp, 8
 * 0000000140401A7C: call    loc_140401A6F
 * 0000000140401A81: add     rsp, 8
 * 0000000140401A85: lfence
 * 0000000140401A88: mov     byte ptr gs:853h, 0
 * 0000000140401A91: test    byte ptr [r10+3], 80h
 * 0000000140401A96: jz      short loc_140401ADA
 * 0000000140401A98: mov     ecx, 0C0000102h
 * 0000000140401A9D: rdmsr
 * 0000000140401A9F: shl     rdx, 20h
 * 0000000140401AA3: or      rax, rdx
 * 0000000140401AA6: cmp     rax, cs:MmUserProbeAddress
 * 0000000140401AAD: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140401AB5: cmp     [r10+0F0h], rax
 * 0000000140401ABC: jz      short loc_140401ADA
 * 0000000140401ABE: mov     rdx, [r10+1F0h]
 * 0000000140401AC5: bts     dword ptr [r10+74h], 8
 * 0000000140401ACB: dec     word ptr [r10+1E6h]
 * 0000000140401AD3: mov     [rdx+80h], rax
 * 0000000140401ADA: test    byte ptr [r10+3], 3
 * 0000000140401ADF: mov     [rbp+0E8h+var_68], 0
 * 0000000140401AE8: jz      short loc_140401AEF
 * 0000000140401AEA: call    KiSaveDebugRegisterState
 * 0000000140401AEF: cld
 * 0000000140401AF0: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140401AF4: ldmxcsr dword ptr gs:180h
 * 0000000140401AFD: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140401B01: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140401B05: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140401B09: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140401B0D: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140401B11: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140401B15: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140401B1C: jz      short loc_140401B2A
 * 0000000140401B1E: test    [rbp+0E8h+arg_0], 1
 * 0000000140401B25: jz      short loc_140401B2A
 * 0000000140401B27: stac
 * 0000000140401B2A: test    [rbp+0E8h+arg_8], 200h
 * 0000000140401B34: jz      short loc_140401B37
 * 0000000140401B36: sti
 * 0000000140401B37: mov     ecx, 0C0000095h
 * 0000000140401B3C: xor     edx, edx
 * 0000000140401B3E: mov     r8, [rbp+0E8h]
 * 0000000140401B45: dec     r8
 * 0000000140401B48: call    KiExceptionDispatch
 * 0000000140401B4D: nop
 * 0000000140401B4E: retn
 */
