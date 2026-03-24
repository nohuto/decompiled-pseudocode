/*
 * XREFs of KiAlignmentFault @ 0x14040E880
 * Callers:
 *     KiAlignmentFaultShadow @ 0x140A14940 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x14040E880 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x1404127C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x14040E880
 * Reason: Hex-Rays returned no pseudocode for 0x14040E880
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040E880: push    rbp
 * 000000014040E881: sub     rsp, 158h
 * 000000014040E888: lea     rbp, [rsp+80h]
 * 000000014040E890: mov     [rbp+0D8h+var_12D], 1
 * 000000014040E894: mov     [rbp+0D8h+var_128], rax
 * 000000014040E898: mov     [rbp+0D8h+var_120], rcx
 * 000000014040E89C: mov     [rbp+0D8h+var_118], rdx
 * 000000014040E8A0: mov     [rbp+0D8h+var_110], r8
 * 000000014040E8A4: mov     [rbp+0D8h+var_108], r9
 * 000000014040E8A8: mov     [rbp+0D8h+var_100], r10
 * 000000014040E8AC: mov     [rbp+0D8h+var_F8], r11
 * 000000014040E8B0: test    [rbp+0D8h+arg_8], 1
 * 000000014040E8B7: jnz     short loc_14040E8E8
 * 000000014040E8B9: lfence
 * 000000014040E8BC: test    word ptr gs:860h, 1
 * 000000014040E8C7: jnz     short loc_14040E8D1
 * 000000014040E8C9: lfence
 * 000000014040E8CC: jmp     loc_14040EB3A
 * 000000014040E8D1: movzx   eax, word ptr gs:864h
 * 000000014040E8DA: mov     ecx, 48h ; 'H'
 * 000000014040E8DF: xor     edx, edx
 * 000000014040E8E1: wrmsr
 * 000000014040E8E3: jmp     loc_14040EB3A
 * 000000014040E8E8: test    cs:KiKvaShadow, 1
 * 000000014040E8EF: jnz     short loc_14040E8F4
 * 000000014040E8F1: swapgs
 * 000000014040E8F4: lfence
 * 000000014040E8F7: mov     r10, gs:188h
 * 000000014040E900: mov     rcx, gs:188h
 * 000000014040E909: mov     rcx, [rcx+220h]
 * 000000014040E910: mov     rcx, [rcx+9E0h]
 * 000000014040E917: mov     gs:858h, rcx
 * 000000014040E920: mov     cx, gs:850h
 * 000000014040E929: mov     gs:852h, cx
 * 000000014040E932: mov     cx, gs:860h
 * 000000014040E93B: mov     gs:854h, cx
 * 000000014040E944: movzx   eax, word ptr gs:866h
 * 000000014040E94D: cmp     gs:864h, ax
 * 000000014040E956: jz      short loc_14040E96A
 * 000000014040E958: mov     gs:864h, ax
 * 000000014040E961: mov     ecx, 48h ; 'H'
 * 000000014040E966: xor     edx, edx
 * 000000014040E968: wrmsr
 * 000000014040E96A: movzx   edx, word ptr gs:860h
 * 000000014040E973: test    edx, 8
 * 000000014040E979: jz      short loc_14040E992
 * 000000014040E97B: mov     eax, 1
 * 000000014040E980: xor     edx, edx
 * 000000014040E982: mov     ecx, 49h ; 'I'
 * 000000014040E987: wrmsr
 * 000000014040E989: movzx   edx, word ptr gs:860h
 * 000000014040E992: test    edx, 2
 * 000000014040E998: jz      loc_14040EAC3
 * 000000014040E99E: call    loc_14040EAB1
 * 000000014040E9A3: add     rsp, 8
 * 000000014040E9A7: call    loc_14040EABA
 * 000000014040E9AC: add     rsp, 8
 * 000000014040E9B0: call    loc_14040E9A3
 * 000000014040E9B5: add     rsp, 8
 * 000000014040E9B9: call    loc_14040E9AC
 * 000000014040E9BE: add     rsp, 8
 * 000000014040E9C2: call    loc_14040E9B5
 * 000000014040E9C7: add     rsp, 8
 * 000000014040E9CB: call    loc_14040E9BE
 * 000000014040E9D0: add     rsp, 8
 * 000000014040E9D4: call    loc_14040E9C7
 * 000000014040E9D9: add     rsp, 8
 * 000000014040E9DD: call    loc_14040E9D0
 * 000000014040E9E2: add     rsp, 8
 * 000000014040E9E6: call    loc_14040E9D9
 * 000000014040E9EB: add     rsp, 8
 * 000000014040E9EF: call    loc_14040E9E2
 * 000000014040E9F4: add     rsp, 8
 * 000000014040E9F8: call    loc_14040E9EB
 * 000000014040E9FD: add     rsp, 8
 * 000000014040EA01: call    loc_14040E9F4
 * 000000014040EA06: add     rsp, 8
 * 000000014040EA0A: call    loc_14040E9FD
 * 000000014040EA0F: add     rsp, 8
 * 000000014040EA13: call    loc_14040EA06
 * 000000014040EA18: add     rsp, 8
 * 000000014040EA1C: call    loc_14040EA0F
 * 000000014040EA21: add     rsp, 8
 * 000000014040EA25: call    loc_14040EA18
 * 000000014040EA2A: add     rsp, 8
 * 000000014040EA2E: call    loc_14040EA21
 * 000000014040EA33: add     rsp, 8
 * 000000014040EA37: call    loc_14040EA2A
 * 000000014040EA3C: add     rsp, 8
 * 000000014040EA40: call    loc_14040EA33
 * 000000014040EA45: add     rsp, 8
 * 000000014040EA49: call    loc_14040EA3C
 * 000000014040EA4E: add     rsp, 8
 * 000000014040EA52: call    loc_14040EA45
 * 000000014040EA57: add     rsp, 8
 * 000000014040EA5B: call    loc_14040EA4E
 * 000000014040EA60: add     rsp, 8
 * 000000014040EA64: call    loc_14040EA57
 * 000000014040EA69: add     rsp, 8
 * 000000014040EA6D: call    loc_14040EA60
 * 000000014040EA72: add     rsp, 8
 * 000000014040EA76: call    loc_14040EA69
 * 000000014040EA7B: add     rsp, 8
 * 000000014040EA7F: call    loc_14040EA72
 * 000000014040EA84: add     rsp, 8
 * 000000014040EA88: call    loc_14040EA7B
 * 000000014040EA8D: add     rsp, 8
 * 000000014040EA91: call    loc_14040EA84
 * 000000014040EA96: add     rsp, 8
 * 000000014040EA9A: call    loc_14040EA8D
 * 000000014040EA9F: add     rsp, 8
 * 000000014040EAA3: call    loc_14040EA96
 * 000000014040EAA8: add     rsp, 8
 * 000000014040EAAC: call    loc_14040EA9F
 * 000000014040EAB1: add     rsp, 8
 * 000000014040EAB5: call    loc_14040EAA8
 * 000000014040EABA: add     rsp, 8
 * 000000014040EABE: mov     eax, 0DADAh
 * 000000014040EAC3: test    edx, 200h
 * 000000014040EAC9: jz      short loc_14040EAD0
 * 000000014040EACB: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040EAD0: lfence
 * 000000014040EAD3: mov     byte ptr gs:856h, 0
 * 000000014040EADC: test    byte ptr [r10+3], 80h
 * 000000014040EAE1: jz      short loc_14040EB25
 * 000000014040EAE3: mov     ecx, 0C0000102h
 * 000000014040EAE8: rdmsr
 * 000000014040EAEA: shl     rdx, 20h
 * 000000014040EAEE: or      rax, rdx
 * 000000014040EAF1: cmp     rax, cs:MmUserProbeAddress
 * 000000014040EAF8: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040EB00: cmp     [r10+0F0h], rax
 * 000000014040EB07: jz      short loc_14040EB25
 * 000000014040EB09: mov     rdx, [r10+1F0h]
 * 000000014040EB10: bts     dword ptr [r10+74h], 8
 * 000000014040EB16: dec     word ptr [r10+1E6h]
 * 000000014040EB1E: mov     [rdx+80h], rax
 * 000000014040EB25: test    byte ptr [r10+3], 3
 * 000000014040EB2A: mov     [rbp+0D8h+var_58], 0
 * 000000014040EB33: jz      short loc_14040EB3A
 * 000000014040EB35: call    KiSaveDebugRegisterState
 * 000000014040EB3A: cld
 * 000000014040EB3B: stmxcsr [rbp+0D8h+var_12C]
 * 000000014040EB3F: ldmxcsr dword ptr gs:180h
 * 000000014040EB48: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014040EB4C: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014040EB50: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014040EB54: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014040EB58: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014040EB5C: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014040EB60: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040EB67: jz      short loc_14040EB75
 * 000000014040EB69: test    [rbp+0D8h+arg_8], 1
 * 000000014040EB70: jz      short loc_14040EB75
 * 000000014040EB72: stac
 * 000000014040EB75: mov     eax, [rbp+0E0h]
 * 000000014040EB7B: test    [rbp+0D8h+arg_10], 200h
 * 000000014040EB85: jz      short loc_14040EB88
 * 000000014040EB87: sti
 * 000000014040EB88: mov     ecx, 80000002h
 * 000000014040EB8D: xor     edx, edx
 * 000000014040EB8F: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040EB96: call    KiExceptionDispatch
 * 000000014040EB9B: nop
 * 000000014040EB9C: retn
 */
