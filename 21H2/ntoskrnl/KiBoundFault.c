/*
 * XREFs of KiBoundFault @ 0x14040BAC0
 * Callers:
 *     KiBoundFaultShadow @ 0x140A153C0 (KiBoundFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiBoundFault @ 0x14040BAC0 (KiBoundFault.c)
 *     KiBugCheckDispatch @ 0x140412840 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1404128C0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140412D80 (KiFastFailDispatch.c)
 *     KiUmsTrapEntry @ 0x140413680 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140413B00 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiHandleBound @ 0x140514DB0 (KiHandleBound.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiBoundFault @ 0x14040BAC0
 * Reason: Hex-Rays returned no pseudocode for 0x14040BAC0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040BAC0: sub     rsp, 8
 * 000000014040BAC4: push    rbp
 * 000000014040BAC5: sub     rsp, 158h
 * 000000014040BACC: lea     rbp, [rsp+80h]
 * 000000014040BAD4: mov     [rbp+0E8h+var_13D], 1
 * 000000014040BAD8: mov     [rbp+0E8h+var_138], rax
 * 000000014040BADC: mov     [rbp+0E8h+var_130], rcx
 * 000000014040BAE0: mov     [rbp+0E8h+var_128], rdx
 * 000000014040BAE4: mov     [rbp+0E8h+var_120], r8
 * 000000014040BAE8: mov     [rbp+0E8h+var_118], r9
 * 000000014040BAEC: mov     [rbp+0E8h+var_110], r10
 * 000000014040BAF0: mov     [rbp+0E8h+var_108], r11
 * 000000014040BAF4: test    [rbp+0E8h+arg_0], 1
 * 000000014040BAFB: jnz     short loc_14040BB2C
 * 000000014040BAFD: lfence
 * 000000014040BB00: test    word ptr gs:860h, 1
 * 000000014040BB0B: jnz     short loc_14040BB15
 * 000000014040BB0D: lfence
 * 000000014040BB10: jmp     loc_14040BD7E
 * 000000014040BB15: movzx   eax, word ptr gs:864h
 * 000000014040BB1E: mov     ecx, 48h ; 'H'
 * 000000014040BB23: xor     edx, edx
 * 000000014040BB25: wrmsr
 * 000000014040BB27: jmp     loc_14040BD7E
 * 000000014040BB2C: test    cs:KiKvaShadow, 1
 * 000000014040BB33: jnz     short loc_14040BB38
 * 000000014040BB35: swapgs
 * 000000014040BB38: lfence
 * 000000014040BB3B: mov     r10, gs:188h
 * 000000014040BB44: mov     rcx, gs:188h
 * 000000014040BB4D: mov     rcx, [rcx+220h]
 * 000000014040BB54: mov     rcx, [rcx+9E0h]
 * 000000014040BB5B: mov     gs:858h, rcx
 * 000000014040BB64: mov     cx, gs:850h
 * 000000014040BB6D: mov     gs:852h, cx
 * 000000014040BB76: mov     cx, gs:860h
 * 000000014040BB7F: mov     gs:854h, cx
 * 000000014040BB88: movzx   eax, word ptr gs:866h
 * 000000014040BB91: cmp     gs:864h, ax
 * 000000014040BB9A: jz      short loc_14040BBAE
 * 000000014040BB9C: mov     gs:864h, ax
 * 000000014040BBA5: mov     ecx, 48h ; 'H'
 * 000000014040BBAA: xor     edx, edx
 * 000000014040BBAC: wrmsr
 * 000000014040BBAE: movzx   edx, word ptr gs:860h
 * 000000014040BBB7: test    edx, 8
 * 000000014040BBBD: jz      short loc_14040BBD6
 * 000000014040BBBF: mov     eax, 1
 * 000000014040BBC4: xor     edx, edx
 * 000000014040BBC6: mov     ecx, 49h ; 'I'
 * 000000014040BBCB: wrmsr
 * 000000014040BBCD: movzx   edx, word ptr gs:860h
 * 000000014040BBD6: test    edx, 2
 * 000000014040BBDC: jz      loc_14040BD07
 * 000000014040BBE2: call    loc_14040BCF5
 * 000000014040BBE7: add     rsp, 8
 * 000000014040BBEB: call    loc_14040BCFE
 * 000000014040BBF0: add     rsp, 8
 * 000000014040BBF4: call    loc_14040BBE7
 * 000000014040BBF9: add     rsp, 8
 * 000000014040BBFD: call    loc_14040BBF0
 * 000000014040BC02: add     rsp, 8
 * 000000014040BC06: call    loc_14040BBF9
 * 000000014040BC0B: add     rsp, 8
 * 000000014040BC0F: call    loc_14040BC02
 * 000000014040BC14: add     rsp, 8
 * 000000014040BC18: call    loc_14040BC0B
 * 000000014040BC1D: add     rsp, 8
 * 000000014040BC21: call    loc_14040BC14
 * 000000014040BC26: add     rsp, 8
 * 000000014040BC2A: call    loc_14040BC1D
 * 000000014040BC2F: add     rsp, 8
 * 000000014040BC33: call    loc_14040BC26
 * 000000014040BC38: add     rsp, 8
 * 000000014040BC3C: call    loc_14040BC2F
 * 000000014040BC41: add     rsp, 8
 * 000000014040BC45: call    loc_14040BC38
 * 000000014040BC4A: add     rsp, 8
 * 000000014040BC4E: call    loc_14040BC41
 * 000000014040BC53: add     rsp, 8
 * 000000014040BC57: call    loc_14040BC4A
 * 000000014040BC5C: add     rsp, 8
 * 000000014040BC60: call    loc_14040BC53
 * 000000014040BC65: add     rsp, 8
 * 000000014040BC69: call    loc_14040BC5C
 * 000000014040BC6E: add     rsp, 8
 * 000000014040BC72: call    loc_14040BC65
 * 000000014040BC77: add     rsp, 8
 * 000000014040BC7B: call    loc_14040BC6E
 * 000000014040BC80: add     rsp, 8
 * 000000014040BC84: call    loc_14040BC77
 * 000000014040BC89: add     rsp, 8
 * 000000014040BC8D: call    loc_14040BC80
 * 000000014040BC92: add     rsp, 8
 * 000000014040BC96: call    loc_14040BC89
 * 000000014040BC9B: add     rsp, 8
 * 000000014040BC9F: call    loc_14040BC92
 * 000000014040BCA4: add     rsp, 8
 * 000000014040BCA8: call    loc_14040BC9B
 * 000000014040BCAD: add     rsp, 8
 * 000000014040BCB1: call    loc_14040BCA4
 * 000000014040BCB6: add     rsp, 8
 * 000000014040BCBA: call    loc_14040BCAD
 * 000000014040BCBF: add     rsp, 8
 * 000000014040BCC3: call    loc_14040BCB6
 * 000000014040BCC8: add     rsp, 8
 * 000000014040BCCC: call    loc_14040BCBF
 * 000000014040BCD1: add     rsp, 8
 * 000000014040BCD5: call    loc_14040BCC8
 * 000000014040BCDA: add     rsp, 8
 * 000000014040BCDE: call    loc_14040BCD1
 * 000000014040BCE3: add     rsp, 8
 * 000000014040BCE7: call    loc_14040BCDA
 * 000000014040BCEC: add     rsp, 8
 * 000000014040BCF0: call    loc_14040BCE3
 * 000000014040BCF5: add     rsp, 8
 * 000000014040BCF9: call    loc_14040BCEC
 * 000000014040BCFE: add     rsp, 8
 * 000000014040BD02: mov     eax, 0DADAh
 * 000000014040BD07: test    edx, 200h
 * 000000014040BD0D: jz      short loc_14040BD14
 * 000000014040BD0F: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040BD14: lfence
 * 000000014040BD17: mov     byte ptr gs:856h, 0
 * 000000014040BD20: test    byte ptr [r10+3], 80h
 * 000000014040BD25: jz      short loc_14040BD69
 * 000000014040BD27: mov     ecx, 0C0000102h
 * 000000014040BD2C: rdmsr
 * 000000014040BD2E: shl     rdx, 20h
 * 000000014040BD32: or      rax, rdx
 * 000000014040BD35: cmp     rax, cs:MmUserProbeAddress
 * 000000014040BD3C: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040BD44: cmp     [r10+0F0h], rax
 * 000000014040BD4B: jz      short loc_14040BD69
 * 000000014040BD4D: mov     rdx, [r10+1F0h]
 * 000000014040BD54: bts     dword ptr [r10+74h], 8
 * 000000014040BD5A: dec     word ptr [r10+1E6h]
 * 000000014040BD62: mov     [rdx+80h], rax
 * 000000014040BD69: test    byte ptr [r10+3], 3
 * 000000014040BD6E: mov     [rbp+0E8h+var_68], 0
 * 000000014040BD77: jz      short loc_14040BD7E
 * 000000014040BD79: call    KiSaveDebugRegisterState
 * 000000014040BD7E: cld
 * 000000014040BD7F: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040BD83: ldmxcsr dword ptr gs:180h
 * 000000014040BD8C: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014040BD90: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040BD94: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040BD98: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040BD9C: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040BDA0: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040BDA4: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040BDAB: jz      short loc_14040BDB9
 * 000000014040BDAD: test    [rbp+0E8h+arg_0], 1
 * 000000014040BDB4: jz      short loc_14040BDB9
 * 000000014040BDB6: stac
 * 000000014040BDB9: test    [rbp+0E8h+arg_8], 200h
 * 000000014040BDC3: jz      short loc_14040BDC6
 * 000000014040BDC5: sti
 * 000000014040BDC6: test    [rbp+0E8h+arg_0], 1
 * 000000014040BDCD: jz      short loc_14040BE26
 * 000000014040BDCF: mov     r9, gs:188h
 * 000000014040BDD8: bt      dword ptr [r9+74h], 8
 * 000000014040BDDE: jnb     short loc_14040BDE5
 * 000000014040BDE0: call    KiUmsTrapEntry
 * 000000014040BDE5: call    KiHandleBound
 * 000000014040BDEA: cmp     eax, 0
 * 000000014040BDED: jz      short loc_14040BE26
 * 000000014040BDEF: cmp     eax, 1
 * 000000014040BDF2: jz      short loc_14040BE3A
 * 000000014040BDF4: cmp     eax, 2
 * 000000014040BDF7: jz      short loc_14040BE08
 * 000000014040BDF9: mov     edx, 5
 * 000000014040BDFE: mov     ecx, 7Fh
 * 000000014040BE03: call    KiBugCheckDispatch
 * 000000014040BE08: mov     r9, 1Ch
 * 000000014040BE0F: mov     ecx, 0C0000409h
 * 000000014040BE14: mov     edx, 1
 * 000000014040BE19: mov     r8, [rbp+0E8h]
 * 000000014040BE20: call    KiFastFailDispatch
 * 000000014040BE25: nop
 * 000000014040BE26: mov     ecx, 0C000008Ch
 * 000000014040BE2B: xor     edx, edx
 * 000000014040BE2D: mov     r8, [rbp+0E8h]
 * 000000014040BE34: call    KiExceptionDispatch
 * 000000014040BE39: nop
 * 000000014040BE3A: cli
 * 000000014040BE3B: test    [rbp+0E8h+arg_0], 1
 * 000000014040BE42: jz      loc_14040C0F5
 * 000000014040BE48: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040BE4F: jz      short loc_14040BE54
 * 000000014040BE51: stac
 * 000000014040BE54: mov     rcx, gs:188h
 * 000000014040BE5D: test    byte ptr [rcx+0C2h], 3
 * 000000014040BE64: jz      short loc_14040BE81
 * 000000014040BE66: mov     ecx, 1
 * 000000014040BE6B: mov     cr8, rcx
 * 000000014040BE6F: sti
 * 000000014040BE70: call    KiInitiateUserApc
 * 000000014040BE75: cli
 * 000000014040BE76: mov     ecx, 0
 * 000000014040BE7B: mov     cr8, rcx
 * 000000014040BE7F: jmp     short loc_14040BE54
 * 000000014040BE81: test    byte ptr gs:86Ch, 2
 * 000000014040BE8A: jz      short loc_14040BE93
 * 000000014040BE8C: xor     ecx, ecx
 * 000000014040BE8E: call    KiUpdateStibpPairing
 * 000000014040BE93: mov     rcx, gs:188h
 * 000000014040BE9C: test    dword ptr [rcx], 8000000h
 * 000000014040BEA2: jz      short loc_14040BEA9
 * 000000014040BEA4: call    KiRestoreSetContextState
 * 000000014040BEA9: mov     rcx, gs:188h
 * 000000014040BEB2: test    dword ptr [rcx], 40010000h
 * 000000014040BEB8: jz      short loc_14040BEDF
 * 000000014040BEBA: test    byte ptr [rcx+2], 1
 * 000000014040BEBE: jz      short loc_14040BECE
 * 000000014040BEC0: call    KiCopyCounters
 * 000000014040BEC5: mov     rcx, gs:188h
 * 000000014040BECE: test    byte ptr [rcx+3], 40h
 * 000000014040BED2: jz      short loc_14040BEDF
 * 000000014040BED4: lea     rsp, [rbp-80h]
 * 000000014040BED8: mov     cl, 1
 * 000000014040BEDA: call    KiUmsExit
 * 000000014040BEDF: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014040BEE3: cmp     [rbp+0E8h+var_68], 0
 * 000000014040BEEB: jz      short loc_14040BEF2
 * 000000014040BEED: call    KiRestoreDebugRegisterState
 * 000000014040BEF2: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040BEF6: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040BEFA: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014040BEFE: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014040BF02: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040BF06: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040BF0A: mov     r11, [rbp+0E8h+var_108]
 * 000000014040BF0E: mov     r10, [rbp+0E8h+var_110]
 * 000000014040BF12: mov     r9, [rbp+0E8h+var_118]
 * 000000014040BF16: mov     r8, [rbp+0E8h+var_120]
 * 000000014040BF1A: mov     byte ptr gs:856h, 0
 * 000000014040BF23: movzx   eax, word ptr gs:86Ah
 * 000000014040BF2C: cmp     gs:864h, ax
 * 000000014040BF35: jz      short loc_14040BF49
 * 000000014040BF37: mov     gs:864h, ax
 * 000000014040BF40: mov     ecx, 48h ; 'H'
 * 000000014040BF45: xor     edx, edx
 * 000000014040BF47: wrmsr
 * 000000014040BF49: btr     word ptr gs:860h, 2
 * 000000014040BF54: jnb     short loc_14040BF64
 * 000000014040BF56: mov     eax, 1
 * 000000014040BF5B: xor     edx, edx
 * 000000014040BF5D: mov     ecx, 49h ; 'I'
 * 000000014040BF62: wrmsr
 * 000000014040BF64: btr     word ptr gs:860h, 5
 * 000000014040BF6F: jnb     loc_14040C09A
 * 000000014040BF75: call    loc_14040C088
 * 000000014040BF7A: add     rsp, 8
 * 000000014040BF7E: call    loc_14040C091
 * 000000014040BF83: add     rsp, 8
 * 000000014040BF87: call    loc_14040BF7A
 * 000000014040BF8C: add     rsp, 8
 * 000000014040BF90: call    loc_14040BF83
 * 000000014040BF95: add     rsp, 8
 * 000000014040BF99: call    loc_14040BF8C
 * 000000014040BF9E: add     rsp, 8
 * 000000014040BFA2: call    loc_14040BF95
 * 000000014040BFA7: add     rsp, 8
 * 000000014040BFAB: call    loc_14040BF9E
 * 000000014040BFB0: add     rsp, 8
 * 000000014040BFB4: call    loc_14040BFA7
 * 000000014040BFB9: add     rsp, 8
 * 000000014040BFBD: call    loc_14040BFB0
 * 000000014040BFC2: add     rsp, 8
 * 000000014040BFC6: call    loc_14040BFB9
 * 000000014040BFCB: add     rsp, 8
 * 000000014040BFCF: call    loc_14040BFC2
 * 000000014040BFD4: add     rsp, 8
 * 000000014040BFD8: call    loc_14040BFCB
 * 000000014040BFDD: add     rsp, 8
 * 000000014040BFE1: call    loc_14040BFD4
 * 000000014040BFE6: add     rsp, 8
 * 000000014040BFEA: call    loc_14040BFDD
 * 000000014040BFEF: add     rsp, 8
 * 000000014040BFF3: call    loc_14040BFE6
 * 000000014040BFF8: add     rsp, 8
 * 000000014040BFFC: call    loc_14040BFEF
 * 000000014040C001: add     rsp, 8
 * 000000014040C005: call    loc_14040BFF8
 * 000000014040C00A: add     rsp, 8
 * 000000014040C00E: call    loc_14040C001
 * 000000014040C013: add     rsp, 8
 * 000000014040C017: call    loc_14040C00A
 * 000000014040C01C: add     rsp, 8
 * 000000014040C020: call    loc_14040C013
 * 000000014040C025: add     rsp, 8
 * 000000014040C029: call    loc_14040C01C
 * 000000014040C02E: add     rsp, 8
 * 000000014040C032: call    loc_14040C025
 * 000000014040C037: add     rsp, 8
 * 000000014040C03B: call    loc_14040C02E
 * 000000014040C040: add     rsp, 8
 * 000000014040C044: call    loc_14040C037
 * 000000014040C049: add     rsp, 8
 * 000000014040C04D: call    loc_14040C040
 * 000000014040C052: add     rsp, 8
 * 000000014040C056: call    loc_14040C049
 * 000000014040C05B: add     rsp, 8
 * 000000014040C05F: call    loc_14040C052
 * 000000014040C064: add     rsp, 8
 * 000000014040C068: call    loc_14040C05B
 * 000000014040C06D: add     rsp, 8
 * 000000014040C071: call    loc_14040C064
 * 000000014040C076: add     rsp, 8
 * 000000014040C07A: call    loc_14040C06D
 * 000000014040C07F: add     rsp, 8
 * 000000014040C083: call    loc_14040C076
 * 000000014040C088: add     rsp, 8
 * 000000014040C08C: call    loc_14040C07F
 * 000000014040C091: add     rsp, 8
 * 000000014040C095: mov     eax, 0DADAh
 * 000000014040C09A: test    word ptr gs:860h, 80h
 * 000000014040C0A5: jz      short loc_14040C0B3
 * 000000014040C0A7: xor     eax, eax
 * 000000014040C0A9: xor     edx, edx
 * 000000014040C0AB: mov     ecx, 1
 * 000000014040C0B0: div     rcx
 * 000000014040C0B3: mov     rdx, [rbp+0E8h+var_128]
 * 000000014040C0B7: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040C0BB: mov     rax, [rbp+0E8h+var_138]
 * 000000014040C0BF: mov     rsp, rbp
 * 000000014040C0C2: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040C0C9: add     rsp, 0E8h
 * 000000014040C0D0: test    cs:KiKvaShadow, 1
 * 000000014040C0D7: jz      short loc_14040C0DE
 * 000000014040C0D9: jmp     KiKernelExit
 * 000000014040C0DE: test    word ptr gs:860h, 100h
 * 000000014040C0E9: jz      short loc_14040C0F0
 * 000000014040C0EB: verw    [rsp+arg_18]
 * 000000014040C0F0: swapgs
 * 000000014040C0F3: iretq
 * 000000014040C0F5: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014040C0F9: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040C0FD: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040C101: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014040C105: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014040C109: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040C10D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040C111: mov     r11, [rbp+0E8h+var_108]
 * 000000014040C115: mov     r10, [rbp+0E8h+var_110]
 * 000000014040C119: mov     r9, [rbp+0E8h+var_118]
 * 000000014040C11D: mov     r8, [rbp+0E8h+var_120]
 * 000000014040C121: mov     rdx, [rbp+0E8h+var_128]
 * 000000014040C125: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040C129: mov     rax, [rbp+0E8h+var_138]
 * 000000014040C12D: mov     rsp, rbp
 * 000000014040C130: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040C137: add     rsp, 0E8h
 * 000000014040C13E: iretq
 */
