/*
 * XREFs of KiRaiseAssertion @ 0x140410C00
 * Callers:
 *     KiRaiseAssertionShadow @ 0x140A14DC0 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x140410C00 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x1404127C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x140410C00
 * Reason: Hex-Rays returned no pseudocode for 0x140410C00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140410C00: sub     qword ptr [rsp+0], 2
 * 0000000140410C05: cmp     [rsp+arg_0], 23h ; '#'
 * 0000000140410C0B: jnz     short loc_140410C12
 * 0000000140410C0D: and     dword ptr [rsp+4], 0
 * 0000000140410C12: sub     rsp, 8
 * 0000000140410C16: push    rbp
 * 0000000140410C17: sub     rsp, 158h
 * 0000000140410C1E: lea     rbp, [rsp+168h+var_E8]
 * 0000000140410C26: mov     byte ptr [rbp-55h], 1
 * 0000000140410C2A: mov     [rbp-50h], rax
 * 0000000140410C2E: mov     [rbp-48h], rcx
 * 0000000140410C32: mov     [rbp-40h], rdx
 * 0000000140410C36: mov     [rbp-38h], r8
 * 0000000140410C3A: mov     [rbp-30h], r9
 * 0000000140410C3E: mov     [rbp-28h], r10
 * 0000000140410C42: mov     [rbp-20h], r11
 * 0000000140410C46: test    byte ptr [rbp+0F0h], 1
 * 0000000140410C4D: jnz     short loc_140410C7E
 * 0000000140410C4F: lfence
 * 0000000140410C52: test    word ptr gs:860h, 1
 * 0000000140410C5D: jnz     short loc_140410C67
 * 0000000140410C5F: lfence
 * 0000000140410C62: jmp     loc_140410ED0
 * 0000000140410C67: movzx   eax, word ptr gs:864h
 * 0000000140410C70: mov     ecx, 48h ; 'H'
 * 0000000140410C75: xor     edx, edx
 * 0000000140410C77: wrmsr
 * 0000000140410C79: jmp     loc_140410ED0
 * 0000000140410C7E: test    cs:KiKvaShadow, 1
 * 0000000140410C85: jnz     short loc_140410C8A
 * 0000000140410C87: swapgs
 * 0000000140410C8A: lfence
 * 0000000140410C8D: mov     r10, gs:188h
 * 0000000140410C96: mov     rcx, gs:188h
 * 0000000140410C9F: mov     rcx, [rcx+220h]
 * 0000000140410CA6: mov     rcx, [rcx+9E0h]
 * 0000000140410CAD: mov     gs:858h, rcx
 * 0000000140410CB6: mov     cx, gs:850h
 * 0000000140410CBF: mov     gs:852h, cx
 * 0000000140410CC8: mov     cx, gs:860h
 * 0000000140410CD1: mov     gs:854h, cx
 * 0000000140410CDA: movzx   eax, word ptr gs:866h
 * 0000000140410CE3: cmp     gs:864h, ax
 * 0000000140410CEC: jz      short loc_140410D00
 * 0000000140410CEE: mov     gs:864h, ax
 * 0000000140410CF7: mov     ecx, 48h ; 'H'
 * 0000000140410CFC: xor     edx, edx
 * 0000000140410CFE: wrmsr
 * 0000000140410D00: movzx   edx, word ptr gs:860h
 * 0000000140410D09: test    edx, 8
 * 0000000140410D0F: jz      short loc_140410D28
 * 0000000140410D11: mov     eax, 1
 * 0000000140410D16: xor     edx, edx
 * 0000000140410D18: mov     ecx, 49h ; 'I'
 * 0000000140410D1D: wrmsr
 * 0000000140410D1F: movzx   edx, word ptr gs:860h
 * 0000000140410D28: test    edx, 2
 * 0000000140410D2E: jz      loc_140410E59
 * 0000000140410D34: call    loc_140410E47
 * 0000000140410D39: add     rsp, 8
 * 0000000140410D3D: call    loc_140410E50
 * 0000000140410D42: add     rsp, 8
 * 0000000140410D46: call    loc_140410D39
 * 0000000140410D4B: add     rsp, 8
 * 0000000140410D4F: call    loc_140410D42
 * 0000000140410D54: add     rsp, 8
 * 0000000140410D58: call    loc_140410D4B
 * 0000000140410D5D: add     rsp, 8
 * 0000000140410D61: call    loc_140410D54
 * 0000000140410D66: add     rsp, 8
 * 0000000140410D6A: call    loc_140410D5D
 * 0000000140410D6F: add     rsp, 8
 * 0000000140410D73: call    loc_140410D66
 * 0000000140410D78: add     rsp, 8
 * 0000000140410D7C: call    loc_140410D6F
 * 0000000140410D81: add     rsp, 8
 * 0000000140410D85: call    loc_140410D78
 * 0000000140410D8A: add     rsp, 8
 * 0000000140410D8E: call    loc_140410D81
 * 0000000140410D93: add     rsp, 8
 * 0000000140410D97: call    loc_140410D8A
 * 0000000140410D9C: add     rsp, 8
 * 0000000140410DA0: call    loc_140410D93
 * 0000000140410DA5: add     rsp, 8
 * 0000000140410DA9: call    loc_140410D9C
 * 0000000140410DAE: add     rsp, 8
 * 0000000140410DB2: call    loc_140410DA5
 * 0000000140410DB7: add     rsp, 8
 * 0000000140410DBB: call    loc_140410DAE
 * 0000000140410DC0: add     rsp, 8
 * 0000000140410DC4: call    loc_140410DB7
 * 0000000140410DC9: add     rsp, 8
 * 0000000140410DCD: call    loc_140410DC0
 * 0000000140410DD2: add     rsp, 8
 * 0000000140410DD6: call    loc_140410DC9
 * 0000000140410DDB: add     rsp, 8
 * 0000000140410DDF: call    loc_140410DD2
 * 0000000140410DE4: add     rsp, 8
 * 0000000140410DE8: call    loc_140410DDB
 * 0000000140410DED: add     rsp, 8
 * 0000000140410DF1: call    loc_140410DE4
 * 0000000140410DF6: add     rsp, 8
 * 0000000140410DFA: call    loc_140410DED
 * 0000000140410DFF: add     rsp, 8
 * 0000000140410E03: call    loc_140410DF6
 * 0000000140410E08: add     rsp, 8
 * 0000000140410E0C: call    loc_140410DFF
 * 0000000140410E11: add     rsp, 8
 * 0000000140410E15: call    loc_140410E08
 * 0000000140410E1A: add     rsp, 8
 * 0000000140410E1E: call    loc_140410E11
 * 0000000140410E23: add     rsp, 8
 * 0000000140410E27: call    loc_140410E1A
 * 0000000140410E2C: add     rsp, 8
 * 0000000140410E30: call    loc_140410E23
 * 0000000140410E35: add     rsp, 8
 * 0000000140410E39: call    loc_140410E2C
 * 0000000140410E3E: add     rsp, 8
 * 0000000140410E42: call    loc_140410E35
 * 0000000140410E47: add     rsp, 8
 * 0000000140410E4B: call    loc_140410E3E
 * 0000000140410E50: add     rsp, 8
 * 0000000140410E54: mov     eax, 0DADAh
 * 0000000140410E59: test    edx, 200h
 * 0000000140410E5F: jz      short loc_140410E66
 * 0000000140410E61: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140410E66: lfence
 * 0000000140410E69: mov     byte ptr gs:856h, 0
 * 0000000140410E72: test    byte ptr [r10+3], 80h
 * 0000000140410E77: jz      short loc_140410EBB
 * 0000000140410E79: mov     ecx, 0C0000102h
 * 0000000140410E7E: rdmsr
 * 0000000140410E80: shl     rdx, 20h
 * 0000000140410E84: or      rax, rdx
 * 0000000140410E87: cmp     rax, cs:MmUserProbeAddress
 * 0000000140410E8E: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140410E96: cmp     [r10+0F0h], rax
 * 0000000140410E9D: jz      short loc_140410EBB
 * 0000000140410E9F: mov     rdx, [r10+1F0h]
 * 0000000140410EA6: bts     dword ptr [r10+74h], 8
 * 0000000140410EAC: dec     word ptr [r10+1E6h]
 * 0000000140410EB4: mov     [rdx+80h], rax
 * 0000000140410EBB: test    byte ptr [r10+3], 3
 * 0000000140410EC0: mov     word ptr [rbp+80h], 0
 * 0000000140410EC9: jz      short loc_140410ED0
 * 0000000140410ECB: call    KiSaveDebugRegisterState
 * 0000000140410ED0: cld
 * 0000000140410ED1: stmxcsr dword ptr [rbp-54h]
 * 0000000140410ED5: ldmxcsr dword ptr gs:180h
 * 0000000140410EDE: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140410EE2: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140410EE6: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140410EEA: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140410EEE: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140410EF2: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140410EF6: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140410EFD: jz      short loc_140410F0B
 * 0000000140410EFF: test    byte ptr [rbp+0F0h], 1
 * 0000000140410F06: jz      short loc_140410F0B
 * 0000000140410F08: stac
 * 0000000140410F0B: test    dword ptr [rbp+0F8h], 200h
 * 0000000140410F15: jz      short loc_140410F18
 * 0000000140410F17: sti
 * 0000000140410F18: mov     ecx, 0C0000420h
 * 0000000140410F1D: xor     edx, edx
 * 0000000140410F1F: mov     r8, [rbp+0E8h]
 * 0000000140410F26: call    KiExceptionDispatch
 * 0000000140410F2B: nop
 * 0000000140410F2C: retn
 */
