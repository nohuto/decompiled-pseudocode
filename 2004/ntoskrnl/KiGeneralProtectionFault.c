/*
 * XREFs of KiGeneralProtectionFault @ 0x140404BC0
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x140A117C0 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x140404BC0 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x140409080 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x140404BC0
 * Reason: Hex-Rays returned no pseudocode for 0x140404BC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140404BC0: push    rbp
 * 0000000140404BC1: sub     rsp, 158h
 * 0000000140404BC8: lea     rbp, [rsp+80h]
 * 0000000140404BD0: mov     [rbp+0D8h+var_12D], 1
 * 0000000140404BD4: mov     [rbp+0D8h+var_128], rax
 * 0000000140404BD8: mov     [rbp+0D8h+var_120], rcx
 * 0000000140404BDC: mov     [rbp+0D8h+var_118], rdx
 * 0000000140404BE0: mov     [rbp+0D8h+var_110], r8
 * 0000000140404BE4: mov     [rbp+0D8h+var_108], r9
 * 0000000140404BE8: mov     [rbp+0D8h+var_100], r10
 * 0000000140404BEC: mov     [rbp+0D8h+var_F8], r11
 * 0000000140404BF0: test    [rbp+0D8h+arg_8], 1
 * 0000000140404BF7: jnz     short loc_140404C26
 * 0000000140404BF9: lfence
 * 0000000140404BFC: test    byte ptr gs:278h, 1
 * 0000000140404C05: jnz     short loc_140404C0F
 * 0000000140404C07: lfence
 * 0000000140404C0A: jmp     loc_140404E6B
 * 0000000140404C0F: movzx   eax, byte ptr gs:27Ah
 * 0000000140404C18: mov     ecx, 48h ; 'H'
 * 0000000140404C1D: xor     edx, edx
 * 0000000140404C1F: wrmsr
 * 0000000140404C21: jmp     loc_140404E6B
 * 0000000140404C26: test    cs:KiKvaShadow, 1
 * 0000000140404C2D: jnz     short loc_140404C32
 * 0000000140404C2F: swapgs
 * 0000000140404C32: lfence
 * 0000000140404C35: mov     r10, gs:188h
 * 0000000140404C3E: mov     rcx, gs:188h
 * 0000000140404C47: mov     rcx, [rcx+220h]
 * 0000000140404C4E: mov     rcx, [rcx+9E0h]
 * 0000000140404C55: mov     gs:270h, rcx
 * 0000000140404C5E: mov     cl, gs:850h
 * 0000000140404C66: mov     gs:851h, cl
 * 0000000140404C6E: mov     cl, gs:278h
 * 0000000140404C76: mov     gs:852h, cl
 * 0000000140404C7E: movzx   eax, byte ptr gs:27Bh
 * 0000000140404C87: cmp     gs:27Ah, al
 * 0000000140404C8F: jz      short loc_140404CA2
 * 0000000140404C91: mov     gs:27Ah, al
 * 0000000140404C99: mov     ecx, 48h ; 'H'
 * 0000000140404C9E: xor     edx, edx
 * 0000000140404CA0: wrmsr
 * 0000000140404CA2: movzx   edx, byte ptr gs:278h
 * 0000000140404CAB: test    edx, 8
 * 0000000140404CB1: jz      short loc_140404CC6
 * 0000000140404CB3: mov     eax, 1
 * 0000000140404CB8: xor     edx, edx
 * 0000000140404CBA: mov     ecx, 49h ; 'I'
 * 0000000140404CBF: wrmsr
 * 0000000140404CC1: jmp     loc_140404E04
 * 0000000140404CC6: test    edx, 2
 * 0000000140404CCC: jz      loc_140404E01
 * 0000000140404CD2: test    byte ptr gs:279h, 4
 * 0000000140404CDB: jnz     loc_140404E01
 * 0000000140404CE1: call    loc_140404DF4
 * 0000000140404CE6: add     rsp, 8
 * 0000000140404CEA: call    loc_140404DFD
 * 0000000140404CEF: add     rsp, 8
 * 0000000140404CF3: call    loc_140404CE6
 * 0000000140404CF8: add     rsp, 8
 * 0000000140404CFC: call    loc_140404CEF
 * 0000000140404D01: add     rsp, 8
 * 0000000140404D05: call    loc_140404CF8
 * 0000000140404D0A: add     rsp, 8
 * 0000000140404D0E: call    loc_140404D01
 * 0000000140404D13: add     rsp, 8
 * 0000000140404D17: call    loc_140404D0A
 * 0000000140404D1C: add     rsp, 8
 * 0000000140404D20: call    loc_140404D13
 * 0000000140404D25: add     rsp, 8
 * 0000000140404D29: call    loc_140404D1C
 * 0000000140404D2E: add     rsp, 8
 * 0000000140404D32: call    loc_140404D25
 * 0000000140404D37: add     rsp, 8
 * 0000000140404D3B: call    loc_140404D2E
 * 0000000140404D40: add     rsp, 8
 * 0000000140404D44: call    loc_140404D37
 * 0000000140404D49: add     rsp, 8
 * 0000000140404D4D: call    loc_140404D40
 * 0000000140404D52: add     rsp, 8
 * 0000000140404D56: call    loc_140404D49
 * 0000000140404D5B: add     rsp, 8
 * 0000000140404D5F: call    loc_140404D52
 * 0000000140404D64: add     rsp, 8
 * 0000000140404D68: call    loc_140404D5B
 * 0000000140404D6D: add     rsp, 8
 * 0000000140404D71: call    loc_140404D64
 * 0000000140404D76: add     rsp, 8
 * 0000000140404D7A: call    loc_140404D6D
 * 0000000140404D7F: add     rsp, 8
 * 0000000140404D83: call    loc_140404D76
 * 0000000140404D88: add     rsp, 8
 * 0000000140404D8C: call    loc_140404D7F
 * 0000000140404D91: add     rsp, 8
 * 0000000140404D95: call    loc_140404D88
 * 0000000140404D9A: add     rsp, 8
 * 0000000140404D9E: call    loc_140404D91
 * 0000000140404DA3: add     rsp, 8
 * 0000000140404DA7: call    loc_140404D9A
 * 0000000140404DAC: add     rsp, 8
 * 0000000140404DB0: call    loc_140404DA3
 * 0000000140404DB5: add     rsp, 8
 * 0000000140404DB9: call    loc_140404DAC
 * 0000000140404DBE: add     rsp, 8
 * 0000000140404DC2: call    loc_140404DB5
 * 0000000140404DC7: add     rsp, 8
 * 0000000140404DCB: call    loc_140404DBE
 * 0000000140404DD0: add     rsp, 8
 * 0000000140404DD4: call    loc_140404DC7
 * 0000000140404DD9: add     rsp, 8
 * 0000000140404DDD: call    loc_140404DD0
 * 0000000140404DE2: add     rsp, 8
 * 0000000140404DE6: call    loc_140404DD9
 * 0000000140404DEB: add     rsp, 8
 * 0000000140404DEF: call    loc_140404DE2
 * 0000000140404DF4: add     rsp, 8
 * 0000000140404DF8: call    loc_140404DEB
 * 0000000140404DFD: add     rsp, 8
 * 0000000140404E01: lfence
 * 0000000140404E04: mov     byte ptr gs:853h, 0
 * 0000000140404E0D: test    byte ptr [r10+3], 80h
 * 0000000140404E12: jz      short loc_140404E56
 * 0000000140404E14: mov     ecx, 0C0000102h
 * 0000000140404E19: rdmsr
 * 0000000140404E1B: shl     rdx, 20h
 * 0000000140404E1F: or      rax, rdx
 * 0000000140404E22: cmp     rax, cs:MmUserProbeAddress
 * 0000000140404E29: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140404E31: cmp     [r10+0F0h], rax
 * 0000000140404E38: jz      short loc_140404E56
 * 0000000140404E3A: mov     rdx, [r10+1F0h]
 * 0000000140404E41: bts     dword ptr [r10+74h], 8
 * 0000000140404E47: dec     word ptr [r10+1E6h]
 * 0000000140404E4F: mov     [rdx+80h], rax
 * 0000000140404E56: test    byte ptr [r10+3], 3
 * 0000000140404E5B: mov     [rbp+0D8h+var_58], 0
 * 0000000140404E64: jz      short loc_140404E6B
 * 0000000140404E66: call    KiSaveDebugRegisterState
 * 0000000140404E6B: cld
 * 0000000140404E6C: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140404E70: ldmxcsr dword ptr gs:180h
 * 0000000140404E79: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140404E7D: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140404E81: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140404E85: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140404E89: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140404E8D: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140404E91: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140404E98: jz      short loc_140404EA6
 * 0000000140404E9A: test    [rbp+0D8h+arg_8], 1
 * 0000000140404EA1: jz      short loc_140404EA6
 * 0000000140404EA3: stac
 * 0000000140404EA6: mov     eax, [rbp+0E0h]
 * 0000000140404EAC: test    [rbp+0D8h+arg_10], 200h
 * 0000000140404EB6: jz      short loc_140404EB9
 * 0000000140404EB8: sti
 * 0000000140404EB9: mov     ecx, 10000001h
 * 0000000140404EBE: mov     edx, 2
 * 0000000140404EC3: mov     r9d, [rbp+0E0h]
 * 0000000140404ECA: and     r9d, 0FFFFh
 * 0000000140404ED1: xor     r10, r10
 * 0000000140404ED4: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140404EDB: call    KiExceptionDispatch
 * 0000000140404EE0: nop
 * 0000000140404EE1: retn
 */
