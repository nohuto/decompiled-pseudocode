/*
 * XREFs of KiVmbusInterrupt1 @ 0x1403FBCA0
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x140A120C0 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140325D90 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt1 @ 0x1403FBCA0 (KiVmbusInterrupt1.c)
 *     KeWakeProcessor @ 0x1405145B0 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x1403FBCA0
 * Reason: Hex-Rays returned no pseudocode for 0x1403FBCA0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FBCA0: push    2
 * 00000001403FBCA2: push    rbp
 * 00000001403FBCA3: push    rsi
 * 00000001403FBCA4: sub     rsp, 150h
 * 00000001403FBCAB: lea     rbp, [rsp+168h+var_E8]
 * 00000001403FBCB3: mov     byte ptr [rbp-55h], 0
 * 00000001403FBCB7: mov     [rbp-50h], rax
 * 00000001403FBCBB: mov     [rbp-48h], rcx
 * 00000001403FBCBF: mov     [rbp-40h], rdx
 * 00000001403FBCC3: mov     [rbp-38h], r8
 * 00000001403FBCC7: mov     [rbp-30h], r9
 * 00000001403FBCCB: mov     [rbp-28h], r10
 * 00000001403FBCCF: mov     [rbp-20h], r11
 * 00000001403FBCD3: test    byte ptr [rbp+0F0h], 1
 * 00000001403FBCDA: jnz     short loc_1403FBD09
 * 00000001403FBCDC: lfence
 * 00000001403FBCDF: test    byte ptr gs:278h, 1
 * 00000001403FBCE8: jnz     short loc_1403FBCF2
 * 00000001403FBCEA: lfence
 * 00000001403FBCED: jmp     loc_1403FBF05
 * 00000001403FBCF2: movzx   eax, byte ptr gs:27Ah
 * 00000001403FBCFB: mov     ecx, 48h ; 'H'
 * 00000001403FBD00: xor     edx, edx
 * 00000001403FBD02: wrmsr
 * 00000001403FBD04: jmp     loc_1403FBF05
 * 00000001403FBD09: test    cs:KiKvaShadow, 1
 * 00000001403FBD10: jnz     short loc_1403FBD15
 * 00000001403FBD12: swapgs
 * 00000001403FBD15: lfence
 * 00000001403FBD18: mov     r10, gs:188h
 * 00000001403FBD21: mov     rcx, gs:188h
 * 00000001403FBD2A: mov     rcx, [rcx+220h]
 * 00000001403FBD31: mov     rcx, [rcx+9E0h]
 * 00000001403FBD38: mov     gs:270h, rcx
 * 00000001403FBD41: mov     cl, gs:850h
 * 00000001403FBD49: mov     gs:851h, cl
 * 00000001403FBD51: mov     cl, gs:278h
 * 00000001403FBD59: mov     gs:852h, cl
 * 00000001403FBD61: movzx   eax, byte ptr gs:27Bh
 * 00000001403FBD6A: cmp     gs:27Ah, al
 * 00000001403FBD72: jz      short loc_1403FBD85
 * 00000001403FBD74: mov     gs:27Ah, al
 * 00000001403FBD7C: mov     ecx, 48h ; 'H'
 * 00000001403FBD81: xor     edx, edx
 * 00000001403FBD83: wrmsr
 * 00000001403FBD85: movzx   edx, byte ptr gs:278h
 * 00000001403FBD8E: test    edx, 8
 * 00000001403FBD94: jz      short loc_1403FBDA9
 * 00000001403FBD96: mov     eax, 1
 * 00000001403FBD9B: xor     edx, edx
 * 00000001403FBD9D: mov     ecx, 49h ; 'I'
 * 00000001403FBDA2: wrmsr
 * 00000001403FBDA4: jmp     loc_1403FBEE7
 * 00000001403FBDA9: test    edx, 2
 * 00000001403FBDAF: jz      loc_1403FBEE4
 * 00000001403FBDB5: test    byte ptr gs:279h, 4
 * 00000001403FBDBE: jnz     loc_1403FBEE4
 * 00000001403FBDC4: call    loc_1403FBED7
 * 00000001403FBDC9: add     rsp, 8
 * 00000001403FBDCD: call    loc_1403FBEE0
 * 00000001403FBDD2: add     rsp, 8
 * 00000001403FBDD6: call    loc_1403FBDC9
 * 00000001403FBDDB: add     rsp, 8
 * 00000001403FBDDF: call    loc_1403FBDD2
 * 00000001403FBDE4: add     rsp, 8
 * 00000001403FBDE8: call    loc_1403FBDDB
 * 00000001403FBDED: add     rsp, 8
 * 00000001403FBDF1: call    loc_1403FBDE4
 * 00000001403FBDF6: add     rsp, 8
 * 00000001403FBDFA: call    loc_1403FBDED
 * 00000001403FBDFF: add     rsp, 8
 * 00000001403FBE03: call    loc_1403FBDF6
 * 00000001403FBE08: add     rsp, 8
 * 00000001403FBE0C: call    loc_1403FBDFF
 * 00000001403FBE11: add     rsp, 8
 * 00000001403FBE15: call    loc_1403FBE08
 * 00000001403FBE1A: add     rsp, 8
 * 00000001403FBE1E: call    loc_1403FBE11
 * 00000001403FBE23: add     rsp, 8
 * 00000001403FBE27: call    loc_1403FBE1A
 * 00000001403FBE2C: add     rsp, 8
 * 00000001403FBE30: call    loc_1403FBE23
 * 00000001403FBE35: add     rsp, 8
 * 00000001403FBE39: call    loc_1403FBE2C
 * 00000001403FBE3E: add     rsp, 8
 * 00000001403FBE42: call    loc_1403FBE35
 * 00000001403FBE47: add     rsp, 8
 * 00000001403FBE4B: call    loc_1403FBE3E
 * 00000001403FBE50: add     rsp, 8
 * 00000001403FBE54: call    loc_1403FBE47
 * 00000001403FBE59: add     rsp, 8
 * 00000001403FBE5D: call    loc_1403FBE50
 * 00000001403FBE62: add     rsp, 8
 * 00000001403FBE66: call    loc_1403FBE59
 * 00000001403FBE6B: add     rsp, 8
 * 00000001403FBE6F: call    loc_1403FBE62
 * 00000001403FBE74: add     rsp, 8
 * 00000001403FBE78: call    loc_1403FBE6B
 * 00000001403FBE7D: add     rsp, 8
 * 00000001403FBE81: call    loc_1403FBE74
 * 00000001403FBE86: add     rsp, 8
 * 00000001403FBE8A: call    loc_1403FBE7D
 * 00000001403FBE8F: add     rsp, 8
 * 00000001403FBE93: call    loc_1403FBE86
 * 00000001403FBE98: add     rsp, 8
 * 00000001403FBE9C: call    loc_1403FBE8F
 * 00000001403FBEA1: add     rsp, 8
 * 00000001403FBEA5: call    loc_1403FBE98
 * 00000001403FBEAA: add     rsp, 8
 * 00000001403FBEAE: call    loc_1403FBEA1
 * 00000001403FBEB3: add     rsp, 8
 * 00000001403FBEB7: call    loc_1403FBEAA
 * 00000001403FBEBC: add     rsp, 8
 * 00000001403FBEC0: call    loc_1403FBEB3
 * 00000001403FBEC5: add     rsp, 8
 * 00000001403FBEC9: call    loc_1403FBEBC
 * 00000001403FBECE: add     rsp, 8
 * 00000001403FBED2: call    loc_1403FBEC5
 * 00000001403FBED7: add     rsp, 8
 * 00000001403FBEDB: call    loc_1403FBECE
 * 00000001403FBEE0: add     rsp, 8
 * 00000001403FBEE4: lfence
 * 00000001403FBEE7: mov     byte ptr gs:853h, 0
 * 00000001403FBEF0: test    byte ptr [r10+3], 3
 * 00000001403FBEF5: mov     word ptr [rbp+80h], 0
 * 00000001403FBEFE: jz      short loc_1403FBF05
 * 00000001403FBF00: call    KiSaveDebugRegisterState
 * 00000001403FBF05: cld
 * 00000001403FBF06: stmxcsr dword ptr [rbp-54h]
 * 00000001403FBF0A: ldmxcsr dword ptr gs:180h
 * 00000001403FBF13: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001403FBF17: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001403FBF1B: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001403FBF1F: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001403FBF23: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001403FBF27: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001403FBF2B: cmp     byte ptr gs:801Ah, 0
 * 00000001403FBF34: jz      short loc_1403FBF3B
 * 00000001403FBF36: call    KeWakeProcessor
 * 00000001403FBF3B: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001403FBF42: cmp     rax, [rbp+0E8h]
 * 00000001403FBF49: jnb     short loc_1403FBF64
 * 00000001403FBF4B: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001403FBF52: cmp     rax, [rbp+0E8h]
 * 00000001403FBF59: jb      short loc_1403FBF64
 * 00000001403FBF5B: lea     rcx, [rbp-80h]
 * 00000001403FBF5F: call    KiCheckForSListAddress
 * 00000001403FBF64: xor     esi, esi
 * 00000001403FBF66: inc     dword ptr gs:8000h
 * 00000001403FBF6E: jmp     KiVmbusInterruptDispatch
 */
