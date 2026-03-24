/*
 * XREFs of KiVmbusInterrupt1 @ 0x1403FAA10
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x140A120C0 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1402EC460 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt1 @ 0x1403FAA10 (KiVmbusInterrupt1.c)
 *     KeWakeProcessor @ 0x140513F60 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x1403FAA10
 * Reason: Hex-Rays returned no pseudocode for 0x1403FAA10
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FAA10: push    2
 * 00000001403FAA12: push    rbp
 * 00000001403FAA13: push    rsi
 * 00000001403FAA14: sub     rsp, 150h
 * 00000001403FAA1B: lea     rbp, [rsp+168h+var_E8]
 * 00000001403FAA23: mov     byte ptr [rbp-55h], 0
 * 00000001403FAA27: mov     [rbp-50h], rax
 * 00000001403FAA2B: mov     [rbp-48h], rcx
 * 00000001403FAA2F: mov     [rbp-40h], rdx
 * 00000001403FAA33: mov     [rbp-38h], r8
 * 00000001403FAA37: mov     [rbp-30h], r9
 * 00000001403FAA3B: mov     [rbp-28h], r10
 * 00000001403FAA3F: mov     [rbp-20h], r11
 * 00000001403FAA43: test    byte ptr [rbp+0F0h], 1
 * 00000001403FAA4A: jnz     short loc_1403FAA79
 * 00000001403FAA4C: lfence
 * 00000001403FAA4F: test    byte ptr gs:278h, 1
 * 00000001403FAA58: jnz     short loc_1403FAA62
 * 00000001403FAA5A: lfence
 * 00000001403FAA5D: jmp     loc_1403FAC75
 * 00000001403FAA62: movzx   eax, byte ptr gs:27Ah
 * 00000001403FAA6B: mov     ecx, 48h ; 'H'
 * 00000001403FAA70: xor     edx, edx
 * 00000001403FAA72: wrmsr
 * 00000001403FAA74: jmp     loc_1403FAC75
 * 00000001403FAA79: test    cs:KiKvaShadow, 1
 * 00000001403FAA80: jnz     short loc_1403FAA85
 * 00000001403FAA82: swapgs
 * 00000001403FAA85: lfence
 * 00000001403FAA88: mov     r10, gs:188h
 * 00000001403FAA91: mov     rcx, gs:188h
 * 00000001403FAA9A: mov     rcx, [rcx+220h]
 * 00000001403FAAA1: mov     rcx, [rcx+9E0h]
 * 00000001403FAAA8: mov     gs:270h, rcx
 * 00000001403FAAB1: mov     cl, gs:850h
 * 00000001403FAAB9: mov     gs:851h, cl
 * 00000001403FAAC1: mov     cl, gs:278h
 * 00000001403FAAC9: mov     gs:852h, cl
 * 00000001403FAAD1: movzx   eax, byte ptr gs:27Bh
 * 00000001403FAADA: cmp     gs:27Ah, al
 * 00000001403FAAE2: jz      short loc_1403FAAF5
 * 00000001403FAAE4: mov     gs:27Ah, al
 * 00000001403FAAEC: mov     ecx, 48h ; 'H'
 * 00000001403FAAF1: xor     edx, edx
 * 00000001403FAAF3: wrmsr
 * 00000001403FAAF5: movzx   edx, byte ptr gs:278h
 * 00000001403FAAFE: test    edx, 8
 * 00000001403FAB04: jz      short loc_1403FAB19
 * 00000001403FAB06: mov     eax, 1
 * 00000001403FAB0B: xor     edx, edx
 * 00000001403FAB0D: mov     ecx, 49h ; 'I'
 * 00000001403FAB12: wrmsr
 * 00000001403FAB14: jmp     loc_1403FAC57
 * 00000001403FAB19: test    edx, 2
 * 00000001403FAB1F: jz      loc_1403FAC54
 * 00000001403FAB25: test    byte ptr gs:279h, 4
 * 00000001403FAB2E: jnz     loc_1403FAC54
 * 00000001403FAB34: call    loc_1403FAC47
 * 00000001403FAB39: add     rsp, 8
 * 00000001403FAB3D: call    loc_1403FAC50
 * 00000001403FAB42: add     rsp, 8
 * 00000001403FAB46: call    loc_1403FAB39
 * 00000001403FAB4B: add     rsp, 8
 * 00000001403FAB4F: call    loc_1403FAB42
 * 00000001403FAB54: add     rsp, 8
 * 00000001403FAB58: call    loc_1403FAB4B
 * 00000001403FAB5D: add     rsp, 8
 * 00000001403FAB61: call    loc_1403FAB54
 * 00000001403FAB66: add     rsp, 8
 * 00000001403FAB6A: call    loc_1403FAB5D
 * 00000001403FAB6F: add     rsp, 8
 * 00000001403FAB73: call    loc_1403FAB66
 * 00000001403FAB78: add     rsp, 8
 * 00000001403FAB7C: call    loc_1403FAB6F
 * 00000001403FAB81: add     rsp, 8
 * 00000001403FAB85: call    loc_1403FAB78
 * 00000001403FAB8A: add     rsp, 8
 * 00000001403FAB8E: call    loc_1403FAB81
 * 00000001403FAB93: add     rsp, 8
 * 00000001403FAB97: call    loc_1403FAB8A
 * 00000001403FAB9C: add     rsp, 8
 * 00000001403FABA0: call    loc_1403FAB93
 * 00000001403FABA5: add     rsp, 8
 * 00000001403FABA9: call    loc_1403FAB9C
 * 00000001403FABAE: add     rsp, 8
 * 00000001403FABB2: call    loc_1403FABA5
 * 00000001403FABB7: add     rsp, 8
 * 00000001403FABBB: call    loc_1403FABAE
 * 00000001403FABC0: add     rsp, 8
 * 00000001403FABC4: call    loc_1403FABB7
 * 00000001403FABC9: add     rsp, 8
 * 00000001403FABCD: call    loc_1403FABC0
 * 00000001403FABD2: add     rsp, 8
 * 00000001403FABD6: call    loc_1403FABC9
 * 00000001403FABDB: add     rsp, 8
 * 00000001403FABDF: call    loc_1403FABD2
 * 00000001403FABE4: add     rsp, 8
 * 00000001403FABE8: call    loc_1403FABDB
 * 00000001403FABED: add     rsp, 8
 * 00000001403FABF1: call    loc_1403FABE4
 * 00000001403FABF6: add     rsp, 8
 * 00000001403FABFA: call    loc_1403FABED
 * 00000001403FABFF: add     rsp, 8
 * 00000001403FAC03: call    loc_1403FABF6
 * 00000001403FAC08: add     rsp, 8
 * 00000001403FAC0C: call    loc_1403FABFF
 * 00000001403FAC11: add     rsp, 8
 * 00000001403FAC15: call    loc_1403FAC08
 * 00000001403FAC1A: add     rsp, 8
 * 00000001403FAC1E: call    loc_1403FAC11
 * 00000001403FAC23: add     rsp, 8
 * 00000001403FAC27: call    loc_1403FAC1A
 * 00000001403FAC2C: add     rsp, 8
 * 00000001403FAC30: call    loc_1403FAC23
 * 00000001403FAC35: add     rsp, 8
 * 00000001403FAC39: call    loc_1403FAC2C
 * 00000001403FAC3E: add     rsp, 8
 * 00000001403FAC42: call    loc_1403FAC35
 * 00000001403FAC47: add     rsp, 8
 * 00000001403FAC4B: call    loc_1403FAC3E
 * 00000001403FAC50: add     rsp, 8
 * 00000001403FAC54: lfence
 * 00000001403FAC57: mov     byte ptr gs:853h, 0
 * 00000001403FAC60: test    byte ptr [r10+3], 3
 * 00000001403FAC65: mov     word ptr [rbp+80h], 0
 * 00000001403FAC6E: jz      short loc_1403FAC75
 * 00000001403FAC70: call    KiSaveDebugRegisterState
 * 00000001403FAC75: cld
 * 00000001403FAC76: stmxcsr dword ptr [rbp-54h]
 * 00000001403FAC7A: ldmxcsr dword ptr gs:180h
 * 00000001403FAC83: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001403FAC87: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001403FAC8B: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001403FAC8F: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001403FAC93: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001403FAC97: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001403FAC9B: cmp     byte ptr gs:801Ah, 0
 * 00000001403FACA4: jz      short loc_1403FACAB
 * 00000001403FACA6: call    KeWakeProcessor
 * 00000001403FACAB: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001403FACB2: cmp     rax, [rbp+0E8h]
 * 00000001403FACB9: jnb     short loc_1403FACD4
 * 00000001403FACBB: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001403FACC2: cmp     rax, [rbp+0E8h]
 * 00000001403FACC9: jb      short loc_1403FACD4
 * 00000001403FACCB: lea     rcx, [rbp-80h]
 * 00000001403FACCF: call    KiCheckForSListAddress
 * 00000001403FACD4: xor     esi, esi
 * 00000001403FACD6: inc     dword ptr gs:8000h
 * 00000001403FACDE: jmp     KiVmbusInterruptDispatch
 */
