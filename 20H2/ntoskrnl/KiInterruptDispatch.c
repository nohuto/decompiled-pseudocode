/*
 * XREFs of KiInterruptDispatch @ 0x1403FDC50
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402EBA40 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402F5F40 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatch @ 0x1403FD8A0 (KiInterruptSubDispatch.c)
 *     KiInterruptDispatch @ 0x1403FDC50 (KiInterruptDispatch.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1404036E0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140511100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x1403FDC50
 * Reason: Hex-Rays returned no pseudocode for 0x1403FDC50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FDC50: mov     rdx, rsp
 * 00000001403FDC53: mov     rcx, gs:8758h
 * 00000001403FDC5C: lea     rax, [rcx-6000h]
 * 00000001403FDC63: cmp     rax, rsp
 * 00000001403FDC66: ja      short loc_1403FDC6D
 * 00000001403FDC68: cmp     rsp, rcx
 * 00000001403FDC6B: jb      short loc_1403FDC79
 * 00000001403FDC6D: cmp     cs:KiBugCheckActive, 0
 * 00000001403FDC74: jnz     short loc_1403FDC79
 * 00000001403FDC76: mov     rsp, rcx
 * 00000001403FDC79: sub     rsp, 20h
 * 00000001403FDC7D: mov     [rsp+20h+var_10], rdx
 * 00000001403FDC82: call    KiInterruptSubDispatch
 * 00000001403FDC87: mov     rsp, [rsp+20h+var_10]
 * 00000001403FDC8C: mov     rcx, rsi
 * 00000001403FDC8F: call    HalPerformEndOfInterrupt
 * 00000001403FDC94: mov     rcx, gs:20h
 * 00000001403FDC9D: cmp     byte ptr [rcx+20h], 1
 * 00000001403FDCA1: ja      short loc_1403FDD1D
 * 00000001403FDCA3: rdtsc
 * 00000001403FDCA5: shl     rdx, 20h
 * 00000001403FDCA9: or      rax, rdx
 * 00000001403FDCAC: sub     rax, [rcx+7EC0h]
 * 00000001403FDCB3: add     [rcx+7F38h], rax
 * 00000001403FDCBA: add     [rcx+7EC0h], rax
 * 00000001403FDCC1: mov     r8, rax
 * 00000001403FDCC4: mov     rax, [rcx+8]
 * 00000001403FDCC8: test    byte ptr [rax+2], 72h
 * 00000001403FDCCC: jz      short loc_1403FDCE1
 * 00000001403FDCCE: xor     edx, edx
 * 00000001403FDCD0: call    KiBeginThreadAccountingPeriod
 * 00000001403FDCD5: mov     rcx, gs:20h
 * 00000001403FDCDE: inc     byte ptr [rcx+20h]
 * 00000001403FDCE1: mov     dl, [rcx+6]
 * 00000001403FDCE4: and     byte ptr [rcx+6], 0
 * 00000001403FDCE8: cmp     byte ptr [rcx+7], 0
 * 00000001403FDCEC: jnz     short loc_1403FDD1D
 * 00000001403FDCEE: test    dl, dl
 * 00000001403FDCF0: jz      short loc_1403FDD1D
 * 00000001403FDCF2: cmp     byte ptr [rbp-57h], 2
 * 00000001403FDCF6: jnb     short loc_1403FDD03
 * 00000001403FDCF8: and     byte ptr [rcx+20h], 0
 * 00000001403FDCFC: call    KiDpcInterruptBypass
 * 00000001403FDD01: jmp     short loc_1403FDD20
 * 00000001403FDD03: mov     ecx, 2
 * 00000001403FDD08: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FDD0F: nop     dword ptr [rax+rax+00h]
 * 00000001403FDD14: mov     rcx, gs:20h
 * 00000001403FDD1D: dec     byte ptr [rcx+20h]
 * 00000001403FDD20: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403FDD24: cmp     cs:KiIrqlFlags, 0
 * 00000001403FDD2B: jz      short loc_1403FDD34
 * 00000001403FDD2D: call    KzSetIrqlUnsafe
 * 00000001403FDD32: jmp     short loc_1403FDD38
 * 00000001403FDD34: mov     cr8, rcx
 * 00000001403FDD38: mov     rsi, [rbp+0D0h]
 * 00000001403FDD3F: test    byte ptr [rbp+0F0h], 1
 * 00000001403FDD46: jz      loc_1403FDFBB
 * 00000001403FDD4C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FDD53: jz      short loc_1403FDD58
 * 00000001403FDD55: stac
 * 00000001403FDD58: mov     rcx, gs:188h
 * 00000001403FDD61: test    byte ptr [rcx+0C2h], 3
 * 00000001403FDD68: jz      short loc_1403FDD85
 * 00000001403FDD6A: mov     ecx, 1
 * 00000001403FDD6F: mov     cr8, rcx
 * 00000001403FDD73: sti
 * 00000001403FDD74: call    KiInitiateUserApc
 * 00000001403FDD79: cli
 * 00000001403FDD7A: mov     ecx, 0
 * 00000001403FDD7F: mov     cr8, rcx
 * 00000001403FDD83: jmp     short loc_1403FDD58
 * 00000001403FDD85: test    byte ptr gs:27Eh, 2
 * 00000001403FDD8E: jz      short loc_1403FDD97
 * 00000001403FDD90: xor     ecx, ecx
 * 00000001403FDD92: call    KiUpdateStibpPairing
 * 00000001403FDD97: mov     rcx, gs:188h
 * 00000001403FDDA0: test    dword ptr [rcx], 8000000h
 * 00000001403FDDA6: jz      short loc_1403FDDAD
 * 00000001403FDDA8: call    KiRestoreSetContextState
 * 00000001403FDDAD: mov     rcx, gs:188h
 * 00000001403FDDB6: test    dword ptr [rcx], 40010000h
 * 00000001403FDDBC: jz      short loc_1403FDDD2
 * 00000001403FDDBE: test    byte ptr [rcx+2], 1
 * 00000001403FDDC2: jz      short loc_1403FDDD2
 * 00000001403FDDC4: call    KiCopyCounters
 * 00000001403FDDC9: mov     rcx, gs:188h
 * 00000001403FDDD2: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FDDD6: cmp     word ptr [rbp+80h], 0
 * 00000001403FDDDE: jz      short loc_1403FDDE5
 * 00000001403FDDE0: call    KiRestoreDebugRegisterState
 * 00000001403FDDE5: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FDDE9: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FDDED: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FDDF1: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FDDF5: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FDDF9: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FDDFD: mov     r11, [rbp-20h]
 * 00000001403FDE01: mov     r10, [rbp-28h]
 * 00000001403FDE05: mov     r9, [rbp-30h]
 * 00000001403FDE09: mov     r8, [rbp-38h]
 * 00000001403FDE0D: mov     byte ptr gs:853h, 0
 * 00000001403FDE16: movzx   eax, byte ptr gs:27Dh
 * 00000001403FDE1F: cmp     gs:27Ah, al
 * 00000001403FDE27: jz      short loc_1403FDE3A
 * 00000001403FDE29: mov     gs:27Ah, al
 * 00000001403FDE31: mov     ecx, 48h ; 'H'
 * 00000001403FDE36: xor     edx, edx
 * 00000001403FDE38: wrmsr
 * 00000001403FDE3A: btr     word ptr gs:278h, 2
 * 00000001403FDE45: jnb     short loc_1403FDE55
 * 00000001403FDE47: mov     eax, 1
 * 00000001403FDE4C: xor     edx, edx
 * 00000001403FDE4E: mov     ecx, 49h ; 'I'
 * 00000001403FDE53: wrmsr
 * 00000001403FDE55: btr     word ptr gs:278h, 5
 * 00000001403FDE60: jnb     loc_1403FDF8B
 * 00000001403FDE66: call    loc_1403FDF79
 * 00000001403FDE6B: add     rsp, 8
 * 00000001403FDE6F: call    loc_1403FDF82
 * 00000001403FDE74: add     rsp, 8
 * 00000001403FDE78: call    loc_1403FDE6B
 * 00000001403FDE7D: add     rsp, 8
 * 00000001403FDE81: call    loc_1403FDE74
 * 00000001403FDE86: add     rsp, 8
 * 00000001403FDE8A: call    loc_1403FDE7D
 * 00000001403FDE8F: add     rsp, 8
 * 00000001403FDE93: call    loc_1403FDE86
 * 00000001403FDE98: add     rsp, 8
 * 00000001403FDE9C: call    loc_1403FDE8F
 * 00000001403FDEA1: add     rsp, 8
 * 00000001403FDEA5: call    loc_1403FDE98
 * 00000001403FDEAA: add     rsp, 8
 * 00000001403FDEAE: call    loc_1403FDEA1
 * 00000001403FDEB3: add     rsp, 8
 * 00000001403FDEB7: call    loc_1403FDEAA
 * 00000001403FDEBC: add     rsp, 8
 * 00000001403FDEC0: call    loc_1403FDEB3
 * 00000001403FDEC5: add     rsp, 8
 * 00000001403FDEC9: call    loc_1403FDEBC
 * 00000001403FDECE: add     rsp, 8
 * 00000001403FDED2: call    loc_1403FDEC5
 * 00000001403FDED7: add     rsp, 8
 * 00000001403FDEDB: call    loc_1403FDECE
 * 00000001403FDEE0: add     rsp, 8
 * 00000001403FDEE4: call    loc_1403FDED7
 * 00000001403FDEE9: add     rsp, 8
 * 00000001403FDEED: call    loc_1403FDEE0
 * 00000001403FDEF2: add     rsp, 8
 * 00000001403FDEF6: call    loc_1403FDEE9
 * 00000001403FDEFB: add     rsp, 8
 * 00000001403FDEFF: call    loc_1403FDEF2
 * 00000001403FDF04: add     rsp, 8
 * 00000001403FDF08: call    loc_1403FDEFB
 * 00000001403FDF0D: add     rsp, 8
 * 00000001403FDF11: call    loc_1403FDF04
 * 00000001403FDF16: add     rsp, 8
 * 00000001403FDF1A: call    loc_1403FDF0D
 * 00000001403FDF1F: add     rsp, 8
 * 00000001403FDF23: call    loc_1403FDF16
 * 00000001403FDF28: add     rsp, 8
 * 00000001403FDF2C: call    loc_1403FDF1F
 * 00000001403FDF31: add     rsp, 8
 * 00000001403FDF35: call    loc_1403FDF28
 * 00000001403FDF3A: add     rsp, 8
 * 00000001403FDF3E: call    loc_1403FDF31
 * 00000001403FDF43: add     rsp, 8
 * 00000001403FDF47: call    loc_1403FDF3A
 * 00000001403FDF4C: add     rsp, 8
 * 00000001403FDF50: call    loc_1403FDF43
 * 00000001403FDF55: add     rsp, 8
 * 00000001403FDF59: call    loc_1403FDF4C
 * 00000001403FDF5E: add     rsp, 8
 * 00000001403FDF62: call    loc_1403FDF55
 * 00000001403FDF67: add     rsp, 8
 * 00000001403FDF6B: call    loc_1403FDF5E
 * 00000001403FDF70: add     rsp, 8
 * 00000001403FDF74: call    loc_1403FDF67
 * 00000001403FDF79: add     rsp, 8
 * 00000001403FDF7D: call    loc_1403FDF70
 * 00000001403FDF82: add     rsp, 8
 * 00000001403FDF86: mov     eax, 0DADAh
 * 00000001403FDF8B: mov     rdx, [rbp-40h]
 * 00000001403FDF8F: mov     rcx, [rbp-48h]
 * 00000001403FDF93: mov     rax, [rbp-50h]
 * 00000001403FDF97: mov     rsp, rbp
 * 00000001403FDF9A: mov     rbp, [rbp+0D8h]
 * 00000001403FDFA1: add     rsp, 0E8h
 * 00000001403FDFA8: test    cs:KiKvaShadow, 1
 * 00000001403FDFAF: jz      short loc_1403FDFB6
 * 00000001403FDFB1: jmp     KiKernelExit
 * 00000001403FDFB6: swapgs
 * 00000001403FDFB9: iretq
 * 00000001403FDFBB: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FDFBF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FDFC3: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FDFC7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FDFCB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FDFCF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FDFD3: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FDFD7: mov     r11, [rbp-20h]
 * 00000001403FDFDB: mov     r10, [rbp-28h]
 * 00000001403FDFDF: mov     r9, [rbp-30h]
 * 00000001403FDFE3: mov     r8, [rbp-38h]
 * 00000001403FDFE7: mov     rdx, [rbp-40h]
 * 00000001403FDFEB: mov     rcx, [rbp-48h]
 * 00000001403FDFEF: mov     rax, [rbp-50h]
 * 00000001403FDFF3: mov     rsp, rbp
 * 00000001403FDFF6: mov     rbp, [rbp+0D8h]
 * 00000001403FDFFD: add     rsp, 0E8h
 * 00000001403FE004: iretq
 */
