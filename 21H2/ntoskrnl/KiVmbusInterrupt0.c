/*
 * XREFs of KiVmbusInterrupt0 @ 0x1404038F0
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x140A15040 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14024D5B0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt0 @ 0x1404038F0 (KiVmbusInterrupt0.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140519A20 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x1404038F0
 * Reason: Hex-Rays returned no pseudocode for 0x1404038F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404038F0: push    1
 * 00000001404038F2: push    rbp
 * 00000001404038F3: push    rsi
 * 00000001404038F4: sub     rsp, 150h
 * 00000001404038FB: lea     rbp, [rsp+168h+var_E8]
 * 0000000140403903: mov     byte ptr [rbp-55h], 0
 * 0000000140403907: mov     [rbp-50h], rax
 * 000000014040390B: mov     [rbp-48h], rcx
 * 000000014040390F: mov     [rbp-40h], rdx
 * 0000000140403913: mov     [rbp-38h], r8
 * 0000000140403917: mov     [rbp-30h], r9
 * 000000014040391B: mov     [rbp-28h], r10
 * 000000014040391F: mov     [rbp-20h], r11
 * 0000000140403923: test    byte ptr [rbp+0F0h], 1
 * 000000014040392A: jnz     short loc_14040395B
 * 000000014040392C: lfence
 * 000000014040392F: test    word ptr gs:860h, 1
 * 000000014040393A: jnz     short loc_140403944
 * 000000014040393C: lfence
 * 000000014040393F: jmp     loc_140403B64
 * 0000000140403944: movzx   eax, word ptr gs:864h
 * 000000014040394D: mov     ecx, 48h ; 'H'
 * 0000000140403952: xor     edx, edx
 * 0000000140403954: wrmsr
 * 0000000140403956: jmp     loc_140403B64
 * 000000014040395B: test    cs:KiKvaShadow, 1
 * 0000000140403962: jnz     short loc_140403967
 * 0000000140403964: swapgs
 * 0000000140403967: lfence
 * 000000014040396A: mov     r10, gs:188h
 * 0000000140403973: mov     rcx, gs:188h
 * 000000014040397C: mov     rcx, [rcx+220h]
 * 0000000140403983: mov     rcx, [rcx+9E0h]
 * 000000014040398A: mov     gs:858h, rcx
 * 0000000140403993: mov     cx, gs:850h
 * 000000014040399C: mov     gs:852h, cx
 * 00000001404039A5: mov     cx, gs:860h
 * 00000001404039AE: mov     gs:854h, cx
 * 00000001404039B7: movzx   eax, word ptr gs:866h
 * 00000001404039C0: cmp     gs:864h, ax
 * 00000001404039C9: jz      short loc_1404039DD
 * 00000001404039CB: mov     gs:864h, ax
 * 00000001404039D4: mov     ecx, 48h ; 'H'
 * 00000001404039D9: xor     edx, edx
 * 00000001404039DB: wrmsr
 * 00000001404039DD: movzx   edx, word ptr gs:860h
 * 00000001404039E6: test    edx, 8
 * 00000001404039EC: jz      short loc_140403A05
 * 00000001404039EE: mov     eax, 1
 * 00000001404039F3: xor     edx, edx
 * 00000001404039F5: mov     ecx, 49h ; 'I'
 * 00000001404039FA: wrmsr
 * 00000001404039FC: movzx   edx, word ptr gs:860h
 * 0000000140403A05: test    edx, 2
 * 0000000140403A0B: jz      loc_140403B36
 * 0000000140403A11: call    loc_140403B24
 * 0000000140403A16: add     rsp, 8
 * 0000000140403A1A: call    loc_140403B2D
 * 0000000140403A1F: add     rsp, 8
 * 0000000140403A23: call    loc_140403A16
 * 0000000140403A28: add     rsp, 8
 * 0000000140403A2C: call    loc_140403A1F
 * 0000000140403A31: add     rsp, 8
 * 0000000140403A35: call    loc_140403A28
 * 0000000140403A3A: add     rsp, 8
 * 0000000140403A3E: call    loc_140403A31
 * 0000000140403A43: add     rsp, 8
 * 0000000140403A47: call    loc_140403A3A
 * 0000000140403A4C: add     rsp, 8
 * 0000000140403A50: call    loc_140403A43
 * 0000000140403A55: add     rsp, 8
 * 0000000140403A59: call    loc_140403A4C
 * 0000000140403A5E: add     rsp, 8
 * 0000000140403A62: call    loc_140403A55
 * 0000000140403A67: add     rsp, 8
 * 0000000140403A6B: call    loc_140403A5E
 * 0000000140403A70: add     rsp, 8
 * 0000000140403A74: call    loc_140403A67
 * 0000000140403A79: add     rsp, 8
 * 0000000140403A7D: call    loc_140403A70
 * 0000000140403A82: add     rsp, 8
 * 0000000140403A86: call    loc_140403A79
 * 0000000140403A8B: add     rsp, 8
 * 0000000140403A8F: call    loc_140403A82
 * 0000000140403A94: add     rsp, 8
 * 0000000140403A98: call    loc_140403A8B
 * 0000000140403A9D: add     rsp, 8
 * 0000000140403AA1: call    loc_140403A94
 * 0000000140403AA6: add     rsp, 8
 * 0000000140403AAA: call    loc_140403A9D
 * 0000000140403AAF: add     rsp, 8
 * 0000000140403AB3: call    loc_140403AA6
 * 0000000140403AB8: add     rsp, 8
 * 0000000140403ABC: call    loc_140403AAF
 * 0000000140403AC1: add     rsp, 8
 * 0000000140403AC5: call    loc_140403AB8
 * 0000000140403ACA: add     rsp, 8
 * 0000000140403ACE: call    loc_140403AC1
 * 0000000140403AD3: add     rsp, 8
 * 0000000140403AD7: call    loc_140403ACA
 * 0000000140403ADC: add     rsp, 8
 * 0000000140403AE0: call    loc_140403AD3
 * 0000000140403AE5: add     rsp, 8
 * 0000000140403AE9: call    loc_140403ADC
 * 0000000140403AEE: add     rsp, 8
 * 0000000140403AF2: call    loc_140403AE5
 * 0000000140403AF7: add     rsp, 8
 * 0000000140403AFB: call    loc_140403AEE
 * 0000000140403B00: add     rsp, 8
 * 0000000140403B04: call    loc_140403AF7
 * 0000000140403B09: add     rsp, 8
 * 0000000140403B0D: call    loc_140403B00
 * 0000000140403B12: add     rsp, 8
 * 0000000140403B16: call    loc_140403B09
 * 0000000140403B1B: add     rsp, 8
 * 0000000140403B1F: call    loc_140403B12
 * 0000000140403B24: add     rsp, 8
 * 0000000140403B28: call    loc_140403B1B
 * 0000000140403B2D: add     rsp, 8
 * 0000000140403B31: mov     eax, 0DADAh
 * 0000000140403B36: test    edx, 200h
 * 0000000140403B3C: jz      short loc_140403B43
 * 0000000140403B3E: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140403B43: lfence
 * 0000000140403B46: mov     byte ptr gs:856h, 0
 * 0000000140403B4F: test    byte ptr [r10+3], 3
 * 0000000140403B54: mov     word ptr [rbp+80h], 0
 * 0000000140403B5D: jz      short loc_140403B64
 * 0000000140403B5F: call    KiSaveDebugRegisterState
 * 0000000140403B64: cld
 * 0000000140403B65: stmxcsr dword ptr [rbp-54h]
 * 0000000140403B69: ldmxcsr dword ptr gs:180h
 * 0000000140403B72: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140403B76: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140403B7A: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140403B7E: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140403B82: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140403B86: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140403B8A: cmp     byte ptr gs:801Ah, 0
 * 0000000140403B93: jz      short loc_140403B9A
 * 0000000140403B95: call    KeWakeProcessor
 * 0000000140403B9A: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140403BA1: cmp     rax, [rbp+0E8h]
 * 0000000140403BA8: jnb     short loc_140403BC3
 * 0000000140403BAA: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140403BB1: cmp     rax, [rbp+0E8h]
 * 0000000140403BB8: jb      short loc_140403BC3
 * 0000000140403BBA: lea     rcx, [rbp-80h]
 * 0000000140403BBE: call    KiCheckForSListAddress
 * 0000000140403BC3: xor     esi, esi
 * 0000000140403BC5: inc     dword ptr gs:8000h
 * 0000000140403BCD: jmp     KiVmbusInterruptDispatch
 */
