/*
 * XREFs of KiVmbusInterrupt3 @ 0x1404043A0
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x140A161C0 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1402F1E00 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt3 @ 0x1404043A0 (KiVmbusInterrupt3.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140519C60 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x1404043A0
 * Reason: Hex-Rays returned no pseudocode for 0x1404043A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404043A0: push    4
 * 00000001404043A2: push    rbp
 * 00000001404043A3: push    rsi
 * 00000001404043A4: sub     rsp, 150h
 * 00000001404043AB: lea     rbp, [rsp+168h+var_E8]
 * 00000001404043B3: mov     byte ptr [rbp-55h], 0
 * 00000001404043B7: mov     [rbp-50h], rax
 * 00000001404043BB: mov     [rbp-48h], rcx
 * 00000001404043BF: mov     [rbp-40h], rdx
 * 00000001404043C3: mov     [rbp-38h], r8
 * 00000001404043C7: mov     [rbp-30h], r9
 * 00000001404043CB: mov     [rbp-28h], r10
 * 00000001404043CF: mov     [rbp-20h], r11
 * 00000001404043D3: test    byte ptr [rbp+0F0h], 1
 * 00000001404043DA: jnz     short loc_14040440B
 * 00000001404043DC: lfence
 * 00000001404043DF: test    word ptr gs:860h, 1
 * 00000001404043EA: jnz     short loc_1404043F4
 * 00000001404043EC: lfence
 * 00000001404043EF: jmp     loc_140404614
 * 00000001404043F4: movzx   eax, word ptr gs:864h
 * 00000001404043FD: mov     ecx, 48h ; 'H'
 * 0000000140404402: xor     edx, edx
 * 0000000140404404: wrmsr
 * 0000000140404406: jmp     loc_140404614
 * 000000014040440B: test    cs:KiKvaShadow, 1
 * 0000000140404412: jnz     short loc_140404417
 * 0000000140404414: swapgs
 * 0000000140404417: lfence
 * 000000014040441A: mov     r10, gs:188h
 * 0000000140404423: mov     rcx, gs:188h
 * 000000014040442C: mov     rcx, [rcx+220h]
 * 0000000140404433: mov     rcx, [rcx+9E0h]
 * 000000014040443A: mov     gs:858h, rcx
 * 0000000140404443: mov     cx, gs:850h
 * 000000014040444C: mov     gs:852h, cx
 * 0000000140404455: mov     cx, gs:860h
 * 000000014040445E: mov     gs:854h, cx
 * 0000000140404467: movzx   eax, word ptr gs:866h
 * 0000000140404470: cmp     gs:864h, ax
 * 0000000140404479: jz      short loc_14040448D
 * 000000014040447B: mov     gs:864h, ax
 * 0000000140404484: mov     ecx, 48h ; 'H'
 * 0000000140404489: xor     edx, edx
 * 000000014040448B: wrmsr
 * 000000014040448D: movzx   edx, word ptr gs:860h
 * 0000000140404496: test    edx, 8
 * 000000014040449C: jz      short loc_1404044B5
 * 000000014040449E: mov     eax, 1
 * 00000001404044A3: xor     edx, edx
 * 00000001404044A5: mov     ecx, 49h ; 'I'
 * 00000001404044AA: wrmsr
 * 00000001404044AC: movzx   edx, word ptr gs:860h
 * 00000001404044B5: test    edx, 2
 * 00000001404044BB: jz      loc_1404045E6
 * 00000001404044C1: call    loc_1404045D4
 * 00000001404044C6: add     rsp, 8
 * 00000001404044CA: call    loc_1404045DD
 * 00000001404044CF: add     rsp, 8
 * 00000001404044D3: call    loc_1404044C6
 * 00000001404044D8: add     rsp, 8
 * 00000001404044DC: call    loc_1404044CF
 * 00000001404044E1: add     rsp, 8
 * 00000001404044E5: call    loc_1404044D8
 * 00000001404044EA: add     rsp, 8
 * 00000001404044EE: call    loc_1404044E1
 * 00000001404044F3: add     rsp, 8
 * 00000001404044F7: call    loc_1404044EA
 * 00000001404044FC: add     rsp, 8
 * 0000000140404500: call    loc_1404044F3
 * 0000000140404505: add     rsp, 8
 * 0000000140404509: call    loc_1404044FC
 * 000000014040450E: add     rsp, 8
 * 0000000140404512: call    loc_140404505
 * 0000000140404517: add     rsp, 8
 * 000000014040451B: call    loc_14040450E
 * 0000000140404520: add     rsp, 8
 * 0000000140404524: call    loc_140404517
 * 0000000140404529: add     rsp, 8
 * 000000014040452D: call    loc_140404520
 * 0000000140404532: add     rsp, 8
 * 0000000140404536: call    loc_140404529
 * 000000014040453B: add     rsp, 8
 * 000000014040453F: call    loc_140404532
 * 0000000140404544: add     rsp, 8
 * 0000000140404548: call    loc_14040453B
 * 000000014040454D: add     rsp, 8
 * 0000000140404551: call    loc_140404544
 * 0000000140404556: add     rsp, 8
 * 000000014040455A: call    loc_14040454D
 * 000000014040455F: add     rsp, 8
 * 0000000140404563: call    loc_140404556
 * 0000000140404568: add     rsp, 8
 * 000000014040456C: call    loc_14040455F
 * 0000000140404571: add     rsp, 8
 * 0000000140404575: call    loc_140404568
 * 000000014040457A: add     rsp, 8
 * 000000014040457E: call    loc_140404571
 * 0000000140404583: add     rsp, 8
 * 0000000140404587: call    loc_14040457A
 * 000000014040458C: add     rsp, 8
 * 0000000140404590: call    loc_140404583
 * 0000000140404595: add     rsp, 8
 * 0000000140404599: call    loc_14040458C
 * 000000014040459E: add     rsp, 8
 * 00000001404045A2: call    loc_140404595
 * 00000001404045A7: add     rsp, 8
 * 00000001404045AB: call    loc_14040459E
 * 00000001404045B0: add     rsp, 8
 * 00000001404045B4: call    loc_1404045A7
 * 00000001404045B9: add     rsp, 8
 * 00000001404045BD: call    loc_1404045B0
 * 00000001404045C2: add     rsp, 8
 * 00000001404045C6: call    loc_1404045B9
 * 00000001404045CB: add     rsp, 8
 * 00000001404045CF: call    loc_1404045C2
 * 00000001404045D4: add     rsp, 8
 * 00000001404045D8: call    loc_1404045CB
 * 00000001404045DD: add     rsp, 8
 * 00000001404045E1: mov     eax, 0DADAh
 * 00000001404045E6: test    edx, 200h
 * 00000001404045EC: jz      short loc_1404045F3
 * 00000001404045EE: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404045F3: lfence
 * 00000001404045F6: mov     byte ptr gs:856h, 0
 * 00000001404045FF: test    byte ptr [r10+3], 3
 * 0000000140404604: mov     word ptr [rbp+80h], 0
 * 000000014040460D: jz      short loc_140404614
 * 000000014040460F: call    KiSaveDebugRegisterState
 * 0000000140404614: cld
 * 0000000140404615: stmxcsr dword ptr [rbp-54h]
 * 0000000140404619: ldmxcsr dword ptr gs:180h
 * 0000000140404622: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140404626: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014040462A: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014040462E: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140404632: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140404636: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014040463A: cmp     byte ptr gs:801Ah, 0
 * 0000000140404643: jz      short loc_14040464A
 * 0000000140404645: call    KeWakeProcessor
 * 000000014040464A: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140404651: cmp     rax, [rbp+0E8h]
 * 0000000140404658: jnb     short loc_140404673
 * 000000014040465A: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140404661: cmp     rax, [rbp+0E8h]
 * 0000000140404668: jb      short loc_140404673
 * 000000014040466A: lea     rcx, [rbp-80h]
 * 000000014040466E: call    KiCheckForSListAddress
 * 0000000140404673: xor     esi, esi
 * 0000000140404675: inc     dword ptr gs:8000h
 * 000000014040467D: jmp     KiVmbusInterruptDispatch
 */
