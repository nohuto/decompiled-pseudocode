/*
 * XREFs of KiVirtualizationException @ 0x14040FD00
 * Callers:
 *     KiVirtualizationExceptionShadow @ 0x140A15B40 (KiVirtualizationExceptionShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KzRaiseIrql @ 0x1402C43A0 (KzRaiseIrql.c)
 *     KzLowerIrql @ 0x140346AA0 (KzLowerIrql.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiVirtualizationException @ 0x14040FD00 (KiVirtualizationException.c)
 *     KiBugCheckDispatch @ 0x140412840 (KiBugCheckDispatch.c)
 *     KiUmsExit @ 0x140413B00 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 *     KiEpfHandleNotification @ 0x140524470 (KiEpfHandleNotification.c)
 */

/*
 * Hex-Rays decompilation failed for KiVirtualizationException @ 0x14040FD00
 * Reason: Hex-Rays returned no pseudocode for 0x14040FD00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040FD00: sub     rsp, 8
 * 000000014040FD04: push    rbp
 * 000000014040FD05: sub     rsp, 158h
 * 000000014040FD0C: lea     rbp, [rsp+80h]
 * 000000014040FD14: mov     [rbp+0E8h+var_13D], 1
 * 000000014040FD18: mov     [rbp+0E8h+var_138], rax
 * 000000014040FD1C: mov     [rbp+0E8h+var_130], rcx
 * 000000014040FD20: mov     [rbp+0E8h+var_128], rdx
 * 000000014040FD24: mov     [rbp+0E8h+var_120], r8
 * 000000014040FD28: mov     [rbp+0E8h+var_118], r9
 * 000000014040FD2C: mov     [rbp+0E8h+var_110], r10
 * 000000014040FD30: mov     [rbp+0E8h+var_108], r11
 * 000000014040FD34: test    [rbp+0E8h+arg_0], 1
 * 000000014040FD3B: jnz     short loc_14040FD6C
 * 000000014040FD3D: lfence
 * 000000014040FD40: test    word ptr gs:860h, 1
 * 000000014040FD4B: jnz     short loc_14040FD55
 * 000000014040FD4D: lfence
 * 000000014040FD50: jmp     loc_14040FF75
 * 000000014040FD55: movzx   eax, word ptr gs:864h
 * 000000014040FD5E: mov     ecx, 48h ; 'H'
 * 000000014040FD63: xor     edx, edx
 * 000000014040FD65: wrmsr
 * 000000014040FD67: jmp     loc_14040FF75
 * 000000014040FD6C: test    cs:KiKvaShadow, 1
 * 000000014040FD73: jnz     short loc_14040FD78
 * 000000014040FD75: swapgs
 * 000000014040FD78: lfence
 * 000000014040FD7B: mov     r10, gs:188h
 * 000000014040FD84: mov     rcx, gs:188h
 * 000000014040FD8D: mov     rcx, [rcx+220h]
 * 000000014040FD94: mov     rcx, [rcx+9E0h]
 * 000000014040FD9B: mov     gs:858h, rcx
 * 000000014040FDA4: mov     cx, gs:850h
 * 000000014040FDAD: mov     gs:852h, cx
 * 000000014040FDB6: mov     cx, gs:860h
 * 000000014040FDBF: mov     gs:854h, cx
 * 000000014040FDC8: movzx   eax, word ptr gs:866h
 * 000000014040FDD1: cmp     gs:864h, ax
 * 000000014040FDDA: jz      short loc_14040FDEE
 * 000000014040FDDC: mov     gs:864h, ax
 * 000000014040FDE5: mov     ecx, 48h ; 'H'
 * 000000014040FDEA: xor     edx, edx
 * 000000014040FDEC: wrmsr
 * 000000014040FDEE: movzx   edx, word ptr gs:860h
 * 000000014040FDF7: test    edx, 8
 * 000000014040FDFD: jz      short loc_14040FE16
 * 000000014040FDFF: mov     eax, 1
 * 000000014040FE04: xor     edx, edx
 * 000000014040FE06: mov     ecx, 49h ; 'I'
 * 000000014040FE0B: wrmsr
 * 000000014040FE0D: movzx   edx, word ptr gs:860h
 * 000000014040FE16: test    edx, 2
 * 000000014040FE1C: jz      loc_14040FF47
 * 000000014040FE22: call    loc_14040FF35
 * 000000014040FE27: add     rsp, 8
 * 000000014040FE2B: call    loc_14040FF3E
 * 000000014040FE30: add     rsp, 8
 * 000000014040FE34: call    loc_14040FE27
 * 000000014040FE39: add     rsp, 8
 * 000000014040FE3D: call    loc_14040FE30
 * 000000014040FE42: add     rsp, 8
 * 000000014040FE46: call    loc_14040FE39
 * 000000014040FE4B: add     rsp, 8
 * 000000014040FE4F: call    loc_14040FE42
 * 000000014040FE54: add     rsp, 8
 * 000000014040FE58: call    loc_14040FE4B
 * 000000014040FE5D: add     rsp, 8
 * 000000014040FE61: call    loc_14040FE54
 * 000000014040FE66: add     rsp, 8
 * 000000014040FE6A: call    loc_14040FE5D
 * 000000014040FE6F: add     rsp, 8
 * 000000014040FE73: call    loc_14040FE66
 * 000000014040FE78: add     rsp, 8
 * 000000014040FE7C: call    loc_14040FE6F
 * 000000014040FE81: add     rsp, 8
 * 000000014040FE85: call    loc_14040FE78
 * 000000014040FE8A: add     rsp, 8
 * 000000014040FE8E: call    loc_14040FE81
 * 000000014040FE93: add     rsp, 8
 * 000000014040FE97: call    loc_14040FE8A
 * 000000014040FE9C: add     rsp, 8
 * 000000014040FEA0: call    loc_14040FE93
 * 000000014040FEA5: add     rsp, 8
 * 000000014040FEA9: call    loc_14040FE9C
 * 000000014040FEAE: add     rsp, 8
 * 000000014040FEB2: call    loc_14040FEA5
 * 000000014040FEB7: add     rsp, 8
 * 000000014040FEBB: call    loc_14040FEAE
 * 000000014040FEC0: add     rsp, 8
 * 000000014040FEC4: call    loc_14040FEB7
 * 000000014040FEC9: add     rsp, 8
 * 000000014040FECD: call    loc_14040FEC0
 * 000000014040FED2: add     rsp, 8
 * 000000014040FED6: call    loc_14040FEC9
 * 000000014040FEDB: add     rsp, 8
 * 000000014040FEDF: call    loc_14040FED2
 * 000000014040FEE4: add     rsp, 8
 * 000000014040FEE8: call    loc_14040FEDB
 * 000000014040FEED: add     rsp, 8
 * 000000014040FEF1: call    loc_14040FEE4
 * 000000014040FEF6: add     rsp, 8
 * 000000014040FEFA: call    loc_14040FEED
 * 000000014040FEFF: add     rsp, 8
 * 000000014040FF03: call    loc_14040FEF6
 * 000000014040FF08: add     rsp, 8
 * 000000014040FF0C: call    loc_14040FEFF
 * 000000014040FF11: add     rsp, 8
 * 000000014040FF15: call    loc_14040FF08
 * 000000014040FF1A: add     rsp, 8
 * 000000014040FF1E: call    loc_14040FF11
 * 000000014040FF23: add     rsp, 8
 * 000000014040FF27: call    loc_14040FF1A
 * 000000014040FF2C: add     rsp, 8
 * 000000014040FF30: call    loc_14040FF23
 * 000000014040FF35: add     rsp, 8
 * 000000014040FF39: call    loc_14040FF2C
 * 000000014040FF3E: add     rsp, 8
 * 000000014040FF42: mov     eax, 0DADAh
 * 000000014040FF47: test    edx, 200h
 * 000000014040FF4D: jz      short loc_14040FF54
 * 000000014040FF4F: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040FF54: lfence
 * 000000014040FF57: mov     byte ptr gs:856h, 0
 * 000000014040FF60: test    byte ptr [r10+3], 3
 * 000000014040FF65: mov     [rbp+0E8h+var_68], 0
 * 000000014040FF6E: jz      short loc_14040FF75
 * 000000014040FF70: call    KiSaveDebugRegisterState
 * 000000014040FF75: cld
 * 000000014040FF76: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040FF7A: ldmxcsr dword ptr gs:180h
 * 000000014040FF83: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014040FF87: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040FF8B: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040FF8F: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040FF93: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040FF97: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040FF9B: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040FFA2: jz      short loc_14040FFB0
 * 000000014040FFA4: test    [rbp+0E8h+arg_0], 1
 * 000000014040FFAB: jz      short loc_14040FFB0
 * 000000014040FFAD: stac
 * 000000014040FFB0: mov     r9, gs:8508h
 * 000000014040FFB9: test    r9, r9
 * 000000014040FFBC: jz      loc_14041031F
 * 000000014040FFC2: cmp     dword ptr [r9+44h], 1
 * 000000014040FFC7: jnz     loc_14041031F
 * 000000014040FFCD: test    [rbp+0E8h+arg_8], 200h
 * 000000014040FFD7: jz      loc_14041031F
 * 000000014040FFDD: mov     rax, cr8
 * 000000014040FFE1: mov     dword ptr [rbp+0E8h+NewIrql], eax
 * 000000014040FFE4: cmp     al, 2
 * 000000014040FFE6: jge     loc_14041031F
 * 000000014040FFEC: mov     ecx, 2; NewIrql
 * 000000014040FFF1: call    KzRaiseIrql
 * 000000014040FFF6: sti
 * 000000014040FFF7: mov     r9, gs:8508h
 * 0000000140410000: mov     rcx, [r9+48h]
 * 0000000140410004: mov     dword ptr [r9+44h], 0
 * 000000014041000C: call    KiEpfHandleNotification
 * 0000000140410011: cli
 * 0000000140410012: mov     ecx, dword ptr [rbp+0E8h+NewIrql]; NewIrql
 * 0000000140410015: call    KzLowerIrql
 * 000000014041001A: test    [rbp+0E8h+arg_0], 1
 * 0000000140410021: jz      loc_1404102D4
 * 0000000140410027: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014041002E: jz      short loc_140410033
 * 0000000140410030: stac
 * 0000000140410033: mov     rcx, gs:188h
 * 000000014041003C: test    byte ptr [rcx+0C2h], 3
 * 0000000140410043: jz      short loc_140410060
 * 0000000140410045: mov     ecx, 1
 * 000000014041004A: mov     cr8, rcx
 * 000000014041004E: sti
 * 000000014041004F: call    KiInitiateUserApc
 * 0000000140410054: cli
 * 0000000140410055: mov     ecx, 0
 * 000000014041005A: mov     cr8, rcx
 * 000000014041005E: jmp     short loc_140410033
 * 0000000140410060: test    byte ptr gs:86Ch, 2
 * 0000000140410069: jz      short loc_140410072
 * 000000014041006B: xor     ecx, ecx
 * 000000014041006D: call    KiUpdateStibpPairing
 * 0000000140410072: mov     rcx, gs:188h
 * 000000014041007B: test    dword ptr [rcx], 8000000h
 * 0000000140410081: jz      short loc_140410088
 * 0000000140410083: call    KiRestoreSetContextState
 * 0000000140410088: mov     rcx, gs:188h
 * 0000000140410091: test    dword ptr [rcx], 40010000h
 * 0000000140410097: jz      short loc_1404100BE
 * 0000000140410099: test    byte ptr [rcx+2], 1
 * 000000014041009D: jz      short loc_1404100AD
 * 000000014041009F: call    KiCopyCounters
 * 00000001404100A4: mov     rcx, gs:188h
 * 00000001404100AD: test    byte ptr [rcx+3], 40h
 * 00000001404100B1: jz      short loc_1404100BE
 * 00000001404100B3: lea     rsp, [rbp-80h]
 * 00000001404100B7: mov     cl, 1
 * 00000001404100B9: call    KiUmsExit
 * 00000001404100BE: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404100C2: cmp     [rbp+0E8h+var_68], 0
 * 00000001404100CA: jz      short loc_1404100D1
 * 00000001404100CC: call    KiRestoreDebugRegisterState
 * 00000001404100D1: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404100D5: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404100D9: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404100DD: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404100E1: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404100E5: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404100E9: mov     r11, [rbp+0E8h+var_108]
 * 00000001404100ED: mov     r10, [rbp+0E8h+var_110]
 * 00000001404100F1: mov     r9, [rbp+0E8h+var_118]
 * 00000001404100F5: mov     r8, [rbp+0E8h+var_120]
 * 00000001404100F9: mov     byte ptr gs:856h, 0
 * 0000000140410102: movzx   eax, word ptr gs:86Ah
 * 000000014041010B: cmp     gs:864h, ax
 * 0000000140410114: jz      short loc_140410128
 * 0000000140410116: mov     gs:864h, ax
 * 000000014041011F: mov     ecx, 48h ; 'H'
 * 0000000140410124: xor     edx, edx
 * 0000000140410126: wrmsr
 * 0000000140410128: btr     word ptr gs:860h, 2
 * 0000000140410133: jnb     short loc_140410143
 * 0000000140410135: mov     eax, 1
 * 000000014041013A: xor     edx, edx
 * 000000014041013C: mov     ecx, 49h ; 'I'
 * 0000000140410141: wrmsr
 * 0000000140410143: btr     word ptr gs:860h, 5
 * 000000014041014E: jnb     loc_140410279
 * 0000000140410154: call    loc_140410267
 * 0000000140410159: add     rsp, 8
 * 000000014041015D: call    loc_140410270
 * 0000000140410162: add     rsp, 8
 * 0000000140410166: call    loc_140410159
 * 000000014041016B: add     rsp, 8
 * 000000014041016F: call    loc_140410162
 * 0000000140410174: add     rsp, 8
 * 0000000140410178: call    loc_14041016B
 * 000000014041017D: add     rsp, 8
 * 0000000140410181: call    loc_140410174
 * 0000000140410186: add     rsp, 8
 * 000000014041018A: call    loc_14041017D
 * 000000014041018F: add     rsp, 8
 * 0000000140410193: call    loc_140410186
 * 0000000140410198: add     rsp, 8
 * 000000014041019C: call    loc_14041018F
 * 00000001404101A1: add     rsp, 8
 * 00000001404101A5: call    loc_140410198
 * 00000001404101AA: add     rsp, 8
 * 00000001404101AE: call    loc_1404101A1
 * 00000001404101B3: add     rsp, 8
 * 00000001404101B7: call    loc_1404101AA
 * 00000001404101BC: add     rsp, 8
 * 00000001404101C0: call    loc_1404101B3
 * 00000001404101C5: add     rsp, 8
 * 00000001404101C9: call    loc_1404101BC
 * 00000001404101CE: add     rsp, 8
 * 00000001404101D2: call    loc_1404101C5
 * 00000001404101D7: add     rsp, 8
 * 00000001404101DB: call    loc_1404101CE
 * 00000001404101E0: add     rsp, 8
 * 00000001404101E4: call    loc_1404101D7
 * 00000001404101E9: add     rsp, 8
 * 00000001404101ED: call    loc_1404101E0
 * 00000001404101F2: add     rsp, 8
 * 00000001404101F6: call    loc_1404101E9
 * 00000001404101FB: add     rsp, 8
 * 00000001404101FF: call    loc_1404101F2
 * 0000000140410204: add     rsp, 8
 * 0000000140410208: call    loc_1404101FB
 * 000000014041020D: add     rsp, 8
 * 0000000140410211: call    loc_140410204
 * 0000000140410216: add     rsp, 8
 * 000000014041021A: call    loc_14041020D
 * 000000014041021F: add     rsp, 8
 * 0000000140410223: call    loc_140410216
 * 0000000140410228: add     rsp, 8
 * 000000014041022C: call    loc_14041021F
 * 0000000140410231: add     rsp, 8
 * 0000000140410235: call    loc_140410228
 * 000000014041023A: add     rsp, 8
 * 000000014041023E: call    loc_140410231
 * 0000000140410243: add     rsp, 8
 * 0000000140410247: call    loc_14041023A
 * 000000014041024C: add     rsp, 8
 * 0000000140410250: call    loc_140410243
 * 0000000140410255: add     rsp, 8
 * 0000000140410259: call    loc_14041024C
 * 000000014041025E: add     rsp, 8
 * 0000000140410262: call    loc_140410255
 * 0000000140410267: add     rsp, 8
 * 000000014041026B: call    loc_14041025E
 * 0000000140410270: add     rsp, 8
 * 0000000140410274: mov     eax, 0DADAh
 * 0000000140410279: test    word ptr gs:860h, 80h
 * 0000000140410284: jz      short loc_140410292
 * 0000000140410286: xor     eax, eax
 * 0000000140410288: xor     edx, edx
 * 000000014041028A: mov     ecx, 1
 * 000000014041028F: div     rcx
 * 0000000140410292: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140410296: mov     rcx, [rbp+0E8h+var_130]
 * 000000014041029A: mov     rax, [rbp+0E8h+var_138]
 * 000000014041029E: mov     rsp, rbp
 * 00000001404102A1: mov     rbp, [rbp+0E8h+var_10]
 * 00000001404102A8: add     rsp, 0E8h
 * 00000001404102AF: test    cs:KiKvaShadow, 1
 * 00000001404102B6: jz      short loc_1404102BD
 * 00000001404102B8: jmp     KiKernelExit
 * 00000001404102BD: test    word ptr gs:860h, 100h
 * 00000001404102C8: jz      short loc_1404102CF
 * 00000001404102CA: verw    [rsp+arg_18]
 * 00000001404102CF: swapgs
 * 00000001404102D2: iretq
 * 00000001404102D4: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404102D8: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404102DC: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404102E0: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404102E4: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404102E8: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404102EC: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404102F0: mov     r11, [rbp+0E8h+var_108]
 * 00000001404102F4: mov     r10, [rbp+0E8h+var_110]
 * 00000001404102F8: mov     r9, [rbp+0E8h+var_118]
 * 00000001404102FC: mov     r8, [rbp+0E8h+var_120]
 * 0000000140410300: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140410304: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140410308: mov     rax, [rbp+0E8h+var_138]
 * 000000014041030C: mov     rsp, rbp
 * 000000014041030F: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140410316: add     rsp, 0E8h
 * 000000014041031D: iretq
 * 000000014041031F: mov     r10, [rbp+0E8h]
 * 0000000140410326: mov     r9, gs:8508h
 * 000000014041032F: movzx   r8, [rbp+0E8h+NewIrql]
 * 0000000140410334: mov     ecx, 7Fh
 * 0000000140410339: mov     edx, 20h ; ' '
 * 000000014041033E: call    KiBugCheckDispatch
 */
