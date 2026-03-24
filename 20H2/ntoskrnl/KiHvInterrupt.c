/*
 * XREFs of KiHvInterrupt @ 0x140401160
 * Callers:
 *     KiHvInterruptShadow @ 0x140A17FC0 (KiHvInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1402DF2E0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiHvInterrupt @ 0x140401160 (KiHvInterrupt.c)
 *     KeWakeProcessor @ 0x140517EE0 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x140401160
 * Reason: Hex-Rays returned no pseudocode for 0x140401160
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140401160: push    0
 * 0000000140401162: push    rbp
 * 0000000140401163: push    rsi
 * 0000000140401164: sub     rsp, 150h
 * 000000014040116B: lea     rbp, [rsp+168h+var_E8]
 * 0000000140401173: mov     byte ptr [rbp-55h], 0
 * 0000000140401177: mov     [rbp-50h], rax
 * 000000014040117B: mov     [rbp-48h], rcx
 * 000000014040117F: mov     [rbp-40h], rdx
 * 0000000140401183: mov     [rbp-38h], r8
 * 0000000140401187: mov     [rbp-30h], r9
 * 000000014040118B: mov     [rbp-28h], r10
 * 000000014040118F: mov     [rbp-20h], r11
 * 0000000140401193: test    byte ptr [rbp+0F0h], 1
 * 000000014040119A: jnz     short loc_1404011C9
 * 000000014040119C: lfence
 * 000000014040119F: test    byte ptr gs:278h, 1
 * 00000001404011A8: jnz     short loc_1404011B2
 * 00000001404011AA: lfence
 * 00000001404011AD: jmp     loc_1404013BF
 * 00000001404011B2: movzx   eax, byte ptr gs:27Ah
 * 00000001404011BB: mov     ecx, 48h ; 'H'
 * 00000001404011C0: xor     edx, edx
 * 00000001404011C2: wrmsr
 * 00000001404011C4: jmp     loc_1404013BF
 * 00000001404011C9: test    cs:KiKvaShadow, 1
 * 00000001404011D0: jnz     short loc_1404011D5
 * 00000001404011D2: swapgs
 * 00000001404011D5: lfence
 * 00000001404011D8: mov     r10, gs:188h
 * 00000001404011E1: mov     rcx, gs:188h
 * 00000001404011EA: mov     rcx, [rcx+220h]
 * 00000001404011F1: mov     rcx, [rcx+9E0h]
 * 00000001404011F8: mov     gs:270h, rcx
 * 0000000140401201: mov     cl, gs:850h
 * 0000000140401209: mov     gs:851h, cl
 * 0000000140401211: mov     cl, gs:278h
 * 0000000140401219: mov     gs:852h, cl
 * 0000000140401221: movzx   eax, byte ptr gs:27Bh
 * 000000014040122A: cmp     gs:27Ah, al
 * 0000000140401232: jz      short loc_140401245
 * 0000000140401234: mov     gs:27Ah, al
 * 000000014040123C: mov     ecx, 48h ; 'H'
 * 0000000140401241: xor     edx, edx
 * 0000000140401243: wrmsr
 * 0000000140401245: movzx   edx, byte ptr gs:278h
 * 000000014040124E: test    edx, 8
 * 0000000140401254: jz      short loc_14040126D
 * 0000000140401256: mov     eax, 1
 * 000000014040125B: xor     edx, edx
 * 000000014040125D: mov     ecx, 49h ; 'I'
 * 0000000140401262: wrmsr
 * 0000000140401264: movzx   edx, byte ptr gs:278h
 * 000000014040126D: test    edx, 2
 * 0000000140401273: jz      loc_14040139E
 * 0000000140401279: call    loc_14040138C
 * 000000014040127E: add     rsp, 8
 * 0000000140401282: call    loc_140401395
 * 0000000140401287: add     rsp, 8
 * 000000014040128B: call    loc_14040127E
 * 0000000140401290: add     rsp, 8
 * 0000000140401294: call    loc_140401287
 * 0000000140401299: add     rsp, 8
 * 000000014040129D: call    loc_140401290
 * 00000001404012A2: add     rsp, 8
 * 00000001404012A6: call    loc_140401299
 * 00000001404012AB: add     rsp, 8
 * 00000001404012AF: call    loc_1404012A2
 * 00000001404012B4: add     rsp, 8
 * 00000001404012B8: call    loc_1404012AB
 * 00000001404012BD: add     rsp, 8
 * 00000001404012C1: call    loc_1404012B4
 * 00000001404012C6: add     rsp, 8
 * 00000001404012CA: call    loc_1404012BD
 * 00000001404012CF: add     rsp, 8
 * 00000001404012D3: call    loc_1404012C6
 * 00000001404012D8: add     rsp, 8
 * 00000001404012DC: call    loc_1404012CF
 * 00000001404012E1: add     rsp, 8
 * 00000001404012E5: call    loc_1404012D8
 * 00000001404012EA: add     rsp, 8
 * 00000001404012EE: call    loc_1404012E1
 * 00000001404012F3: add     rsp, 8
 * 00000001404012F7: call    loc_1404012EA
 * 00000001404012FC: add     rsp, 8
 * 0000000140401300: call    loc_1404012F3
 * 0000000140401305: add     rsp, 8
 * 0000000140401309: call    loc_1404012FC
 * 000000014040130E: add     rsp, 8
 * 0000000140401312: call    loc_140401305
 * 0000000140401317: add     rsp, 8
 * 000000014040131B: call    loc_14040130E
 * 0000000140401320: add     rsp, 8
 * 0000000140401324: call    loc_140401317
 * 0000000140401329: add     rsp, 8
 * 000000014040132D: call    loc_140401320
 * 0000000140401332: add     rsp, 8
 * 0000000140401336: call    loc_140401329
 * 000000014040133B: add     rsp, 8
 * 000000014040133F: call    loc_140401332
 * 0000000140401344: add     rsp, 8
 * 0000000140401348: call    loc_14040133B
 * 000000014040134D: add     rsp, 8
 * 0000000140401351: call    loc_140401344
 * 0000000140401356: add     rsp, 8
 * 000000014040135A: call    loc_14040134D
 * 000000014040135F: add     rsp, 8
 * 0000000140401363: call    loc_140401356
 * 0000000140401368: add     rsp, 8
 * 000000014040136C: call    loc_14040135F
 * 0000000140401371: add     rsp, 8
 * 0000000140401375: call    loc_140401368
 * 000000014040137A: add     rsp, 8
 * 000000014040137E: call    loc_140401371
 * 0000000140401383: add     rsp, 8
 * 0000000140401387: call    loc_14040137A
 * 000000014040138C: add     rsp, 8
 * 0000000140401390: call    loc_140401383
 * 0000000140401395: add     rsp, 8
 * 0000000140401399: mov     eax, 0DADAh
 * 000000014040139E: lfence
 * 00000001404013A1: mov     byte ptr gs:853h, 0
 * 00000001404013AA: test    byte ptr [r10+3], 3
 * 00000001404013AF: mov     word ptr [rbp+80h], 0
 * 00000001404013B8: jz      short loc_1404013BF
 * 00000001404013BA: call    KiSaveDebugRegisterState
 * 00000001404013BF: cld
 * 00000001404013C0: stmxcsr dword ptr [rbp-54h]
 * 00000001404013C4: ldmxcsr dword ptr gs:180h
 * 00000001404013CD: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404013D1: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404013D5: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001404013D9: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001404013DD: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001404013E1: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001404013E5: cmp     byte ptr gs:801Ah, 0
 * 00000001404013EE: jz      short loc_1404013F5
 * 00000001404013F0: call    KeWakeProcessor
 * 00000001404013F5: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001404013FC: cmp     rax, [rbp+0E8h]
 * 0000000140401403: jnb     short loc_14040141E
 * 0000000140401405: lea     rax, ExpInterlockedPopEntrySListEnd
 * 000000014040140C: cmp     rax, [rbp+0E8h]
 * 0000000140401413: jb      short loc_14040141E
 * 0000000140401415: lea     rcx, [rbp-80h]
 * 0000000140401419: call    KiCheckForSListAddress
 * 000000014040141E: xor     esi, esi
 * 0000000140401420: inc     dword ptr gs:8000h
 * 0000000140401428: jmp     KiHvInterruptDispatch
 */
