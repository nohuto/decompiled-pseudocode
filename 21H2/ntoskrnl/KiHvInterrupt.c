/*
 * XREFs of KiHvInterrupt @ 0x1404037E0
 * Callers:
 *     KiHvInterruptShadow @ 0x140A15FC0 (KiHvInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1402F1E00 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiHvInterrupt @ 0x1404037E0 (KiHvInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140519C60 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x1404037E0
 * Reason: Hex-Rays returned no pseudocode for 0x1404037E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404037E0: push    0
 * 00000001404037E2: push    rbp
 * 00000001404037E3: push    rsi
 * 00000001404037E4: sub     rsp, 150h
 * 00000001404037EB: lea     rbp, [rsp+168h+var_E8]
 * 00000001404037F3: mov     byte ptr [rbp-55h], 0
 * 00000001404037F7: mov     [rbp-50h], rax
 * 00000001404037FB: mov     [rbp-48h], rcx
 * 00000001404037FF: mov     [rbp-40h], rdx
 * 0000000140403803: mov     [rbp-38h], r8
 * 0000000140403807: mov     [rbp-30h], r9
 * 000000014040380B: mov     [rbp-28h], r10
 * 000000014040380F: mov     [rbp-20h], r11
 * 0000000140403813: test    byte ptr [rbp+0F0h], 1
 * 000000014040381A: jnz     short loc_14040384B
 * 000000014040381C: lfence
 * 000000014040381F: test    word ptr gs:860h, 1
 * 000000014040382A: jnz     short loc_140403834
 * 000000014040382C: lfence
 * 000000014040382F: jmp     loc_140403A54
 * 0000000140403834: movzx   eax, word ptr gs:864h
 * 000000014040383D: mov     ecx, 48h ; 'H'
 * 0000000140403842: xor     edx, edx
 * 0000000140403844: wrmsr
 * 0000000140403846: jmp     loc_140403A54
 * 000000014040384B: test    cs:KiKvaShadow, 1
 * 0000000140403852: jnz     short loc_140403857
 * 0000000140403854: swapgs
 * 0000000140403857: lfence
 * 000000014040385A: mov     r10, gs:188h
 * 0000000140403863: mov     rcx, gs:188h
 * 000000014040386C: mov     rcx, [rcx+220h]
 * 0000000140403873: mov     rcx, [rcx+9E0h]
 * 000000014040387A: mov     gs:858h, rcx
 * 0000000140403883: mov     cx, gs:850h
 * 000000014040388C: mov     gs:852h, cx
 * 0000000140403895: mov     cx, gs:860h
 * 000000014040389E: mov     gs:854h, cx
 * 00000001404038A7: movzx   eax, word ptr gs:866h
 * 00000001404038B0: cmp     gs:864h, ax
 * 00000001404038B9: jz      short loc_1404038CD
 * 00000001404038BB: mov     gs:864h, ax
 * 00000001404038C4: mov     ecx, 48h ; 'H'
 * 00000001404038C9: xor     edx, edx
 * 00000001404038CB: wrmsr
 * 00000001404038CD: movzx   edx, word ptr gs:860h
 * 00000001404038D6: test    edx, 8
 * 00000001404038DC: jz      short loc_1404038F5
 * 00000001404038DE: mov     eax, 1
 * 00000001404038E3: xor     edx, edx
 * 00000001404038E5: mov     ecx, 49h ; 'I'
 * 00000001404038EA: wrmsr
 * 00000001404038EC: movzx   edx, word ptr gs:860h
 * 00000001404038F5: test    edx, 2
 * 00000001404038FB: jz      loc_140403A26
 * 0000000140403901: call    loc_140403A14
 * 0000000140403906: add     rsp, 8
 * 000000014040390A: call    loc_140403A1D
 * 000000014040390F: add     rsp, 8
 * 0000000140403913: call    loc_140403906
 * 0000000140403918: add     rsp, 8
 * 000000014040391C: call    loc_14040390F
 * 0000000140403921: add     rsp, 8
 * 0000000140403925: call    loc_140403918
 * 000000014040392A: add     rsp, 8
 * 000000014040392E: call    loc_140403921
 * 0000000140403933: add     rsp, 8
 * 0000000140403937: call    loc_14040392A
 * 000000014040393C: add     rsp, 8
 * 0000000140403940: call    loc_140403933
 * 0000000140403945: add     rsp, 8
 * 0000000140403949: call    loc_14040393C
 * 000000014040394E: add     rsp, 8
 * 0000000140403952: call    loc_140403945
 * 0000000140403957: add     rsp, 8
 * 000000014040395B: call    loc_14040394E
 * 0000000140403960: add     rsp, 8
 * 0000000140403964: call    loc_140403957
 * 0000000140403969: add     rsp, 8
 * 000000014040396D: call    loc_140403960
 * 0000000140403972: add     rsp, 8
 * 0000000140403976: call    loc_140403969
 * 000000014040397B: add     rsp, 8
 * 000000014040397F: call    loc_140403972
 * 0000000140403984: add     rsp, 8
 * 0000000140403988: call    loc_14040397B
 * 000000014040398D: add     rsp, 8
 * 0000000140403991: call    loc_140403984
 * 0000000140403996: add     rsp, 8
 * 000000014040399A: call    loc_14040398D
 * 000000014040399F: add     rsp, 8
 * 00000001404039A3: call    loc_140403996
 * 00000001404039A8: add     rsp, 8
 * 00000001404039AC: call    loc_14040399F
 * 00000001404039B1: add     rsp, 8
 * 00000001404039B5: call    loc_1404039A8
 * 00000001404039BA: add     rsp, 8
 * 00000001404039BE: call    loc_1404039B1
 * 00000001404039C3: add     rsp, 8
 * 00000001404039C7: call    loc_1404039BA
 * 00000001404039CC: add     rsp, 8
 * 00000001404039D0: call    loc_1404039C3
 * 00000001404039D5: add     rsp, 8
 * 00000001404039D9: call    loc_1404039CC
 * 00000001404039DE: add     rsp, 8
 * 00000001404039E2: call    loc_1404039D5
 * 00000001404039E7: add     rsp, 8
 * 00000001404039EB: call    loc_1404039DE
 * 00000001404039F0: add     rsp, 8
 * 00000001404039F4: call    loc_1404039E7
 * 00000001404039F9: add     rsp, 8
 * 00000001404039FD: call    loc_1404039F0
 * 0000000140403A02: add     rsp, 8
 * 0000000140403A06: call    loc_1404039F9
 * 0000000140403A0B: add     rsp, 8
 * 0000000140403A0F: call    loc_140403A02
 * 0000000140403A14: add     rsp, 8
 * 0000000140403A18: call    loc_140403A0B
 * 0000000140403A1D: add     rsp, 8
 * 0000000140403A21: mov     eax, 0DADAh
 * 0000000140403A26: test    edx, 200h
 * 0000000140403A2C: jz      short loc_140403A33
 * 0000000140403A2E: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140403A33: lfence
 * 0000000140403A36: mov     byte ptr gs:856h, 0
 * 0000000140403A3F: test    byte ptr [r10+3], 3
 * 0000000140403A44: mov     word ptr [rbp+80h], 0
 * 0000000140403A4D: jz      short loc_140403A54
 * 0000000140403A4F: call    KiSaveDebugRegisterState
 * 0000000140403A54: cld
 * 0000000140403A55: stmxcsr dword ptr [rbp-54h]
 * 0000000140403A59: ldmxcsr dword ptr gs:180h
 * 0000000140403A62: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140403A66: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140403A6A: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140403A6E: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140403A72: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140403A76: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140403A7A: cmp     byte ptr gs:801Ah, 0
 * 0000000140403A83: jz      short loc_140403A8A
 * 0000000140403A85: call    KeWakeProcessor
 * 0000000140403A8A: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140403A91: cmp     rax, [rbp+0E8h]
 * 0000000140403A98: jnb     short loc_140403AB3
 * 0000000140403A9A: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140403AA1: cmp     rax, [rbp+0E8h]
 * 0000000140403AA8: jb      short loc_140403AB3
 * 0000000140403AAA: lea     rcx, [rbp-80h]
 * 0000000140403AAE: call    KiCheckForSListAddress
 * 0000000140403AB3: xor     esi, esi
 * 0000000140403AB5: inc     dword ptr gs:8000h
 * 0000000140403ABD: jmp     KiHvInterruptDispatch
 */
