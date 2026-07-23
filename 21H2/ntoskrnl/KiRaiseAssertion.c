/*
 * XREFs of KiRaiseAssertion @ 0x140410D00
 * Callers:
 *     KiRaiseAssertionShadow @ 0x140A15DC0 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x140410D00 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x1404128C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x140410D00
 * Reason: Hex-Rays returned no pseudocode for 0x140410D00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140410D00: sub     qword ptr [rsp+0], 2
 * 0000000140410D05: cmp     [rsp+arg_0], 23h ; '#'
 * 0000000140410D0B: jnz     short loc_140410D12
 * 0000000140410D0D: and     dword ptr [rsp+4], 0
 * 0000000140410D12: sub     rsp, 8
 * 0000000140410D16: push    rbp
 * 0000000140410D17: sub     rsp, 158h
 * 0000000140410D1E: lea     rbp, [rsp+168h+var_E8]
 * 0000000140410D26: mov     byte ptr [rbp-55h], 1
 * 0000000140410D2A: mov     [rbp-50h], rax
 * 0000000140410D2E: mov     [rbp-48h], rcx
 * 0000000140410D32: mov     [rbp-40h], rdx
 * 0000000140410D36: mov     [rbp-38h], r8
 * 0000000140410D3A: mov     [rbp-30h], r9
 * 0000000140410D3E: mov     [rbp-28h], r10
 * 0000000140410D42: mov     [rbp-20h], r11
 * 0000000140410D46: test    byte ptr [rbp+0F0h], 1
 * 0000000140410D4D: jnz     short loc_140410D7E
 * 0000000140410D4F: lfence
 * 0000000140410D52: test    word ptr gs:860h, 1
 * 0000000140410D5D: jnz     short loc_140410D67
 * 0000000140410D5F: lfence
 * 0000000140410D62: jmp     loc_140410FD0
 * 0000000140410D67: movzx   eax, word ptr gs:864h
 * 0000000140410D70: mov     ecx, 48h ; 'H'
 * 0000000140410D75: xor     edx, edx
 * 0000000140410D77: wrmsr
 * 0000000140410D79: jmp     loc_140410FD0
 * 0000000140410D7E: test    cs:KiKvaShadow, 1
 * 0000000140410D85: jnz     short loc_140410D8A
 * 0000000140410D87: swapgs
 * 0000000140410D8A: lfence
 * 0000000140410D8D: mov     r10, gs:188h
 * 0000000140410D96: mov     rcx, gs:188h
 * 0000000140410D9F: mov     rcx, [rcx+220h]
 * 0000000140410DA6: mov     rcx, [rcx+9E0h]
 * 0000000140410DAD: mov     gs:858h, rcx
 * 0000000140410DB6: mov     cx, gs:850h
 * 0000000140410DBF: mov     gs:852h, cx
 * 0000000140410DC8: mov     cx, gs:860h
 * 0000000140410DD1: mov     gs:854h, cx
 * 0000000140410DDA: movzx   eax, word ptr gs:866h
 * 0000000140410DE3: cmp     gs:864h, ax
 * 0000000140410DEC: jz      short loc_140410E00
 * 0000000140410DEE: mov     gs:864h, ax
 * 0000000140410DF7: mov     ecx, 48h ; 'H'
 * 0000000140410DFC: xor     edx, edx
 * 0000000140410DFE: wrmsr
 * 0000000140410E00: movzx   edx, word ptr gs:860h
 * 0000000140410E09: test    edx, 8
 * 0000000140410E0F: jz      short loc_140410E28
 * 0000000140410E11: mov     eax, 1
 * 0000000140410E16: xor     edx, edx
 * 0000000140410E18: mov     ecx, 49h ; 'I'
 * 0000000140410E1D: wrmsr
 * 0000000140410E1F: movzx   edx, word ptr gs:860h
 * 0000000140410E28: test    edx, 2
 * 0000000140410E2E: jz      loc_140410F59
 * 0000000140410E34: call    loc_140410F47
 * 0000000140410E39: add     rsp, 8
 * 0000000140410E3D: call    loc_140410F50
 * 0000000140410E42: add     rsp, 8
 * 0000000140410E46: call    loc_140410E39
 * 0000000140410E4B: add     rsp, 8
 * 0000000140410E4F: call    loc_140410E42
 * 0000000140410E54: add     rsp, 8
 * 0000000140410E58: call    loc_140410E4B
 * 0000000140410E5D: add     rsp, 8
 * 0000000140410E61: call    loc_140410E54
 * 0000000140410E66: add     rsp, 8
 * 0000000140410E6A: call    loc_140410E5D
 * 0000000140410E6F: add     rsp, 8
 * 0000000140410E73: call    loc_140410E66
 * 0000000140410E78: add     rsp, 8
 * 0000000140410E7C: call    loc_140410E6F
 * 0000000140410E81: add     rsp, 8
 * 0000000140410E85: call    loc_140410E78
 * 0000000140410E8A: add     rsp, 8
 * 0000000140410E8E: call    loc_140410E81
 * 0000000140410E93: add     rsp, 8
 * 0000000140410E97: call    loc_140410E8A
 * 0000000140410E9C: add     rsp, 8
 * 0000000140410EA0: call    loc_140410E93
 * 0000000140410EA5: add     rsp, 8
 * 0000000140410EA9: call    loc_140410E9C
 * 0000000140410EAE: add     rsp, 8
 * 0000000140410EB2: call    loc_140410EA5
 * 0000000140410EB7: add     rsp, 8
 * 0000000140410EBB: call    loc_140410EAE
 * 0000000140410EC0: add     rsp, 8
 * 0000000140410EC4: call    loc_140410EB7
 * 0000000140410EC9: add     rsp, 8
 * 0000000140410ECD: call    loc_140410EC0
 * 0000000140410ED2: add     rsp, 8
 * 0000000140410ED6: call    loc_140410EC9
 * 0000000140410EDB: add     rsp, 8
 * 0000000140410EDF: call    loc_140410ED2
 * 0000000140410EE4: add     rsp, 8
 * 0000000140410EE8: call    loc_140410EDB
 * 0000000140410EED: add     rsp, 8
 * 0000000140410EF1: call    loc_140410EE4
 * 0000000140410EF6: add     rsp, 8
 * 0000000140410EFA: call    loc_140410EED
 * 0000000140410EFF: add     rsp, 8
 * 0000000140410F03: call    loc_140410EF6
 * 0000000140410F08: add     rsp, 8
 * 0000000140410F0C: call    loc_140410EFF
 * 0000000140410F11: add     rsp, 8
 * 0000000140410F15: call    loc_140410F08
 * 0000000140410F1A: add     rsp, 8
 * 0000000140410F1E: call    loc_140410F11
 * 0000000140410F23: add     rsp, 8
 * 0000000140410F27: call    loc_140410F1A
 * 0000000140410F2C: add     rsp, 8
 * 0000000140410F30: call    loc_140410F23
 * 0000000140410F35: add     rsp, 8
 * 0000000140410F39: call    loc_140410F2C
 * 0000000140410F3E: add     rsp, 8
 * 0000000140410F42: call    loc_140410F35
 * 0000000140410F47: add     rsp, 8
 * 0000000140410F4B: call    loc_140410F3E
 * 0000000140410F50: add     rsp, 8
 * 0000000140410F54: mov     eax, 0DADAh
 * 0000000140410F59: test    edx, 200h
 * 0000000140410F5F: jz      short loc_140410F66
 * 0000000140410F61: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140410F66: lfence
 * 0000000140410F69: mov     byte ptr gs:856h, 0
 * 0000000140410F72: test    byte ptr [r10+3], 80h
 * 0000000140410F77: jz      short loc_140410FBB
 * 0000000140410F79: mov     ecx, 0C0000102h
 * 0000000140410F7E: rdmsr
 * 0000000140410F80: shl     rdx, 20h
 * 0000000140410F84: or      rax, rdx
 * 0000000140410F87: cmp     rax, cs:MmUserProbeAddress
 * 0000000140410F8E: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140410F96: cmp     [r10+0F0h], rax
 * 0000000140410F9D: jz      short loc_140410FBB
 * 0000000140410F9F: mov     rdx, [r10+1F0h]
 * 0000000140410FA6: bts     dword ptr [r10+74h], 8
 * 0000000140410FAC: dec     word ptr [r10+1E6h]
 * 0000000140410FB4: mov     [rdx+80h], rax
 * 0000000140410FBB: test    byte ptr [r10+3], 3
 * 0000000140410FC0: mov     word ptr [rbp+80h], 0
 * 0000000140410FC9: jz      short loc_140410FD0
 * 0000000140410FCB: call    KiSaveDebugRegisterState
 * 0000000140410FD0: cld
 * 0000000140410FD1: stmxcsr dword ptr [rbp-54h]
 * 0000000140410FD5: ldmxcsr dword ptr gs:180h
 * 0000000140410FDE: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140410FE2: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140410FE6: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140410FEA: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140410FEE: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140410FF2: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140410FF6: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140410FFD: jz      short loc_14041100B
 * 0000000140410FFF: test    byte ptr [rbp+0F0h], 1
 * 0000000140411006: jz      short loc_14041100B
 * 0000000140411008: stac
 * 000000014041100B: test    dword ptr [rbp+0F8h], 200h
 * 0000000140411015: jz      short loc_140411018
 * 0000000140411017: sti
 * 0000000140411018: mov     ecx, 0C0000420h
 * 000000014041101D: xor     edx, edx
 * 000000014041101F: mov     r8, [rbp+0E8h]
 * 0000000140411026: call    KiExceptionDispatch
 * 000000014041102B: nop
 * 000000014041102C: retn
 */
