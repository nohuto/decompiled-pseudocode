/*
 * XREFs of KiVmbusInterrupt3 @ 0x1403FAFD0
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x140A121C0 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1402EC460 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt3 @ 0x1403FAFD0 (KiVmbusInterrupt3.c)
 *     KeWakeProcessor @ 0x140513F60 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x1403FAFD0
 * Reason: Hex-Rays returned no pseudocode for 0x1403FAFD0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FAFD0: push    4
 * 00000001403FAFD2: push    rbp
 * 00000001403FAFD3: push    rsi
 * 00000001403FAFD4: sub     rsp, 150h
 * 00000001403FAFDB: lea     rbp, [rsp+168h+var_E8]
 * 00000001403FAFE3: mov     byte ptr [rbp-55h], 0
 * 00000001403FAFE7: mov     [rbp-50h], rax
 * 00000001403FAFEB: mov     [rbp-48h], rcx
 * 00000001403FAFEF: mov     [rbp-40h], rdx
 * 00000001403FAFF3: mov     [rbp-38h], r8
 * 00000001403FAFF7: mov     [rbp-30h], r9
 * 00000001403FAFFB: mov     [rbp-28h], r10
 * 00000001403FAFFF: mov     [rbp-20h], r11
 * 00000001403FB003: test    byte ptr [rbp+0F0h], 1
 * 00000001403FB00A: jnz     short loc_1403FB039
 * 00000001403FB00C: lfence
 * 00000001403FB00F: test    byte ptr gs:278h, 1
 * 00000001403FB018: jnz     short loc_1403FB022
 * 00000001403FB01A: lfence
 * 00000001403FB01D: jmp     loc_1403FB235
 * 00000001403FB022: movzx   eax, byte ptr gs:27Ah
 * 00000001403FB02B: mov     ecx, 48h ; 'H'
 * 00000001403FB030: xor     edx, edx
 * 00000001403FB032: wrmsr
 * 00000001403FB034: jmp     loc_1403FB235
 * 00000001403FB039: test    cs:KiKvaShadow, 1
 * 00000001403FB040: jnz     short loc_1403FB045
 * 00000001403FB042: swapgs
 * 00000001403FB045: lfence
 * 00000001403FB048: mov     r10, gs:188h
 * 00000001403FB051: mov     rcx, gs:188h
 * 00000001403FB05A: mov     rcx, [rcx+220h]
 * 00000001403FB061: mov     rcx, [rcx+9E0h]
 * 00000001403FB068: mov     gs:270h, rcx
 * 00000001403FB071: mov     cl, gs:850h
 * 00000001403FB079: mov     gs:851h, cl
 * 00000001403FB081: mov     cl, gs:278h
 * 00000001403FB089: mov     gs:852h, cl
 * 00000001403FB091: movzx   eax, byte ptr gs:27Bh
 * 00000001403FB09A: cmp     gs:27Ah, al
 * 00000001403FB0A2: jz      short loc_1403FB0B5
 * 00000001403FB0A4: mov     gs:27Ah, al
 * 00000001403FB0AC: mov     ecx, 48h ; 'H'
 * 00000001403FB0B1: xor     edx, edx
 * 00000001403FB0B3: wrmsr
 * 00000001403FB0B5: movzx   edx, byte ptr gs:278h
 * 00000001403FB0BE: test    edx, 8
 * 00000001403FB0C4: jz      short loc_1403FB0D9
 * 00000001403FB0C6: mov     eax, 1
 * 00000001403FB0CB: xor     edx, edx
 * 00000001403FB0CD: mov     ecx, 49h ; 'I'
 * 00000001403FB0D2: wrmsr
 * 00000001403FB0D4: jmp     loc_1403FB217
 * 00000001403FB0D9: test    edx, 2
 * 00000001403FB0DF: jz      loc_1403FB214
 * 00000001403FB0E5: test    byte ptr gs:279h, 4
 * 00000001403FB0EE: jnz     loc_1403FB214
 * 00000001403FB0F4: call    loc_1403FB207
 * 00000001403FB0F9: add     rsp, 8
 * 00000001403FB0FD: call    loc_1403FB210
 * 00000001403FB102: add     rsp, 8
 * 00000001403FB106: call    loc_1403FB0F9
 * 00000001403FB10B: add     rsp, 8
 * 00000001403FB10F: call    loc_1403FB102
 * 00000001403FB114: add     rsp, 8
 * 00000001403FB118: call    loc_1403FB10B
 * 00000001403FB11D: add     rsp, 8
 * 00000001403FB121: call    loc_1403FB114
 * 00000001403FB126: add     rsp, 8
 * 00000001403FB12A: call    loc_1403FB11D
 * 00000001403FB12F: add     rsp, 8
 * 00000001403FB133: call    loc_1403FB126
 * 00000001403FB138: add     rsp, 8
 * 00000001403FB13C: call    loc_1403FB12F
 * 00000001403FB141: add     rsp, 8
 * 00000001403FB145: call    loc_1403FB138
 * 00000001403FB14A: add     rsp, 8
 * 00000001403FB14E: call    loc_1403FB141
 * 00000001403FB153: add     rsp, 8
 * 00000001403FB157: call    loc_1403FB14A
 * 00000001403FB15C: add     rsp, 8
 * 00000001403FB160: call    loc_1403FB153
 * 00000001403FB165: add     rsp, 8
 * 00000001403FB169: call    loc_1403FB15C
 * 00000001403FB16E: add     rsp, 8
 * 00000001403FB172: call    loc_1403FB165
 * 00000001403FB177: add     rsp, 8
 * 00000001403FB17B: call    loc_1403FB16E
 * 00000001403FB180: add     rsp, 8
 * 00000001403FB184: call    loc_1403FB177
 * 00000001403FB189: add     rsp, 8
 * 00000001403FB18D: call    loc_1403FB180
 * 00000001403FB192: add     rsp, 8
 * 00000001403FB196: call    loc_1403FB189
 * 00000001403FB19B: add     rsp, 8
 * 00000001403FB19F: call    loc_1403FB192
 * 00000001403FB1A4: add     rsp, 8
 * 00000001403FB1A8: call    loc_1403FB19B
 * 00000001403FB1AD: add     rsp, 8
 * 00000001403FB1B1: call    loc_1403FB1A4
 * 00000001403FB1B6: add     rsp, 8
 * 00000001403FB1BA: call    loc_1403FB1AD
 * 00000001403FB1BF: add     rsp, 8
 * 00000001403FB1C3: call    loc_1403FB1B6
 * 00000001403FB1C8: add     rsp, 8
 * 00000001403FB1CC: call    loc_1403FB1BF
 * 00000001403FB1D1: add     rsp, 8
 * 00000001403FB1D5: call    loc_1403FB1C8
 * 00000001403FB1DA: add     rsp, 8
 * 00000001403FB1DE: call    loc_1403FB1D1
 * 00000001403FB1E3: add     rsp, 8
 * 00000001403FB1E7: call    loc_1403FB1DA
 * 00000001403FB1EC: add     rsp, 8
 * 00000001403FB1F0: call    loc_1403FB1E3
 * 00000001403FB1F5: add     rsp, 8
 * 00000001403FB1F9: call    loc_1403FB1EC
 * 00000001403FB1FE: add     rsp, 8
 * 00000001403FB202: call    loc_1403FB1F5
 * 00000001403FB207: add     rsp, 8
 * 00000001403FB20B: call    loc_1403FB1FE
 * 00000001403FB210: add     rsp, 8
 * 00000001403FB214: lfence
 * 00000001403FB217: mov     byte ptr gs:853h, 0
 * 00000001403FB220: test    byte ptr [r10+3], 3
 * 00000001403FB225: mov     word ptr [rbp+80h], 0
 * 00000001403FB22E: jz      short loc_1403FB235
 * 00000001403FB230: call    KiSaveDebugRegisterState
 * 00000001403FB235: cld
 * 00000001403FB236: stmxcsr dword ptr [rbp-54h]
 * 00000001403FB23A: ldmxcsr dword ptr gs:180h
 * 00000001403FB243: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001403FB247: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001403FB24B: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001403FB24F: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001403FB253: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001403FB257: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001403FB25B: cmp     byte ptr gs:801Ah, 0
 * 00000001403FB264: jz      short loc_1403FB26B
 * 00000001403FB266: call    KeWakeProcessor
 * 00000001403FB26B: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001403FB272: cmp     rax, [rbp+0E8h]
 * 00000001403FB279: jnb     short loc_1403FB294
 * 00000001403FB27B: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001403FB282: cmp     rax, [rbp+0E8h]
 * 00000001403FB289: jb      short loc_1403FB294
 * 00000001403FB28B: lea     rcx, [rbp-80h]
 * 00000001403FB28F: call    KiCheckForSListAddress
 * 00000001403FB294: xor     esi, esi
 * 00000001403FB296: inc     dword ptr gs:8000h
 * 00000001403FB29E: jmp     KiVmbusInterruptDispatch
 */
