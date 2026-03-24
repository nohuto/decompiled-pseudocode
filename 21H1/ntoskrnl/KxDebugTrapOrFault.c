/*
 * XREFs of KxDebugTrapOrFault @ 0x140400C00
 * Callers:
 *     KiDebugTrapOrFault @ 0x140400B40 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x140400C00 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x140407D80 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x140400C00
 * Reason: Hex-Rays returned no pseudocode for 0x140400C00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140400C00: sub     rsp, 8
 * 0000000140400C04: push    rbp
 * 0000000140400C05: sub     rsp, 158h
 * 0000000140400C0C: lea     rbp, [rsp+80h]
 * 0000000140400C14: mov     [rbp+0E8h+var_13D], 1
 * 0000000140400C18: mov     [rbp+0E8h+var_138], rax
 * 0000000140400C1C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140400C20: mov     [rbp+0E8h+var_128], rdx
 * 0000000140400C24: mov     [rbp+0E8h+var_120], r8
 * 0000000140400C28: mov     [rbp+0E8h+var_118], r9
 * 0000000140400C2C: mov     [rbp+0E8h+var_110], r10
 * 0000000140400C30: mov     [rbp+0E8h+var_108], r11
 * 0000000140400C34: test    [rbp+0E8h+arg_0], 1
 * 0000000140400C3B: jnz     short loc_140400C6A
 * 0000000140400C3D: lfence
 * 0000000140400C40: test    byte ptr gs:278h, 1
 * 0000000140400C49: jnz     short loc_140400C53
 * 0000000140400C4B: lfence
 * 0000000140400C4E: jmp     loc_140400EAF
 * 0000000140400C53: movzx   eax, byte ptr gs:27Ah
 * 0000000140400C5C: mov     ecx, 48h ; 'H'
 * 0000000140400C61: xor     edx, edx
 * 0000000140400C63: wrmsr
 * 0000000140400C65: jmp     loc_140400EAF
 * 0000000140400C6A: test    cs:KiKvaShadow, 1
 * 0000000140400C71: jnz     short loc_140400C76
 * 0000000140400C73: swapgs
 * 0000000140400C76: lfence
 * 0000000140400C79: mov     r10, gs:188h
 * 0000000140400C82: mov     rcx, gs:188h
 * 0000000140400C8B: mov     rcx, [rcx+220h]
 * 0000000140400C92: mov     rcx, [rcx+9E0h]
 * 0000000140400C99: mov     gs:270h, rcx
 * 0000000140400CA2: mov     cl, gs:850h
 * 0000000140400CAA: mov     gs:851h, cl
 * 0000000140400CB2: mov     cl, gs:278h
 * 0000000140400CBA: mov     gs:852h, cl
 * 0000000140400CC2: movzx   eax, byte ptr gs:27Bh
 * 0000000140400CCB: cmp     gs:27Ah, al
 * 0000000140400CD3: jz      short loc_140400CE6
 * 0000000140400CD5: mov     gs:27Ah, al
 * 0000000140400CDD: mov     ecx, 48h ; 'H'
 * 0000000140400CE2: xor     edx, edx
 * 0000000140400CE4: wrmsr
 * 0000000140400CE6: movzx   edx, byte ptr gs:278h
 * 0000000140400CEF: test    edx, 8
 * 0000000140400CF5: jz      short loc_140400D0A
 * 0000000140400CF7: mov     eax, 1
 * 0000000140400CFC: xor     edx, edx
 * 0000000140400CFE: mov     ecx, 49h ; 'I'
 * 0000000140400D03: wrmsr
 * 0000000140400D05: jmp     loc_140400E48
 * 0000000140400D0A: test    edx, 2
 * 0000000140400D10: jz      loc_140400E45
 * 0000000140400D16: test    byte ptr gs:279h, 4
 * 0000000140400D1F: jnz     loc_140400E45
 * 0000000140400D25: call    loc_140400E38
 * 0000000140400D2A: add     rsp, 8
 * 0000000140400D2E: call    loc_140400E41
 * 0000000140400D33: add     rsp, 8
 * 0000000140400D37: call    loc_140400D2A
 * 0000000140400D3C: add     rsp, 8
 * 0000000140400D40: call    loc_140400D33
 * 0000000140400D45: add     rsp, 8
 * 0000000140400D49: call    loc_140400D3C
 * 0000000140400D4E: add     rsp, 8
 * 0000000140400D52: call    loc_140400D45
 * 0000000140400D57: add     rsp, 8
 * 0000000140400D5B: call    loc_140400D4E
 * 0000000140400D60: add     rsp, 8
 * 0000000140400D64: call    loc_140400D57
 * 0000000140400D69: add     rsp, 8
 * 0000000140400D6D: call    loc_140400D60
 * 0000000140400D72: add     rsp, 8
 * 0000000140400D76: call    loc_140400D69
 * 0000000140400D7B: add     rsp, 8
 * 0000000140400D7F: call    loc_140400D72
 * 0000000140400D84: add     rsp, 8
 * 0000000140400D88: call    loc_140400D7B
 * 0000000140400D8D: add     rsp, 8
 * 0000000140400D91: call    loc_140400D84
 * 0000000140400D96: add     rsp, 8
 * 0000000140400D9A: call    loc_140400D8D
 * 0000000140400D9F: add     rsp, 8
 * 0000000140400DA3: call    loc_140400D96
 * 0000000140400DA8: add     rsp, 8
 * 0000000140400DAC: call    loc_140400D9F
 * 0000000140400DB1: add     rsp, 8
 * 0000000140400DB5: call    loc_140400DA8
 * 0000000140400DBA: add     rsp, 8
 * 0000000140400DBE: call    loc_140400DB1
 * 0000000140400DC3: add     rsp, 8
 * 0000000140400DC7: call    loc_140400DBA
 * 0000000140400DCC: add     rsp, 8
 * 0000000140400DD0: call    loc_140400DC3
 * 0000000140400DD5: add     rsp, 8
 * 0000000140400DD9: call    loc_140400DCC
 * 0000000140400DDE: add     rsp, 8
 * 0000000140400DE2: call    loc_140400DD5
 * 0000000140400DE7: add     rsp, 8
 * 0000000140400DEB: call    loc_140400DDE
 * 0000000140400DF0: add     rsp, 8
 * 0000000140400DF4: call    loc_140400DE7
 * 0000000140400DF9: add     rsp, 8
 * 0000000140400DFD: call    loc_140400DF0
 * 0000000140400E02: add     rsp, 8
 * 0000000140400E06: call    loc_140400DF9
 * 0000000140400E0B: add     rsp, 8
 * 0000000140400E0F: call    loc_140400E02
 * 0000000140400E14: add     rsp, 8
 * 0000000140400E18: call    loc_140400E0B
 * 0000000140400E1D: add     rsp, 8
 * 0000000140400E21: call    loc_140400E14
 * 0000000140400E26: add     rsp, 8
 * 0000000140400E2A: call    loc_140400E1D
 * 0000000140400E2F: add     rsp, 8
 * 0000000140400E33: call    loc_140400E26
 * 0000000140400E38: add     rsp, 8
 * 0000000140400E3C: call    loc_140400E2F
 * 0000000140400E41: add     rsp, 8
 * 0000000140400E45: lfence
 * 0000000140400E48: mov     byte ptr gs:853h, 0
 * 0000000140400E51: test    byte ptr [r10+3], 80h
 * 0000000140400E56: jz      short loc_140400E9A
 * 0000000140400E58: mov     ecx, 0C0000102h
 * 0000000140400E5D: rdmsr
 * 0000000140400E5F: shl     rdx, 20h
 * 0000000140400E63: or      rax, rdx
 * 0000000140400E66: cmp     rax, cs:MmUserProbeAddress
 * 0000000140400E6D: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140400E75: cmp     [r10+0F0h], rax
 * 0000000140400E7C: jz      short loc_140400E9A
 * 0000000140400E7E: mov     rdx, [r10+1F0h]
 * 0000000140400E85: bts     dword ptr [r10+74h], 8
 * 0000000140400E8B: dec     word ptr [r10+1E6h]
 * 0000000140400E93: mov     [rdx+80h], rax
 * 0000000140400E9A: test    byte ptr [r10+3], 3
 * 0000000140400E9F: mov     [rbp+0E8h+var_68], 0
 * 0000000140400EA8: jz      short loc_140400EAF
 * 0000000140400EAA: call    KiSaveDebugRegisterState
 * 0000000140400EAF: cld
 * 0000000140400EB0: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140400EB4: ldmxcsr dword ptr gs:180h
 * 0000000140400EBD: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140400EC1: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140400EC5: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140400EC9: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140400ECD: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140400ED1: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140400ED5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140400EDC: jz      short loc_140400EEA
 * 0000000140400EDE: test    [rbp+0E8h+arg_0], 1
 * 0000000140400EE5: jz      short loc_140400EEA
 * 0000000140400EE7: stac
 * 0000000140400EEA: test    [rbp+0E8h+arg_8], 200h
 * 0000000140400EF4: jz      short loc_140400EF7
 * 0000000140400EF6: sti
 * 0000000140400EF7: test    cs:KiCpuTracingFlags, 2
 * 0000000140400F01: jz      short loc_140400F16
 * 0000000140400F03: mov     ecx, 1D9h
 * 0000000140400F08: rdmsr
 * 0000000140400F0A: or      eax, 1
 * 0000000140400F0D: wrmsr
 * 0000000140400F0F: xor     edx, edx
 * 0000000140400F11: jmp     loc_140400FE5
 * 0000000140400F16: xor     edx, edx
 * 0000000140400F18: test    [rbp+0E8h+arg_8], 100h
 * 0000000140400F22: jz      loc_140400FE5
 * 0000000140400F28: test    byte ptr gs:8722h, 2
 * 0000000140400F31: jz      loc_140400FE5
 * 0000000140400F37: test    [rbp+0E8h+arg_0], 1
 * 0000000140400F3E: jnz     short loc_140400F97
 * 0000000140400F40: mov     rax, dr7
 * 0000000140400F43: test    ax, 200h
 * 0000000140400F47: jz      loc_140400FE5
 * 0000000140400F4D: test    ax, 100h
 * 0000000140400F51: jz      loc_140400FE5
 * 0000000140400F57: mov     r8d, cs:KiLastBranchTOSMSR
 * 0000000140400F5E: or      r8d, r8d
 * 0000000140400F61: jz      short loc_140400F6B
 * 0000000140400F63: mov     ecx, r8d
 * 0000000140400F66: rdmsr
 * 0000000140400F68: mov     r8d, eax
 * 0000000140400F6B: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 0000000140400F71: add     ecx, r8d
 * 0000000140400F74: rdmsr
 * 0000000140400F76: mov     r9d, eax
 * 0000000140400F79: shl     rdx, 20h
 * 0000000140400F7D: mov     ecx, cs:KiLastBranchToBaseMSR
 * 0000000140400F83: or      r9, rdx
 * 0000000140400F86: add     ecx, r8d
 * 0000000140400F89: rdmsr
 * 0000000140400F8B: mov     r10d, eax
 * 0000000140400F8E: shl     rdx, 20h
 * 0000000140400F92: or      r10, rdx
 * 0000000140400F95: jmp     short loc_140400FE0
 * 0000000140400F97: test    [rbp+0E8h+var_68], 200h
 * 0000000140400FA0: jz      short loc_140400FE5
 * 0000000140400FA2: test    [rbp+0E8h+var_68], 100h
 * 0000000140400FAB: jz      short loc_140400FE5
 * 0000000140400FAD: and     [rbp+0E8h+var_40], 0
 * 0000000140400FB5: and     [rbp+0E8h+var_48], 0
 * 0000000140400FBD: mov     rcx, cs:MmUserProbeAddress
 * 0000000140400FC4: mov     r9, [rbp+0E8h+var_50]
 * 0000000140400FCB: cmp     r9, rcx
 * 0000000140400FCE: cmovnb  r9, rcx
 * 0000000140400FD2: mov     r10, [rbp+0E8h+var_58]
 * 0000000140400FD9: cmp     r10, rcx
 * 0000000140400FDC: cmovnb  r10, rcx
 * 0000000140400FE0: mov     edx, 2
 * 0000000140400FE5: mov     ecx, 80000004h
 * 0000000140400FEA: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 0000000140400FF4: mov     r8, [rbp+0E8h]
 * 0000000140400FFB: call    KiExceptionDispatch
 * 0000000140401000: nop
 * 0000000140401001: retn
 */
