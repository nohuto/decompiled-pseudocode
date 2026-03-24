/*
 * XREFs of KiVmbusInterrupt0 @ 0x1403FA730
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x140A12040 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1402EC460 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt0 @ 0x1403FA730 (KiVmbusInterrupt0.c)
 *     KeWakeProcessor @ 0x140513F60 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x1403FA730
 * Reason: Hex-Rays returned no pseudocode for 0x1403FA730
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FA730: push    1
 * 00000001403FA732: push    rbp
 * 00000001403FA733: push    rsi
 * 00000001403FA734: sub     rsp, 150h
 * 00000001403FA73B: lea     rbp, [rsp+168h+var_E8]
 * 00000001403FA743: mov     byte ptr [rbp-55h], 0
 * 00000001403FA747: mov     [rbp-50h], rax
 * 00000001403FA74B: mov     [rbp-48h], rcx
 * 00000001403FA74F: mov     [rbp-40h], rdx
 * 00000001403FA753: mov     [rbp-38h], r8
 * 00000001403FA757: mov     [rbp-30h], r9
 * 00000001403FA75B: mov     [rbp-28h], r10
 * 00000001403FA75F: mov     [rbp-20h], r11
 * 00000001403FA763: test    byte ptr [rbp+0F0h], 1
 * 00000001403FA76A: jnz     short loc_1403FA799
 * 00000001403FA76C: lfence
 * 00000001403FA76F: test    byte ptr gs:278h, 1
 * 00000001403FA778: jnz     short loc_1403FA782
 * 00000001403FA77A: lfence
 * 00000001403FA77D: jmp     loc_1403FA995
 * 00000001403FA782: movzx   eax, byte ptr gs:27Ah
 * 00000001403FA78B: mov     ecx, 48h ; 'H'
 * 00000001403FA790: xor     edx, edx
 * 00000001403FA792: wrmsr
 * 00000001403FA794: jmp     loc_1403FA995
 * 00000001403FA799: test    cs:KiKvaShadow, 1
 * 00000001403FA7A0: jnz     short loc_1403FA7A5
 * 00000001403FA7A2: swapgs
 * 00000001403FA7A5: lfence
 * 00000001403FA7A8: mov     r10, gs:188h
 * 00000001403FA7B1: mov     rcx, gs:188h
 * 00000001403FA7BA: mov     rcx, [rcx+220h]
 * 00000001403FA7C1: mov     rcx, [rcx+9E0h]
 * 00000001403FA7C8: mov     gs:270h, rcx
 * 00000001403FA7D1: mov     cl, gs:850h
 * 00000001403FA7D9: mov     gs:851h, cl
 * 00000001403FA7E1: mov     cl, gs:278h
 * 00000001403FA7E9: mov     gs:852h, cl
 * 00000001403FA7F1: movzx   eax, byte ptr gs:27Bh
 * 00000001403FA7FA: cmp     gs:27Ah, al
 * 00000001403FA802: jz      short loc_1403FA815
 * 00000001403FA804: mov     gs:27Ah, al
 * 00000001403FA80C: mov     ecx, 48h ; 'H'
 * 00000001403FA811: xor     edx, edx
 * 00000001403FA813: wrmsr
 * 00000001403FA815: movzx   edx, byte ptr gs:278h
 * 00000001403FA81E: test    edx, 8
 * 00000001403FA824: jz      short loc_1403FA839
 * 00000001403FA826: mov     eax, 1
 * 00000001403FA82B: xor     edx, edx
 * 00000001403FA82D: mov     ecx, 49h ; 'I'
 * 00000001403FA832: wrmsr
 * 00000001403FA834: jmp     loc_1403FA977
 * 00000001403FA839: test    edx, 2
 * 00000001403FA83F: jz      loc_1403FA974
 * 00000001403FA845: test    byte ptr gs:279h, 4
 * 00000001403FA84E: jnz     loc_1403FA974
 * 00000001403FA854: call    loc_1403FA967
 * 00000001403FA859: add     rsp, 8
 * 00000001403FA85D: call    loc_1403FA970
 * 00000001403FA862: add     rsp, 8
 * 00000001403FA866: call    loc_1403FA859
 * 00000001403FA86B: add     rsp, 8
 * 00000001403FA86F: call    loc_1403FA862
 * 00000001403FA874: add     rsp, 8
 * 00000001403FA878: call    loc_1403FA86B
 * 00000001403FA87D: add     rsp, 8
 * 00000001403FA881: call    loc_1403FA874
 * 00000001403FA886: add     rsp, 8
 * 00000001403FA88A: call    loc_1403FA87D
 * 00000001403FA88F: add     rsp, 8
 * 00000001403FA893: call    loc_1403FA886
 * 00000001403FA898: add     rsp, 8
 * 00000001403FA89C: call    loc_1403FA88F
 * 00000001403FA8A1: add     rsp, 8
 * 00000001403FA8A5: call    loc_1403FA898
 * 00000001403FA8AA: add     rsp, 8
 * 00000001403FA8AE: call    loc_1403FA8A1
 * 00000001403FA8B3: add     rsp, 8
 * 00000001403FA8B7: call    loc_1403FA8AA
 * 00000001403FA8BC: add     rsp, 8
 * 00000001403FA8C0: call    loc_1403FA8B3
 * 00000001403FA8C5: add     rsp, 8
 * 00000001403FA8C9: call    loc_1403FA8BC
 * 00000001403FA8CE: add     rsp, 8
 * 00000001403FA8D2: call    loc_1403FA8C5
 * 00000001403FA8D7: add     rsp, 8
 * 00000001403FA8DB: call    loc_1403FA8CE
 * 00000001403FA8E0: add     rsp, 8
 * 00000001403FA8E4: call    loc_1403FA8D7
 * 00000001403FA8E9: add     rsp, 8
 * 00000001403FA8ED: call    loc_1403FA8E0
 * 00000001403FA8F2: add     rsp, 8
 * 00000001403FA8F6: call    loc_1403FA8E9
 * 00000001403FA8FB: add     rsp, 8
 * 00000001403FA8FF: call    loc_1403FA8F2
 * 00000001403FA904: add     rsp, 8
 * 00000001403FA908: call    loc_1403FA8FB
 * 00000001403FA90D: add     rsp, 8
 * 00000001403FA911: call    loc_1403FA904
 * 00000001403FA916: add     rsp, 8
 * 00000001403FA91A: call    loc_1403FA90D
 * 00000001403FA91F: add     rsp, 8
 * 00000001403FA923: call    loc_1403FA916
 * 00000001403FA928: add     rsp, 8
 * 00000001403FA92C: call    loc_1403FA91F
 * 00000001403FA931: add     rsp, 8
 * 00000001403FA935: call    loc_1403FA928
 * 00000001403FA93A: add     rsp, 8
 * 00000001403FA93E: call    loc_1403FA931
 * 00000001403FA943: add     rsp, 8
 * 00000001403FA947: call    loc_1403FA93A
 * 00000001403FA94C: add     rsp, 8
 * 00000001403FA950: call    loc_1403FA943
 * 00000001403FA955: add     rsp, 8
 * 00000001403FA959: call    loc_1403FA94C
 * 00000001403FA95E: add     rsp, 8
 * 00000001403FA962: call    loc_1403FA955
 * 00000001403FA967: add     rsp, 8
 * 00000001403FA96B: call    loc_1403FA95E
 * 00000001403FA970: add     rsp, 8
 * 00000001403FA974: lfence
 * 00000001403FA977: mov     byte ptr gs:853h, 0
 * 00000001403FA980: test    byte ptr [r10+3], 3
 * 00000001403FA985: mov     word ptr [rbp+80h], 0
 * 00000001403FA98E: jz      short loc_1403FA995
 * 00000001403FA990: call    KiSaveDebugRegisterState
 * 00000001403FA995: cld
 * 00000001403FA996: stmxcsr dword ptr [rbp-54h]
 * 00000001403FA99A: ldmxcsr dword ptr gs:180h
 * 00000001403FA9A3: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001403FA9A7: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001403FA9AB: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001403FA9AF: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001403FA9B3: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001403FA9B7: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001403FA9BB: cmp     byte ptr gs:801Ah, 0
 * 00000001403FA9C4: jz      short loc_1403FA9CB
 * 00000001403FA9C6: call    KeWakeProcessor
 * 00000001403FA9CB: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001403FA9D2: cmp     rax, [rbp+0E8h]
 * 00000001403FA9D9: jnb     short loc_1403FA9F4
 * 00000001403FA9DB: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001403FA9E2: cmp     rax, [rbp+0E8h]
 * 00000001403FA9E9: jb      short loc_1403FA9F4
 * 00000001403FA9EB: lea     rcx, [rbp-80h]
 * 00000001403FA9EF: call    KiCheckForSListAddress
 * 00000001403FA9F4: xor     esi, esi
 * 00000001403FA9F6: inc     dword ptr gs:8000h
 * 00000001403FA9FE: jmp     KiVmbusInterruptDispatch
 */
