/*
 * XREFs of KiVmbusInterrupt2 @ 0x1403FBF80
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x140A12140 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140325D90 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt2 @ 0x1403FBF80 (KiVmbusInterrupt2.c)
 *     KeWakeProcessor @ 0x1405145B0 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x1403FBF80
 * Reason: Hex-Rays returned no pseudocode for 0x1403FBF80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FBF80: push    3
 * 00000001403FBF82: push    rbp
 * 00000001403FBF83: push    rsi
 * 00000001403FBF84: sub     rsp, 150h
 * 00000001403FBF8B: lea     rbp, [rsp+168h+var_E8]
 * 00000001403FBF93: mov     byte ptr [rbp-55h], 0
 * 00000001403FBF97: mov     [rbp-50h], rax
 * 00000001403FBF9B: mov     [rbp-48h], rcx
 * 00000001403FBF9F: mov     [rbp-40h], rdx
 * 00000001403FBFA3: mov     [rbp-38h], r8
 * 00000001403FBFA7: mov     [rbp-30h], r9
 * 00000001403FBFAB: mov     [rbp-28h], r10
 * 00000001403FBFAF: mov     [rbp-20h], r11
 * 00000001403FBFB3: test    byte ptr [rbp+0F0h], 1
 * 00000001403FBFBA: jnz     short loc_1403FBFE9
 * 00000001403FBFBC: lfence
 * 00000001403FBFBF: test    byte ptr gs:278h, 1
 * 00000001403FBFC8: jnz     short loc_1403FBFD2
 * 00000001403FBFCA: lfence
 * 00000001403FBFCD: jmp     loc_1403FC1E5
 * 00000001403FBFD2: movzx   eax, byte ptr gs:27Ah
 * 00000001403FBFDB: mov     ecx, 48h ; 'H'
 * 00000001403FBFE0: xor     edx, edx
 * 00000001403FBFE2: wrmsr
 * 00000001403FBFE4: jmp     loc_1403FC1E5
 * 00000001403FBFE9: test    cs:KiKvaShadow, 1
 * 00000001403FBFF0: jnz     short loc_1403FBFF5
 * 00000001403FBFF2: swapgs
 * 00000001403FBFF5: lfence
 * 00000001403FBFF8: mov     r10, gs:188h
 * 00000001403FC001: mov     rcx, gs:188h
 * 00000001403FC00A: mov     rcx, [rcx+220h]
 * 00000001403FC011: mov     rcx, [rcx+9E0h]
 * 00000001403FC018: mov     gs:270h, rcx
 * 00000001403FC021: mov     cl, gs:850h
 * 00000001403FC029: mov     gs:851h, cl
 * 00000001403FC031: mov     cl, gs:278h
 * 00000001403FC039: mov     gs:852h, cl
 * 00000001403FC041: movzx   eax, byte ptr gs:27Bh
 * 00000001403FC04A: cmp     gs:27Ah, al
 * 00000001403FC052: jz      short loc_1403FC065
 * 00000001403FC054: mov     gs:27Ah, al
 * 00000001403FC05C: mov     ecx, 48h ; 'H'
 * 00000001403FC061: xor     edx, edx
 * 00000001403FC063: wrmsr
 * 00000001403FC065: movzx   edx, byte ptr gs:278h
 * 00000001403FC06E: test    edx, 8
 * 00000001403FC074: jz      short loc_1403FC089
 * 00000001403FC076: mov     eax, 1
 * 00000001403FC07B: xor     edx, edx
 * 00000001403FC07D: mov     ecx, 49h ; 'I'
 * 00000001403FC082: wrmsr
 * 00000001403FC084: jmp     loc_1403FC1C7
 * 00000001403FC089: test    edx, 2
 * 00000001403FC08F: jz      loc_1403FC1C4
 * 00000001403FC095: test    byte ptr gs:279h, 4
 * 00000001403FC09E: jnz     loc_1403FC1C4
 * 00000001403FC0A4: call    loc_1403FC1B7
 * 00000001403FC0A9: add     rsp, 8
 * 00000001403FC0AD: call    loc_1403FC1C0
 * 00000001403FC0B2: add     rsp, 8
 * 00000001403FC0B6: call    loc_1403FC0A9
 * 00000001403FC0BB: add     rsp, 8
 * 00000001403FC0BF: call    loc_1403FC0B2
 * 00000001403FC0C4: add     rsp, 8
 * 00000001403FC0C8: call    loc_1403FC0BB
 * 00000001403FC0CD: add     rsp, 8
 * 00000001403FC0D1: call    loc_1403FC0C4
 * 00000001403FC0D6: add     rsp, 8
 * 00000001403FC0DA: call    loc_1403FC0CD
 * 00000001403FC0DF: add     rsp, 8
 * 00000001403FC0E3: call    loc_1403FC0D6
 * 00000001403FC0E8: add     rsp, 8
 * 00000001403FC0EC: call    loc_1403FC0DF
 * 00000001403FC0F1: add     rsp, 8
 * 00000001403FC0F5: call    loc_1403FC0E8
 * 00000001403FC0FA: add     rsp, 8
 * 00000001403FC0FE: call    loc_1403FC0F1
 * 00000001403FC103: add     rsp, 8
 * 00000001403FC107: call    loc_1403FC0FA
 * 00000001403FC10C: add     rsp, 8
 * 00000001403FC110: call    loc_1403FC103
 * 00000001403FC115: add     rsp, 8
 * 00000001403FC119: call    loc_1403FC10C
 * 00000001403FC11E: add     rsp, 8
 * 00000001403FC122: call    loc_1403FC115
 * 00000001403FC127: add     rsp, 8
 * 00000001403FC12B: call    loc_1403FC11E
 * 00000001403FC130: add     rsp, 8
 * 00000001403FC134: call    loc_1403FC127
 * 00000001403FC139: add     rsp, 8
 * 00000001403FC13D: call    loc_1403FC130
 * 00000001403FC142: add     rsp, 8
 * 00000001403FC146: call    loc_1403FC139
 * 00000001403FC14B: add     rsp, 8
 * 00000001403FC14F: call    loc_1403FC142
 * 00000001403FC154: add     rsp, 8
 * 00000001403FC158: call    loc_1403FC14B
 * 00000001403FC15D: add     rsp, 8
 * 00000001403FC161: call    loc_1403FC154
 * 00000001403FC166: add     rsp, 8
 * 00000001403FC16A: call    loc_1403FC15D
 * 00000001403FC16F: add     rsp, 8
 * 00000001403FC173: call    loc_1403FC166
 * 00000001403FC178: add     rsp, 8
 * 00000001403FC17C: call    loc_1403FC16F
 * 00000001403FC181: add     rsp, 8
 * 00000001403FC185: call    loc_1403FC178
 * 00000001403FC18A: add     rsp, 8
 * 00000001403FC18E: call    loc_1403FC181
 * 00000001403FC193: add     rsp, 8
 * 00000001403FC197: call    loc_1403FC18A
 * 00000001403FC19C: add     rsp, 8
 * 00000001403FC1A0: call    loc_1403FC193
 * 00000001403FC1A5: add     rsp, 8
 * 00000001403FC1A9: call    loc_1403FC19C
 * 00000001403FC1AE: add     rsp, 8
 * 00000001403FC1B2: call    loc_1403FC1A5
 * 00000001403FC1B7: add     rsp, 8
 * 00000001403FC1BB: call    loc_1403FC1AE
 * 00000001403FC1C0: add     rsp, 8
 * 00000001403FC1C4: lfence
 * 00000001403FC1C7: mov     byte ptr gs:853h, 0
 * 00000001403FC1D0: test    byte ptr [r10+3], 3
 * 00000001403FC1D5: mov     word ptr [rbp+80h], 0
 * 00000001403FC1DE: jz      short loc_1403FC1E5
 * 00000001403FC1E0: call    KiSaveDebugRegisterState
 * 00000001403FC1E5: cld
 * 00000001403FC1E6: stmxcsr dword ptr [rbp-54h]
 * 00000001403FC1EA: ldmxcsr dword ptr gs:180h
 * 00000001403FC1F3: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001403FC1F7: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001403FC1FB: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001403FC1FF: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001403FC203: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001403FC207: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001403FC20B: cmp     byte ptr gs:801Ah, 0
 * 00000001403FC214: jz      short loc_1403FC21B
 * 00000001403FC216: call    KeWakeProcessor
 * 00000001403FC21B: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001403FC222: cmp     rax, [rbp+0E8h]
 * 00000001403FC229: jnb     short loc_1403FC244
 * 00000001403FC22B: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001403FC232: cmp     rax, [rbp+0E8h]
 * 00000001403FC239: jb      short loc_1403FC244
 * 00000001403FC23B: lea     rcx, [rbp-80h]
 * 00000001403FC23F: call    KiCheckForSListAddress
 * 00000001403FC244: xor     esi, esi
 * 00000001403FC246: inc     dword ptr gs:8000h
 * 00000001403FC24E: jmp     KiVmbusInterruptDispatch
 */
