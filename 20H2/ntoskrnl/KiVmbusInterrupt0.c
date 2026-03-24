/*
 * XREFs of KiVmbusInterrupt0 @ 0x140401440
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x140A18040 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1402DF2E0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt0 @ 0x140401440 (KiVmbusInterrupt0.c)
 *     KeWakeProcessor @ 0x140517EE0 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x140401440
 * Reason: Hex-Rays returned no pseudocode for 0x140401440
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140401440: push    1
 * 0000000140401442: push    rbp
 * 0000000140401443: push    rsi
 * 0000000140401444: sub     rsp, 150h
 * 000000014040144B: lea     rbp, [rsp+168h+var_E8]
 * 0000000140401453: mov     byte ptr [rbp-55h], 0
 * 0000000140401457: mov     [rbp-50h], rax
 * 000000014040145B: mov     [rbp-48h], rcx
 * 000000014040145F: mov     [rbp-40h], rdx
 * 0000000140401463: mov     [rbp-38h], r8
 * 0000000140401467: mov     [rbp-30h], r9
 * 000000014040146B: mov     [rbp-28h], r10
 * 000000014040146F: mov     [rbp-20h], r11
 * 0000000140401473: test    byte ptr [rbp+0F0h], 1
 * 000000014040147A: jnz     short loc_1404014A9
 * 000000014040147C: lfence
 * 000000014040147F: test    byte ptr gs:278h, 1
 * 0000000140401488: jnz     short loc_140401492
 * 000000014040148A: lfence
 * 000000014040148D: jmp     loc_14040169F
 * 0000000140401492: movzx   eax, byte ptr gs:27Ah
 * 000000014040149B: mov     ecx, 48h ; 'H'
 * 00000001404014A0: xor     edx, edx
 * 00000001404014A2: wrmsr
 * 00000001404014A4: jmp     loc_14040169F
 * 00000001404014A9: test    cs:KiKvaShadow, 1
 * 00000001404014B0: jnz     short loc_1404014B5
 * 00000001404014B2: swapgs
 * 00000001404014B5: lfence
 * 00000001404014B8: mov     r10, gs:188h
 * 00000001404014C1: mov     rcx, gs:188h
 * 00000001404014CA: mov     rcx, [rcx+220h]
 * 00000001404014D1: mov     rcx, [rcx+9E0h]
 * 00000001404014D8: mov     gs:270h, rcx
 * 00000001404014E1: mov     cl, gs:850h
 * 00000001404014E9: mov     gs:851h, cl
 * 00000001404014F1: mov     cl, gs:278h
 * 00000001404014F9: mov     gs:852h, cl
 * 0000000140401501: movzx   eax, byte ptr gs:27Bh
 * 000000014040150A: cmp     gs:27Ah, al
 * 0000000140401512: jz      short loc_140401525
 * 0000000140401514: mov     gs:27Ah, al
 * 000000014040151C: mov     ecx, 48h ; 'H'
 * 0000000140401521: xor     edx, edx
 * 0000000140401523: wrmsr
 * 0000000140401525: movzx   edx, byte ptr gs:278h
 * 000000014040152E: test    edx, 8
 * 0000000140401534: jz      short loc_14040154D
 * 0000000140401536: mov     eax, 1
 * 000000014040153B: xor     edx, edx
 * 000000014040153D: mov     ecx, 49h ; 'I'
 * 0000000140401542: wrmsr
 * 0000000140401544: movzx   edx, byte ptr gs:278h
 * 000000014040154D: test    edx, 2
 * 0000000140401553: jz      loc_14040167E
 * 0000000140401559: call    loc_14040166C
 * 000000014040155E: add     rsp, 8
 * 0000000140401562: call    loc_140401675
 * 0000000140401567: add     rsp, 8
 * 000000014040156B: call    loc_14040155E
 * 0000000140401570: add     rsp, 8
 * 0000000140401574: call    loc_140401567
 * 0000000140401579: add     rsp, 8
 * 000000014040157D: call    loc_140401570
 * 0000000140401582: add     rsp, 8
 * 0000000140401586: call    loc_140401579
 * 000000014040158B: add     rsp, 8
 * 000000014040158F: call    loc_140401582
 * 0000000140401594: add     rsp, 8
 * 0000000140401598: call    loc_14040158B
 * 000000014040159D: add     rsp, 8
 * 00000001404015A1: call    loc_140401594
 * 00000001404015A6: add     rsp, 8
 * 00000001404015AA: call    loc_14040159D
 * 00000001404015AF: add     rsp, 8
 * 00000001404015B3: call    loc_1404015A6
 * 00000001404015B8: add     rsp, 8
 * 00000001404015BC: call    loc_1404015AF
 * 00000001404015C1: add     rsp, 8
 * 00000001404015C5: call    loc_1404015B8
 * 00000001404015CA: add     rsp, 8
 * 00000001404015CE: call    loc_1404015C1
 * 00000001404015D3: add     rsp, 8
 * 00000001404015D7: call    loc_1404015CA
 * 00000001404015DC: add     rsp, 8
 * 00000001404015E0: call    loc_1404015D3
 * 00000001404015E5: add     rsp, 8
 * 00000001404015E9: call    loc_1404015DC
 * 00000001404015EE: add     rsp, 8
 * 00000001404015F2: call    loc_1404015E5
 * 00000001404015F7: add     rsp, 8
 * 00000001404015FB: call    loc_1404015EE
 * 0000000140401600: add     rsp, 8
 * 0000000140401604: call    loc_1404015F7
 * 0000000140401609: add     rsp, 8
 * 000000014040160D: call    loc_140401600
 * 0000000140401612: add     rsp, 8
 * 0000000140401616: call    loc_140401609
 * 000000014040161B: add     rsp, 8
 * 000000014040161F: call    loc_140401612
 * 0000000140401624: add     rsp, 8
 * 0000000140401628: call    loc_14040161B
 * 000000014040162D: add     rsp, 8
 * 0000000140401631: call    loc_140401624
 * 0000000140401636: add     rsp, 8
 * 000000014040163A: call    loc_14040162D
 * 000000014040163F: add     rsp, 8
 * 0000000140401643: call    loc_140401636
 * 0000000140401648: add     rsp, 8
 * 000000014040164C: call    loc_14040163F
 * 0000000140401651: add     rsp, 8
 * 0000000140401655: call    loc_140401648
 * 000000014040165A: add     rsp, 8
 * 000000014040165E: call    loc_140401651
 * 0000000140401663: add     rsp, 8
 * 0000000140401667: call    loc_14040165A
 * 000000014040166C: add     rsp, 8
 * 0000000140401670: call    loc_140401663
 * 0000000140401675: add     rsp, 8
 * 0000000140401679: mov     eax, 0DADAh
 * 000000014040167E: lfence
 * 0000000140401681: mov     byte ptr gs:853h, 0
 * 000000014040168A: test    byte ptr [r10+3], 3
 * 000000014040168F: mov     word ptr [rbp+80h], 0
 * 0000000140401698: jz      short loc_14040169F
 * 000000014040169A: call    KiSaveDebugRegisterState
 * 000000014040169F: cld
 * 00000001404016A0: stmxcsr dword ptr [rbp-54h]
 * 00000001404016A4: ldmxcsr dword ptr gs:180h
 * 00000001404016AD: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404016B1: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404016B5: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001404016B9: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001404016BD: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001404016C1: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001404016C5: cmp     byte ptr gs:801Ah, 0
 * 00000001404016CE: jz      short loc_1404016D5
 * 00000001404016D0: call    KeWakeProcessor
 * 00000001404016D5: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001404016DC: cmp     rax, [rbp+0E8h]
 * 00000001404016E3: jnb     short loc_1404016FE
 * 00000001404016E5: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001404016EC: cmp     rax, [rbp+0E8h]
 * 00000001404016F3: jb      short loc_1404016FE
 * 00000001404016F5: lea     rcx, [rbp-80h]
 * 00000001404016F9: call    KiCheckForSListAddress
 * 00000001404016FE: xor     esi, esi
 * 0000000140401700: inc     dword ptr gs:8000h
 * 0000000140401708: jmp     KiVmbusInterruptDispatch
 */
