/*
 * XREFs of KiRaiseAssertion @ 0x140406540
 * Callers:
 *     KiRaiseAssertionShadow @ 0x140A11DC0 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x140406540 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x140407D80 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x140406540
 * Reason: Hex-Rays returned no pseudocode for 0x140406540
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140406540: sub     qword ptr [rsp+0], 2
 * 0000000140406545: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014040654B: jnz     short loc_140406552
 * 000000014040654D: and     dword ptr [rsp+4], 0
 * 0000000140406552: sub     rsp, 8
 * 0000000140406556: push    rbp
 * 0000000140406557: sub     rsp, 158h
 * 000000014040655E: lea     rbp, [rsp+168h+var_E8]
 * 0000000140406566: mov     byte ptr [rbp-55h], 1
 * 000000014040656A: mov     [rbp-50h], rax
 * 000000014040656E: mov     [rbp-48h], rcx
 * 0000000140406572: mov     [rbp-40h], rdx
 * 0000000140406576: mov     [rbp-38h], r8
 * 000000014040657A: mov     [rbp-30h], r9
 * 000000014040657E: mov     [rbp-28h], r10
 * 0000000140406582: mov     [rbp-20h], r11
 * 0000000140406586: test    byte ptr [rbp+0F0h], 1
 * 000000014040658D: jnz     short loc_1404065BC
 * 000000014040658F: lfence
 * 0000000140406592: test    byte ptr gs:278h, 1
 * 000000014040659B: jnz     short loc_1404065A5
 * 000000014040659D: lfence
 * 00000001404065A0: jmp     loc_140406801
 * 00000001404065A5: movzx   eax, byte ptr gs:27Ah
 * 00000001404065AE: mov     ecx, 48h ; 'H'
 * 00000001404065B3: xor     edx, edx
 * 00000001404065B5: wrmsr
 * 00000001404065B7: jmp     loc_140406801
 * 00000001404065BC: test    cs:KiKvaShadow, 1
 * 00000001404065C3: jnz     short loc_1404065C8
 * 00000001404065C5: swapgs
 * 00000001404065C8: lfence
 * 00000001404065CB: mov     r10, gs:188h
 * 00000001404065D4: mov     rcx, gs:188h
 * 00000001404065DD: mov     rcx, [rcx+220h]
 * 00000001404065E4: mov     rcx, [rcx+9E0h]
 * 00000001404065EB: mov     gs:270h, rcx
 * 00000001404065F4: mov     cl, gs:850h
 * 00000001404065FC: mov     gs:851h, cl
 * 0000000140406604: mov     cl, gs:278h
 * 000000014040660C: mov     gs:852h, cl
 * 0000000140406614: movzx   eax, byte ptr gs:27Bh
 * 000000014040661D: cmp     gs:27Ah, al
 * 0000000140406625: jz      short loc_140406638
 * 0000000140406627: mov     gs:27Ah, al
 * 000000014040662F: mov     ecx, 48h ; 'H'
 * 0000000140406634: xor     edx, edx
 * 0000000140406636: wrmsr
 * 0000000140406638: movzx   edx, byte ptr gs:278h
 * 0000000140406641: test    edx, 8
 * 0000000140406647: jz      short loc_14040665C
 * 0000000140406649: mov     eax, 1
 * 000000014040664E: xor     edx, edx
 * 0000000140406650: mov     ecx, 49h ; 'I'
 * 0000000140406655: wrmsr
 * 0000000140406657: jmp     loc_14040679A
 * 000000014040665C: test    edx, 2
 * 0000000140406662: jz      loc_140406797
 * 0000000140406668: test    byte ptr gs:279h, 4
 * 0000000140406671: jnz     loc_140406797
 * 0000000140406677: call    loc_14040678A
 * 000000014040667C: add     rsp, 8
 * 0000000140406680: call    loc_140406793
 * 0000000140406685: add     rsp, 8
 * 0000000140406689: call    loc_14040667C
 * 000000014040668E: add     rsp, 8
 * 0000000140406692: call    loc_140406685
 * 0000000140406697: add     rsp, 8
 * 000000014040669B: call    loc_14040668E
 * 00000001404066A0: add     rsp, 8
 * 00000001404066A4: call    loc_140406697
 * 00000001404066A9: add     rsp, 8
 * 00000001404066AD: call    loc_1404066A0
 * 00000001404066B2: add     rsp, 8
 * 00000001404066B6: call    loc_1404066A9
 * 00000001404066BB: add     rsp, 8
 * 00000001404066BF: call    loc_1404066B2
 * 00000001404066C4: add     rsp, 8
 * 00000001404066C8: call    loc_1404066BB
 * 00000001404066CD: add     rsp, 8
 * 00000001404066D1: call    loc_1404066C4
 * 00000001404066D6: add     rsp, 8
 * 00000001404066DA: call    loc_1404066CD
 * 00000001404066DF: add     rsp, 8
 * 00000001404066E3: call    loc_1404066D6
 * 00000001404066E8: add     rsp, 8
 * 00000001404066EC: call    loc_1404066DF
 * 00000001404066F1: add     rsp, 8
 * 00000001404066F5: call    loc_1404066E8
 * 00000001404066FA: add     rsp, 8
 * 00000001404066FE: call    loc_1404066F1
 * 0000000140406703: add     rsp, 8
 * 0000000140406707: call    loc_1404066FA
 * 000000014040670C: add     rsp, 8
 * 0000000140406710: call    loc_140406703
 * 0000000140406715: add     rsp, 8
 * 0000000140406719: call    loc_14040670C
 * 000000014040671E: add     rsp, 8
 * 0000000140406722: call    loc_140406715
 * 0000000140406727: add     rsp, 8
 * 000000014040672B: call    loc_14040671E
 * 0000000140406730: add     rsp, 8
 * 0000000140406734: call    loc_140406727
 * 0000000140406739: add     rsp, 8
 * 000000014040673D: call    loc_140406730
 * 0000000140406742: add     rsp, 8
 * 0000000140406746: call    loc_140406739
 * 000000014040674B: add     rsp, 8
 * 000000014040674F: call    loc_140406742
 * 0000000140406754: add     rsp, 8
 * 0000000140406758: call    loc_14040674B
 * 000000014040675D: add     rsp, 8
 * 0000000140406761: call    loc_140406754
 * 0000000140406766: add     rsp, 8
 * 000000014040676A: call    loc_14040675D
 * 000000014040676F: add     rsp, 8
 * 0000000140406773: call    loc_140406766
 * 0000000140406778: add     rsp, 8
 * 000000014040677C: call    loc_14040676F
 * 0000000140406781: add     rsp, 8
 * 0000000140406785: call    loc_140406778
 * 000000014040678A: add     rsp, 8
 * 000000014040678E: call    loc_140406781
 * 0000000140406793: add     rsp, 8
 * 0000000140406797: lfence
 * 000000014040679A: mov     byte ptr gs:853h, 0
 * 00000001404067A3: test    byte ptr [r10+3], 80h
 * 00000001404067A8: jz      short loc_1404067EC
 * 00000001404067AA: mov     ecx, 0C0000102h
 * 00000001404067AF: rdmsr
 * 00000001404067B1: shl     rdx, 20h
 * 00000001404067B5: or      rax, rdx
 * 00000001404067B8: cmp     rax, cs:MmUserProbeAddress
 * 00000001404067BF: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001404067C7: cmp     [r10+0F0h], rax
 * 00000001404067CE: jz      short loc_1404067EC
 * 00000001404067D0: mov     rdx, [r10+1F0h]
 * 00000001404067D7: bts     dword ptr [r10+74h], 8
 * 00000001404067DD: dec     word ptr [r10+1E6h]
 * 00000001404067E5: mov     [rdx+80h], rax
 * 00000001404067EC: test    byte ptr [r10+3], 3
 * 00000001404067F1: mov     word ptr [rbp+80h], 0
 * 00000001404067FA: jz      short loc_140406801
 * 00000001404067FC: call    KiSaveDebugRegisterState
 * 0000000140406801: cld
 * 0000000140406802: stmxcsr dword ptr [rbp-54h]
 * 0000000140406806: ldmxcsr dword ptr gs:180h
 * 000000014040680F: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140406813: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140406817: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014040681B: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014040681F: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140406823: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140406827: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040682E: jz      short loc_14040683C
 * 0000000140406830: test    byte ptr [rbp+0F0h], 1
 * 0000000140406837: jz      short loc_14040683C
 * 0000000140406839: stac
 * 000000014040683C: test    dword ptr [rbp+0F8h], 200h
 * 0000000140406846: jz      short loc_140406849
 * 0000000140406848: sti
 * 0000000140406849: mov     ecx, 0C0000420h
 * 000000014040684E: xor     edx, edx
 * 0000000140406850: mov     r8, [rbp+0E8h]
 * 0000000140406857: call    KiExceptionDispatch
 * 000000014040685C: nop
 * 000000014040685D: retn
 */
