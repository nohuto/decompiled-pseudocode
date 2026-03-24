/*
 * XREFs of KiVmbusInterrupt1 @ 0x140401720
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x140A180C0 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1402DF2E0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt1 @ 0x140401720 (KiVmbusInterrupt1.c)
 *     KeWakeProcessor @ 0x140517EE0 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x140401720
 * Reason: Hex-Rays returned no pseudocode for 0x140401720
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140401720: push    2
 * 0000000140401722: push    rbp
 * 0000000140401723: push    rsi
 * 0000000140401724: sub     rsp, 150h
 * 000000014040172B: lea     rbp, [rsp+168h+var_E8]
 * 0000000140401733: mov     byte ptr [rbp-55h], 0
 * 0000000140401737: mov     [rbp-50h], rax
 * 000000014040173B: mov     [rbp-48h], rcx
 * 000000014040173F: mov     [rbp-40h], rdx
 * 0000000140401743: mov     [rbp-38h], r8
 * 0000000140401747: mov     [rbp-30h], r9
 * 000000014040174B: mov     [rbp-28h], r10
 * 000000014040174F: mov     [rbp-20h], r11
 * 0000000140401753: test    byte ptr [rbp+0F0h], 1
 * 000000014040175A: jnz     short loc_140401789
 * 000000014040175C: lfence
 * 000000014040175F: test    byte ptr gs:278h, 1
 * 0000000140401768: jnz     short loc_140401772
 * 000000014040176A: lfence
 * 000000014040176D: jmp     loc_14040197F
 * 0000000140401772: movzx   eax, byte ptr gs:27Ah
 * 000000014040177B: mov     ecx, 48h ; 'H'
 * 0000000140401780: xor     edx, edx
 * 0000000140401782: wrmsr
 * 0000000140401784: jmp     loc_14040197F
 * 0000000140401789: test    cs:KiKvaShadow, 1
 * 0000000140401790: jnz     short loc_140401795
 * 0000000140401792: swapgs
 * 0000000140401795: lfence
 * 0000000140401798: mov     r10, gs:188h
 * 00000001404017A1: mov     rcx, gs:188h
 * 00000001404017AA: mov     rcx, [rcx+220h]
 * 00000001404017B1: mov     rcx, [rcx+9E0h]
 * 00000001404017B8: mov     gs:270h, rcx
 * 00000001404017C1: mov     cl, gs:850h
 * 00000001404017C9: mov     gs:851h, cl
 * 00000001404017D1: mov     cl, gs:278h
 * 00000001404017D9: mov     gs:852h, cl
 * 00000001404017E1: movzx   eax, byte ptr gs:27Bh
 * 00000001404017EA: cmp     gs:27Ah, al
 * 00000001404017F2: jz      short loc_140401805
 * 00000001404017F4: mov     gs:27Ah, al
 * 00000001404017FC: mov     ecx, 48h ; 'H'
 * 0000000140401801: xor     edx, edx
 * 0000000140401803: wrmsr
 * 0000000140401805: movzx   edx, byte ptr gs:278h
 * 000000014040180E: test    edx, 8
 * 0000000140401814: jz      short loc_14040182D
 * 0000000140401816: mov     eax, 1
 * 000000014040181B: xor     edx, edx
 * 000000014040181D: mov     ecx, 49h ; 'I'
 * 0000000140401822: wrmsr
 * 0000000140401824: movzx   edx, byte ptr gs:278h
 * 000000014040182D: test    edx, 2
 * 0000000140401833: jz      loc_14040195E
 * 0000000140401839: call    loc_14040194C
 * 000000014040183E: add     rsp, 8
 * 0000000140401842: call    loc_140401955
 * 0000000140401847: add     rsp, 8
 * 000000014040184B: call    loc_14040183E
 * 0000000140401850: add     rsp, 8
 * 0000000140401854: call    loc_140401847
 * 0000000140401859: add     rsp, 8
 * 000000014040185D: call    loc_140401850
 * 0000000140401862: add     rsp, 8
 * 0000000140401866: call    loc_140401859
 * 000000014040186B: add     rsp, 8
 * 000000014040186F: call    loc_140401862
 * 0000000140401874: add     rsp, 8
 * 0000000140401878: call    loc_14040186B
 * 000000014040187D: add     rsp, 8
 * 0000000140401881: call    loc_140401874
 * 0000000140401886: add     rsp, 8
 * 000000014040188A: call    loc_14040187D
 * 000000014040188F: add     rsp, 8
 * 0000000140401893: call    loc_140401886
 * 0000000140401898: add     rsp, 8
 * 000000014040189C: call    loc_14040188F
 * 00000001404018A1: add     rsp, 8
 * 00000001404018A5: call    loc_140401898
 * 00000001404018AA: add     rsp, 8
 * 00000001404018AE: call    loc_1404018A1
 * 00000001404018B3: add     rsp, 8
 * 00000001404018B7: call    loc_1404018AA
 * 00000001404018BC: add     rsp, 8
 * 00000001404018C0: call    loc_1404018B3
 * 00000001404018C5: add     rsp, 8
 * 00000001404018C9: call    loc_1404018BC
 * 00000001404018CE: add     rsp, 8
 * 00000001404018D2: call    loc_1404018C5
 * 00000001404018D7: add     rsp, 8
 * 00000001404018DB: call    loc_1404018CE
 * 00000001404018E0: add     rsp, 8
 * 00000001404018E4: call    loc_1404018D7
 * 00000001404018E9: add     rsp, 8
 * 00000001404018ED: call    loc_1404018E0
 * 00000001404018F2: add     rsp, 8
 * 00000001404018F6: call    loc_1404018E9
 * 00000001404018FB: add     rsp, 8
 * 00000001404018FF: call    loc_1404018F2
 * 0000000140401904: add     rsp, 8
 * 0000000140401908: call    loc_1404018FB
 * 000000014040190D: add     rsp, 8
 * 0000000140401911: call    loc_140401904
 * 0000000140401916: add     rsp, 8
 * 000000014040191A: call    loc_14040190D
 * 000000014040191F: add     rsp, 8
 * 0000000140401923: call    loc_140401916
 * 0000000140401928: add     rsp, 8
 * 000000014040192C: call    loc_14040191F
 * 0000000140401931: add     rsp, 8
 * 0000000140401935: call    loc_140401928
 * 000000014040193A: add     rsp, 8
 * 000000014040193E: call    loc_140401931
 * 0000000140401943: add     rsp, 8
 * 0000000140401947: call    loc_14040193A
 * 000000014040194C: add     rsp, 8
 * 0000000140401950: call    loc_140401943
 * 0000000140401955: add     rsp, 8
 * 0000000140401959: mov     eax, 0DADAh
 * 000000014040195E: lfence
 * 0000000140401961: mov     byte ptr gs:853h, 0
 * 000000014040196A: test    byte ptr [r10+3], 3
 * 000000014040196F: mov     word ptr [rbp+80h], 0
 * 0000000140401978: jz      short loc_14040197F
 * 000000014040197A: call    KiSaveDebugRegisterState
 * 000000014040197F: cld
 * 0000000140401980: stmxcsr dword ptr [rbp-54h]
 * 0000000140401984: ldmxcsr dword ptr gs:180h
 * 000000014040198D: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140401991: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140401995: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140401999: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014040199D: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001404019A1: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001404019A5: cmp     byte ptr gs:801Ah, 0
 * 00000001404019AE: jz      short loc_1404019B5
 * 00000001404019B0: call    KeWakeProcessor
 * 00000001404019B5: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001404019BC: cmp     rax, [rbp+0E8h]
 * 00000001404019C3: jnb     short loc_1404019DE
 * 00000001404019C5: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001404019CC: cmp     rax, [rbp+0E8h]
 * 00000001404019D3: jb      short loc_1404019DE
 * 00000001404019D5: lea     rcx, [rbp-80h]
 * 00000001404019D9: call    KiCheckForSListAddress
 * 00000001404019DE: xor     esi, esi
 * 00000001404019E0: inc     dword ptr gs:8000h
 * 00000001404019E8: jmp     KiVmbusInterruptDispatch
 */
