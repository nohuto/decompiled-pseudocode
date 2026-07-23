/*
 * XREFs of KiAlignmentFault @ 0x14040E980
 * Callers:
 *     KiAlignmentFaultShadow @ 0x140A15940 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x14040E980 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x1404128C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x14040E980
 * Reason: Hex-Rays returned no pseudocode for 0x14040E980
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040E980: push    rbp
 * 000000014040E981: sub     rsp, 158h
 * 000000014040E988: lea     rbp, [rsp+80h]
 * 000000014040E990: mov     [rbp+0D8h+var_12D], 1
 * 000000014040E994: mov     [rbp+0D8h+var_128], rax
 * 000000014040E998: mov     [rbp+0D8h+var_120], rcx
 * 000000014040E99C: mov     [rbp+0D8h+var_118], rdx
 * 000000014040E9A0: mov     [rbp+0D8h+var_110], r8
 * 000000014040E9A4: mov     [rbp+0D8h+var_108], r9
 * 000000014040E9A8: mov     [rbp+0D8h+var_100], r10
 * 000000014040E9AC: mov     [rbp+0D8h+var_F8], r11
 * 000000014040E9B0: test    [rbp+0D8h+arg_8], 1
 * 000000014040E9B7: jnz     short loc_14040E9E8
 * 000000014040E9B9: lfence
 * 000000014040E9BC: test    word ptr gs:860h, 1
 * 000000014040E9C7: jnz     short loc_14040E9D1
 * 000000014040E9C9: lfence
 * 000000014040E9CC: jmp     loc_14040EC3A
 * 000000014040E9D1: movzx   eax, word ptr gs:864h
 * 000000014040E9DA: mov     ecx, 48h ; 'H'
 * 000000014040E9DF: xor     edx, edx
 * 000000014040E9E1: wrmsr
 * 000000014040E9E3: jmp     loc_14040EC3A
 * 000000014040E9E8: test    cs:KiKvaShadow, 1
 * 000000014040E9EF: jnz     short loc_14040E9F4
 * 000000014040E9F1: swapgs
 * 000000014040E9F4: lfence
 * 000000014040E9F7: mov     r10, gs:188h
 * 000000014040EA00: mov     rcx, gs:188h
 * 000000014040EA09: mov     rcx, [rcx+220h]
 * 000000014040EA10: mov     rcx, [rcx+9E0h]
 * 000000014040EA17: mov     gs:858h, rcx
 * 000000014040EA20: mov     cx, gs:850h
 * 000000014040EA29: mov     gs:852h, cx
 * 000000014040EA32: mov     cx, gs:860h
 * 000000014040EA3B: mov     gs:854h, cx
 * 000000014040EA44: movzx   eax, word ptr gs:866h
 * 000000014040EA4D: cmp     gs:864h, ax
 * 000000014040EA56: jz      short loc_14040EA6A
 * 000000014040EA58: mov     gs:864h, ax
 * 000000014040EA61: mov     ecx, 48h ; 'H'
 * 000000014040EA66: xor     edx, edx
 * 000000014040EA68: wrmsr
 * 000000014040EA6A: movzx   edx, word ptr gs:860h
 * 000000014040EA73: test    edx, 8
 * 000000014040EA79: jz      short loc_14040EA92
 * 000000014040EA7B: mov     eax, 1
 * 000000014040EA80: xor     edx, edx
 * 000000014040EA82: mov     ecx, 49h ; 'I'
 * 000000014040EA87: wrmsr
 * 000000014040EA89: movzx   edx, word ptr gs:860h
 * 000000014040EA92: test    edx, 2
 * 000000014040EA98: jz      loc_14040EBC3
 * 000000014040EA9E: call    loc_14040EBB1
 * 000000014040EAA3: add     rsp, 8
 * 000000014040EAA7: call    loc_14040EBBA
 * 000000014040EAAC: add     rsp, 8
 * 000000014040EAB0: call    loc_14040EAA3
 * 000000014040EAB5: add     rsp, 8
 * 000000014040EAB9: call    loc_14040EAAC
 * 000000014040EABE: add     rsp, 8
 * 000000014040EAC2: call    loc_14040EAB5
 * 000000014040EAC7: add     rsp, 8
 * 000000014040EACB: call    loc_14040EABE
 * 000000014040EAD0: add     rsp, 8
 * 000000014040EAD4: call    loc_14040EAC7
 * 000000014040EAD9: add     rsp, 8
 * 000000014040EADD: call    loc_14040EAD0
 * 000000014040EAE2: add     rsp, 8
 * 000000014040EAE6: call    loc_14040EAD9
 * 000000014040EAEB: add     rsp, 8
 * 000000014040EAEF: call    loc_14040EAE2
 * 000000014040EAF4: add     rsp, 8
 * 000000014040EAF8: call    loc_14040EAEB
 * 000000014040EAFD: add     rsp, 8
 * 000000014040EB01: call    loc_14040EAF4
 * 000000014040EB06: add     rsp, 8
 * 000000014040EB0A: call    loc_14040EAFD
 * 000000014040EB0F: add     rsp, 8
 * 000000014040EB13: call    loc_14040EB06
 * 000000014040EB18: add     rsp, 8
 * 000000014040EB1C: call    loc_14040EB0F
 * 000000014040EB21: add     rsp, 8
 * 000000014040EB25: call    loc_14040EB18
 * 000000014040EB2A: add     rsp, 8
 * 000000014040EB2E: call    loc_14040EB21
 * 000000014040EB33: add     rsp, 8
 * 000000014040EB37: call    loc_14040EB2A
 * 000000014040EB3C: add     rsp, 8
 * 000000014040EB40: call    loc_14040EB33
 * 000000014040EB45: add     rsp, 8
 * 000000014040EB49: call    loc_14040EB3C
 * 000000014040EB4E: add     rsp, 8
 * 000000014040EB52: call    loc_14040EB45
 * 000000014040EB57: add     rsp, 8
 * 000000014040EB5B: call    loc_14040EB4E
 * 000000014040EB60: add     rsp, 8
 * 000000014040EB64: call    loc_14040EB57
 * 000000014040EB69: add     rsp, 8
 * 000000014040EB6D: call    loc_14040EB60
 * 000000014040EB72: add     rsp, 8
 * 000000014040EB76: call    loc_14040EB69
 * 000000014040EB7B: add     rsp, 8
 * 000000014040EB7F: call    loc_14040EB72
 * 000000014040EB84: add     rsp, 8
 * 000000014040EB88: call    loc_14040EB7B
 * 000000014040EB8D: add     rsp, 8
 * 000000014040EB91: call    loc_14040EB84
 * 000000014040EB96: add     rsp, 8
 * 000000014040EB9A: call    loc_14040EB8D
 * 000000014040EB9F: add     rsp, 8
 * 000000014040EBA3: call    loc_14040EB96
 * 000000014040EBA8: add     rsp, 8
 * 000000014040EBAC: call    loc_14040EB9F
 * 000000014040EBB1: add     rsp, 8
 * 000000014040EBB5: call    loc_14040EBA8
 * 000000014040EBBA: add     rsp, 8
 * 000000014040EBBE: mov     eax, 0DADAh
 * 000000014040EBC3: test    edx, 200h
 * 000000014040EBC9: jz      short loc_14040EBD0
 * 000000014040EBCB: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040EBD0: lfence
 * 000000014040EBD3: mov     byte ptr gs:856h, 0
 * 000000014040EBDC: test    byte ptr [r10+3], 80h
 * 000000014040EBE1: jz      short loc_14040EC25
 * 000000014040EBE3: mov     ecx, 0C0000102h
 * 000000014040EBE8: rdmsr
 * 000000014040EBEA: shl     rdx, 20h
 * 000000014040EBEE: or      rax, rdx
 * 000000014040EBF1: cmp     rax, cs:MmUserProbeAddress
 * 000000014040EBF8: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040EC00: cmp     [r10+0F0h], rax
 * 000000014040EC07: jz      short loc_14040EC25
 * 000000014040EC09: mov     rdx, [r10+1F0h]
 * 000000014040EC10: bts     dword ptr [r10+74h], 8
 * 000000014040EC16: dec     word ptr [r10+1E6h]
 * 000000014040EC1E: mov     [rdx+80h], rax
 * 000000014040EC25: test    byte ptr [r10+3], 3
 * 000000014040EC2A: mov     [rbp+0D8h+var_58], 0
 * 000000014040EC33: jz      short loc_14040EC3A
 * 000000014040EC35: call    KiSaveDebugRegisterState
 * 000000014040EC3A: cld
 * 000000014040EC3B: stmxcsr [rbp+0D8h+var_12C]
 * 000000014040EC3F: ldmxcsr dword ptr gs:180h
 * 000000014040EC48: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014040EC4C: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014040EC50: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014040EC54: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014040EC58: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014040EC5C: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014040EC60: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040EC67: jz      short loc_14040EC75
 * 000000014040EC69: test    [rbp+0D8h+arg_8], 1
 * 000000014040EC70: jz      short loc_14040EC75
 * 000000014040EC72: stac
 * 000000014040EC75: mov     eax, [rbp+0E0h]
 * 000000014040EC7B: test    [rbp+0D8h+arg_10], 200h
 * 000000014040EC85: jz      short loc_14040EC88
 * 000000014040EC87: sti
 * 000000014040EC88: mov     ecx, 80000002h
 * 000000014040EC8D: xor     edx, edx
 * 000000014040EC8F: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040EC96: call    KiExceptionDispatch
 * 000000014040EC9B: nop
 * 000000014040EC9C: retn
 */
