/*
 * XREFs of KiSwInterrupt @ 0x1403FBA90
 * Callers:
 *     KiSwInterruptShadow @ 0x140A11CC0 (KiSwInterruptShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x14026D7B0 (KiEndThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1402DDF20 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1402EC460 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x1402EC5B0 (HalPerformEndOfInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140357AA0 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140359A80 (HalRequestSoftwareInterrupt.c)
 *     KiSwInterruptDispatch @ 0x1403D87E0 (KiSwInterruptDispatch.c)
 *     KiRestoreDebugRegisterState @ 0x1403F6310 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F6DA0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1403FA370 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x1403FBA90 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x1403FC500 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14050D180 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140513F60 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140516360 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x1403FBA90
 * Reason: Hex-Rays returned no pseudocode for 0x1403FBA90
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FBA90: sub     rsp, 8
 * 00000001403FBA94: push    rbp
 * 00000001403FBA95: push    rsi
 * 00000001403FBA96: sub     rsp, 150h
 * 00000001403FBA9D: lea     rbp, [rsp+80h]
 * 00000001403FBAA5: mov     [rbp+0E8h+var_13D], 0
 * 00000001403FBAA9: mov     [rbp+0E8h+var_138], rax
 * 00000001403FBAAD: mov     [rbp+0E8h+var_130], rcx
 * 00000001403FBAB1: mov     [rbp+0E8h+var_128], rdx
 * 00000001403FBAB5: mov     [rbp+0E8h+var_120], r8
 * 00000001403FBAB9: mov     [rbp+0E8h+var_118], r9
 * 00000001403FBABD: mov     [rbp+0E8h+var_110], r10
 * 00000001403FBAC1: mov     [rbp+0E8h+var_108], r11
 * 00000001403FBAC5: test    [rbp+0E8h+arg_0], 1
 * 00000001403FBACC: jnz     short loc_1403FBAFB
 * 00000001403FBACE: lfence
 * 00000001403FBAD1: test    byte ptr gs:278h, 1
 * 00000001403FBADA: jnz     short loc_1403FBAE4
 * 00000001403FBADC: lfence
 * 00000001403FBADF: jmp     loc_1403FBCF7
 * 00000001403FBAE4: movzx   eax, byte ptr gs:27Ah
 * 00000001403FBAED: mov     ecx, 48h ; 'H'
 * 00000001403FBAF2: xor     edx, edx
 * 00000001403FBAF4: wrmsr
 * 00000001403FBAF6: jmp     loc_1403FBCF7
 * 00000001403FBAFB: test    cs:KiKvaShadow, 1
 * 00000001403FBB02: jnz     short loc_1403FBB07
 * 00000001403FBB04: swapgs
 * 00000001403FBB07: lfence
 * 00000001403FBB0A: mov     r10, gs:188h
 * 00000001403FBB13: mov     rcx, gs:188h
 * 00000001403FBB1C: mov     rcx, [rcx+220h]
 * 00000001403FBB23: mov     rcx, [rcx+9E0h]
 * 00000001403FBB2A: mov     gs:270h, rcx
 * 00000001403FBB33: mov     cl, gs:850h
 * 00000001403FBB3B: mov     gs:851h, cl
 * 00000001403FBB43: mov     cl, gs:278h
 * 00000001403FBB4B: mov     gs:852h, cl
 * 00000001403FBB53: movzx   eax, byte ptr gs:27Bh
 * 00000001403FBB5C: cmp     gs:27Ah, al
 * 00000001403FBB64: jz      short loc_1403FBB77
 * 00000001403FBB66: mov     gs:27Ah, al
 * 00000001403FBB6E: mov     ecx, 48h ; 'H'
 * 00000001403FBB73: xor     edx, edx
 * 00000001403FBB75: wrmsr
 * 00000001403FBB77: movzx   edx, byte ptr gs:278h
 * 00000001403FBB80: test    edx, 8
 * 00000001403FBB86: jz      short loc_1403FBB9B
 * 00000001403FBB88: mov     eax, 1
 * 00000001403FBB8D: xor     edx, edx
 * 00000001403FBB8F: mov     ecx, 49h ; 'I'
 * 00000001403FBB94: wrmsr
 * 00000001403FBB96: jmp     loc_1403FBCD9
 * 00000001403FBB9B: test    edx, 2
 * 00000001403FBBA1: jz      loc_1403FBCD6
 * 00000001403FBBA7: test    byte ptr gs:279h, 4
 * 00000001403FBBB0: jnz     loc_1403FBCD6
 * 00000001403FBBB6: call    loc_1403FBCC9
 * 00000001403FBBBB: add     rsp, 8
 * 00000001403FBBBF: call    loc_1403FBCD2
 * 00000001403FBBC4: add     rsp, 8
 * 00000001403FBBC8: call    loc_1403FBBBB
 * 00000001403FBBCD: add     rsp, 8
 * 00000001403FBBD1: call    loc_1403FBBC4
 * 00000001403FBBD6: add     rsp, 8
 * 00000001403FBBDA: call    loc_1403FBBCD
 * 00000001403FBBDF: add     rsp, 8
 * 00000001403FBBE3: call    loc_1403FBBD6
 * 00000001403FBBE8: add     rsp, 8
 * 00000001403FBBEC: call    loc_1403FBBDF
 * 00000001403FBBF1: add     rsp, 8
 * 00000001403FBBF5: call    loc_1403FBBE8
 * 00000001403FBBFA: add     rsp, 8
 * 00000001403FBBFE: call    loc_1403FBBF1
 * 00000001403FBC03: add     rsp, 8
 * 00000001403FBC07: call    loc_1403FBBFA
 * 00000001403FBC0C: add     rsp, 8
 * 00000001403FBC10: call    loc_1403FBC03
 * 00000001403FBC15: add     rsp, 8
 * 00000001403FBC19: call    loc_1403FBC0C
 * 00000001403FBC1E: add     rsp, 8
 * 00000001403FBC22: call    loc_1403FBC15
 * 00000001403FBC27: add     rsp, 8
 * 00000001403FBC2B: call    loc_1403FBC1E
 * 00000001403FBC30: add     rsp, 8
 * 00000001403FBC34: call    loc_1403FBC27
 * 00000001403FBC39: add     rsp, 8
 * 00000001403FBC3D: call    loc_1403FBC30
 * 00000001403FBC42: add     rsp, 8
 * 00000001403FBC46: call    loc_1403FBC39
 * 00000001403FBC4B: add     rsp, 8
 * 00000001403FBC4F: call    loc_1403FBC42
 * 00000001403FBC54: add     rsp, 8
 * 00000001403FBC58: call    loc_1403FBC4B
 * 00000001403FBC5D: add     rsp, 8
 * 00000001403FBC61: call    loc_1403FBC54
 * 00000001403FBC66: add     rsp, 8
 * 00000001403FBC6A: call    loc_1403FBC5D
 * 00000001403FBC6F: add     rsp, 8
 * 00000001403FBC73: call    loc_1403FBC66
 * 00000001403FBC78: add     rsp, 8
 * 00000001403FBC7C: call    loc_1403FBC6F
 * 00000001403FBC81: add     rsp, 8
 * 00000001403FBC85: call    loc_1403FBC78
 * 00000001403FBC8A: add     rsp, 8
 * 00000001403FBC8E: call    loc_1403FBC81
 * 00000001403FBC93: add     rsp, 8
 * 00000001403FBC97: call    loc_1403FBC8A
 * 00000001403FBC9C: add     rsp, 8
 * 00000001403FBCA0: call    loc_1403FBC93
 * 00000001403FBCA5: add     rsp, 8
 * 00000001403FBCA9: call    loc_1403FBC9C
 * 00000001403FBCAE: add     rsp, 8
 * 00000001403FBCB2: call    loc_1403FBCA5
 * 00000001403FBCB7: add     rsp, 8
 * 00000001403FBCBB: call    loc_1403FBCAE
 * 00000001403FBCC0: add     rsp, 8
 * 00000001403FBCC4: call    loc_1403FBCB7
 * 00000001403FBCC9: add     rsp, 8
 * 00000001403FBCCD: call    loc_1403FBCC0
 * 00000001403FBCD2: add     rsp, 8
 * 00000001403FBCD6: lfence
 * 00000001403FBCD9: mov     byte ptr gs:853h, 0
 * 00000001403FBCE2: test    byte ptr [r10+3], 3
 * 00000001403FBCE7: mov     [rbp+0E8h+var_68], 0
 * 00000001403FBCF0: jz      short loc_1403FBCF7
 * 00000001403FBCF2: call    KiSaveDebugRegisterState
 * 00000001403FBCF7: cld
 * 00000001403FBCF8: stmxcsr [rbp+0E8h+var_13C]
 * 00000001403FBCFC: ldmxcsr dword ptr gs:180h
 * 00000001403FBD05: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001403FBD09: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001403FBD0D: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001403FBD11: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001403FBD15: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001403FBD19: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001403FBD1D: cmp     byte ptr gs:801Ah, 0
 * 00000001403FBD26: jz      short loc_1403FBD2D
 * 00000001403FBD28: call    KeWakeProcessor
 * 00000001403FBD2D: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001403FBD34: cmp     rax, [rbp+0E8h]
 * 00000001403FBD3B: jnb     short loc_1403FBD56
 * 00000001403FBD3D: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001403FBD44: cmp     rax, [rbp+0E8h]
 * 00000001403FBD4B: jb      short loc_1403FBD56
 * 00000001403FBD4D: lea     rcx, [rbp+0E8h+var_168]
 * 00000001403FBD51: call    KiCheckForSListAddress
 * 00000001403FBD56: xor     esi, esi
 * 00000001403FBD58: inc     dword ptr gs:8000h
 * 00000001403FBD60: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FBD67: jz      short loc_1403FBD6C
 * 00000001403FBD69: clac
 * 00000001403FBD6C: mov     ecx, 2
 * 00000001403FBD71: cmp     cs:KiIrqlFlags, 0
 * 00000001403FBD78: jz      short loc_1403FBD81
 * 00000001403FBD7A: call    KzSetIrqlUnsafe
 * 00000001403FBD7F: jmp     short loc_1403FBD89
 * 00000001403FBD81: mov     rax, cr8
 * 00000001403FBD85: mov     cr8, rcx
 * 00000001403FBD89: mov     [rbp+0E8h+var_13F], al
 * 00000001403FBD8C: mov     rcx, gs:20h
 * 00000001403FBD95: inc     byte ptr [rcx+20h]
 * 00000001403FBD98: cmp     byte ptr [rcx+20h], 1
 * 00000001403FBD9C: jnz     short loc_1403FBDEE
 * 00000001403FBD9E: rdtsc
 * 00000001403FBDA0: shl     rdx, 20h
 * 00000001403FBDA4: or      rax, rdx
 * 00000001403FBDA7: mov     r8, [rcx+8]
 * 00000001403FBDAB: sub     rax, [rcx+7EC0h]
 * 00000001403FBDB2: add     [r8+48h], rax
 * 00000001403FBDB6: mov     edx, [r8+50h]
 * 00000001403FBDBA: add     [rcx+7EC0h], rax
 * 00000001403FBDC1: add     rdx, rax
 * 00000001403FBDC4: mov     ecx, edx
 * 00000001403FBDC6: shr     rdx, 20h
 * 00000001403FBDCA: jz      short loc_1403FBDCF
 * 00000001403FBDCC: or      ecx, 0FFFFFFFFh
 * 00000001403FBDCF: mov     [r8+50h], ecx
 * 00000001403FBDD3: test    byte ptr [r8+2], 3Eh
 * 00000001403FBDD8: jz      short loc_1403FBDEE
 * 00000001403FBDDA: mov     rdx, r8
 * 00000001403FBDDD: mov     r8, rax
 * 00000001403FBDE0: mov     rcx, gs:20h
 * 00000001403FBDE9: call    KiEndThreadAccountingPeriod
 * 00000001403FBDEE: sti
 * 00000001403FBDEF: lea     rcx, [rbp+0E8h+var_168]
 * 00000001403FBDF3: call    KiSwInterruptDispatch
 * 00000001403FBDF8: cli
 * 00000001403FBDF9: mov     rcx, rsi
 * 00000001403FBDFC: call    HalPerformEndOfInterrupt
 * 00000001403FBE01: mov     rcx, gs:20h
 * 00000001403FBE0A: cmp     byte ptr [rcx+20h], 1
 * 00000001403FBE0E: ja      short loc_1403FBE8A
 * 00000001403FBE10: rdtsc
 * 00000001403FBE12: shl     rdx, 20h
 * 00000001403FBE16: or      rax, rdx
 * 00000001403FBE19: sub     rax, [rcx+7EC0h]
 * 00000001403FBE20: add     [rcx+7F38h], rax
 * 00000001403FBE27: add     [rcx+7EC0h], rax
 * 00000001403FBE2E: mov     r8, rax
 * 00000001403FBE31: mov     rax, [rcx+8]
 * 00000001403FBE35: test    byte ptr [rax+2], 72h
 * 00000001403FBE39: jz      short loc_1403FBE4E
 * 00000001403FBE3B: xor     edx, edx
 * 00000001403FBE3D: call    KiBeginThreadAccountingPeriod
 * 00000001403FBE42: mov     rcx, gs:20h
 * 00000001403FBE4B: inc     byte ptr [rcx+20h]
 * 00000001403FBE4E: mov     dl, [rcx+6]
 * 00000001403FBE51: and     byte ptr [rcx+6], 0
 * 00000001403FBE55: cmp     byte ptr [rcx+7], 0
 * 00000001403FBE59: jnz     short loc_1403FBE8A
 * 00000001403FBE5B: test    dl, dl
 * 00000001403FBE5D: jz      short loc_1403FBE8A
 * 00000001403FBE5F: cmp     [rbp+0E8h+var_13F], 2
 * 00000001403FBE63: jnb     short loc_1403FBE70
 * 00000001403FBE65: and     byte ptr [rcx+20h], 0
 * 00000001403FBE69: call    KiDpcInterruptBypass
 * 00000001403FBE6E: jmp     short loc_1403FBE8D
 * 00000001403FBE70: mov     ecx, 2
 * 00000001403FBE75: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FBE7C: nop     dword ptr [rax+rax+00h]
 * 00000001403FBE81: mov     rcx, gs:20h
 * 00000001403FBE8A: dec     byte ptr [rcx+20h]
 * 00000001403FBE8D: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001403FBE91: cmp     cs:KiIrqlFlags, 0
 * 00000001403FBE98: jz      short loc_1403FBEA1
 * 00000001403FBE9A: call    KzSetIrqlUnsafe
 * 00000001403FBE9F: jmp     short loc_1403FBEA5
 * 00000001403FBEA1: mov     cr8, rcx
 * 00000001403FBEA5: mov     rsi, [rbp+0E8h+var_18]
 * 00000001403FBEAC: cli
 * 00000001403FBEAD: test    [rbp+0E8h+arg_0], 1
 * 00000001403FBEB4: jz      loc_1403FBFF3
 * 00000001403FBEBA: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FBEC1: jz      short loc_1403FBEC6
 * 00000001403FBEC3: stac
 * 00000001403FBEC6: mov     rcx, gs:188h
 * 00000001403FBECF: test    byte ptr [rcx+0C2h], 3
 * 00000001403FBED6: jz      short loc_1403FBEF3
 * 00000001403FBED8: mov     ecx, 1
 * 00000001403FBEDD: mov     cr8, rcx
 * 00000001403FBEE1: sti
 * 00000001403FBEE2: call    KiInitiateUserApc
 * 00000001403FBEE7: cli
 * 00000001403FBEE8: mov     ecx, 0
 * 00000001403FBEED: mov     cr8, rcx
 * 00000001403FBEF1: jmp     short loc_1403FBEC6
 * 00000001403FBEF3: test    byte ptr gs:27Eh, 2
 * 00000001403FBEFC: jz      short loc_1403FBF05
 * 00000001403FBEFE: xor     ecx, ecx
 * 00000001403FBF00: call    KiUpdateStibpPairing
 * 00000001403FBF05: mov     rcx, gs:188h
 * 00000001403FBF0E: test    dword ptr [rcx], 8000000h
 * 00000001403FBF14: jz      short loc_1403FBF1B
 * 00000001403FBF16: call    KiRestoreSetContextState
 * 00000001403FBF1B: mov     rcx, gs:188h
 * 00000001403FBF24: test    dword ptr [rcx], 40010000h
 * 00000001403FBF2A: jz      short loc_1403FBF40
 * 00000001403FBF2C: test    byte ptr [rcx+2], 1
 * 00000001403FBF30: jz      short loc_1403FBF40
 * 00000001403FBF32: call    KiCopyCounters
 * 00000001403FBF37: mov     rcx, gs:188h
 * 00000001403FBF40: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001403FBF44: cmp     [rbp+0E8h+var_68], 0
 * 00000001403FBF4C: jz      short loc_1403FBF53
 * 00000001403FBF4E: call    KiRestoreDebugRegisterState
 * 00000001403FBF53: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001403FBF57: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001403FBF5B: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001403FBF5F: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001403FBF63: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001403FBF67: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001403FBF6B: mov     r11, [rbp+0E8h+var_108]
 * 00000001403FBF6F: mov     r10, [rbp+0E8h+var_110]
 * 00000001403FBF73: mov     r9, [rbp+0E8h+var_118]
 * 00000001403FBF77: mov     r8, [rbp+0E8h+var_120]
 * 00000001403FBF7B: mov     byte ptr gs:853h, 0
 * 00000001403FBF84: movzx   eax, byte ptr gs:27Dh
 * 00000001403FBF8D: cmp     gs:27Ah, al
 * 00000001403FBF95: jz      short loc_1403FBFA8
 * 00000001403FBF97: mov     gs:27Ah, al
 * 00000001403FBF9F: mov     ecx, 48h ; 'H'
 * 00000001403FBFA4: xor     edx, edx
 * 00000001403FBFA6: wrmsr
 * 00000001403FBFA8: btr     word ptr gs:278h, 2
 * 00000001403FBFB3: jnb     short loc_1403FBFC3
 * 00000001403FBFB5: mov     eax, 1
 * 00000001403FBFBA: xor     edx, edx
 * 00000001403FBFBC: mov     ecx, 49h ; 'I'
 * 00000001403FBFC1: wrmsr
 * 00000001403FBFC3: mov     rdx, [rbp+0E8h+var_128]
 * 00000001403FBFC7: mov     rcx, [rbp+0E8h+var_130]
 * 00000001403FBFCB: mov     rax, [rbp+0E8h+var_138]
 * 00000001403FBFCF: mov     rsp, rbp
 * 00000001403FBFD2: mov     rbp, [rbp+0E8h+var_10]
 * 00000001403FBFD9: add     rsp, 0E8h
 * 00000001403FBFE0: test    cs:KiKvaShadow, 1
 * 00000001403FBFE7: jz      short loc_1403FBFEE
 * 00000001403FBFE9: jmp     KiKernelExit
 * 00000001403FBFEE: swapgs
 * 00000001403FBFF1: iretq
 * 00000001403FBFF3: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001403FBFF7: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001403FBFFB: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001403FBFFF: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001403FC003: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001403FC007: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001403FC00B: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001403FC00F: mov     r11, [rbp+0E8h+var_108]
 * 00000001403FC013: mov     r10, [rbp+0E8h+var_110]
 * 00000001403FC017: mov     r9, [rbp+0E8h+var_118]
 * 00000001403FC01B: mov     r8, [rbp+0E8h+var_120]
 * 00000001403FC01F: mov     rdx, [rbp+0E8h+var_128]
 * 00000001403FC023: mov     rcx, [rbp+0E8h+var_130]
 * 00000001403FC027: mov     rax, [rbp+0E8h+var_138]
 * 00000001403FC02B: mov     rsp, rbp
 * 00000001403FC02E: mov     rbp, [rbp+0E8h+var_10]
 * 00000001403FC035: add     rsp, 0E8h
 * 00000001403FC03C: iretq
 */
