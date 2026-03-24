/*
 * XREFs of KiApcInterrupt @ 0x140400A90
 * Callers:
 *     KiApcInterruptShadow @ 0x140A17C40 (KiApcInterruptShadow.c)
 * Callees:
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x1402F5F40 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x140400A90 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140410EC0 (KiUmsExit.c)
 *     KzSetIrqlUnsafe @ 0x140511100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiApcInterrupt @ 0x140400A90
 * Reason: Hex-Rays returned no pseudocode for 0x140400A90
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140400A90: sub     rsp, 8
 * 0000000140400A94: push    rbp
 * 0000000140400A95: push    rsi
 * 0000000140400A96: sub     rsp, 150h
 * 0000000140400A9D: lea     rbp, [rsp+80h]
 * 0000000140400AA5: mov     [rbp+0E8h+var_13D], 0
 * 0000000140400AA9: mov     [rbp+0E8h+var_138], rax
 * 0000000140400AAD: mov     [rbp+0E8h+var_130], rcx
 * 0000000140400AB1: mov     [rbp+0E8h+var_128], rdx
 * 0000000140400AB5: mov     [rbp+0E8h+var_120], r8
 * 0000000140400AB9: mov     [rbp+0E8h+var_118], r9
 * 0000000140400ABD: mov     [rbp+0E8h+var_110], r10
 * 0000000140400AC1: mov     [rbp+0E8h+var_108], r11
 * 0000000140400AC5: test    [rbp+0E8h+arg_0], 1
 * 0000000140400ACC: jnz     short loc_140400AFB
 * 0000000140400ACE: lfence
 * 0000000140400AD1: test    byte ptr gs:278h, 1
 * 0000000140400ADA: jnz     short loc_140400AE4
 * 0000000140400ADC: lfence
 * 0000000140400ADF: jmp     loc_140400CF1
 * 0000000140400AE4: movzx   eax, byte ptr gs:27Ah
 * 0000000140400AED: mov     ecx, 48h ; 'H'
 * 0000000140400AF2: xor     edx, edx
 * 0000000140400AF4: wrmsr
 * 0000000140400AF6: jmp     loc_140400CF1
 * 0000000140400AFB: test    cs:KiKvaShadow, 1
 * 0000000140400B02: jnz     short loc_140400B07
 * 0000000140400B04: swapgs
 * 0000000140400B07: lfence
 * 0000000140400B0A: mov     r10, gs:188h
 * 0000000140400B13: mov     rcx, gs:188h
 * 0000000140400B1C: mov     rcx, [rcx+220h]
 * 0000000140400B23: mov     rcx, [rcx+9E0h]
 * 0000000140400B2A: mov     gs:270h, rcx
 * 0000000140400B33: mov     cl, gs:850h
 * 0000000140400B3B: mov     gs:851h, cl
 * 0000000140400B43: mov     cl, gs:278h
 * 0000000140400B4B: mov     gs:852h, cl
 * 0000000140400B53: movzx   eax, byte ptr gs:27Bh
 * 0000000140400B5C: cmp     gs:27Ah, al
 * 0000000140400B64: jz      short loc_140400B77
 * 0000000140400B66: mov     gs:27Ah, al
 * 0000000140400B6E: mov     ecx, 48h ; 'H'
 * 0000000140400B73: xor     edx, edx
 * 0000000140400B75: wrmsr
 * 0000000140400B77: movzx   edx, byte ptr gs:278h
 * 0000000140400B80: test    edx, 8
 * 0000000140400B86: jz      short loc_140400B9F
 * 0000000140400B88: mov     eax, 1
 * 0000000140400B8D: xor     edx, edx
 * 0000000140400B8F: mov     ecx, 49h ; 'I'
 * 0000000140400B94: wrmsr
 * 0000000140400B96: movzx   edx, byte ptr gs:278h
 * 0000000140400B9F: test    edx, 2
 * 0000000140400BA5: jz      loc_140400CD0
 * 0000000140400BAB: call    loc_140400CBE
 * 0000000140400BB0: add     rsp, 8
 * 0000000140400BB4: call    loc_140400CC7
 * 0000000140400BB9: add     rsp, 8
 * 0000000140400BBD: call    loc_140400BB0
 * 0000000140400BC2: add     rsp, 8
 * 0000000140400BC6: call    loc_140400BB9
 * 0000000140400BCB: add     rsp, 8
 * 0000000140400BCF: call    loc_140400BC2
 * 0000000140400BD4: add     rsp, 8
 * 0000000140400BD8: call    loc_140400BCB
 * 0000000140400BDD: add     rsp, 8
 * 0000000140400BE1: call    loc_140400BD4
 * 0000000140400BE6: add     rsp, 8
 * 0000000140400BEA: call    loc_140400BDD
 * 0000000140400BEF: add     rsp, 8
 * 0000000140400BF3: call    loc_140400BE6
 * 0000000140400BF8: add     rsp, 8
 * 0000000140400BFC: call    loc_140400BEF
 * 0000000140400C01: add     rsp, 8
 * 0000000140400C05: call    loc_140400BF8
 * 0000000140400C0A: add     rsp, 8
 * 0000000140400C0E: call    loc_140400C01
 * 0000000140400C13: add     rsp, 8
 * 0000000140400C17: call    loc_140400C0A
 * 0000000140400C1C: add     rsp, 8
 * 0000000140400C20: call    loc_140400C13
 * 0000000140400C25: add     rsp, 8
 * 0000000140400C29: call    loc_140400C1C
 * 0000000140400C2E: add     rsp, 8
 * 0000000140400C32: call    loc_140400C25
 * 0000000140400C37: add     rsp, 8
 * 0000000140400C3B: call    loc_140400C2E
 * 0000000140400C40: add     rsp, 8
 * 0000000140400C44: call    loc_140400C37
 * 0000000140400C49: add     rsp, 8
 * 0000000140400C4D: call    loc_140400C40
 * 0000000140400C52: add     rsp, 8
 * 0000000140400C56: call    loc_140400C49
 * 0000000140400C5B: add     rsp, 8
 * 0000000140400C5F: call    loc_140400C52
 * 0000000140400C64: add     rsp, 8
 * 0000000140400C68: call    loc_140400C5B
 * 0000000140400C6D: add     rsp, 8
 * 0000000140400C71: call    loc_140400C64
 * 0000000140400C76: add     rsp, 8
 * 0000000140400C7A: call    loc_140400C6D
 * 0000000140400C7F: add     rsp, 8
 * 0000000140400C83: call    loc_140400C76
 * 0000000140400C88: add     rsp, 8
 * 0000000140400C8C: call    loc_140400C7F
 * 0000000140400C91: add     rsp, 8
 * 0000000140400C95: call    loc_140400C88
 * 0000000140400C9A: add     rsp, 8
 * 0000000140400C9E: call    loc_140400C91
 * 0000000140400CA3: add     rsp, 8
 * 0000000140400CA7: call    loc_140400C9A
 * 0000000140400CAC: add     rsp, 8
 * 0000000140400CB0: call    loc_140400CA3
 * 0000000140400CB5: add     rsp, 8
 * 0000000140400CB9: call    loc_140400CAC
 * 0000000140400CBE: add     rsp, 8
 * 0000000140400CC2: call    loc_140400CB5
 * 0000000140400CC7: add     rsp, 8
 * 0000000140400CCB: mov     eax, 0DADAh
 * 0000000140400CD0: lfence
 * 0000000140400CD3: mov     byte ptr gs:853h, 0
 * 0000000140400CDC: test    byte ptr [r10+3], 3
 * 0000000140400CE1: mov     [rbp+0E8h+var_68], 0
 * 0000000140400CEA: jz      short loc_140400CF1
 * 0000000140400CEC: call    KiSaveDebugRegisterState
 * 0000000140400CF1: cld
 * 0000000140400CF2: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140400CF6: ldmxcsr dword ptr gs:180h
 * 0000000140400CFF: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140400D03: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140400D07: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140400D0B: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140400D0F: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140400D13: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140400D17: xor     esi, esi
 * 0000000140400D19: inc     dword ptr gs:8000h
 * 0000000140400D21: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140400D28: jz      short loc_140400D36
 * 0000000140400D2A: test    [rbp+0E8h+arg_0], 1
 * 0000000140400D31: jz      short loc_140400D36
 * 0000000140400D33: stac
 * 0000000140400D36: mov     ecx, 1
 * 0000000140400D3B: cmp     cs:KiIrqlFlags, 0
 * 0000000140400D42: jz      short loc_140400D4B
 * 0000000140400D44: call    KzSetIrqlUnsafe
 * 0000000140400D49: jmp     short loc_140400D53
 * 0000000140400D4B: mov     rax, cr8
 * 0000000140400D4F: mov     cr8, rcx
 * 0000000140400D53: mov     [rbp+0E8h+var_13F], al
 * 0000000140400D56: mov     rcx, rsi
 * 0000000140400D59: call    HalPerformEndOfInterrupt
 * 0000000140400D5E: sti
 * 0000000140400D5F: cmp     byte ptr gs:187h, 0
 * 0000000140400D68: jnz     short loc_140400D7A
 * 0000000140400D6A: mov     ecx, 0
 * 0000000140400D6F: xor     edx, edx
 * 0000000140400D71: lea     r8, [rbp+0E8h+var_168]
 * 0000000140400D75: call    KiDeliverApc
 * 0000000140400D7A: cli
 * 0000000140400D7B: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140400D7F: cmp     cs:KiIrqlFlags, 0
 * 0000000140400D86: jz      short loc_140400D8F
 * 0000000140400D88: call    KzSetIrqlUnsafe
 * 0000000140400D8D: jmp     short loc_140400D93
 * 0000000140400D8F: mov     cr8, rcx
 * 0000000140400D93: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140400D9A: cli
 * 0000000140400D9B: test    [rbp+0E8h+arg_0], 1
 * 0000000140400DA2: jz      loc_140401028
 * 0000000140400DA8: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140400DAF: jz      short loc_140400DB4
 * 0000000140400DB1: stac
 * 0000000140400DB4: mov     rcx, gs:188h
 * 0000000140400DBD: test    byte ptr [rcx+0C2h], 3
 * 0000000140400DC4: jz      short loc_140400DE1
 * 0000000140400DC6: mov     ecx, 1
 * 0000000140400DCB: mov     cr8, rcx
 * 0000000140400DCF: sti
 * 0000000140400DD0: call    KiInitiateUserApc
 * 0000000140400DD5: cli
 * 0000000140400DD6: mov     ecx, 0
 * 0000000140400DDB: mov     cr8, rcx
 * 0000000140400DDF: jmp     short loc_140400DB4
 * 0000000140400DE1: test    byte ptr gs:27Eh, 2
 * 0000000140400DEA: jz      short loc_140400DF3
 * 0000000140400DEC: xor     ecx, ecx
 * 0000000140400DEE: call    KiUpdateStibpPairing
 * 0000000140400DF3: mov     rcx, gs:188h
 * 0000000140400DFC: test    dword ptr [rcx], 8000000h
 * 0000000140400E02: jz      short loc_140400E09
 * 0000000140400E04: call    KiRestoreSetContextState
 * 0000000140400E09: mov     rcx, gs:188h
 * 0000000140400E12: test    dword ptr [rcx], 40010000h
 * 0000000140400E18: jz      short loc_140400E3F
 * 0000000140400E1A: test    byte ptr [rcx+2], 1
 * 0000000140400E1E: jz      short loc_140400E2E
 * 0000000140400E20: call    KiCopyCounters
 * 0000000140400E25: mov     rcx, gs:188h
 * 0000000140400E2E: test    byte ptr [rcx+3], 40h
 * 0000000140400E32: jz      short loc_140400E3F
 * 0000000140400E34: lea     rsp, [rbp-80h]
 * 0000000140400E38: mov     cl, 1
 * 0000000140400E3A: call    KiUmsExit
 * 0000000140400E3F: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140400E43: cmp     [rbp+0E8h+var_68], 0
 * 0000000140400E4B: jz      short loc_140400E52
 * 0000000140400E4D: call    KiRestoreDebugRegisterState
 * 0000000140400E52: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140400E56: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140400E5A: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140400E5E: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140400E62: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140400E66: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140400E6A: mov     r11, [rbp+0E8h+var_108]
 * 0000000140400E6E: mov     r10, [rbp+0E8h+var_110]
 * 0000000140400E72: mov     r9, [rbp+0E8h+var_118]
 * 0000000140400E76: mov     r8, [rbp+0E8h+var_120]
 * 0000000140400E7A: mov     byte ptr gs:853h, 0
 * 0000000140400E83: movzx   eax, byte ptr gs:27Dh
 * 0000000140400E8C: cmp     gs:27Ah, al
 * 0000000140400E94: jz      short loc_140400EA7
 * 0000000140400E96: mov     gs:27Ah, al
 * 0000000140400E9E: mov     ecx, 48h ; 'H'
 * 0000000140400EA3: xor     edx, edx
 * 0000000140400EA5: wrmsr
 * 0000000140400EA7: btr     word ptr gs:278h, 2
 * 0000000140400EB2: jnb     short loc_140400EC2
 * 0000000140400EB4: mov     eax, 1
 * 0000000140400EB9: xor     edx, edx
 * 0000000140400EBB: mov     ecx, 49h ; 'I'
 * 0000000140400EC0: wrmsr
 * 0000000140400EC2: btr     word ptr gs:278h, 5
 * 0000000140400ECD: jnb     loc_140400FF8
 * 0000000140400ED3: call    loc_140400FE6
 * 0000000140400ED8: add     rsp, 8
 * 0000000140400EDC: call    loc_140400FEF
 * 0000000140400EE1: add     rsp, 8
 * 0000000140400EE5: call    loc_140400ED8
 * 0000000140400EEA: add     rsp, 8
 * 0000000140400EEE: call    loc_140400EE1
 * 0000000140400EF3: add     rsp, 8
 * 0000000140400EF7: call    loc_140400EEA
 * 0000000140400EFC: add     rsp, 8
 * 0000000140400F00: call    loc_140400EF3
 * 0000000140400F05: add     rsp, 8
 * 0000000140400F09: call    loc_140400EFC
 * 0000000140400F0E: add     rsp, 8
 * 0000000140400F12: call    loc_140400F05
 * 0000000140400F17: add     rsp, 8
 * 0000000140400F1B: call    loc_140400F0E
 * 0000000140400F20: add     rsp, 8
 * 0000000140400F24: call    loc_140400F17
 * 0000000140400F29: add     rsp, 8
 * 0000000140400F2D: call    loc_140400F20
 * 0000000140400F32: add     rsp, 8
 * 0000000140400F36: call    loc_140400F29
 * 0000000140400F3B: add     rsp, 8
 * 0000000140400F3F: call    loc_140400F32
 * 0000000140400F44: add     rsp, 8
 * 0000000140400F48: call    loc_140400F3B
 * 0000000140400F4D: add     rsp, 8
 * 0000000140400F51: call    loc_140400F44
 * 0000000140400F56: add     rsp, 8
 * 0000000140400F5A: call    loc_140400F4D
 * 0000000140400F5F: add     rsp, 8
 * 0000000140400F63: call    loc_140400F56
 * 0000000140400F68: add     rsp, 8
 * 0000000140400F6C: call    loc_140400F5F
 * 0000000140400F71: add     rsp, 8
 * 0000000140400F75: call    loc_140400F68
 * 0000000140400F7A: add     rsp, 8
 * 0000000140400F7E: call    loc_140400F71
 * 0000000140400F83: add     rsp, 8
 * 0000000140400F87: call    loc_140400F7A
 * 0000000140400F8C: add     rsp, 8
 * 0000000140400F90: call    loc_140400F83
 * 0000000140400F95: add     rsp, 8
 * 0000000140400F99: call    loc_140400F8C
 * 0000000140400F9E: add     rsp, 8
 * 0000000140400FA2: call    loc_140400F95
 * 0000000140400FA7: add     rsp, 8
 * 0000000140400FAB: call    loc_140400F9E
 * 0000000140400FB0: add     rsp, 8
 * 0000000140400FB4: call    loc_140400FA7
 * 0000000140400FB9: add     rsp, 8
 * 0000000140400FBD: call    loc_140400FB0
 * 0000000140400FC2: add     rsp, 8
 * 0000000140400FC6: call    loc_140400FB9
 * 0000000140400FCB: add     rsp, 8
 * 0000000140400FCF: call    loc_140400FC2
 * 0000000140400FD4: add     rsp, 8
 * 0000000140400FD8: call    loc_140400FCB
 * 0000000140400FDD: add     rsp, 8
 * 0000000140400FE1: call    loc_140400FD4
 * 0000000140400FE6: add     rsp, 8
 * 0000000140400FEA: call    loc_140400FDD
 * 0000000140400FEF: add     rsp, 8
 * 0000000140400FF3: mov     eax, 0DADAh
 * 0000000140400FF8: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140400FFC: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140401000: mov     rax, [rbp+0E8h+var_138]
 * 0000000140401004: mov     rsp, rbp
 * 0000000140401007: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040100E: add     rsp, 0E8h
 * 0000000140401015: test    cs:KiKvaShadow, 1
 * 000000014040101C: jz      short loc_140401023
 * 000000014040101E: jmp     KiKernelExit
 * 0000000140401023: swapgs
 * 0000000140401026: iretq
 * 0000000140401028: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014040102C: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140401030: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140401034: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140401038: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014040103C: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140401040: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140401044: mov     r11, [rbp+0E8h+var_108]
 * 0000000140401048: mov     r10, [rbp+0E8h+var_110]
 * 000000014040104C: mov     r9, [rbp+0E8h+var_118]
 * 0000000140401050: mov     r8, [rbp+0E8h+var_120]
 * 0000000140401054: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140401058: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040105C: mov     rax, [rbp+0E8h+var_138]
 * 0000000140401060: mov     rsp, rbp
 * 0000000140401063: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040106A: add     rsp, 0E8h
 * 0000000140401071: iretq
 */
