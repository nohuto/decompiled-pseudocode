/*
 * XREFs of KiVmbusInterrupt1 @ 0x140403BE0
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x140A150C0 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14024D5B0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt1 @ 0x140403BE0 (KiVmbusInterrupt1.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140519A20 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x140403BE0
 * Reason: Hex-Rays returned no pseudocode for 0x140403BE0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140403BE0: push    2
 * 0000000140403BE2: push    rbp
 * 0000000140403BE3: push    rsi
 * 0000000140403BE4: sub     rsp, 150h
 * 0000000140403BEB: lea     rbp, [rsp+168h+var_E8]
 * 0000000140403BF3: mov     byte ptr [rbp-55h], 0
 * 0000000140403BF7: mov     [rbp-50h], rax
 * 0000000140403BFB: mov     [rbp-48h], rcx
 * 0000000140403BFF: mov     [rbp-40h], rdx
 * 0000000140403C03: mov     [rbp-38h], r8
 * 0000000140403C07: mov     [rbp-30h], r9
 * 0000000140403C0B: mov     [rbp-28h], r10
 * 0000000140403C0F: mov     [rbp-20h], r11
 * 0000000140403C13: test    byte ptr [rbp+0F0h], 1
 * 0000000140403C1A: jnz     short loc_140403C4B
 * 0000000140403C1C: lfence
 * 0000000140403C1F: test    word ptr gs:860h, 1
 * 0000000140403C2A: jnz     short loc_140403C34
 * 0000000140403C2C: lfence
 * 0000000140403C2F: jmp     loc_140403E54
 * 0000000140403C34: movzx   eax, word ptr gs:864h
 * 0000000140403C3D: mov     ecx, 48h ; 'H'
 * 0000000140403C42: xor     edx, edx
 * 0000000140403C44: wrmsr
 * 0000000140403C46: jmp     loc_140403E54
 * 0000000140403C4B: test    cs:KiKvaShadow, 1
 * 0000000140403C52: jnz     short loc_140403C57
 * 0000000140403C54: swapgs
 * 0000000140403C57: lfence
 * 0000000140403C5A: mov     r10, gs:188h
 * 0000000140403C63: mov     rcx, gs:188h
 * 0000000140403C6C: mov     rcx, [rcx+220h]
 * 0000000140403C73: mov     rcx, [rcx+9E0h]
 * 0000000140403C7A: mov     gs:858h, rcx
 * 0000000140403C83: mov     cx, gs:850h
 * 0000000140403C8C: mov     gs:852h, cx
 * 0000000140403C95: mov     cx, gs:860h
 * 0000000140403C9E: mov     gs:854h, cx
 * 0000000140403CA7: movzx   eax, word ptr gs:866h
 * 0000000140403CB0: cmp     gs:864h, ax
 * 0000000140403CB9: jz      short loc_140403CCD
 * 0000000140403CBB: mov     gs:864h, ax
 * 0000000140403CC4: mov     ecx, 48h ; 'H'
 * 0000000140403CC9: xor     edx, edx
 * 0000000140403CCB: wrmsr
 * 0000000140403CCD: movzx   edx, word ptr gs:860h
 * 0000000140403CD6: test    edx, 8
 * 0000000140403CDC: jz      short loc_140403CF5
 * 0000000140403CDE: mov     eax, 1
 * 0000000140403CE3: xor     edx, edx
 * 0000000140403CE5: mov     ecx, 49h ; 'I'
 * 0000000140403CEA: wrmsr
 * 0000000140403CEC: movzx   edx, word ptr gs:860h
 * 0000000140403CF5: test    edx, 2
 * 0000000140403CFB: jz      loc_140403E26
 * 0000000140403D01: call    loc_140403E14
 * 0000000140403D06: add     rsp, 8
 * 0000000140403D0A: call    loc_140403E1D
 * 0000000140403D0F: add     rsp, 8
 * 0000000140403D13: call    loc_140403D06
 * 0000000140403D18: add     rsp, 8
 * 0000000140403D1C: call    loc_140403D0F
 * 0000000140403D21: add     rsp, 8
 * 0000000140403D25: call    loc_140403D18
 * 0000000140403D2A: add     rsp, 8
 * 0000000140403D2E: call    loc_140403D21
 * 0000000140403D33: add     rsp, 8
 * 0000000140403D37: call    loc_140403D2A
 * 0000000140403D3C: add     rsp, 8
 * 0000000140403D40: call    loc_140403D33
 * 0000000140403D45: add     rsp, 8
 * 0000000140403D49: call    loc_140403D3C
 * 0000000140403D4E: add     rsp, 8
 * 0000000140403D52: call    loc_140403D45
 * 0000000140403D57: add     rsp, 8
 * 0000000140403D5B: call    loc_140403D4E
 * 0000000140403D60: add     rsp, 8
 * 0000000140403D64: call    loc_140403D57
 * 0000000140403D69: add     rsp, 8
 * 0000000140403D6D: call    loc_140403D60
 * 0000000140403D72: add     rsp, 8
 * 0000000140403D76: call    loc_140403D69
 * 0000000140403D7B: add     rsp, 8
 * 0000000140403D7F: call    loc_140403D72
 * 0000000140403D84: add     rsp, 8
 * 0000000140403D88: call    loc_140403D7B
 * 0000000140403D8D: add     rsp, 8
 * 0000000140403D91: call    loc_140403D84
 * 0000000140403D96: add     rsp, 8
 * 0000000140403D9A: call    loc_140403D8D
 * 0000000140403D9F: add     rsp, 8
 * 0000000140403DA3: call    loc_140403D96
 * 0000000140403DA8: add     rsp, 8
 * 0000000140403DAC: call    loc_140403D9F
 * 0000000140403DB1: add     rsp, 8
 * 0000000140403DB5: call    loc_140403DA8
 * 0000000140403DBA: add     rsp, 8
 * 0000000140403DBE: call    loc_140403DB1
 * 0000000140403DC3: add     rsp, 8
 * 0000000140403DC7: call    loc_140403DBA
 * 0000000140403DCC: add     rsp, 8
 * 0000000140403DD0: call    loc_140403DC3
 * 0000000140403DD5: add     rsp, 8
 * 0000000140403DD9: call    loc_140403DCC
 * 0000000140403DDE: add     rsp, 8
 * 0000000140403DE2: call    loc_140403DD5
 * 0000000140403DE7: add     rsp, 8
 * 0000000140403DEB: call    loc_140403DDE
 * 0000000140403DF0: add     rsp, 8
 * 0000000140403DF4: call    loc_140403DE7
 * 0000000140403DF9: add     rsp, 8
 * 0000000140403DFD: call    loc_140403DF0
 * 0000000140403E02: add     rsp, 8
 * 0000000140403E06: call    loc_140403DF9
 * 0000000140403E0B: add     rsp, 8
 * 0000000140403E0F: call    loc_140403E02
 * 0000000140403E14: add     rsp, 8
 * 0000000140403E18: call    loc_140403E0B
 * 0000000140403E1D: add     rsp, 8
 * 0000000140403E21: mov     eax, 0DADAh
 * 0000000140403E26: test    edx, 200h
 * 0000000140403E2C: jz      short loc_140403E33
 * 0000000140403E2E: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140403E33: lfence
 * 0000000140403E36: mov     byte ptr gs:856h, 0
 * 0000000140403E3F: test    byte ptr [r10+3], 3
 * 0000000140403E44: mov     word ptr [rbp+80h], 0
 * 0000000140403E4D: jz      short loc_140403E54
 * 0000000140403E4F: call    KiSaveDebugRegisterState
 * 0000000140403E54: cld
 * 0000000140403E55: stmxcsr dword ptr [rbp-54h]
 * 0000000140403E59: ldmxcsr dword ptr gs:180h
 * 0000000140403E62: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140403E66: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140403E6A: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140403E6E: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140403E72: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140403E76: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140403E7A: cmp     byte ptr gs:801Ah, 0
 * 0000000140403E83: jz      short loc_140403E8A
 * 0000000140403E85: call    KeWakeProcessor
 * 0000000140403E8A: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140403E91: cmp     rax, [rbp+0E8h]
 * 0000000140403E98: jnb     short loc_140403EB3
 * 0000000140403E9A: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140403EA1: cmp     rax, [rbp+0E8h]
 * 0000000140403EA8: jb      short loc_140403EB3
 * 0000000140403EAA: lea     rcx, [rbp-80h]
 * 0000000140403EAE: call    KiCheckForSListAddress
 * 0000000140403EB3: xor     esi, esi
 * 0000000140403EB5: inc     dword ptr gs:8000h
 * 0000000140403EBD: jmp     KiVmbusInterruptDispatch
 */
