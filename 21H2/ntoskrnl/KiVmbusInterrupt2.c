/*
 * XREFs of KiVmbusInterrupt2 @ 0x140403ED0
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x140A15140 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14024D5B0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt2 @ 0x140403ED0 (KiVmbusInterrupt2.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140519A20 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x140403ED0
 * Reason: Hex-Rays returned no pseudocode for 0x140403ED0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140403ED0: push    3
 * 0000000140403ED2: push    rbp
 * 0000000140403ED3: push    rsi
 * 0000000140403ED4: sub     rsp, 150h
 * 0000000140403EDB: lea     rbp, [rsp+168h+var_E8]
 * 0000000140403EE3: mov     byte ptr [rbp-55h], 0
 * 0000000140403EE7: mov     [rbp-50h], rax
 * 0000000140403EEB: mov     [rbp-48h], rcx
 * 0000000140403EEF: mov     [rbp-40h], rdx
 * 0000000140403EF3: mov     [rbp-38h], r8
 * 0000000140403EF7: mov     [rbp-30h], r9
 * 0000000140403EFB: mov     [rbp-28h], r10
 * 0000000140403EFF: mov     [rbp-20h], r11
 * 0000000140403F03: test    byte ptr [rbp+0F0h], 1
 * 0000000140403F0A: jnz     short loc_140403F3B
 * 0000000140403F0C: lfence
 * 0000000140403F0F: test    word ptr gs:860h, 1
 * 0000000140403F1A: jnz     short loc_140403F24
 * 0000000140403F1C: lfence
 * 0000000140403F1F: jmp     loc_140404144
 * 0000000140403F24: movzx   eax, word ptr gs:864h
 * 0000000140403F2D: mov     ecx, 48h ; 'H'
 * 0000000140403F32: xor     edx, edx
 * 0000000140403F34: wrmsr
 * 0000000140403F36: jmp     loc_140404144
 * 0000000140403F3B: test    cs:KiKvaShadow, 1
 * 0000000140403F42: jnz     short loc_140403F47
 * 0000000140403F44: swapgs
 * 0000000140403F47: lfence
 * 0000000140403F4A: mov     r10, gs:188h
 * 0000000140403F53: mov     rcx, gs:188h
 * 0000000140403F5C: mov     rcx, [rcx+220h]
 * 0000000140403F63: mov     rcx, [rcx+9E0h]
 * 0000000140403F6A: mov     gs:858h, rcx
 * 0000000140403F73: mov     cx, gs:850h
 * 0000000140403F7C: mov     gs:852h, cx
 * 0000000140403F85: mov     cx, gs:860h
 * 0000000140403F8E: mov     gs:854h, cx
 * 0000000140403F97: movzx   eax, word ptr gs:866h
 * 0000000140403FA0: cmp     gs:864h, ax
 * 0000000140403FA9: jz      short loc_140403FBD
 * 0000000140403FAB: mov     gs:864h, ax
 * 0000000140403FB4: mov     ecx, 48h ; 'H'
 * 0000000140403FB9: xor     edx, edx
 * 0000000140403FBB: wrmsr
 * 0000000140403FBD: movzx   edx, word ptr gs:860h
 * 0000000140403FC6: test    edx, 8
 * 0000000140403FCC: jz      short loc_140403FE5
 * 0000000140403FCE: mov     eax, 1
 * 0000000140403FD3: xor     edx, edx
 * 0000000140403FD5: mov     ecx, 49h ; 'I'
 * 0000000140403FDA: wrmsr
 * 0000000140403FDC: movzx   edx, word ptr gs:860h
 * 0000000140403FE5: test    edx, 2
 * 0000000140403FEB: jz      loc_140404116
 * 0000000140403FF1: call    loc_140404104
 * 0000000140403FF6: add     rsp, 8
 * 0000000140403FFA: call    loc_14040410D
 * 0000000140403FFF: add     rsp, 8
 * 0000000140404003: call    loc_140403FF6
 * 0000000140404008: add     rsp, 8
 * 000000014040400C: call    loc_140403FFF
 * 0000000140404011: add     rsp, 8
 * 0000000140404015: call    loc_140404008
 * 000000014040401A: add     rsp, 8
 * 000000014040401E: call    loc_140404011
 * 0000000140404023: add     rsp, 8
 * 0000000140404027: call    loc_14040401A
 * 000000014040402C: add     rsp, 8
 * 0000000140404030: call    loc_140404023
 * 0000000140404035: add     rsp, 8
 * 0000000140404039: call    loc_14040402C
 * 000000014040403E: add     rsp, 8
 * 0000000140404042: call    loc_140404035
 * 0000000140404047: add     rsp, 8
 * 000000014040404B: call    loc_14040403E
 * 0000000140404050: add     rsp, 8
 * 0000000140404054: call    loc_140404047
 * 0000000140404059: add     rsp, 8
 * 000000014040405D: call    loc_140404050
 * 0000000140404062: add     rsp, 8
 * 0000000140404066: call    loc_140404059
 * 000000014040406B: add     rsp, 8
 * 000000014040406F: call    loc_140404062
 * 0000000140404074: add     rsp, 8
 * 0000000140404078: call    loc_14040406B
 * 000000014040407D: add     rsp, 8
 * 0000000140404081: call    loc_140404074
 * 0000000140404086: add     rsp, 8
 * 000000014040408A: call    loc_14040407D
 * 000000014040408F: add     rsp, 8
 * 0000000140404093: call    loc_140404086
 * 0000000140404098: add     rsp, 8
 * 000000014040409C: call    loc_14040408F
 * 00000001404040A1: add     rsp, 8
 * 00000001404040A5: call    loc_140404098
 * 00000001404040AA: add     rsp, 8
 * 00000001404040AE: call    loc_1404040A1
 * 00000001404040B3: add     rsp, 8
 * 00000001404040B7: call    loc_1404040AA
 * 00000001404040BC: add     rsp, 8
 * 00000001404040C0: call    loc_1404040B3
 * 00000001404040C5: add     rsp, 8
 * 00000001404040C9: call    loc_1404040BC
 * 00000001404040CE: add     rsp, 8
 * 00000001404040D2: call    loc_1404040C5
 * 00000001404040D7: add     rsp, 8
 * 00000001404040DB: call    loc_1404040CE
 * 00000001404040E0: add     rsp, 8
 * 00000001404040E4: call    loc_1404040D7
 * 00000001404040E9: add     rsp, 8
 * 00000001404040ED: call    loc_1404040E0
 * 00000001404040F2: add     rsp, 8
 * 00000001404040F6: call    loc_1404040E9
 * 00000001404040FB: add     rsp, 8
 * 00000001404040FF: call    loc_1404040F2
 * 0000000140404104: add     rsp, 8
 * 0000000140404108: call    loc_1404040FB
 * 000000014040410D: add     rsp, 8
 * 0000000140404111: mov     eax, 0DADAh
 * 0000000140404116: test    edx, 200h
 * 000000014040411C: jz      short loc_140404123
 * 000000014040411E: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140404123: lfence
 * 0000000140404126: mov     byte ptr gs:856h, 0
 * 000000014040412F: test    byte ptr [r10+3], 3
 * 0000000140404134: mov     word ptr [rbp+80h], 0
 * 000000014040413D: jz      short loc_140404144
 * 000000014040413F: call    KiSaveDebugRegisterState
 * 0000000140404144: cld
 * 0000000140404145: stmxcsr dword ptr [rbp-54h]
 * 0000000140404149: ldmxcsr dword ptr gs:180h
 * 0000000140404152: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140404156: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014040415A: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014040415E: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140404162: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140404166: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014040416A: cmp     byte ptr gs:801Ah, 0
 * 0000000140404173: jz      short loc_14040417A
 * 0000000140404175: call    KeWakeProcessor
 * 000000014040417A: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140404181: cmp     rax, [rbp+0E8h]
 * 0000000140404188: jnb     short loc_1404041A3
 * 000000014040418A: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140404191: cmp     rax, [rbp+0E8h]
 * 0000000140404198: jb      short loc_1404041A3
 * 000000014040419A: lea     rcx, [rbp-80h]
 * 000000014040419E: call    KiCheckForSListAddress
 * 00000001404041A3: xor     esi, esi
 * 00000001404041A5: inc     dword ptr gs:8000h
 * 00000001404041AD: jmp     KiVmbusInterruptDispatch
 */
