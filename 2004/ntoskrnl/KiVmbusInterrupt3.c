/*
 * XREFs of KiVmbusInterrupt3 @ 0x1403FC260
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x140A121C0 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140325D90 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt3 @ 0x1403FC260 (KiVmbusInterrupt3.c)
 *     KeWakeProcessor @ 0x1405145B0 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x1403FC260
 * Reason: Hex-Rays returned no pseudocode for 0x1403FC260
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FC260: push    4
 * 00000001403FC262: push    rbp
 * 00000001403FC263: push    rsi
 * 00000001403FC264: sub     rsp, 150h
 * 00000001403FC26B: lea     rbp, [rsp+168h+var_E8]
 * 00000001403FC273: mov     byte ptr [rbp-55h], 0
 * 00000001403FC277: mov     [rbp-50h], rax
 * 00000001403FC27B: mov     [rbp-48h], rcx
 * 00000001403FC27F: mov     [rbp-40h], rdx
 * 00000001403FC283: mov     [rbp-38h], r8
 * 00000001403FC287: mov     [rbp-30h], r9
 * 00000001403FC28B: mov     [rbp-28h], r10
 * 00000001403FC28F: mov     [rbp-20h], r11
 * 00000001403FC293: test    byte ptr [rbp+0F0h], 1
 * 00000001403FC29A: jnz     short loc_1403FC2C9
 * 00000001403FC29C: lfence
 * 00000001403FC29F: test    byte ptr gs:278h, 1
 * 00000001403FC2A8: jnz     short loc_1403FC2B2
 * 00000001403FC2AA: lfence
 * 00000001403FC2AD: jmp     loc_1403FC4C5
 * 00000001403FC2B2: movzx   eax, byte ptr gs:27Ah
 * 00000001403FC2BB: mov     ecx, 48h ; 'H'
 * 00000001403FC2C0: xor     edx, edx
 * 00000001403FC2C2: wrmsr
 * 00000001403FC2C4: jmp     loc_1403FC4C5
 * 00000001403FC2C9: test    cs:KiKvaShadow, 1
 * 00000001403FC2D0: jnz     short loc_1403FC2D5
 * 00000001403FC2D2: swapgs
 * 00000001403FC2D5: lfence
 * 00000001403FC2D8: mov     r10, gs:188h
 * 00000001403FC2E1: mov     rcx, gs:188h
 * 00000001403FC2EA: mov     rcx, [rcx+220h]
 * 00000001403FC2F1: mov     rcx, [rcx+9E0h]
 * 00000001403FC2F8: mov     gs:270h, rcx
 * 00000001403FC301: mov     cl, gs:850h
 * 00000001403FC309: mov     gs:851h, cl
 * 00000001403FC311: mov     cl, gs:278h
 * 00000001403FC319: mov     gs:852h, cl
 * 00000001403FC321: movzx   eax, byte ptr gs:27Bh
 * 00000001403FC32A: cmp     gs:27Ah, al
 * 00000001403FC332: jz      short loc_1403FC345
 * 00000001403FC334: mov     gs:27Ah, al
 * 00000001403FC33C: mov     ecx, 48h ; 'H'
 * 00000001403FC341: xor     edx, edx
 * 00000001403FC343: wrmsr
 * 00000001403FC345: movzx   edx, byte ptr gs:278h
 * 00000001403FC34E: test    edx, 8
 * 00000001403FC354: jz      short loc_1403FC369
 * 00000001403FC356: mov     eax, 1
 * 00000001403FC35B: xor     edx, edx
 * 00000001403FC35D: mov     ecx, 49h ; 'I'
 * 00000001403FC362: wrmsr
 * 00000001403FC364: jmp     loc_1403FC4A7
 * 00000001403FC369: test    edx, 2
 * 00000001403FC36F: jz      loc_1403FC4A4
 * 00000001403FC375: test    byte ptr gs:279h, 4
 * 00000001403FC37E: jnz     loc_1403FC4A4
 * 00000001403FC384: call    loc_1403FC497
 * 00000001403FC389: add     rsp, 8
 * 00000001403FC38D: call    loc_1403FC4A0
 * 00000001403FC392: add     rsp, 8
 * 00000001403FC396: call    loc_1403FC389
 * 00000001403FC39B: add     rsp, 8
 * 00000001403FC39F: call    loc_1403FC392
 * 00000001403FC3A4: add     rsp, 8
 * 00000001403FC3A8: call    loc_1403FC39B
 * 00000001403FC3AD: add     rsp, 8
 * 00000001403FC3B1: call    loc_1403FC3A4
 * 00000001403FC3B6: add     rsp, 8
 * 00000001403FC3BA: call    loc_1403FC3AD
 * 00000001403FC3BF: add     rsp, 8
 * 00000001403FC3C3: call    loc_1403FC3B6
 * 00000001403FC3C8: add     rsp, 8
 * 00000001403FC3CC: call    loc_1403FC3BF
 * 00000001403FC3D1: add     rsp, 8
 * 00000001403FC3D5: call    loc_1403FC3C8
 * 00000001403FC3DA: add     rsp, 8
 * 00000001403FC3DE: call    loc_1403FC3D1
 * 00000001403FC3E3: add     rsp, 8
 * 00000001403FC3E7: call    loc_1403FC3DA
 * 00000001403FC3EC: add     rsp, 8
 * 00000001403FC3F0: call    loc_1403FC3E3
 * 00000001403FC3F5: add     rsp, 8
 * 00000001403FC3F9: call    loc_1403FC3EC
 * 00000001403FC3FE: add     rsp, 8
 * 00000001403FC402: call    loc_1403FC3F5
 * 00000001403FC407: add     rsp, 8
 * 00000001403FC40B: call    loc_1403FC3FE
 * 00000001403FC410: add     rsp, 8
 * 00000001403FC414: call    loc_1403FC407
 * 00000001403FC419: add     rsp, 8
 * 00000001403FC41D: call    loc_1403FC410
 * 00000001403FC422: add     rsp, 8
 * 00000001403FC426: call    loc_1403FC419
 * 00000001403FC42B: add     rsp, 8
 * 00000001403FC42F: call    loc_1403FC422
 * 00000001403FC434: add     rsp, 8
 * 00000001403FC438: call    loc_1403FC42B
 * 00000001403FC43D: add     rsp, 8
 * 00000001403FC441: call    loc_1403FC434
 * 00000001403FC446: add     rsp, 8
 * 00000001403FC44A: call    loc_1403FC43D
 * 00000001403FC44F: add     rsp, 8
 * 00000001403FC453: call    loc_1403FC446
 * 00000001403FC458: add     rsp, 8
 * 00000001403FC45C: call    loc_1403FC44F
 * 00000001403FC461: add     rsp, 8
 * 00000001403FC465: call    loc_1403FC458
 * 00000001403FC46A: add     rsp, 8
 * 00000001403FC46E: call    loc_1403FC461
 * 00000001403FC473: add     rsp, 8
 * 00000001403FC477: call    loc_1403FC46A
 * 00000001403FC47C: add     rsp, 8
 * 00000001403FC480: call    loc_1403FC473
 * 00000001403FC485: add     rsp, 8
 * 00000001403FC489: call    loc_1403FC47C
 * 00000001403FC48E: add     rsp, 8
 * 00000001403FC492: call    loc_1403FC485
 * 00000001403FC497: add     rsp, 8
 * 00000001403FC49B: call    loc_1403FC48E
 * 00000001403FC4A0: add     rsp, 8
 * 00000001403FC4A4: lfence
 * 00000001403FC4A7: mov     byte ptr gs:853h, 0
 * 00000001403FC4B0: test    byte ptr [r10+3], 3
 * 00000001403FC4B5: mov     word ptr [rbp+80h], 0
 * 00000001403FC4BE: jz      short loc_1403FC4C5
 * 00000001403FC4C0: call    KiSaveDebugRegisterState
 * 00000001403FC4C5: cld
 * 00000001403FC4C6: stmxcsr dword ptr [rbp-54h]
 * 00000001403FC4CA: ldmxcsr dword ptr gs:180h
 * 00000001403FC4D3: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001403FC4D7: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001403FC4DB: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001403FC4DF: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001403FC4E3: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001403FC4E7: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001403FC4EB: cmp     byte ptr gs:801Ah, 0
 * 00000001403FC4F4: jz      short loc_1403FC4FB
 * 00000001403FC4F6: call    KeWakeProcessor
 * 00000001403FC4FB: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001403FC502: cmp     rax, [rbp+0E8h]
 * 00000001403FC509: jnb     short loc_1403FC524
 * 00000001403FC50B: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001403FC512: cmp     rax, [rbp+0E8h]
 * 00000001403FC519: jb      short loc_1403FC524
 * 00000001403FC51B: lea     rcx, [rbp-80h]
 * 00000001403FC51F: call    KiCheckForSListAddress
 * 00000001403FC524: xor     esi, esi
 * 00000001403FC526: inc     dword ptr gs:8000h
 * 00000001403FC52E: jmp     KiVmbusInterruptDispatch
 */
