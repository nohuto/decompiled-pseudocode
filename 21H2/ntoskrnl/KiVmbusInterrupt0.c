/*
 * XREFs of KiVmbusInterrupt0 @ 0x140403AD0
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x140A16040 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1402F1E00 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt0 @ 0x140403AD0 (KiVmbusInterrupt0.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140519C60 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x140403AD0
 * Reason: Hex-Rays returned no pseudocode for 0x140403AD0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140403AD0: push    1
 * 0000000140403AD2: push    rbp
 * 0000000140403AD3: push    rsi
 * 0000000140403AD4: sub     rsp, 150h
 * 0000000140403ADB: lea     rbp, [rsp+168h+var_E8]
 * 0000000140403AE3: mov     byte ptr [rbp-55h], 0
 * 0000000140403AE7: mov     [rbp-50h], rax
 * 0000000140403AEB: mov     [rbp-48h], rcx
 * 0000000140403AEF: mov     [rbp-40h], rdx
 * 0000000140403AF3: mov     [rbp-38h], r8
 * 0000000140403AF7: mov     [rbp-30h], r9
 * 0000000140403AFB: mov     [rbp-28h], r10
 * 0000000140403AFF: mov     [rbp-20h], r11
 * 0000000140403B03: test    byte ptr [rbp+0F0h], 1
 * 0000000140403B0A: jnz     short loc_140403B3B
 * 0000000140403B0C: lfence
 * 0000000140403B0F: test    word ptr gs:860h, 1
 * 0000000140403B1A: jnz     short loc_140403B24
 * 0000000140403B1C: lfence
 * 0000000140403B1F: jmp     loc_140403D44
 * 0000000140403B24: movzx   eax, word ptr gs:864h
 * 0000000140403B2D: mov     ecx, 48h ; 'H'
 * 0000000140403B32: xor     edx, edx
 * 0000000140403B34: wrmsr
 * 0000000140403B36: jmp     loc_140403D44
 * 0000000140403B3B: test    cs:KiKvaShadow, 1
 * 0000000140403B42: jnz     short loc_140403B47
 * 0000000140403B44: swapgs
 * 0000000140403B47: lfence
 * 0000000140403B4A: mov     r10, gs:188h
 * 0000000140403B53: mov     rcx, gs:188h
 * 0000000140403B5C: mov     rcx, [rcx+220h]
 * 0000000140403B63: mov     rcx, [rcx+9E0h]
 * 0000000140403B6A: mov     gs:858h, rcx
 * 0000000140403B73: mov     cx, gs:850h
 * 0000000140403B7C: mov     gs:852h, cx
 * 0000000140403B85: mov     cx, gs:860h
 * 0000000140403B8E: mov     gs:854h, cx
 * 0000000140403B97: movzx   eax, word ptr gs:866h
 * 0000000140403BA0: cmp     gs:864h, ax
 * 0000000140403BA9: jz      short loc_140403BBD
 * 0000000140403BAB: mov     gs:864h, ax
 * 0000000140403BB4: mov     ecx, 48h ; 'H'
 * 0000000140403BB9: xor     edx, edx
 * 0000000140403BBB: wrmsr
 * 0000000140403BBD: movzx   edx, word ptr gs:860h
 * 0000000140403BC6: test    edx, 8
 * 0000000140403BCC: jz      short loc_140403BE5
 * 0000000140403BCE: mov     eax, 1
 * 0000000140403BD3: xor     edx, edx
 * 0000000140403BD5: mov     ecx, 49h ; 'I'
 * 0000000140403BDA: wrmsr
 * 0000000140403BDC: movzx   edx, word ptr gs:860h
 * 0000000140403BE5: test    edx, 2
 * 0000000140403BEB: jz      loc_140403D16
 * 0000000140403BF1: call    loc_140403D04
 * 0000000140403BF6: add     rsp, 8
 * 0000000140403BFA: call    loc_140403D0D
 * 0000000140403BFF: add     rsp, 8
 * 0000000140403C03: call    loc_140403BF6
 * 0000000140403C08: add     rsp, 8
 * 0000000140403C0C: call    loc_140403BFF
 * 0000000140403C11: add     rsp, 8
 * 0000000140403C15: call    loc_140403C08
 * 0000000140403C1A: add     rsp, 8
 * 0000000140403C1E: call    loc_140403C11
 * 0000000140403C23: add     rsp, 8
 * 0000000140403C27: call    loc_140403C1A
 * 0000000140403C2C: add     rsp, 8
 * 0000000140403C30: call    loc_140403C23
 * 0000000140403C35: add     rsp, 8
 * 0000000140403C39: call    loc_140403C2C
 * 0000000140403C3E: add     rsp, 8
 * 0000000140403C42: call    loc_140403C35
 * 0000000140403C47: add     rsp, 8
 * 0000000140403C4B: call    loc_140403C3E
 * 0000000140403C50: add     rsp, 8
 * 0000000140403C54: call    loc_140403C47
 * 0000000140403C59: add     rsp, 8
 * 0000000140403C5D: call    loc_140403C50
 * 0000000140403C62: add     rsp, 8
 * 0000000140403C66: call    loc_140403C59
 * 0000000140403C6B: add     rsp, 8
 * 0000000140403C6F: call    loc_140403C62
 * 0000000140403C74: add     rsp, 8
 * 0000000140403C78: call    loc_140403C6B
 * 0000000140403C7D: add     rsp, 8
 * 0000000140403C81: call    loc_140403C74
 * 0000000140403C86: add     rsp, 8
 * 0000000140403C8A: call    loc_140403C7D
 * 0000000140403C8F: add     rsp, 8
 * 0000000140403C93: call    loc_140403C86
 * 0000000140403C98: add     rsp, 8
 * 0000000140403C9C: call    loc_140403C8F
 * 0000000140403CA1: add     rsp, 8
 * 0000000140403CA5: call    loc_140403C98
 * 0000000140403CAA: add     rsp, 8
 * 0000000140403CAE: call    loc_140403CA1
 * 0000000140403CB3: add     rsp, 8
 * 0000000140403CB7: call    loc_140403CAA
 * 0000000140403CBC: add     rsp, 8
 * 0000000140403CC0: call    loc_140403CB3
 * 0000000140403CC5: add     rsp, 8
 * 0000000140403CC9: call    loc_140403CBC
 * 0000000140403CCE: add     rsp, 8
 * 0000000140403CD2: call    loc_140403CC5
 * 0000000140403CD7: add     rsp, 8
 * 0000000140403CDB: call    loc_140403CCE
 * 0000000140403CE0: add     rsp, 8
 * 0000000140403CE4: call    loc_140403CD7
 * 0000000140403CE9: add     rsp, 8
 * 0000000140403CED: call    loc_140403CE0
 * 0000000140403CF2: add     rsp, 8
 * 0000000140403CF6: call    loc_140403CE9
 * 0000000140403CFB: add     rsp, 8
 * 0000000140403CFF: call    loc_140403CF2
 * 0000000140403D04: add     rsp, 8
 * 0000000140403D08: call    loc_140403CFB
 * 0000000140403D0D: add     rsp, 8
 * 0000000140403D11: mov     eax, 0DADAh
 * 0000000140403D16: test    edx, 200h
 * 0000000140403D1C: jz      short loc_140403D23
 * 0000000140403D1E: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140403D23: lfence
 * 0000000140403D26: mov     byte ptr gs:856h, 0
 * 0000000140403D2F: test    byte ptr [r10+3], 3
 * 0000000140403D34: mov     word ptr [rbp+80h], 0
 * 0000000140403D3D: jz      short loc_140403D44
 * 0000000140403D3F: call    KiSaveDebugRegisterState
 * 0000000140403D44: cld
 * 0000000140403D45: stmxcsr dword ptr [rbp-54h]
 * 0000000140403D49: ldmxcsr dword ptr gs:180h
 * 0000000140403D52: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140403D56: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140403D5A: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140403D5E: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140403D62: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140403D66: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140403D6A: cmp     byte ptr gs:801Ah, 0
 * 0000000140403D73: jz      short loc_140403D7A
 * 0000000140403D75: call    KeWakeProcessor
 * 0000000140403D7A: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140403D81: cmp     rax, [rbp+0E8h]
 * 0000000140403D88: jnb     short loc_140403DA3
 * 0000000140403D8A: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140403D91: cmp     rax, [rbp+0E8h]
 * 0000000140403D98: jb      short loc_140403DA3
 * 0000000140403D9A: lea     rcx, [rbp-80h]
 * 0000000140403D9E: call    KiCheckForSListAddress
 * 0000000140403DA3: xor     esi, esi
 * 0000000140403DA5: inc     dword ptr gs:8000h
 * 0000000140403DAD: jmp     KiVmbusInterruptDispatch
 */
