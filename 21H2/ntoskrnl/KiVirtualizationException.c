/*
 * XREFs of KiVirtualizationException @ 0x14040FC00
 * Callers:
 *     KiVirtualizationExceptionShadow @ 0x140A14B40 (KiVirtualizationExceptionShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KzRaiseIrql @ 0x14021FAA0 (KzRaiseIrql.c)
 *     KzLowerIrql @ 0x14033BD50 (KzLowerIrql.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403520 (KiInitiateUserApc.c)
 *     KiVirtualizationException @ 0x14040FC00 (KiVirtualizationException.c)
 *     KiBugCheckDispatch @ 0x140412740 (KiBugCheckDispatch.c)
 *     KiUmsExit @ 0x140413A00 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 *     KiEpfHandleNotification @ 0x140524230 (KiEpfHandleNotification.c)
 */

/*
 * Hex-Rays decompilation failed for KiVirtualizationException @ 0x14040FC00
 * Reason: Hex-Rays returned no pseudocode for 0x14040FC00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040FC00: sub     rsp, 8
 * 000000014040FC04: push    rbp
 * 000000014040FC05: sub     rsp, 158h
 * 000000014040FC0C: lea     rbp, [rsp+80h]
 * 000000014040FC14: mov     [rbp+0E8h+var_13D], 1
 * 000000014040FC18: mov     [rbp+0E8h+var_138], rax
 * 000000014040FC1C: mov     [rbp+0E8h+var_130], rcx
 * 000000014040FC20: mov     [rbp+0E8h+var_128], rdx
 * 000000014040FC24: mov     [rbp+0E8h+var_120], r8
 * 000000014040FC28: mov     [rbp+0E8h+var_118], r9
 * 000000014040FC2C: mov     [rbp+0E8h+var_110], r10
 * 000000014040FC30: mov     [rbp+0E8h+var_108], r11
 * 000000014040FC34: test    [rbp+0E8h+arg_0], 1
 * 000000014040FC3B: jnz     short loc_14040FC6C
 * 000000014040FC3D: lfence
 * 000000014040FC40: test    word ptr gs:860h, 1
 * 000000014040FC4B: jnz     short loc_14040FC55
 * 000000014040FC4D: lfence
 * 000000014040FC50: jmp     loc_14040FE75
 * 000000014040FC55: movzx   eax, word ptr gs:864h
 * 000000014040FC5E: mov     ecx, 48h ; 'H'
 * 000000014040FC63: xor     edx, edx
 * 000000014040FC65: wrmsr
 * 000000014040FC67: jmp     loc_14040FE75
 * 000000014040FC6C: test    cs:KiKvaShadow, 1
 * 000000014040FC73: jnz     short loc_14040FC78
 * 000000014040FC75: swapgs
 * 000000014040FC78: lfence
 * 000000014040FC7B: mov     r10, gs:188h
 * 000000014040FC84: mov     rcx, gs:188h
 * 000000014040FC8D: mov     rcx, [rcx+220h]
 * 000000014040FC94: mov     rcx, [rcx+9E0h]
 * 000000014040FC9B: mov     gs:858h, rcx
 * 000000014040FCA4: mov     cx, gs:850h
 * 000000014040FCAD: mov     gs:852h, cx
 * 000000014040FCB6: mov     cx, gs:860h
 * 000000014040FCBF: mov     gs:854h, cx
 * 000000014040FCC8: movzx   eax, word ptr gs:866h
 * 000000014040FCD1: cmp     gs:864h, ax
 * 000000014040FCDA: jz      short loc_14040FCEE
 * 000000014040FCDC: mov     gs:864h, ax
 * 000000014040FCE5: mov     ecx, 48h ; 'H'
 * 000000014040FCEA: xor     edx, edx
 * 000000014040FCEC: wrmsr
 * 000000014040FCEE: movzx   edx, word ptr gs:860h
 * 000000014040FCF7: test    edx, 8
 * 000000014040FCFD: jz      short loc_14040FD16
 * 000000014040FCFF: mov     eax, 1
 * 000000014040FD04: xor     edx, edx
 * 000000014040FD06: mov     ecx, 49h ; 'I'
 * 000000014040FD0B: wrmsr
 * 000000014040FD0D: movzx   edx, word ptr gs:860h
 * 000000014040FD16: test    edx, 2
 * 000000014040FD1C: jz      loc_14040FE47
 * 000000014040FD22: call    loc_14040FE35
 * 000000014040FD27: add     rsp, 8
 * 000000014040FD2B: call    loc_14040FE3E
 * 000000014040FD30: add     rsp, 8
 * 000000014040FD34: call    loc_14040FD27
 * 000000014040FD39: add     rsp, 8
 * 000000014040FD3D: call    loc_14040FD30
 * 000000014040FD42: add     rsp, 8
 * 000000014040FD46: call    loc_14040FD39
 * 000000014040FD4B: add     rsp, 8
 * 000000014040FD4F: call    loc_14040FD42
 * 000000014040FD54: add     rsp, 8
 * 000000014040FD58: call    loc_14040FD4B
 * 000000014040FD5D: add     rsp, 8
 * 000000014040FD61: call    loc_14040FD54
 * 000000014040FD66: add     rsp, 8
 * 000000014040FD6A: call    loc_14040FD5D
 * 000000014040FD6F: add     rsp, 8
 * 000000014040FD73: call    loc_14040FD66
 * 000000014040FD78: add     rsp, 8
 * 000000014040FD7C: call    loc_14040FD6F
 * 000000014040FD81: add     rsp, 8
 * 000000014040FD85: call    loc_14040FD78
 * 000000014040FD8A: add     rsp, 8
 * 000000014040FD8E: call    loc_14040FD81
 * 000000014040FD93: add     rsp, 8
 * 000000014040FD97: call    loc_14040FD8A
 * 000000014040FD9C: add     rsp, 8
 * 000000014040FDA0: call    loc_14040FD93
 * 000000014040FDA5: add     rsp, 8
 * 000000014040FDA9: call    loc_14040FD9C
 * 000000014040FDAE: add     rsp, 8
 * 000000014040FDB2: call    loc_14040FDA5
 * 000000014040FDB7: add     rsp, 8
 * 000000014040FDBB: call    loc_14040FDAE
 * 000000014040FDC0: add     rsp, 8
 * 000000014040FDC4: call    loc_14040FDB7
 * 000000014040FDC9: add     rsp, 8
 * 000000014040FDCD: call    loc_14040FDC0
 * 000000014040FDD2: add     rsp, 8
 * 000000014040FDD6: call    loc_14040FDC9
 * 000000014040FDDB: add     rsp, 8
 * 000000014040FDDF: call    loc_14040FDD2
 * 000000014040FDE4: add     rsp, 8
 * 000000014040FDE8: call    loc_14040FDDB
 * 000000014040FDED: add     rsp, 8
 * 000000014040FDF1: call    loc_14040FDE4
 * 000000014040FDF6: add     rsp, 8
 * 000000014040FDFA: call    loc_14040FDED
 * 000000014040FDFF: add     rsp, 8
 * 000000014040FE03: call    loc_14040FDF6
 * 000000014040FE08: add     rsp, 8
 * 000000014040FE0C: call    loc_14040FDFF
 * 000000014040FE11: add     rsp, 8
 * 000000014040FE15: call    loc_14040FE08
 * 000000014040FE1A: add     rsp, 8
 * 000000014040FE1E: call    loc_14040FE11
 * 000000014040FE23: add     rsp, 8
 * 000000014040FE27: call    loc_14040FE1A
 * 000000014040FE2C: add     rsp, 8
 * 000000014040FE30: call    loc_14040FE23
 * 000000014040FE35: add     rsp, 8
 * 000000014040FE39: call    loc_14040FE2C
 * 000000014040FE3E: add     rsp, 8
 * 000000014040FE42: mov     eax, 0DADAh
 * 000000014040FE47: test    edx, 200h
 * 000000014040FE4D: jz      short loc_14040FE54
 * 000000014040FE4F: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040FE54: lfence
 * 000000014040FE57: mov     byte ptr gs:856h, 0
 * 000000014040FE60: test    byte ptr [r10+3], 3
 * 000000014040FE65: mov     [rbp+0E8h+var_68], 0
 * 000000014040FE6E: jz      short loc_14040FE75
 * 000000014040FE70: call    KiSaveDebugRegisterState
 * 000000014040FE75: cld
 * 000000014040FE76: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040FE7A: ldmxcsr dword ptr gs:180h
 * 000000014040FE83: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014040FE87: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040FE8B: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040FE8F: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040FE93: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040FE97: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040FE9B: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040FEA2: jz      short loc_14040FEB0
 * 000000014040FEA4: test    [rbp+0E8h+arg_0], 1
 * 000000014040FEAB: jz      short loc_14040FEB0
 * 000000014040FEAD: stac
 * 000000014040FEB0: mov     r9, gs:8508h
 * 000000014040FEB9: test    r9, r9
 * 000000014040FEBC: jz      loc_14041021F
 * 000000014040FEC2: cmp     dword ptr [r9+44h], 1
 * 000000014040FEC7: jnz     loc_14041021F
 * 000000014040FECD: test    [rbp+0E8h+arg_8], 200h
 * 000000014040FED7: jz      loc_14041021F
 * 000000014040FEDD: mov     rax, cr8
 * 000000014040FEE1: mov     dword ptr [rbp+0E8h+NewIrql], eax
 * 000000014040FEE4: cmp     al, 2
 * 000000014040FEE6: jge     loc_14041021F
 * 000000014040FEEC: mov     ecx, 2; NewIrql
 * 000000014040FEF1: call    KzRaiseIrql
 * 000000014040FEF6: sti
 * 000000014040FEF7: mov     r9, gs:8508h
 * 000000014040FF00: mov     rcx, [r9+48h]
 * 000000014040FF04: mov     dword ptr [r9+44h], 0
 * 000000014040FF0C: call    KiEpfHandleNotification
 * 000000014040FF11: cli
 * 000000014040FF12: mov     ecx, dword ptr [rbp+0E8h+NewIrql]; NewIrql
 * 000000014040FF15: call    KzLowerIrql
 * 000000014040FF1A: test    [rbp+0E8h+arg_0], 1
 * 000000014040FF21: jz      loc_1404101D4
 * 000000014040FF27: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040FF2E: jz      short loc_14040FF33
 * 000000014040FF30: stac
 * 000000014040FF33: mov     rcx, gs:188h
 * 000000014040FF3C: test    byte ptr [rcx+0C2h], 3
 * 000000014040FF43: jz      short loc_14040FF60
 * 000000014040FF45: mov     ecx, 1
 * 000000014040FF4A: mov     cr8, rcx
 * 000000014040FF4E: sti
 * 000000014040FF4F: call    KiInitiateUserApc
 * 000000014040FF54: cli
 * 000000014040FF55: mov     ecx, 0
 * 000000014040FF5A: mov     cr8, rcx
 * 000000014040FF5E: jmp     short loc_14040FF33
 * 000000014040FF60: test    byte ptr gs:86Ch, 2
 * 000000014040FF69: jz      short loc_14040FF72
 * 000000014040FF6B: xor     ecx, ecx
 * 000000014040FF6D: call    KiUpdateStibpPairing
 * 000000014040FF72: mov     rcx, gs:188h
 * 000000014040FF7B: test    dword ptr [rcx], 8000000h
 * 000000014040FF81: jz      short loc_14040FF88
 * 000000014040FF83: call    KiRestoreSetContextState
 * 000000014040FF88: mov     rcx, gs:188h
 * 000000014040FF91: test    dword ptr [rcx], 40010000h
 * 000000014040FF97: jz      short loc_14040FFBE
 * 000000014040FF99: test    byte ptr [rcx+2], 1
 * 000000014040FF9D: jz      short loc_14040FFAD
 * 000000014040FF9F: call    KiCopyCounters
 * 000000014040FFA4: mov     rcx, gs:188h
 * 000000014040FFAD: test    byte ptr [rcx+3], 40h
 * 000000014040FFB1: jz      short loc_14040FFBE
 * 000000014040FFB3: lea     rsp, [rbp-80h]
 * 000000014040FFB7: mov     cl, 1
 * 000000014040FFB9: call    KiUmsExit
 * 000000014040FFBE: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014040FFC2: cmp     [rbp+0E8h+var_68], 0
 * 000000014040FFCA: jz      short loc_14040FFD1
 * 000000014040FFCC: call    KiRestoreDebugRegisterState
 * 000000014040FFD1: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040FFD5: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040FFD9: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014040FFDD: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014040FFE1: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040FFE5: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040FFE9: mov     r11, [rbp+0E8h+var_108]
 * 000000014040FFED: mov     r10, [rbp+0E8h+var_110]
 * 000000014040FFF1: mov     r9, [rbp+0E8h+var_118]
 * 000000014040FFF5: mov     r8, [rbp+0E8h+var_120]
 * 000000014040FFF9: mov     byte ptr gs:856h, 0
 * 0000000140410002: movzx   eax, word ptr gs:86Ah
 * 000000014041000B: cmp     gs:864h, ax
 * 0000000140410014: jz      short loc_140410028
 * 0000000140410016: mov     gs:864h, ax
 * 000000014041001F: mov     ecx, 48h ; 'H'
 * 0000000140410024: xor     edx, edx
 * 0000000140410026: wrmsr
 * 0000000140410028: btr     word ptr gs:860h, 2
 * 0000000140410033: jnb     short loc_140410043
 * 0000000140410035: mov     eax, 1
 * 000000014041003A: xor     edx, edx
 * 000000014041003C: mov     ecx, 49h ; 'I'
 * 0000000140410041: wrmsr
 * 0000000140410043: btr     word ptr gs:860h, 5
 * 000000014041004E: jnb     loc_140410179
 * 0000000140410054: call    loc_140410167
 * 0000000140410059: add     rsp, 8
 * 000000014041005D: call    loc_140410170
 * 0000000140410062: add     rsp, 8
 * 0000000140410066: call    loc_140410059
 * 000000014041006B: add     rsp, 8
 * 000000014041006F: call    loc_140410062
 * 0000000140410074: add     rsp, 8
 * 0000000140410078: call    loc_14041006B
 * 000000014041007D: add     rsp, 8
 * 0000000140410081: call    loc_140410074
 * 0000000140410086: add     rsp, 8
 * 000000014041008A: call    loc_14041007D
 * 000000014041008F: add     rsp, 8
 * 0000000140410093: call    loc_140410086
 * 0000000140410098: add     rsp, 8
 * 000000014041009C: call    loc_14041008F
 * 00000001404100A1: add     rsp, 8
 * 00000001404100A5: call    loc_140410098
 * 00000001404100AA: add     rsp, 8
 * 00000001404100AE: call    loc_1404100A1
 * 00000001404100B3: add     rsp, 8
 * 00000001404100B7: call    loc_1404100AA
 * 00000001404100BC: add     rsp, 8
 * 00000001404100C0: call    loc_1404100B3
 * 00000001404100C5: add     rsp, 8
 * 00000001404100C9: call    loc_1404100BC
 * 00000001404100CE: add     rsp, 8
 * 00000001404100D2: call    loc_1404100C5
 * 00000001404100D7: add     rsp, 8
 * 00000001404100DB: call    loc_1404100CE
 * 00000001404100E0: add     rsp, 8
 * 00000001404100E4: call    loc_1404100D7
 * 00000001404100E9: add     rsp, 8
 * 00000001404100ED: call    loc_1404100E0
 * 00000001404100F2: add     rsp, 8
 * 00000001404100F6: call    loc_1404100E9
 * 00000001404100FB: add     rsp, 8
 * 00000001404100FF: call    loc_1404100F2
 * 0000000140410104: add     rsp, 8
 * 0000000140410108: call    loc_1404100FB
 * 000000014041010D: add     rsp, 8
 * 0000000140410111: call    loc_140410104
 * 0000000140410116: add     rsp, 8
 * 000000014041011A: call    loc_14041010D
 * 000000014041011F: add     rsp, 8
 * 0000000140410123: call    loc_140410116
 * 0000000140410128: add     rsp, 8
 * 000000014041012C: call    loc_14041011F
 * 0000000140410131: add     rsp, 8
 * 0000000140410135: call    loc_140410128
 * 000000014041013A: add     rsp, 8
 * 000000014041013E: call    loc_140410131
 * 0000000140410143: add     rsp, 8
 * 0000000140410147: call    loc_14041013A
 * 000000014041014C: add     rsp, 8
 * 0000000140410150: call    loc_140410143
 * 0000000140410155: add     rsp, 8
 * 0000000140410159: call    loc_14041014C
 * 000000014041015E: add     rsp, 8
 * 0000000140410162: call    loc_140410155
 * 0000000140410167: add     rsp, 8
 * 000000014041016B: call    loc_14041015E
 * 0000000140410170: add     rsp, 8
 * 0000000140410174: mov     eax, 0DADAh
 * 0000000140410179: test    word ptr gs:860h, 80h
 * 0000000140410184: jz      short loc_140410192
 * 0000000140410186: xor     eax, eax
 * 0000000140410188: xor     edx, edx
 * 000000014041018A: mov     ecx, 1
 * 000000014041018F: div     rcx
 * 0000000140410192: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140410196: mov     rcx, [rbp+0E8h+var_130]
 * 000000014041019A: mov     rax, [rbp+0E8h+var_138]
 * 000000014041019E: mov     rsp, rbp
 * 00000001404101A1: mov     rbp, [rbp+0E8h+var_10]
 * 00000001404101A8: add     rsp, 0E8h
 * 00000001404101AF: test    cs:KiKvaShadow, 1
 * 00000001404101B6: jz      short loc_1404101BD
 * 00000001404101B8: jmp     KiKernelExit
 * 00000001404101BD: test    word ptr gs:860h, 100h
 * 00000001404101C8: jz      short loc_1404101CF
 * 00000001404101CA: verw    [rsp+arg_18]
 * 00000001404101CF: swapgs
 * 00000001404101D2: iretq
 * 00000001404101D4: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404101D8: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404101DC: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404101E0: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404101E4: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404101E8: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404101EC: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404101F0: mov     r11, [rbp+0E8h+var_108]
 * 00000001404101F4: mov     r10, [rbp+0E8h+var_110]
 * 00000001404101F8: mov     r9, [rbp+0E8h+var_118]
 * 00000001404101FC: mov     r8, [rbp+0E8h+var_120]
 * 0000000140410200: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140410204: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140410208: mov     rax, [rbp+0E8h+var_138]
 * 000000014041020C: mov     rsp, rbp
 * 000000014041020F: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140410216: add     rsp, 0E8h
 * 000000014041021D: iretq
 * 000000014041021F: mov     r10, [rbp+0E8h]
 * 0000000140410226: mov     r9, gs:8508h
 * 000000014041022F: movzx   r8, [rbp+0E8h+NewIrql]
 * 0000000140410234: mov     ecx, 7Fh
 * 0000000140410239: mov     edx, 20h ; ' '
 * 000000014041023E: call    KiBugCheckDispatch
 */
