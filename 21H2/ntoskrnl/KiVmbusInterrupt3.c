/*
 * XREFs of KiVmbusInterrupt3 @ 0x1404041C0
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x140A151C0 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14024D5B0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt3 @ 0x1404041C0 (KiVmbusInterrupt3.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140519A20 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x1404041C0
 * Reason: Hex-Rays returned no pseudocode for 0x1404041C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404041C0: push    4
 * 00000001404041C2: push    rbp
 * 00000001404041C3: push    rsi
 * 00000001404041C4: sub     rsp, 150h
 * 00000001404041CB: lea     rbp, [rsp+168h+var_E8]
 * 00000001404041D3: mov     byte ptr [rbp-55h], 0
 * 00000001404041D7: mov     [rbp-50h], rax
 * 00000001404041DB: mov     [rbp-48h], rcx
 * 00000001404041DF: mov     [rbp-40h], rdx
 * 00000001404041E3: mov     [rbp-38h], r8
 * 00000001404041E7: mov     [rbp-30h], r9
 * 00000001404041EB: mov     [rbp-28h], r10
 * 00000001404041EF: mov     [rbp-20h], r11
 * 00000001404041F3: test    byte ptr [rbp+0F0h], 1
 * 00000001404041FA: jnz     short loc_14040422B
 * 00000001404041FC: lfence
 * 00000001404041FF: test    word ptr gs:860h, 1
 * 000000014040420A: jnz     short loc_140404214
 * 000000014040420C: lfence
 * 000000014040420F: jmp     loc_140404434
 * 0000000140404214: movzx   eax, word ptr gs:864h
 * 000000014040421D: mov     ecx, 48h ; 'H'
 * 0000000140404222: xor     edx, edx
 * 0000000140404224: wrmsr
 * 0000000140404226: jmp     loc_140404434
 * 000000014040422B: test    cs:KiKvaShadow, 1
 * 0000000140404232: jnz     short loc_140404237
 * 0000000140404234: swapgs
 * 0000000140404237: lfence
 * 000000014040423A: mov     r10, gs:188h
 * 0000000140404243: mov     rcx, gs:188h
 * 000000014040424C: mov     rcx, [rcx+220h]
 * 0000000140404253: mov     rcx, [rcx+9E0h]
 * 000000014040425A: mov     gs:858h, rcx
 * 0000000140404263: mov     cx, gs:850h
 * 000000014040426C: mov     gs:852h, cx
 * 0000000140404275: mov     cx, gs:860h
 * 000000014040427E: mov     gs:854h, cx
 * 0000000140404287: movzx   eax, word ptr gs:866h
 * 0000000140404290: cmp     gs:864h, ax
 * 0000000140404299: jz      short loc_1404042AD
 * 000000014040429B: mov     gs:864h, ax
 * 00000001404042A4: mov     ecx, 48h ; 'H'
 * 00000001404042A9: xor     edx, edx
 * 00000001404042AB: wrmsr
 * 00000001404042AD: movzx   edx, word ptr gs:860h
 * 00000001404042B6: test    edx, 8
 * 00000001404042BC: jz      short loc_1404042D5
 * 00000001404042BE: mov     eax, 1
 * 00000001404042C3: xor     edx, edx
 * 00000001404042C5: mov     ecx, 49h ; 'I'
 * 00000001404042CA: wrmsr
 * 00000001404042CC: movzx   edx, word ptr gs:860h
 * 00000001404042D5: test    edx, 2
 * 00000001404042DB: jz      loc_140404406
 * 00000001404042E1: call    loc_1404043F4
 * 00000001404042E6: add     rsp, 8
 * 00000001404042EA: call    loc_1404043FD
 * 00000001404042EF: add     rsp, 8
 * 00000001404042F3: call    loc_1404042E6
 * 00000001404042F8: add     rsp, 8
 * 00000001404042FC: call    loc_1404042EF
 * 0000000140404301: add     rsp, 8
 * 0000000140404305: call    loc_1404042F8
 * 000000014040430A: add     rsp, 8
 * 000000014040430E: call    loc_140404301
 * 0000000140404313: add     rsp, 8
 * 0000000140404317: call    loc_14040430A
 * 000000014040431C: add     rsp, 8
 * 0000000140404320: call    loc_140404313
 * 0000000140404325: add     rsp, 8
 * 0000000140404329: call    loc_14040431C
 * 000000014040432E: add     rsp, 8
 * 0000000140404332: call    loc_140404325
 * 0000000140404337: add     rsp, 8
 * 000000014040433B: call    loc_14040432E
 * 0000000140404340: add     rsp, 8
 * 0000000140404344: call    loc_140404337
 * 0000000140404349: add     rsp, 8
 * 000000014040434D: call    loc_140404340
 * 0000000140404352: add     rsp, 8
 * 0000000140404356: call    loc_140404349
 * 000000014040435B: add     rsp, 8
 * 000000014040435F: call    loc_140404352
 * 0000000140404364: add     rsp, 8
 * 0000000140404368: call    loc_14040435B
 * 000000014040436D: add     rsp, 8
 * 0000000140404371: call    loc_140404364
 * 0000000140404376: add     rsp, 8
 * 000000014040437A: call    loc_14040436D
 * 000000014040437F: add     rsp, 8
 * 0000000140404383: call    loc_140404376
 * 0000000140404388: add     rsp, 8
 * 000000014040438C: call    loc_14040437F
 * 0000000140404391: add     rsp, 8
 * 0000000140404395: call    loc_140404388
 * 000000014040439A: add     rsp, 8
 * 000000014040439E: call    loc_140404391
 * 00000001404043A3: add     rsp, 8
 * 00000001404043A7: call    loc_14040439A
 * 00000001404043AC: add     rsp, 8
 * 00000001404043B0: call    loc_1404043A3
 * 00000001404043B5: add     rsp, 8
 * 00000001404043B9: call    loc_1404043AC
 * 00000001404043BE: add     rsp, 8
 * 00000001404043C2: call    loc_1404043B5
 * 00000001404043C7: add     rsp, 8
 * 00000001404043CB: call    loc_1404043BE
 * 00000001404043D0: add     rsp, 8
 * 00000001404043D4: call    loc_1404043C7
 * 00000001404043D9: add     rsp, 8
 * 00000001404043DD: call    loc_1404043D0
 * 00000001404043E2: add     rsp, 8
 * 00000001404043E6: call    loc_1404043D9
 * 00000001404043EB: add     rsp, 8
 * 00000001404043EF: call    loc_1404043E2
 * 00000001404043F4: add     rsp, 8
 * 00000001404043F8: call    loc_1404043EB
 * 00000001404043FD: add     rsp, 8
 * 0000000140404401: mov     eax, 0DADAh
 * 0000000140404406: test    edx, 200h
 * 000000014040440C: jz      short loc_140404413
 * 000000014040440E: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140404413: lfence
 * 0000000140404416: mov     byte ptr gs:856h, 0
 * 000000014040441F: test    byte ptr [r10+3], 3
 * 0000000140404424: mov     word ptr [rbp+80h], 0
 * 000000014040442D: jz      short loc_140404434
 * 000000014040442F: call    KiSaveDebugRegisterState
 * 0000000140404434: cld
 * 0000000140404435: stmxcsr dword ptr [rbp-54h]
 * 0000000140404439: ldmxcsr dword ptr gs:180h
 * 0000000140404442: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140404446: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014040444A: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014040444E: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140404452: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140404456: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014040445A: cmp     byte ptr gs:801Ah, 0
 * 0000000140404463: jz      short loc_14040446A
 * 0000000140404465: call    KeWakeProcessor
 * 000000014040446A: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140404471: cmp     rax, [rbp+0E8h]
 * 0000000140404478: jnb     short loc_140404493
 * 000000014040447A: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140404481: cmp     rax, [rbp+0E8h]
 * 0000000140404488: jb      short loc_140404493
 * 000000014040448A: lea     rcx, [rbp-80h]
 * 000000014040448E: call    KiCheckForSListAddress
 * 0000000140404493: xor     esi, esi
 * 0000000140404495: inc     dword ptr gs:8000h
 * 000000014040449D: jmp     KiVmbusInterruptDispatch
 */
