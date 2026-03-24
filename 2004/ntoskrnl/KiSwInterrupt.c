/*
 * XREFs of KiSwInterrupt @ 0x1403FCD20
 * Callers:
 *     KiSwInterruptShadow @ 0x140A11CC0 (KiSwInterruptShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140214760 (KiEndThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140273DE0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402FBAC0 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x140301350 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x140325D90 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x140325EE0 (HalPerformEndOfInterrupt.c)
 *     KiSwInterruptDispatch @ 0x1403D9620 (KiSwInterruptDispatch.c)
 *     KiRestoreDebugRegisterState @ 0x1403F75A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F8030 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1403FB600 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x1403FCD20 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x1403FD790 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14050D7D0 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1405145B0 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1405169B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x1403FCD20
 * Reason: Hex-Rays returned no pseudocode for 0x1403FCD20
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FCD20: sub     rsp, 8
 * 00000001403FCD24: push    rbp
 * 00000001403FCD25: push    rsi
 * 00000001403FCD26: sub     rsp, 150h
 * 00000001403FCD2D: lea     rbp, [rsp+80h]
 * 00000001403FCD35: mov     [rbp+0E8h+var_13D], 0
 * 00000001403FCD39: mov     [rbp+0E8h+var_138], rax
 * 00000001403FCD3D: mov     [rbp+0E8h+var_130], rcx
 * 00000001403FCD41: mov     [rbp+0E8h+var_128], rdx
 * 00000001403FCD45: mov     [rbp+0E8h+var_120], r8
 * 00000001403FCD49: mov     [rbp+0E8h+var_118], r9
 * 00000001403FCD4D: mov     [rbp+0E8h+var_110], r10
 * 00000001403FCD51: mov     [rbp+0E8h+var_108], r11
 * 00000001403FCD55: test    [rbp+0E8h+arg_0], 1
 * 00000001403FCD5C: jnz     short loc_1403FCD8B
 * 00000001403FCD5E: lfence
 * 00000001403FCD61: test    byte ptr gs:278h, 1
 * 00000001403FCD6A: jnz     short loc_1403FCD74
 * 00000001403FCD6C: lfence
 * 00000001403FCD6F: jmp     loc_1403FCF87
 * 00000001403FCD74: movzx   eax, byte ptr gs:27Ah
 * 00000001403FCD7D: mov     ecx, 48h ; 'H'
 * 00000001403FCD82: xor     edx, edx
 * 00000001403FCD84: wrmsr
 * 00000001403FCD86: jmp     loc_1403FCF87
 * 00000001403FCD8B: test    cs:KiKvaShadow, 1
 * 00000001403FCD92: jnz     short loc_1403FCD97
 * 00000001403FCD94: swapgs
 * 00000001403FCD97: lfence
 * 00000001403FCD9A: mov     r10, gs:188h
 * 00000001403FCDA3: mov     rcx, gs:188h
 * 00000001403FCDAC: mov     rcx, [rcx+220h]
 * 00000001403FCDB3: mov     rcx, [rcx+9E0h]
 * 00000001403FCDBA: mov     gs:270h, rcx
 * 00000001403FCDC3: mov     cl, gs:850h
 * 00000001403FCDCB: mov     gs:851h, cl
 * 00000001403FCDD3: mov     cl, gs:278h
 * 00000001403FCDDB: mov     gs:852h, cl
 * 00000001403FCDE3: movzx   eax, byte ptr gs:27Bh
 * 00000001403FCDEC: cmp     gs:27Ah, al
 * 00000001403FCDF4: jz      short loc_1403FCE07
 * 00000001403FCDF6: mov     gs:27Ah, al
 * 00000001403FCDFE: mov     ecx, 48h ; 'H'
 * 00000001403FCE03: xor     edx, edx
 * 00000001403FCE05: wrmsr
 * 00000001403FCE07: movzx   edx, byte ptr gs:278h
 * 00000001403FCE10: test    edx, 8
 * 00000001403FCE16: jz      short loc_1403FCE2B
 * 00000001403FCE18: mov     eax, 1
 * 00000001403FCE1D: xor     edx, edx
 * 00000001403FCE1F: mov     ecx, 49h ; 'I'
 * 00000001403FCE24: wrmsr
 * 00000001403FCE26: jmp     loc_1403FCF69
 * 00000001403FCE2B: test    edx, 2
 * 00000001403FCE31: jz      loc_1403FCF66
 * 00000001403FCE37: test    byte ptr gs:279h, 4
 * 00000001403FCE40: jnz     loc_1403FCF66
 * 00000001403FCE46: call    loc_1403FCF59
 * 00000001403FCE4B: add     rsp, 8
 * 00000001403FCE4F: call    loc_1403FCF62
 * 00000001403FCE54: add     rsp, 8
 * 00000001403FCE58: call    loc_1403FCE4B
 * 00000001403FCE5D: add     rsp, 8
 * 00000001403FCE61: call    loc_1403FCE54
 * 00000001403FCE66: add     rsp, 8
 * 00000001403FCE6A: call    loc_1403FCE5D
 * 00000001403FCE6F: add     rsp, 8
 * 00000001403FCE73: call    loc_1403FCE66
 * 00000001403FCE78: add     rsp, 8
 * 00000001403FCE7C: call    loc_1403FCE6F
 * 00000001403FCE81: add     rsp, 8
 * 00000001403FCE85: call    loc_1403FCE78
 * 00000001403FCE8A: add     rsp, 8
 * 00000001403FCE8E: call    loc_1403FCE81
 * 00000001403FCE93: add     rsp, 8
 * 00000001403FCE97: call    loc_1403FCE8A
 * 00000001403FCE9C: add     rsp, 8
 * 00000001403FCEA0: call    loc_1403FCE93
 * 00000001403FCEA5: add     rsp, 8
 * 00000001403FCEA9: call    loc_1403FCE9C
 * 00000001403FCEAE: add     rsp, 8
 * 00000001403FCEB2: call    loc_1403FCEA5
 * 00000001403FCEB7: add     rsp, 8
 * 00000001403FCEBB: call    loc_1403FCEAE
 * 00000001403FCEC0: add     rsp, 8
 * 00000001403FCEC4: call    loc_1403FCEB7
 * 00000001403FCEC9: add     rsp, 8
 * 00000001403FCECD: call    loc_1403FCEC0
 * 00000001403FCED2: add     rsp, 8
 * 00000001403FCED6: call    loc_1403FCEC9
 * 00000001403FCEDB: add     rsp, 8
 * 00000001403FCEDF: call    loc_1403FCED2
 * 00000001403FCEE4: add     rsp, 8
 * 00000001403FCEE8: call    loc_1403FCEDB
 * 00000001403FCEED: add     rsp, 8
 * 00000001403FCEF1: call    loc_1403FCEE4
 * 00000001403FCEF6: add     rsp, 8
 * 00000001403FCEFA: call    loc_1403FCEED
 * 00000001403FCEFF: add     rsp, 8
 * 00000001403FCF03: call    loc_1403FCEF6
 * 00000001403FCF08: add     rsp, 8
 * 00000001403FCF0C: call    loc_1403FCEFF
 * 00000001403FCF11: add     rsp, 8
 * 00000001403FCF15: call    loc_1403FCF08
 * 00000001403FCF1A: add     rsp, 8
 * 00000001403FCF1E: call    loc_1403FCF11
 * 00000001403FCF23: add     rsp, 8
 * 00000001403FCF27: call    loc_1403FCF1A
 * 00000001403FCF2C: add     rsp, 8
 * 00000001403FCF30: call    loc_1403FCF23
 * 00000001403FCF35: add     rsp, 8
 * 00000001403FCF39: call    loc_1403FCF2C
 * 00000001403FCF3E: add     rsp, 8
 * 00000001403FCF42: call    loc_1403FCF35
 * 00000001403FCF47: add     rsp, 8
 * 00000001403FCF4B: call    loc_1403FCF3E
 * 00000001403FCF50: add     rsp, 8
 * 00000001403FCF54: call    loc_1403FCF47
 * 00000001403FCF59: add     rsp, 8
 * 00000001403FCF5D: call    loc_1403FCF50
 * 00000001403FCF62: add     rsp, 8
 * 00000001403FCF66: lfence
 * 00000001403FCF69: mov     byte ptr gs:853h, 0
 * 00000001403FCF72: test    byte ptr [r10+3], 3
 * 00000001403FCF77: mov     [rbp+0E8h+var_68], 0
 * 00000001403FCF80: jz      short loc_1403FCF87
 * 00000001403FCF82: call    KiSaveDebugRegisterState
 * 00000001403FCF87: cld
 * 00000001403FCF88: stmxcsr [rbp+0E8h+var_13C]
 * 00000001403FCF8C: ldmxcsr dword ptr gs:180h
 * 00000001403FCF95: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001403FCF99: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001403FCF9D: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001403FCFA1: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001403FCFA5: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001403FCFA9: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001403FCFAD: cmp     byte ptr gs:801Ah, 0
 * 00000001403FCFB6: jz      short loc_1403FCFBD
 * 00000001403FCFB8: call    KeWakeProcessor
 * 00000001403FCFBD: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001403FCFC4: cmp     rax, [rbp+0E8h]
 * 00000001403FCFCB: jnb     short loc_1403FCFE6
 * 00000001403FCFCD: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001403FCFD4: cmp     rax, [rbp+0E8h]
 * 00000001403FCFDB: jb      short loc_1403FCFE6
 * 00000001403FCFDD: lea     rcx, [rbp+0E8h+var_168]
 * 00000001403FCFE1: call    KiCheckForSListAddress
 * 00000001403FCFE6: xor     esi, esi
 * 00000001403FCFE8: inc     dword ptr gs:8000h
 * 00000001403FCFF0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FCFF7: jz      short loc_1403FCFFC
 * 00000001403FCFF9: clac
 * 00000001403FCFFC: mov     ecx, 2
 * 00000001403FD001: cmp     cs:KiIrqlFlags, 0
 * 00000001403FD008: jz      short loc_1403FD011
 * 00000001403FD00A: call    KzSetIrqlUnsafe
 * 00000001403FD00F: jmp     short loc_1403FD019
 * 00000001403FD011: mov     rax, cr8
 * 00000001403FD015: mov     cr8, rcx
 * 00000001403FD019: mov     [rbp+0E8h+var_13F], al
 * 00000001403FD01C: mov     rcx, gs:20h
 * 00000001403FD025: inc     byte ptr [rcx+20h]
 * 00000001403FD028: cmp     byte ptr [rcx+20h], 1
 * 00000001403FD02C: jnz     short loc_1403FD07E
 * 00000001403FD02E: rdtsc
 * 00000001403FD030: shl     rdx, 20h
 * 00000001403FD034: or      rax, rdx
 * 00000001403FD037: mov     r8, [rcx+8]
 * 00000001403FD03B: sub     rax, [rcx+7EC0h]
 * 00000001403FD042: add     [r8+48h], rax
 * 00000001403FD046: mov     edx, [r8+50h]
 * 00000001403FD04A: add     [rcx+7EC0h], rax
 * 00000001403FD051: add     rdx, rax
 * 00000001403FD054: mov     ecx, edx
 * 00000001403FD056: shr     rdx, 20h
 * 00000001403FD05A: jz      short loc_1403FD05F
 * 00000001403FD05C: or      ecx, 0FFFFFFFFh
 * 00000001403FD05F: mov     [r8+50h], ecx
 * 00000001403FD063: test    byte ptr [r8+2], 3Eh
 * 00000001403FD068: jz      short loc_1403FD07E
 * 00000001403FD06A: mov     rdx, r8
 * 00000001403FD06D: mov     r8, rax
 * 00000001403FD070: mov     rcx, gs:20h
 * 00000001403FD079: call    KiEndThreadAccountingPeriod
 * 00000001403FD07E: sti
 * 00000001403FD07F: lea     rcx, [rbp+0E8h+var_168]
 * 00000001403FD083: call    KiSwInterruptDispatch
 * 00000001403FD088: cli
 * 00000001403FD089: mov     rcx, rsi
 * 00000001403FD08C: call    HalPerformEndOfInterrupt
 * 00000001403FD091: mov     rcx, gs:20h
 * 00000001403FD09A: cmp     byte ptr [rcx+20h], 1
 * 00000001403FD09E: ja      short loc_1403FD11A
 * 00000001403FD0A0: rdtsc
 * 00000001403FD0A2: shl     rdx, 20h
 * 00000001403FD0A6: or      rax, rdx
 * 00000001403FD0A9: sub     rax, [rcx+7EC0h]
 * 00000001403FD0B0: add     [rcx+7F38h], rax
 * 00000001403FD0B7: add     [rcx+7EC0h], rax
 * 00000001403FD0BE: mov     r8, rax
 * 00000001403FD0C1: mov     rax, [rcx+8]
 * 00000001403FD0C5: test    byte ptr [rax+2], 72h
 * 00000001403FD0C9: jz      short loc_1403FD0DE
 * 00000001403FD0CB: xor     edx, edx
 * 00000001403FD0CD: call    KiBeginThreadAccountingPeriod
 * 00000001403FD0D2: mov     rcx, gs:20h
 * 00000001403FD0DB: inc     byte ptr [rcx+20h]
 * 00000001403FD0DE: mov     dl, [rcx+6]
 * 00000001403FD0E1: and     byte ptr [rcx+6], 0
 * 00000001403FD0E5: cmp     byte ptr [rcx+7], 0
 * 00000001403FD0E9: jnz     short loc_1403FD11A
 * 00000001403FD0EB: test    dl, dl
 * 00000001403FD0ED: jz      short loc_1403FD11A
 * 00000001403FD0EF: cmp     [rbp+0E8h+var_13F], 2
 * 00000001403FD0F3: jnb     short loc_1403FD100
 * 00000001403FD0F5: and     byte ptr [rcx+20h], 0
 * 00000001403FD0F9: call    KiDpcInterruptBypass
 * 00000001403FD0FE: jmp     short loc_1403FD11D
 * 00000001403FD100: mov     ecx, 2
 * 00000001403FD105: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FD10C: nop     dword ptr [rax+rax+00h]
 * 00000001403FD111: mov     rcx, gs:20h
 * 00000001403FD11A: dec     byte ptr [rcx+20h]
 * 00000001403FD11D: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001403FD121: cmp     cs:KiIrqlFlags, 0
 * 00000001403FD128: jz      short loc_1403FD131
 * 00000001403FD12A: call    KzSetIrqlUnsafe
 * 00000001403FD12F: jmp     short loc_1403FD135
 * 00000001403FD131: mov     cr8, rcx
 * 00000001403FD135: mov     rsi, [rbp+0E8h+var_18]
 * 00000001403FD13C: cli
 * 00000001403FD13D: test    [rbp+0E8h+arg_0], 1
 * 00000001403FD144: jz      loc_1403FD283
 * 00000001403FD14A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FD151: jz      short loc_1403FD156
 * 00000001403FD153: stac
 * 00000001403FD156: mov     rcx, gs:188h
 * 00000001403FD15F: test    byte ptr [rcx+0C2h], 3
 * 00000001403FD166: jz      short loc_1403FD183
 * 00000001403FD168: mov     ecx, 1
 * 00000001403FD16D: mov     cr8, rcx
 * 00000001403FD171: sti
 * 00000001403FD172: call    KiInitiateUserApc
 * 00000001403FD177: cli
 * 00000001403FD178: mov     ecx, 0
 * 00000001403FD17D: mov     cr8, rcx
 * 00000001403FD181: jmp     short loc_1403FD156
 * 00000001403FD183: test    byte ptr gs:27Eh, 2
 * 00000001403FD18C: jz      short loc_1403FD195
 * 00000001403FD18E: xor     ecx, ecx
 * 00000001403FD190: call    KiUpdateStibpPairing
 * 00000001403FD195: mov     rcx, gs:188h
 * 00000001403FD19E: test    dword ptr [rcx], 8000000h
 * 00000001403FD1A4: jz      short loc_1403FD1AB
 * 00000001403FD1A6: call    KiRestoreSetContextState
 * 00000001403FD1AB: mov     rcx, gs:188h
 * 00000001403FD1B4: test    dword ptr [rcx], 40010000h
 * 00000001403FD1BA: jz      short loc_1403FD1D0
 * 00000001403FD1BC: test    byte ptr [rcx+2], 1
 * 00000001403FD1C0: jz      short loc_1403FD1D0
 * 00000001403FD1C2: call    KiCopyCounters
 * 00000001403FD1C7: mov     rcx, gs:188h
 * 00000001403FD1D0: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001403FD1D4: cmp     [rbp+0E8h+var_68], 0
 * 00000001403FD1DC: jz      short loc_1403FD1E3
 * 00000001403FD1DE: call    KiRestoreDebugRegisterState
 * 00000001403FD1E3: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001403FD1E7: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001403FD1EB: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001403FD1EF: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001403FD1F3: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001403FD1F7: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001403FD1FB: mov     r11, [rbp+0E8h+var_108]
 * 00000001403FD1FF: mov     r10, [rbp+0E8h+var_110]
 * 00000001403FD203: mov     r9, [rbp+0E8h+var_118]
 * 00000001403FD207: mov     r8, [rbp+0E8h+var_120]
 * 00000001403FD20B: mov     byte ptr gs:853h, 0
 * 00000001403FD214: movzx   eax, byte ptr gs:27Dh
 * 00000001403FD21D: cmp     gs:27Ah, al
 * 00000001403FD225: jz      short loc_1403FD238
 * 00000001403FD227: mov     gs:27Ah, al
 * 00000001403FD22F: mov     ecx, 48h ; 'H'
 * 00000001403FD234: xor     edx, edx
 * 00000001403FD236: wrmsr
 * 00000001403FD238: btr     word ptr gs:278h, 2
 * 00000001403FD243: jnb     short loc_1403FD253
 * 00000001403FD245: mov     eax, 1
 * 00000001403FD24A: xor     edx, edx
 * 00000001403FD24C: mov     ecx, 49h ; 'I'
 * 00000001403FD251: wrmsr
 * 00000001403FD253: mov     rdx, [rbp+0E8h+var_128]
 * 00000001403FD257: mov     rcx, [rbp+0E8h+var_130]
 * 00000001403FD25B: mov     rax, [rbp+0E8h+var_138]
 * 00000001403FD25F: mov     rsp, rbp
 * 00000001403FD262: mov     rbp, [rbp+0E8h+var_10]
 * 00000001403FD269: add     rsp, 0E8h
 * 00000001403FD270: test    cs:KiKvaShadow, 1
 * 00000001403FD277: jz      short loc_1403FD27E
 * 00000001403FD279: jmp     KiKernelExit
 * 00000001403FD27E: swapgs
 * 00000001403FD281: iretq
 * 00000001403FD283: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001403FD287: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001403FD28B: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001403FD28F: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001403FD293: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001403FD297: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001403FD29B: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001403FD29F: mov     r11, [rbp+0E8h+var_108]
 * 00000001403FD2A3: mov     r10, [rbp+0E8h+var_110]
 * 00000001403FD2A7: mov     r9, [rbp+0E8h+var_118]
 * 00000001403FD2AB: mov     r8, [rbp+0E8h+var_120]
 * 00000001403FD2AF: mov     rdx, [rbp+0E8h+var_128]
 * 00000001403FD2B3: mov     rcx, [rbp+0E8h+var_130]
 * 00000001403FD2B7: mov     rax, [rbp+0E8h+var_138]
 * 00000001403FD2BB: mov     rsp, rbp
 * 00000001403FD2BE: mov     rbp, [rbp+0E8h+var_10]
 * 00000001403FD2C5: add     rsp, 0E8h
 * 00000001403FD2CC: iretq
 */
