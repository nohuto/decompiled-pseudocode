/*
 * XREFs of KiVmbusInterrupt1 @ 0x140403DC0
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x140A160C0 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1402F1E00 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt1 @ 0x140403DC0 (KiVmbusInterrupt1.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140519C60 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x140403DC0
 * Reason: Hex-Rays returned no pseudocode for 0x140403DC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140403DC0: push    2
 * 0000000140403DC2: push    rbp
 * 0000000140403DC3: push    rsi
 * 0000000140403DC4: sub     rsp, 150h
 * 0000000140403DCB: lea     rbp, [rsp+168h+var_E8]
 * 0000000140403DD3: mov     byte ptr [rbp-55h], 0
 * 0000000140403DD7: mov     [rbp-50h], rax
 * 0000000140403DDB: mov     [rbp-48h], rcx
 * 0000000140403DDF: mov     [rbp-40h], rdx
 * 0000000140403DE3: mov     [rbp-38h], r8
 * 0000000140403DE7: mov     [rbp-30h], r9
 * 0000000140403DEB: mov     [rbp-28h], r10
 * 0000000140403DEF: mov     [rbp-20h], r11
 * 0000000140403DF3: test    byte ptr [rbp+0F0h], 1
 * 0000000140403DFA: jnz     short loc_140403E2B
 * 0000000140403DFC: lfence
 * 0000000140403DFF: test    word ptr gs:860h, 1
 * 0000000140403E0A: jnz     short loc_140403E14
 * 0000000140403E0C: lfence
 * 0000000140403E0F: jmp     loc_140404034
 * 0000000140403E14: movzx   eax, word ptr gs:864h
 * 0000000140403E1D: mov     ecx, 48h ; 'H'
 * 0000000140403E22: xor     edx, edx
 * 0000000140403E24: wrmsr
 * 0000000140403E26: jmp     loc_140404034
 * 0000000140403E2B: test    cs:KiKvaShadow, 1
 * 0000000140403E32: jnz     short loc_140403E37
 * 0000000140403E34: swapgs
 * 0000000140403E37: lfence
 * 0000000140403E3A: mov     r10, gs:188h
 * 0000000140403E43: mov     rcx, gs:188h
 * 0000000140403E4C: mov     rcx, [rcx+220h]
 * 0000000140403E53: mov     rcx, [rcx+9E0h]
 * 0000000140403E5A: mov     gs:858h, rcx
 * 0000000140403E63: mov     cx, gs:850h
 * 0000000140403E6C: mov     gs:852h, cx
 * 0000000140403E75: mov     cx, gs:860h
 * 0000000140403E7E: mov     gs:854h, cx
 * 0000000140403E87: movzx   eax, word ptr gs:866h
 * 0000000140403E90: cmp     gs:864h, ax
 * 0000000140403E99: jz      short loc_140403EAD
 * 0000000140403E9B: mov     gs:864h, ax
 * 0000000140403EA4: mov     ecx, 48h ; 'H'
 * 0000000140403EA9: xor     edx, edx
 * 0000000140403EAB: wrmsr
 * 0000000140403EAD: movzx   edx, word ptr gs:860h
 * 0000000140403EB6: test    edx, 8
 * 0000000140403EBC: jz      short loc_140403ED5
 * 0000000140403EBE: mov     eax, 1
 * 0000000140403EC3: xor     edx, edx
 * 0000000140403EC5: mov     ecx, 49h ; 'I'
 * 0000000140403ECA: wrmsr
 * 0000000140403ECC: movzx   edx, word ptr gs:860h
 * 0000000140403ED5: test    edx, 2
 * 0000000140403EDB: jz      loc_140404006
 * 0000000140403EE1: call    loc_140403FF4
 * 0000000140403EE6: add     rsp, 8
 * 0000000140403EEA: call    loc_140403FFD
 * 0000000140403EEF: add     rsp, 8
 * 0000000140403EF3: call    loc_140403EE6
 * 0000000140403EF8: add     rsp, 8
 * 0000000140403EFC: call    loc_140403EEF
 * 0000000140403F01: add     rsp, 8
 * 0000000140403F05: call    loc_140403EF8
 * 0000000140403F0A: add     rsp, 8
 * 0000000140403F0E: call    loc_140403F01
 * 0000000140403F13: add     rsp, 8
 * 0000000140403F17: call    loc_140403F0A
 * 0000000140403F1C: add     rsp, 8
 * 0000000140403F20: call    loc_140403F13
 * 0000000140403F25: add     rsp, 8
 * 0000000140403F29: call    loc_140403F1C
 * 0000000140403F2E: add     rsp, 8
 * 0000000140403F32: call    loc_140403F25
 * 0000000140403F37: add     rsp, 8
 * 0000000140403F3B: call    loc_140403F2E
 * 0000000140403F40: add     rsp, 8
 * 0000000140403F44: call    loc_140403F37
 * 0000000140403F49: add     rsp, 8
 * 0000000140403F4D: call    loc_140403F40
 * 0000000140403F52: add     rsp, 8
 * 0000000140403F56: call    loc_140403F49
 * 0000000140403F5B: add     rsp, 8
 * 0000000140403F5F: call    loc_140403F52
 * 0000000140403F64: add     rsp, 8
 * 0000000140403F68: call    loc_140403F5B
 * 0000000140403F6D: add     rsp, 8
 * 0000000140403F71: call    loc_140403F64
 * 0000000140403F76: add     rsp, 8
 * 0000000140403F7A: call    loc_140403F6D
 * 0000000140403F7F: add     rsp, 8
 * 0000000140403F83: call    loc_140403F76
 * 0000000140403F88: add     rsp, 8
 * 0000000140403F8C: call    loc_140403F7F
 * 0000000140403F91: add     rsp, 8
 * 0000000140403F95: call    loc_140403F88
 * 0000000140403F9A: add     rsp, 8
 * 0000000140403F9E: call    loc_140403F91
 * 0000000140403FA3: add     rsp, 8
 * 0000000140403FA7: call    loc_140403F9A
 * 0000000140403FAC: add     rsp, 8
 * 0000000140403FB0: call    loc_140403FA3
 * 0000000140403FB5: add     rsp, 8
 * 0000000140403FB9: call    loc_140403FAC
 * 0000000140403FBE: add     rsp, 8
 * 0000000140403FC2: call    loc_140403FB5
 * 0000000140403FC7: add     rsp, 8
 * 0000000140403FCB: call    loc_140403FBE
 * 0000000140403FD0: add     rsp, 8
 * 0000000140403FD4: call    loc_140403FC7
 * 0000000140403FD9: add     rsp, 8
 * 0000000140403FDD: call    loc_140403FD0
 * 0000000140403FE2: add     rsp, 8
 * 0000000140403FE6: call    loc_140403FD9
 * 0000000140403FEB: add     rsp, 8
 * 0000000140403FEF: call    loc_140403FE2
 * 0000000140403FF4: add     rsp, 8
 * 0000000140403FF8: call    loc_140403FEB
 * 0000000140403FFD: add     rsp, 8
 * 0000000140404001: mov     eax, 0DADAh
 * 0000000140404006: test    edx, 200h
 * 000000014040400C: jz      short loc_140404013
 * 000000014040400E: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140404013: lfence
 * 0000000140404016: mov     byte ptr gs:856h, 0
 * 000000014040401F: test    byte ptr [r10+3], 3
 * 0000000140404024: mov     word ptr [rbp+80h], 0
 * 000000014040402D: jz      short loc_140404034
 * 000000014040402F: call    KiSaveDebugRegisterState
 * 0000000140404034: cld
 * 0000000140404035: stmxcsr dword ptr [rbp-54h]
 * 0000000140404039: ldmxcsr dword ptr gs:180h
 * 0000000140404042: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140404046: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014040404A: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014040404E: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140404052: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140404056: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014040405A: cmp     byte ptr gs:801Ah, 0
 * 0000000140404063: jz      short loc_14040406A
 * 0000000140404065: call    KeWakeProcessor
 * 000000014040406A: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140404071: cmp     rax, [rbp+0E8h]
 * 0000000140404078: jnb     short loc_140404093
 * 000000014040407A: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140404081: cmp     rax, [rbp+0E8h]
 * 0000000140404088: jb      short loc_140404093
 * 000000014040408A: lea     rcx, [rbp-80h]
 * 000000014040408E: call    KiCheckForSListAddress
 * 0000000140404093: xor     esi, esi
 * 0000000140404095: inc     dword ptr gs:8000h
 * 000000014040409D: jmp     KiVmbusInterruptDispatch
 */
