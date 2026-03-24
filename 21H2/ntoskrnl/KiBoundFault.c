/*
 * XREFs of KiBoundFault @ 0x14040B9C0
 * Callers:
 *     KiBoundFaultShadow @ 0x140A143C0 (KiBoundFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403520 (KiInitiateUserApc.c)
 *     KiBoundFault @ 0x14040B9C0 (KiBoundFault.c)
 *     KiBugCheckDispatch @ 0x140412740 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1404127C0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140412C80 (KiFastFailDispatch.c)
 *     KiUmsTrapEntry @ 0x140413580 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140413A00 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiHandleBound @ 0x140514B70 (KiHandleBound.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiBoundFault @ 0x14040B9C0
 * Reason: Hex-Rays returned no pseudocode for 0x14040B9C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040B9C0: sub     rsp, 8
 * 000000014040B9C4: push    rbp
 * 000000014040B9C5: sub     rsp, 158h
 * 000000014040B9CC: lea     rbp, [rsp+80h]
 * 000000014040B9D4: mov     [rbp+0E8h+var_13D], 1
 * 000000014040B9D8: mov     [rbp+0E8h+var_138], rax
 * 000000014040B9DC: mov     [rbp+0E8h+var_130], rcx
 * 000000014040B9E0: mov     [rbp+0E8h+var_128], rdx
 * 000000014040B9E4: mov     [rbp+0E8h+var_120], r8
 * 000000014040B9E8: mov     [rbp+0E8h+var_118], r9
 * 000000014040B9EC: mov     [rbp+0E8h+var_110], r10
 * 000000014040B9F0: mov     [rbp+0E8h+var_108], r11
 * 000000014040B9F4: test    [rbp+0E8h+arg_0], 1
 * 000000014040B9FB: jnz     short loc_14040BA2C
 * 000000014040B9FD: lfence
 * 000000014040BA00: test    word ptr gs:860h, 1
 * 000000014040BA0B: jnz     short loc_14040BA15
 * 000000014040BA0D: lfence
 * 000000014040BA10: jmp     loc_14040BC7E
 * 000000014040BA15: movzx   eax, word ptr gs:864h
 * 000000014040BA1E: mov     ecx, 48h ; 'H'
 * 000000014040BA23: xor     edx, edx
 * 000000014040BA25: wrmsr
 * 000000014040BA27: jmp     loc_14040BC7E
 * 000000014040BA2C: test    cs:KiKvaShadow, 1
 * 000000014040BA33: jnz     short loc_14040BA38
 * 000000014040BA35: swapgs
 * 000000014040BA38: lfence
 * 000000014040BA3B: mov     r10, gs:188h
 * 000000014040BA44: mov     rcx, gs:188h
 * 000000014040BA4D: mov     rcx, [rcx+220h]
 * 000000014040BA54: mov     rcx, [rcx+9E0h]
 * 000000014040BA5B: mov     gs:858h, rcx
 * 000000014040BA64: mov     cx, gs:850h
 * 000000014040BA6D: mov     gs:852h, cx
 * 000000014040BA76: mov     cx, gs:860h
 * 000000014040BA7F: mov     gs:854h, cx
 * 000000014040BA88: movzx   eax, word ptr gs:866h
 * 000000014040BA91: cmp     gs:864h, ax
 * 000000014040BA9A: jz      short loc_14040BAAE
 * 000000014040BA9C: mov     gs:864h, ax
 * 000000014040BAA5: mov     ecx, 48h ; 'H'
 * 000000014040BAAA: xor     edx, edx
 * 000000014040BAAC: wrmsr
 * 000000014040BAAE: movzx   edx, word ptr gs:860h
 * 000000014040BAB7: test    edx, 8
 * 000000014040BABD: jz      short loc_14040BAD6
 * 000000014040BABF: mov     eax, 1
 * 000000014040BAC4: xor     edx, edx
 * 000000014040BAC6: mov     ecx, 49h ; 'I'
 * 000000014040BACB: wrmsr
 * 000000014040BACD: movzx   edx, word ptr gs:860h
 * 000000014040BAD6: test    edx, 2
 * 000000014040BADC: jz      loc_14040BC07
 * 000000014040BAE2: call    loc_14040BBF5
 * 000000014040BAE7: add     rsp, 8
 * 000000014040BAEB: call    loc_14040BBFE
 * 000000014040BAF0: add     rsp, 8
 * 000000014040BAF4: call    loc_14040BAE7
 * 000000014040BAF9: add     rsp, 8
 * 000000014040BAFD: call    loc_14040BAF0
 * 000000014040BB02: add     rsp, 8
 * 000000014040BB06: call    loc_14040BAF9
 * 000000014040BB0B: add     rsp, 8
 * 000000014040BB0F: call    loc_14040BB02
 * 000000014040BB14: add     rsp, 8
 * 000000014040BB18: call    loc_14040BB0B
 * 000000014040BB1D: add     rsp, 8
 * 000000014040BB21: call    loc_14040BB14
 * 000000014040BB26: add     rsp, 8
 * 000000014040BB2A: call    loc_14040BB1D
 * 000000014040BB2F: add     rsp, 8
 * 000000014040BB33: call    loc_14040BB26
 * 000000014040BB38: add     rsp, 8
 * 000000014040BB3C: call    loc_14040BB2F
 * 000000014040BB41: add     rsp, 8
 * 000000014040BB45: call    loc_14040BB38
 * 000000014040BB4A: add     rsp, 8
 * 000000014040BB4E: call    loc_14040BB41
 * 000000014040BB53: add     rsp, 8
 * 000000014040BB57: call    loc_14040BB4A
 * 000000014040BB5C: add     rsp, 8
 * 000000014040BB60: call    loc_14040BB53
 * 000000014040BB65: add     rsp, 8
 * 000000014040BB69: call    loc_14040BB5C
 * 000000014040BB6E: add     rsp, 8
 * 000000014040BB72: call    loc_14040BB65
 * 000000014040BB77: add     rsp, 8
 * 000000014040BB7B: call    loc_14040BB6E
 * 000000014040BB80: add     rsp, 8
 * 000000014040BB84: call    loc_14040BB77
 * 000000014040BB89: add     rsp, 8
 * 000000014040BB8D: call    loc_14040BB80
 * 000000014040BB92: add     rsp, 8
 * 000000014040BB96: call    loc_14040BB89
 * 000000014040BB9B: add     rsp, 8
 * 000000014040BB9F: call    loc_14040BB92
 * 000000014040BBA4: add     rsp, 8
 * 000000014040BBA8: call    loc_14040BB9B
 * 000000014040BBAD: add     rsp, 8
 * 000000014040BBB1: call    loc_14040BBA4
 * 000000014040BBB6: add     rsp, 8
 * 000000014040BBBA: call    loc_14040BBAD
 * 000000014040BBBF: add     rsp, 8
 * 000000014040BBC3: call    loc_14040BBB6
 * 000000014040BBC8: add     rsp, 8
 * 000000014040BBCC: call    loc_14040BBBF
 * 000000014040BBD1: add     rsp, 8
 * 000000014040BBD5: call    loc_14040BBC8
 * 000000014040BBDA: add     rsp, 8
 * 000000014040BBDE: call    loc_14040BBD1
 * 000000014040BBE3: add     rsp, 8
 * 000000014040BBE7: call    loc_14040BBDA
 * 000000014040BBEC: add     rsp, 8
 * 000000014040BBF0: call    loc_14040BBE3
 * 000000014040BBF5: add     rsp, 8
 * 000000014040BBF9: call    loc_14040BBEC
 * 000000014040BBFE: add     rsp, 8
 * 000000014040BC02: mov     eax, 0DADAh
 * 000000014040BC07: test    edx, 200h
 * 000000014040BC0D: jz      short loc_14040BC14
 * 000000014040BC0F: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040BC14: lfence
 * 000000014040BC17: mov     byte ptr gs:856h, 0
 * 000000014040BC20: test    byte ptr [r10+3], 80h
 * 000000014040BC25: jz      short loc_14040BC69
 * 000000014040BC27: mov     ecx, 0C0000102h
 * 000000014040BC2C: rdmsr
 * 000000014040BC2E: shl     rdx, 20h
 * 000000014040BC32: or      rax, rdx
 * 000000014040BC35: cmp     rax, cs:MmUserProbeAddress
 * 000000014040BC3C: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040BC44: cmp     [r10+0F0h], rax
 * 000000014040BC4B: jz      short loc_14040BC69
 * 000000014040BC4D: mov     rdx, [r10+1F0h]
 * 000000014040BC54: bts     dword ptr [r10+74h], 8
 * 000000014040BC5A: dec     word ptr [r10+1E6h]
 * 000000014040BC62: mov     [rdx+80h], rax
 * 000000014040BC69: test    byte ptr [r10+3], 3
 * 000000014040BC6E: mov     [rbp+0E8h+var_68], 0
 * 000000014040BC77: jz      short loc_14040BC7E
 * 000000014040BC79: call    KiSaveDebugRegisterState
 * 000000014040BC7E: cld
 * 000000014040BC7F: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040BC83: ldmxcsr dword ptr gs:180h
 * 000000014040BC8C: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014040BC90: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040BC94: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040BC98: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040BC9C: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040BCA0: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040BCA4: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040BCAB: jz      short loc_14040BCB9
 * 000000014040BCAD: test    [rbp+0E8h+arg_0], 1
 * 000000014040BCB4: jz      short loc_14040BCB9
 * 000000014040BCB6: stac
 * 000000014040BCB9: test    [rbp+0E8h+arg_8], 200h
 * 000000014040BCC3: jz      short loc_14040BCC6
 * 000000014040BCC5: sti
 * 000000014040BCC6: test    [rbp+0E8h+arg_0], 1
 * 000000014040BCCD: jz      short loc_14040BD26
 * 000000014040BCCF: mov     r9, gs:188h
 * 000000014040BCD8: bt      dword ptr [r9+74h], 8
 * 000000014040BCDE: jnb     short loc_14040BCE5
 * 000000014040BCE0: call    KiUmsTrapEntry
 * 000000014040BCE5: call    KiHandleBound
 * 000000014040BCEA: cmp     eax, 0
 * 000000014040BCED: jz      short loc_14040BD26
 * 000000014040BCEF: cmp     eax, 1
 * 000000014040BCF2: jz      short loc_14040BD3A
 * 000000014040BCF4: cmp     eax, 2
 * 000000014040BCF7: jz      short loc_14040BD08
 * 000000014040BCF9: mov     edx, 5
 * 000000014040BCFE: mov     ecx, 7Fh
 * 000000014040BD03: call    KiBugCheckDispatch
 * 000000014040BD08: mov     r9, 1Ch
 * 000000014040BD0F: mov     ecx, 0C0000409h
 * 000000014040BD14: mov     edx, 1
 * 000000014040BD19: mov     r8, [rbp+0E8h]
 * 000000014040BD20: call    KiFastFailDispatch
 * 000000014040BD25: nop
 * 000000014040BD26: mov     ecx, 0C000008Ch
 * 000000014040BD2B: xor     edx, edx
 * 000000014040BD2D: mov     r8, [rbp+0E8h]
 * 000000014040BD34: call    KiExceptionDispatch
 * 000000014040BD39: nop
 * 000000014040BD3A: cli
 * 000000014040BD3B: test    [rbp+0E8h+arg_0], 1
 * 000000014040BD42: jz      loc_14040BFF5
 * 000000014040BD48: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040BD4F: jz      short loc_14040BD54
 * 000000014040BD51: stac
 * 000000014040BD54: mov     rcx, gs:188h
 * 000000014040BD5D: test    byte ptr [rcx+0C2h], 3
 * 000000014040BD64: jz      short loc_14040BD81
 * 000000014040BD66: mov     ecx, 1
 * 000000014040BD6B: mov     cr8, rcx
 * 000000014040BD6F: sti
 * 000000014040BD70: call    KiInitiateUserApc
 * 000000014040BD75: cli
 * 000000014040BD76: mov     ecx, 0
 * 000000014040BD7B: mov     cr8, rcx
 * 000000014040BD7F: jmp     short loc_14040BD54
 * 000000014040BD81: test    byte ptr gs:86Ch, 2
 * 000000014040BD8A: jz      short loc_14040BD93
 * 000000014040BD8C: xor     ecx, ecx
 * 000000014040BD8E: call    KiUpdateStibpPairing
 * 000000014040BD93: mov     rcx, gs:188h
 * 000000014040BD9C: test    dword ptr [rcx], 8000000h
 * 000000014040BDA2: jz      short loc_14040BDA9
 * 000000014040BDA4: call    KiRestoreSetContextState
 * 000000014040BDA9: mov     rcx, gs:188h
 * 000000014040BDB2: test    dword ptr [rcx], 40010000h
 * 000000014040BDB8: jz      short loc_14040BDDF
 * 000000014040BDBA: test    byte ptr [rcx+2], 1
 * 000000014040BDBE: jz      short loc_14040BDCE
 * 000000014040BDC0: call    KiCopyCounters
 * 000000014040BDC5: mov     rcx, gs:188h
 * 000000014040BDCE: test    byte ptr [rcx+3], 40h
 * 000000014040BDD2: jz      short loc_14040BDDF
 * 000000014040BDD4: lea     rsp, [rbp-80h]
 * 000000014040BDD8: mov     cl, 1
 * 000000014040BDDA: call    KiUmsExit
 * 000000014040BDDF: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014040BDE3: cmp     [rbp+0E8h+var_68], 0
 * 000000014040BDEB: jz      short loc_14040BDF2
 * 000000014040BDED: call    KiRestoreDebugRegisterState
 * 000000014040BDF2: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040BDF6: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040BDFA: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014040BDFE: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014040BE02: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040BE06: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040BE0A: mov     r11, [rbp+0E8h+var_108]
 * 000000014040BE0E: mov     r10, [rbp+0E8h+var_110]
 * 000000014040BE12: mov     r9, [rbp+0E8h+var_118]
 * 000000014040BE16: mov     r8, [rbp+0E8h+var_120]
 * 000000014040BE1A: mov     byte ptr gs:856h, 0
 * 000000014040BE23: movzx   eax, word ptr gs:86Ah
 * 000000014040BE2C: cmp     gs:864h, ax
 * 000000014040BE35: jz      short loc_14040BE49
 * 000000014040BE37: mov     gs:864h, ax
 * 000000014040BE40: mov     ecx, 48h ; 'H'
 * 000000014040BE45: xor     edx, edx
 * 000000014040BE47: wrmsr
 * 000000014040BE49: btr     word ptr gs:860h, 2
 * 000000014040BE54: jnb     short loc_14040BE64
 * 000000014040BE56: mov     eax, 1
 * 000000014040BE5B: xor     edx, edx
 * 000000014040BE5D: mov     ecx, 49h ; 'I'
 * 000000014040BE62: wrmsr
 * 000000014040BE64: btr     word ptr gs:860h, 5
 * 000000014040BE6F: jnb     loc_14040BF9A
 * 000000014040BE75: call    loc_14040BF88
 * 000000014040BE7A: add     rsp, 8
 * 000000014040BE7E: call    loc_14040BF91
 * 000000014040BE83: add     rsp, 8
 * 000000014040BE87: call    loc_14040BE7A
 * 000000014040BE8C: add     rsp, 8
 * 000000014040BE90: call    loc_14040BE83
 * 000000014040BE95: add     rsp, 8
 * 000000014040BE99: call    loc_14040BE8C
 * 000000014040BE9E: add     rsp, 8
 * 000000014040BEA2: call    loc_14040BE95
 * 000000014040BEA7: add     rsp, 8
 * 000000014040BEAB: call    loc_14040BE9E
 * 000000014040BEB0: add     rsp, 8
 * 000000014040BEB4: call    loc_14040BEA7
 * 000000014040BEB9: add     rsp, 8
 * 000000014040BEBD: call    loc_14040BEB0
 * 000000014040BEC2: add     rsp, 8
 * 000000014040BEC6: call    loc_14040BEB9
 * 000000014040BECB: add     rsp, 8
 * 000000014040BECF: call    loc_14040BEC2
 * 000000014040BED4: add     rsp, 8
 * 000000014040BED8: call    loc_14040BECB
 * 000000014040BEDD: add     rsp, 8
 * 000000014040BEE1: call    loc_14040BED4
 * 000000014040BEE6: add     rsp, 8
 * 000000014040BEEA: call    loc_14040BEDD
 * 000000014040BEEF: add     rsp, 8
 * 000000014040BEF3: call    loc_14040BEE6
 * 000000014040BEF8: add     rsp, 8
 * 000000014040BEFC: call    loc_14040BEEF
 * 000000014040BF01: add     rsp, 8
 * 000000014040BF05: call    loc_14040BEF8
 * 000000014040BF0A: add     rsp, 8
 * 000000014040BF0E: call    loc_14040BF01
 * 000000014040BF13: add     rsp, 8
 * 000000014040BF17: call    loc_14040BF0A
 * 000000014040BF1C: add     rsp, 8
 * 000000014040BF20: call    loc_14040BF13
 * 000000014040BF25: add     rsp, 8
 * 000000014040BF29: call    loc_14040BF1C
 * 000000014040BF2E: add     rsp, 8
 * 000000014040BF32: call    loc_14040BF25
 * 000000014040BF37: add     rsp, 8
 * 000000014040BF3B: call    loc_14040BF2E
 * 000000014040BF40: add     rsp, 8
 * 000000014040BF44: call    loc_14040BF37
 * 000000014040BF49: add     rsp, 8
 * 000000014040BF4D: call    loc_14040BF40
 * 000000014040BF52: add     rsp, 8
 * 000000014040BF56: call    loc_14040BF49
 * 000000014040BF5B: add     rsp, 8
 * 000000014040BF5F: call    loc_14040BF52
 * 000000014040BF64: add     rsp, 8
 * 000000014040BF68: call    loc_14040BF5B
 * 000000014040BF6D: add     rsp, 8
 * 000000014040BF71: call    loc_14040BF64
 * 000000014040BF76: add     rsp, 8
 * 000000014040BF7A: call    loc_14040BF6D
 * 000000014040BF7F: add     rsp, 8
 * 000000014040BF83: call    loc_14040BF76
 * 000000014040BF88: add     rsp, 8
 * 000000014040BF8C: call    loc_14040BF7F
 * 000000014040BF91: add     rsp, 8
 * 000000014040BF95: mov     eax, 0DADAh
 * 000000014040BF9A: test    word ptr gs:860h, 80h
 * 000000014040BFA5: jz      short loc_14040BFB3
 * 000000014040BFA7: xor     eax, eax
 * 000000014040BFA9: xor     edx, edx
 * 000000014040BFAB: mov     ecx, 1
 * 000000014040BFB0: div     rcx
 * 000000014040BFB3: mov     rdx, [rbp+0E8h+var_128]
 * 000000014040BFB7: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040BFBB: mov     rax, [rbp+0E8h+var_138]
 * 000000014040BFBF: mov     rsp, rbp
 * 000000014040BFC2: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040BFC9: add     rsp, 0E8h
 * 000000014040BFD0: test    cs:KiKvaShadow, 1
 * 000000014040BFD7: jz      short loc_14040BFDE
 * 000000014040BFD9: jmp     KiKernelExit
 * 000000014040BFDE: test    word ptr gs:860h, 100h
 * 000000014040BFE9: jz      short loc_14040BFF0
 * 000000014040BFEB: verw    [rsp+arg_18]
 * 000000014040BFF0: swapgs
 * 000000014040BFF3: iretq
 * 000000014040BFF5: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014040BFF9: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040BFFD: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040C001: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014040C005: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014040C009: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040C00D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040C011: mov     r11, [rbp+0E8h+var_108]
 * 000000014040C015: mov     r10, [rbp+0E8h+var_110]
 * 000000014040C019: mov     r9, [rbp+0E8h+var_118]
 * 000000014040C01D: mov     r8, [rbp+0E8h+var_120]
 * 000000014040C021: mov     rdx, [rbp+0E8h+var_128]
 * 000000014040C025: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040C029: mov     rax, [rbp+0E8h+var_138]
 * 000000014040C02D: mov     rsp, rbp
 * 000000014040C030: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040C037: add     rsp, 0E8h
 * 000000014040C03E: iretq
 */
