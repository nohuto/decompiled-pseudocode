/*
 * XREFs of KyStartUserThread @ 0x1404070F0
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x1404070F0 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x1404073D0 (KxStartUserThread.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x1404070F0
 * Reason: Hex-Rays returned no pseudocode for 0x1404070F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404070F0: sub     rsp, 8
 * 00000001404070F4: push    rbp
 * 00000001404070F5: sub     rsp, 158h
 * 00000001404070FC: lea     rbp, [rsp+80h]
 * 0000000140407104: mov     [rbp+0E8h+var_13D], 1
 * 0000000140407108: mov     [rbp+0E8h+var_138], rax
 * 000000014040710C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140407110: mov     [rbp+0E8h+var_128], rdx
 * 0000000140407114: mov     [rbp+0E8h+var_120], r8
 * 0000000140407118: mov     [rbp+0E8h+var_118], r9
 * 000000014040711C: mov     [rbp+0E8h+var_110], r10
 * 0000000140407120: mov     [rbp+0E8h+var_108], r11
 * 0000000140407124: test    [rbp+0E8h+arg_0], 1
 * 000000014040712B: jnz     short loc_14040715C
 * 000000014040712D: lfence
 * 0000000140407130: test    word ptr gs:860h, 1
 * 000000014040713B: jnz     short loc_140407145
 * 000000014040713D: lfence
 * 0000000140407140: jmp     loc_140407365
 * 0000000140407145: movzx   eax, word ptr gs:864h
 * 000000014040714E: mov     ecx, 48h ; 'H'
 * 0000000140407153: xor     edx, edx
 * 0000000140407155: wrmsr
 * 0000000140407157: jmp     loc_140407365
 * 000000014040715C: test    cs:KiKvaShadow, 1
 * 0000000140407163: jnz     short loc_140407168
 * 0000000140407165: swapgs
 * 0000000140407168: lfence
 * 000000014040716B: mov     r10, gs:188h
 * 0000000140407174: mov     rcx, gs:188h
 * 000000014040717D: mov     rcx, [rcx+220h]
 * 0000000140407184: mov     rcx, [rcx+9E0h]
 * 000000014040718B: mov     gs:858h, rcx
 * 0000000140407194: mov     cx, gs:850h
 * 000000014040719D: mov     gs:852h, cx
 * 00000001404071A6: mov     cx, gs:860h
 * 00000001404071AF: mov     gs:854h, cx
 * 00000001404071B8: movzx   eax, word ptr gs:866h
 * 00000001404071C1: cmp     gs:864h, ax
 * 00000001404071CA: jz      short loc_1404071DE
 * 00000001404071CC: mov     gs:864h, ax
 * 00000001404071D5: mov     ecx, 48h ; 'H'
 * 00000001404071DA: xor     edx, edx
 * 00000001404071DC: wrmsr
 * 00000001404071DE: movzx   edx, word ptr gs:860h
 * 00000001404071E7: test    edx, 8
 * 00000001404071ED: jz      short loc_140407206
 * 00000001404071EF: mov     eax, 1
 * 00000001404071F4: xor     edx, edx
 * 00000001404071F6: mov     ecx, 49h ; 'I'
 * 00000001404071FB: wrmsr
 * 00000001404071FD: movzx   edx, word ptr gs:860h
 * 0000000140407206: test    edx, 2
 * 000000014040720C: jz      loc_140407337
 * 0000000140407212: call    loc_140407325
 * 0000000140407217: add     rsp, 8
 * 000000014040721B: call    loc_14040732E
 * 0000000140407220: add     rsp, 8
 * 0000000140407224: call    loc_140407217
 * 0000000140407229: add     rsp, 8
 * 000000014040722D: call    loc_140407220
 * 0000000140407232: add     rsp, 8
 * 0000000140407236: call    loc_140407229
 * 000000014040723B: add     rsp, 8
 * 000000014040723F: call    loc_140407232
 * 0000000140407244: add     rsp, 8
 * 0000000140407248: call    loc_14040723B
 * 000000014040724D: add     rsp, 8
 * 0000000140407251: call    loc_140407244
 * 0000000140407256: add     rsp, 8
 * 000000014040725A: call    loc_14040724D
 * 000000014040725F: add     rsp, 8
 * 0000000140407263: call    loc_140407256
 * 0000000140407268: add     rsp, 8
 * 000000014040726C: call    loc_14040725F
 * 0000000140407271: add     rsp, 8
 * 0000000140407275: call    loc_140407268
 * 000000014040727A: add     rsp, 8
 * 000000014040727E: call    loc_140407271
 * 0000000140407283: add     rsp, 8
 * 0000000140407287: call    loc_14040727A
 * 000000014040728C: add     rsp, 8
 * 0000000140407290: call    loc_140407283
 * 0000000140407295: add     rsp, 8
 * 0000000140407299: call    loc_14040728C
 * 000000014040729E: add     rsp, 8
 * 00000001404072A2: call    loc_140407295
 * 00000001404072A7: add     rsp, 8
 * 00000001404072AB: call    loc_14040729E
 * 00000001404072B0: add     rsp, 8
 * 00000001404072B4: call    loc_1404072A7
 * 00000001404072B9: add     rsp, 8
 * 00000001404072BD: call    loc_1404072B0
 * 00000001404072C2: add     rsp, 8
 * 00000001404072C6: call    loc_1404072B9
 * 00000001404072CB: add     rsp, 8
 * 00000001404072CF: call    loc_1404072C2
 * 00000001404072D4: add     rsp, 8
 * 00000001404072D8: call    loc_1404072CB
 * 00000001404072DD: add     rsp, 8
 * 00000001404072E1: call    loc_1404072D4
 * 00000001404072E6: add     rsp, 8
 * 00000001404072EA: call    loc_1404072DD
 * 00000001404072EF: add     rsp, 8
 * 00000001404072F3: call    loc_1404072E6
 * 00000001404072F8: add     rsp, 8
 * 00000001404072FC: call    loc_1404072EF
 * 0000000140407301: add     rsp, 8
 * 0000000140407305: call    loc_1404072F8
 * 000000014040730A: add     rsp, 8
 * 000000014040730E: call    loc_140407301
 * 0000000140407313: add     rsp, 8
 * 0000000140407317: call    loc_14040730A
 * 000000014040731C: add     rsp, 8
 * 0000000140407320: call    loc_140407313
 * 0000000140407325: add     rsp, 8
 * 0000000140407329: call    loc_14040731C
 * 000000014040732E: add     rsp, 8
 * 0000000140407332: mov     eax, 0DADAh
 * 0000000140407337: test    edx, 200h
 * 000000014040733D: jz      short loc_140407344
 * 000000014040733F: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140407344: lfence
 * 0000000140407347: mov     byte ptr gs:856h, 0
 * 0000000140407350: test    byte ptr [r10+3], 3
 * 0000000140407355: mov     [rbp+0E8h+var_68], 0
 * 000000014040735E: jz      short loc_140407365
 * 0000000140407360: call    KiSaveDebugRegisterState
 * 0000000140407365: cld
 * 0000000140407366: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040736A: ldmxcsr dword ptr gs:180h
 * 0000000140407373: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140407377: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040737B: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040737F: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140407383: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140407387: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040738B: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140407392: jz      short loc_1404073A0
 * 0000000140407394: test    [rbp+0E8h+arg_0], 1
 * 000000014040739B: jz      short loc_1404073A0
 * 000000014040739D: stac
 * 00000001404073A0: test    [rbp+0E8h+arg_8], 200h
 * 00000001404073AA: jz      short loc_1404073AD
 * 00000001404073AC: sti
 * 00000001404073AD: call    KxStartUserThread
 * 00000001404073B2: nop     word ptr [rax+rax+00000000h]
 * 00000001404073C0: nop
 * 00000001404073C1: retn
 */
