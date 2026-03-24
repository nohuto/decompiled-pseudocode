/*
 * XREFs of KiVmbusInterrupt0 @ 0x1403FB9C0
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x140A12040 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140325D90 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt0 @ 0x1403FB9C0 (KiVmbusInterrupt0.c)
 *     KeWakeProcessor @ 0x1405145B0 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x1403FB9C0
 * Reason: Hex-Rays returned no pseudocode for 0x1403FB9C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FB9C0: push    1
 * 00000001403FB9C2: push    rbp
 * 00000001403FB9C3: push    rsi
 * 00000001403FB9C4: sub     rsp, 150h
 * 00000001403FB9CB: lea     rbp, [rsp+168h+var_E8]
 * 00000001403FB9D3: mov     byte ptr [rbp-55h], 0
 * 00000001403FB9D7: mov     [rbp-50h], rax
 * 00000001403FB9DB: mov     [rbp-48h], rcx
 * 00000001403FB9DF: mov     [rbp-40h], rdx
 * 00000001403FB9E3: mov     [rbp-38h], r8
 * 00000001403FB9E7: mov     [rbp-30h], r9
 * 00000001403FB9EB: mov     [rbp-28h], r10
 * 00000001403FB9EF: mov     [rbp-20h], r11
 * 00000001403FB9F3: test    byte ptr [rbp+0F0h], 1
 * 00000001403FB9FA: jnz     short loc_1403FBA29
 * 00000001403FB9FC: lfence
 * 00000001403FB9FF: test    byte ptr gs:278h, 1
 * 00000001403FBA08: jnz     short loc_1403FBA12
 * 00000001403FBA0A: lfence
 * 00000001403FBA0D: jmp     loc_1403FBC25
 * 00000001403FBA12: movzx   eax, byte ptr gs:27Ah
 * 00000001403FBA1B: mov     ecx, 48h ; 'H'
 * 00000001403FBA20: xor     edx, edx
 * 00000001403FBA22: wrmsr
 * 00000001403FBA24: jmp     loc_1403FBC25
 * 00000001403FBA29: test    cs:KiKvaShadow, 1
 * 00000001403FBA30: jnz     short loc_1403FBA35
 * 00000001403FBA32: swapgs
 * 00000001403FBA35: lfence
 * 00000001403FBA38: mov     r10, gs:188h
 * 00000001403FBA41: mov     rcx, gs:188h
 * 00000001403FBA4A: mov     rcx, [rcx+220h]
 * 00000001403FBA51: mov     rcx, [rcx+9E0h]
 * 00000001403FBA58: mov     gs:270h, rcx
 * 00000001403FBA61: mov     cl, gs:850h
 * 00000001403FBA69: mov     gs:851h, cl
 * 00000001403FBA71: mov     cl, gs:278h
 * 00000001403FBA79: mov     gs:852h, cl
 * 00000001403FBA81: movzx   eax, byte ptr gs:27Bh
 * 00000001403FBA8A: cmp     gs:27Ah, al
 * 00000001403FBA92: jz      short loc_1403FBAA5
 * 00000001403FBA94: mov     gs:27Ah, al
 * 00000001403FBA9C: mov     ecx, 48h ; 'H'
 * 00000001403FBAA1: xor     edx, edx
 * 00000001403FBAA3: wrmsr
 * 00000001403FBAA5: movzx   edx, byte ptr gs:278h
 * 00000001403FBAAE: test    edx, 8
 * 00000001403FBAB4: jz      short loc_1403FBAC9
 * 00000001403FBAB6: mov     eax, 1
 * 00000001403FBABB: xor     edx, edx
 * 00000001403FBABD: mov     ecx, 49h ; 'I'
 * 00000001403FBAC2: wrmsr
 * 00000001403FBAC4: jmp     loc_1403FBC07
 * 00000001403FBAC9: test    edx, 2
 * 00000001403FBACF: jz      loc_1403FBC04
 * 00000001403FBAD5: test    byte ptr gs:279h, 4
 * 00000001403FBADE: jnz     loc_1403FBC04
 * 00000001403FBAE4: call    loc_1403FBBF7
 * 00000001403FBAE9: add     rsp, 8
 * 00000001403FBAED: call    loc_1403FBC00
 * 00000001403FBAF2: add     rsp, 8
 * 00000001403FBAF6: call    loc_1403FBAE9
 * 00000001403FBAFB: add     rsp, 8
 * 00000001403FBAFF: call    loc_1403FBAF2
 * 00000001403FBB04: add     rsp, 8
 * 00000001403FBB08: call    loc_1403FBAFB
 * 00000001403FBB0D: add     rsp, 8
 * 00000001403FBB11: call    loc_1403FBB04
 * 00000001403FBB16: add     rsp, 8
 * 00000001403FBB1A: call    loc_1403FBB0D
 * 00000001403FBB1F: add     rsp, 8
 * 00000001403FBB23: call    loc_1403FBB16
 * 00000001403FBB28: add     rsp, 8
 * 00000001403FBB2C: call    loc_1403FBB1F
 * 00000001403FBB31: add     rsp, 8
 * 00000001403FBB35: call    loc_1403FBB28
 * 00000001403FBB3A: add     rsp, 8
 * 00000001403FBB3E: call    loc_1403FBB31
 * 00000001403FBB43: add     rsp, 8
 * 00000001403FBB47: call    loc_1403FBB3A
 * 00000001403FBB4C: add     rsp, 8
 * 00000001403FBB50: call    loc_1403FBB43
 * 00000001403FBB55: add     rsp, 8
 * 00000001403FBB59: call    loc_1403FBB4C
 * 00000001403FBB5E: add     rsp, 8
 * 00000001403FBB62: call    loc_1403FBB55
 * 00000001403FBB67: add     rsp, 8
 * 00000001403FBB6B: call    loc_1403FBB5E
 * 00000001403FBB70: add     rsp, 8
 * 00000001403FBB74: call    loc_1403FBB67
 * 00000001403FBB79: add     rsp, 8
 * 00000001403FBB7D: call    loc_1403FBB70
 * 00000001403FBB82: add     rsp, 8
 * 00000001403FBB86: call    loc_1403FBB79
 * 00000001403FBB8B: add     rsp, 8
 * 00000001403FBB8F: call    loc_1403FBB82
 * 00000001403FBB94: add     rsp, 8
 * 00000001403FBB98: call    loc_1403FBB8B
 * 00000001403FBB9D: add     rsp, 8
 * 00000001403FBBA1: call    loc_1403FBB94
 * 00000001403FBBA6: add     rsp, 8
 * 00000001403FBBAA: call    loc_1403FBB9D
 * 00000001403FBBAF: add     rsp, 8
 * 00000001403FBBB3: call    loc_1403FBBA6
 * 00000001403FBBB8: add     rsp, 8
 * 00000001403FBBBC: call    loc_1403FBBAF
 * 00000001403FBBC1: add     rsp, 8
 * 00000001403FBBC5: call    loc_1403FBBB8
 * 00000001403FBBCA: add     rsp, 8
 * 00000001403FBBCE: call    loc_1403FBBC1
 * 00000001403FBBD3: add     rsp, 8
 * 00000001403FBBD7: call    loc_1403FBBCA
 * 00000001403FBBDC: add     rsp, 8
 * 00000001403FBBE0: call    loc_1403FBBD3
 * 00000001403FBBE5: add     rsp, 8
 * 00000001403FBBE9: call    loc_1403FBBDC
 * 00000001403FBBEE: add     rsp, 8
 * 00000001403FBBF2: call    loc_1403FBBE5
 * 00000001403FBBF7: add     rsp, 8
 * 00000001403FBBFB: call    loc_1403FBBEE
 * 00000001403FBC00: add     rsp, 8
 * 00000001403FBC04: lfence
 * 00000001403FBC07: mov     byte ptr gs:853h, 0
 * 00000001403FBC10: test    byte ptr [r10+3], 3
 * 00000001403FBC15: mov     word ptr [rbp+80h], 0
 * 00000001403FBC1E: jz      short loc_1403FBC25
 * 00000001403FBC20: call    KiSaveDebugRegisterState
 * 00000001403FBC25: cld
 * 00000001403FBC26: stmxcsr dword ptr [rbp-54h]
 * 00000001403FBC2A: ldmxcsr dword ptr gs:180h
 * 00000001403FBC33: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001403FBC37: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001403FBC3B: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001403FBC3F: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001403FBC43: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001403FBC47: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001403FBC4B: cmp     byte ptr gs:801Ah, 0
 * 00000001403FBC54: jz      short loc_1403FBC5B
 * 00000001403FBC56: call    KeWakeProcessor
 * 00000001403FBC5B: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001403FBC62: cmp     rax, [rbp+0E8h]
 * 00000001403FBC69: jnb     short loc_1403FBC84
 * 00000001403FBC6B: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001403FBC72: cmp     rax, [rbp+0E8h]
 * 00000001403FBC79: jb      short loc_1403FBC84
 * 00000001403FBC7B: lea     rcx, [rbp-80h]
 * 00000001403FBC7F: call    KiCheckForSListAddress
 * 00000001403FBC84: xor     esi, esi
 * 00000001403FBC86: inc     dword ptr gs:8000h
 * 00000001403FBC8E: jmp     KiVmbusInterruptDispatch
 */
