/*
 * XREFs of KiBreakpointTrap @ 0x140408BC0
 * Callers:
 *     KiBreakpointTrapShadow @ 0x140A172C0 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x140408BC0 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x140408BC0
 * Reason: Hex-Rays returned no pseudocode for 0x140408BC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140408BC0: sub     rsp, 8
 * 0000000140408BC4: push    rbp
 * 0000000140408BC5: sub     rsp, 158h
 * 0000000140408BCC: lea     rbp, [rsp+80h]
 * 0000000140408BD4: mov     [rbp+0E8h+var_13D], 1
 * 0000000140408BD8: mov     [rbp+0E8h+var_138], rax
 * 0000000140408BDC: mov     [rbp+0E8h+var_130], rcx
 * 0000000140408BE0: mov     [rbp+0E8h+var_128], rdx
 * 0000000140408BE4: mov     [rbp+0E8h+var_120], r8
 * 0000000140408BE8: mov     [rbp+0E8h+var_118], r9
 * 0000000140408BEC: mov     [rbp+0E8h+var_110], r10
 * 0000000140408BF0: mov     [rbp+0E8h+var_108], r11
 * 0000000140408BF4: test    [rbp+0E8h+arg_0], 1
 * 0000000140408BFB: jnz     short loc_140408C2A
 * 0000000140408BFD: lfence
 * 0000000140408C00: test    byte ptr gs:278h, 1
 * 0000000140408C09: jnz     short loc_140408C13
 * 0000000140408C0B: lfence
 * 0000000140408C0E: jmp     loc_140408E69
 * 0000000140408C13: movzx   eax, byte ptr gs:27Ah
 * 0000000140408C1C: mov     ecx, 48h ; 'H'
 * 0000000140408C21: xor     edx, edx
 * 0000000140408C23: wrmsr
 * 0000000140408C25: jmp     loc_140408E69
 * 0000000140408C2A: test    cs:KiKvaShadow, 1
 * 0000000140408C31: jnz     short loc_140408C36
 * 0000000140408C33: swapgs
 * 0000000140408C36: lfence
 * 0000000140408C39: mov     r10, gs:188h
 * 0000000140408C42: mov     rcx, gs:188h
 * 0000000140408C4B: mov     rcx, [rcx+220h]
 * 0000000140408C52: mov     rcx, [rcx+9E0h]
 * 0000000140408C59: mov     gs:270h, rcx
 * 0000000140408C62: mov     cl, gs:850h
 * 0000000140408C6A: mov     gs:851h, cl
 * 0000000140408C72: mov     cl, gs:278h
 * 0000000140408C7A: mov     gs:852h, cl
 * 0000000140408C82: movzx   eax, byte ptr gs:27Bh
 * 0000000140408C8B: cmp     gs:27Ah, al
 * 0000000140408C93: jz      short loc_140408CA6
 * 0000000140408C95: mov     gs:27Ah, al
 * 0000000140408C9D: mov     ecx, 48h ; 'H'
 * 0000000140408CA2: xor     edx, edx
 * 0000000140408CA4: wrmsr
 * 0000000140408CA6: movzx   edx, byte ptr gs:278h
 * 0000000140408CAF: test    edx, 8
 * 0000000140408CB5: jz      short loc_140408CCE
 * 0000000140408CB7: mov     eax, 1
 * 0000000140408CBC: xor     edx, edx
 * 0000000140408CBE: mov     ecx, 49h ; 'I'
 * 0000000140408CC3: wrmsr
 * 0000000140408CC5: movzx   edx, byte ptr gs:278h
 * 0000000140408CCE: test    edx, 2
 * 0000000140408CD4: jz      loc_140408DFF
 * 0000000140408CDA: call    loc_140408DED
 * 0000000140408CDF: add     rsp, 8
 * 0000000140408CE3: call    loc_140408DF6
 * 0000000140408CE8: add     rsp, 8
 * 0000000140408CEC: call    loc_140408CDF
 * 0000000140408CF1: add     rsp, 8
 * 0000000140408CF5: call    loc_140408CE8
 * 0000000140408CFA: add     rsp, 8
 * 0000000140408CFE: call    loc_140408CF1
 * 0000000140408D03: add     rsp, 8
 * 0000000140408D07: call    loc_140408CFA
 * 0000000140408D0C: add     rsp, 8
 * 0000000140408D10: call    loc_140408D03
 * 0000000140408D15: add     rsp, 8
 * 0000000140408D19: call    loc_140408D0C
 * 0000000140408D1E: add     rsp, 8
 * 0000000140408D22: call    loc_140408D15
 * 0000000140408D27: add     rsp, 8
 * 0000000140408D2B: call    loc_140408D1E
 * 0000000140408D30: add     rsp, 8
 * 0000000140408D34: call    loc_140408D27
 * 0000000140408D39: add     rsp, 8
 * 0000000140408D3D: call    loc_140408D30
 * 0000000140408D42: add     rsp, 8
 * 0000000140408D46: call    loc_140408D39
 * 0000000140408D4B: add     rsp, 8
 * 0000000140408D4F: call    loc_140408D42
 * 0000000140408D54: add     rsp, 8
 * 0000000140408D58: call    loc_140408D4B
 * 0000000140408D5D: add     rsp, 8
 * 0000000140408D61: call    loc_140408D54
 * 0000000140408D66: add     rsp, 8
 * 0000000140408D6A: call    loc_140408D5D
 * 0000000140408D6F: add     rsp, 8
 * 0000000140408D73: call    loc_140408D66
 * 0000000140408D78: add     rsp, 8
 * 0000000140408D7C: call    loc_140408D6F
 * 0000000140408D81: add     rsp, 8
 * 0000000140408D85: call    loc_140408D78
 * 0000000140408D8A: add     rsp, 8
 * 0000000140408D8E: call    loc_140408D81
 * 0000000140408D93: add     rsp, 8
 * 0000000140408D97: call    loc_140408D8A
 * 0000000140408D9C: add     rsp, 8
 * 0000000140408DA0: call    loc_140408D93
 * 0000000140408DA5: add     rsp, 8
 * 0000000140408DA9: call    loc_140408D9C
 * 0000000140408DAE: add     rsp, 8
 * 0000000140408DB2: call    loc_140408DA5
 * 0000000140408DB7: add     rsp, 8
 * 0000000140408DBB: call    loc_140408DAE
 * 0000000140408DC0: add     rsp, 8
 * 0000000140408DC4: call    loc_140408DB7
 * 0000000140408DC9: add     rsp, 8
 * 0000000140408DCD: call    loc_140408DC0
 * 0000000140408DD2: add     rsp, 8
 * 0000000140408DD6: call    loc_140408DC9
 * 0000000140408DDB: add     rsp, 8
 * 0000000140408DDF: call    loc_140408DD2
 * 0000000140408DE4: add     rsp, 8
 * 0000000140408DE8: call    loc_140408DDB
 * 0000000140408DED: add     rsp, 8
 * 0000000140408DF1: call    loc_140408DE4
 * 0000000140408DF6: add     rsp, 8
 * 0000000140408DFA: mov     eax, 0DADAh
 * 0000000140408DFF: lfence
 * 0000000140408E02: mov     byte ptr gs:853h, 0
 * 0000000140408E0B: test    byte ptr [r10+3], 80h
 * 0000000140408E10: jz      short loc_140408E54
 * 0000000140408E12: mov     ecx, 0C0000102h
 * 0000000140408E17: rdmsr
 * 0000000140408E19: shl     rdx, 20h
 * 0000000140408E1D: or      rax, rdx
 * 0000000140408E20: cmp     rax, cs:MmUserProbeAddress
 * 0000000140408E27: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140408E2F: cmp     [r10+0F0h], rax
 * 0000000140408E36: jz      short loc_140408E54
 * 0000000140408E38: mov     rdx, [r10+1F0h]
 * 0000000140408E3F: bts     dword ptr [r10+74h], 8
 * 0000000140408E45: dec     word ptr [r10+1E6h]
 * 0000000140408E4D: mov     [rdx+80h], rax
 * 0000000140408E54: test    byte ptr [r10+3], 3
 * 0000000140408E59: mov     [rbp+0E8h+var_68], 0
 * 0000000140408E62: jz      short loc_140408E69
 * 0000000140408E64: call    KiSaveDebugRegisterState
 * 0000000140408E69: cld
 * 0000000140408E6A: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140408E6E: ldmxcsr dword ptr gs:180h
 * 0000000140408E77: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140408E7B: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140408E7F: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140408E83: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140408E87: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140408E8B: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140408E8F: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140408E96: jz      short loc_140408EA4
 * 0000000140408E98: test    [rbp+0E8h+arg_0], 1
 * 0000000140408E9F: jz      short loc_140408EA4
 * 0000000140408EA1: stac
 * 0000000140408EA4: test    [rbp+0E8h+arg_8], 200h
 * 0000000140408EAE: jz      short loc_140408EB1
 * 0000000140408EB0: sti
 * 0000000140408EB1: mov     ecx, 80000003h
 * 0000000140408EB6: mov     edx, 1
 * 0000000140408EBB: mov     r8, [rbp+0E8h]
 * 0000000140408EC2: dec     r8
 * 0000000140408EC5: mov     r9d, 0
 * 0000000140408ECB: call    KiExceptionDispatch
 * 0000000140408ED0: nop
 * 0000000140408ED1: retn
 */
