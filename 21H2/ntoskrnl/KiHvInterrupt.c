/*
 * XREFs of KiHvInterrupt @ 0x140403600
 * Callers:
 *     KiHvInterruptShadow @ 0x140A14FC0 (KiHvInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14024D5B0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiHvInterrupt @ 0x140403600 (KiHvInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140519A20 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x140403600
 * Reason: Hex-Rays returned no pseudocode for 0x140403600
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140403600: push    0
 * 0000000140403602: push    rbp
 * 0000000140403603: push    rsi
 * 0000000140403604: sub     rsp, 150h
 * 000000014040360B: lea     rbp, [rsp+168h+var_E8]
 * 0000000140403613: mov     byte ptr [rbp-55h], 0
 * 0000000140403617: mov     [rbp-50h], rax
 * 000000014040361B: mov     [rbp-48h], rcx
 * 000000014040361F: mov     [rbp-40h], rdx
 * 0000000140403623: mov     [rbp-38h], r8
 * 0000000140403627: mov     [rbp-30h], r9
 * 000000014040362B: mov     [rbp-28h], r10
 * 000000014040362F: mov     [rbp-20h], r11
 * 0000000140403633: test    byte ptr [rbp+0F0h], 1
 * 000000014040363A: jnz     short loc_14040366B
 * 000000014040363C: lfence
 * 000000014040363F: test    word ptr gs:860h, 1
 * 000000014040364A: jnz     short loc_140403654
 * 000000014040364C: lfence
 * 000000014040364F: jmp     loc_140403874
 * 0000000140403654: movzx   eax, word ptr gs:864h
 * 000000014040365D: mov     ecx, 48h ; 'H'
 * 0000000140403662: xor     edx, edx
 * 0000000140403664: wrmsr
 * 0000000140403666: jmp     loc_140403874
 * 000000014040366B: test    cs:KiKvaShadow, 1
 * 0000000140403672: jnz     short loc_140403677
 * 0000000140403674: swapgs
 * 0000000140403677: lfence
 * 000000014040367A: mov     r10, gs:188h
 * 0000000140403683: mov     rcx, gs:188h
 * 000000014040368C: mov     rcx, [rcx+220h]
 * 0000000140403693: mov     rcx, [rcx+9E0h]
 * 000000014040369A: mov     gs:858h, rcx
 * 00000001404036A3: mov     cx, gs:850h
 * 00000001404036AC: mov     gs:852h, cx
 * 00000001404036B5: mov     cx, gs:860h
 * 00000001404036BE: mov     gs:854h, cx
 * 00000001404036C7: movzx   eax, word ptr gs:866h
 * 00000001404036D0: cmp     gs:864h, ax
 * 00000001404036D9: jz      short loc_1404036ED
 * 00000001404036DB: mov     gs:864h, ax
 * 00000001404036E4: mov     ecx, 48h ; 'H'
 * 00000001404036E9: xor     edx, edx
 * 00000001404036EB: wrmsr
 * 00000001404036ED: movzx   edx, word ptr gs:860h
 * 00000001404036F6: test    edx, 8
 * 00000001404036FC: jz      short loc_140403715
 * 00000001404036FE: mov     eax, 1
 * 0000000140403703: xor     edx, edx
 * 0000000140403705: mov     ecx, 49h ; 'I'
 * 000000014040370A: wrmsr
 * 000000014040370C: movzx   edx, word ptr gs:860h
 * 0000000140403715: test    edx, 2
 * 000000014040371B: jz      loc_140403846
 * 0000000140403721: call    loc_140403834
 * 0000000140403726: add     rsp, 8
 * 000000014040372A: call    loc_14040383D
 * 000000014040372F: add     rsp, 8
 * 0000000140403733: call    loc_140403726
 * 0000000140403738: add     rsp, 8
 * 000000014040373C: call    loc_14040372F
 * 0000000140403741: add     rsp, 8
 * 0000000140403745: call    loc_140403738
 * 000000014040374A: add     rsp, 8
 * 000000014040374E: call    loc_140403741
 * 0000000140403753: add     rsp, 8
 * 0000000140403757: call    loc_14040374A
 * 000000014040375C: add     rsp, 8
 * 0000000140403760: call    loc_140403753
 * 0000000140403765: add     rsp, 8
 * 0000000140403769: call    loc_14040375C
 * 000000014040376E: add     rsp, 8
 * 0000000140403772: call    loc_140403765
 * 0000000140403777: add     rsp, 8
 * 000000014040377B: call    loc_14040376E
 * 0000000140403780: add     rsp, 8
 * 0000000140403784: call    loc_140403777
 * 0000000140403789: add     rsp, 8
 * 000000014040378D: call    loc_140403780
 * 0000000140403792: add     rsp, 8
 * 0000000140403796: call    loc_140403789
 * 000000014040379B: add     rsp, 8
 * 000000014040379F: call    loc_140403792
 * 00000001404037A4: add     rsp, 8
 * 00000001404037A8: call    loc_14040379B
 * 00000001404037AD: add     rsp, 8
 * 00000001404037B1: call    loc_1404037A4
 * 00000001404037B6: add     rsp, 8
 * 00000001404037BA: call    loc_1404037AD
 * 00000001404037BF: add     rsp, 8
 * 00000001404037C3: call    loc_1404037B6
 * 00000001404037C8: add     rsp, 8
 * 00000001404037CC: call    loc_1404037BF
 * 00000001404037D1: add     rsp, 8
 * 00000001404037D5: call    loc_1404037C8
 * 00000001404037DA: add     rsp, 8
 * 00000001404037DE: call    loc_1404037D1
 * 00000001404037E3: add     rsp, 8
 * 00000001404037E7: call    loc_1404037DA
 * 00000001404037EC: add     rsp, 8
 * 00000001404037F0: call    loc_1404037E3
 * 00000001404037F5: add     rsp, 8
 * 00000001404037F9: call    loc_1404037EC
 * 00000001404037FE: add     rsp, 8
 * 0000000140403802: call    loc_1404037F5
 * 0000000140403807: add     rsp, 8
 * 000000014040380B: call    loc_1404037FE
 * 0000000140403810: add     rsp, 8
 * 0000000140403814: call    loc_140403807
 * 0000000140403819: add     rsp, 8
 * 000000014040381D: call    loc_140403810
 * 0000000140403822: add     rsp, 8
 * 0000000140403826: call    loc_140403819
 * 000000014040382B: add     rsp, 8
 * 000000014040382F: call    loc_140403822
 * 0000000140403834: add     rsp, 8
 * 0000000140403838: call    loc_14040382B
 * 000000014040383D: add     rsp, 8
 * 0000000140403841: mov     eax, 0DADAh
 * 0000000140403846: test    edx, 200h
 * 000000014040384C: jz      short loc_140403853
 * 000000014040384E: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140403853: lfence
 * 0000000140403856: mov     byte ptr gs:856h, 0
 * 000000014040385F: test    byte ptr [r10+3], 3
 * 0000000140403864: mov     word ptr [rbp+80h], 0
 * 000000014040386D: jz      short loc_140403874
 * 000000014040386F: call    KiSaveDebugRegisterState
 * 0000000140403874: cld
 * 0000000140403875: stmxcsr dword ptr [rbp-54h]
 * 0000000140403879: ldmxcsr dword ptr gs:180h
 * 0000000140403882: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140403886: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014040388A: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014040388E: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140403892: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140403896: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014040389A: cmp     byte ptr gs:801Ah, 0
 * 00000001404038A3: jz      short loc_1404038AA
 * 00000001404038A5: call    KeWakeProcessor
 * 00000001404038AA: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001404038B1: cmp     rax, [rbp+0E8h]
 * 00000001404038B8: jnb     short loc_1404038D3
 * 00000001404038BA: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001404038C1: cmp     rax, [rbp+0E8h]
 * 00000001404038C8: jb      short loc_1404038D3
 * 00000001404038CA: lea     rcx, [rbp-80h]
 * 00000001404038CE: call    KiCheckForSListAddress
 * 00000001404038D3: xor     esi, esi
 * 00000001404038D5: inc     dword ptr gs:8000h
 * 00000001404038DD: jmp     KiHvInterruptDispatch
 */
