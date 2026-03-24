/*
 * XREFs of KiOverflowTrap @ 0x140402B40
 * Callers:
 *     KiOverflowTrapShadow @ 0x140A11340 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x140402B40 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x140409080 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x140402B40
 * Reason: Hex-Rays returned no pseudocode for 0x140402B40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140402B40: sub     rsp, 8
 * 0000000140402B44: push    rbp
 * 0000000140402B45: sub     rsp, 158h
 * 0000000140402B4C: lea     rbp, [rsp+80h]
 * 0000000140402B54: mov     [rbp+0E8h+var_13D], 1
 * 0000000140402B58: mov     [rbp+0E8h+var_138], rax
 * 0000000140402B5C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140402B60: mov     [rbp+0E8h+var_128], rdx
 * 0000000140402B64: mov     [rbp+0E8h+var_120], r8
 * 0000000140402B68: mov     [rbp+0E8h+var_118], r9
 * 0000000140402B6C: mov     [rbp+0E8h+var_110], r10
 * 0000000140402B70: mov     [rbp+0E8h+var_108], r11
 * 0000000140402B74: test    [rbp+0E8h+arg_0], 1
 * 0000000140402B7B: jnz     short loc_140402BAA
 * 0000000140402B7D: lfence
 * 0000000140402B80: test    byte ptr gs:278h, 1
 * 0000000140402B89: jnz     short loc_140402B93
 * 0000000140402B8B: lfence
 * 0000000140402B8E: jmp     loc_140402DEF
 * 0000000140402B93: movzx   eax, byte ptr gs:27Ah
 * 0000000140402B9C: mov     ecx, 48h ; 'H'
 * 0000000140402BA1: xor     edx, edx
 * 0000000140402BA3: wrmsr
 * 0000000140402BA5: jmp     loc_140402DEF
 * 0000000140402BAA: test    cs:KiKvaShadow, 1
 * 0000000140402BB1: jnz     short loc_140402BB6
 * 0000000140402BB3: swapgs
 * 0000000140402BB6: lfence
 * 0000000140402BB9: mov     r10, gs:188h
 * 0000000140402BC2: mov     rcx, gs:188h
 * 0000000140402BCB: mov     rcx, [rcx+220h]
 * 0000000140402BD2: mov     rcx, [rcx+9E0h]
 * 0000000140402BD9: mov     gs:270h, rcx
 * 0000000140402BE2: mov     cl, gs:850h
 * 0000000140402BEA: mov     gs:851h, cl
 * 0000000140402BF2: mov     cl, gs:278h
 * 0000000140402BFA: mov     gs:852h, cl
 * 0000000140402C02: movzx   eax, byte ptr gs:27Bh
 * 0000000140402C0B: cmp     gs:27Ah, al
 * 0000000140402C13: jz      short loc_140402C26
 * 0000000140402C15: mov     gs:27Ah, al
 * 0000000140402C1D: mov     ecx, 48h ; 'H'
 * 0000000140402C22: xor     edx, edx
 * 0000000140402C24: wrmsr
 * 0000000140402C26: movzx   edx, byte ptr gs:278h
 * 0000000140402C2F: test    edx, 8
 * 0000000140402C35: jz      short loc_140402C4A
 * 0000000140402C37: mov     eax, 1
 * 0000000140402C3C: xor     edx, edx
 * 0000000140402C3E: mov     ecx, 49h ; 'I'
 * 0000000140402C43: wrmsr
 * 0000000140402C45: jmp     loc_140402D88
 * 0000000140402C4A: test    edx, 2
 * 0000000140402C50: jz      loc_140402D85
 * 0000000140402C56: test    byte ptr gs:279h, 4
 * 0000000140402C5F: jnz     loc_140402D85
 * 0000000140402C65: call    loc_140402D78
 * 0000000140402C6A: add     rsp, 8
 * 0000000140402C6E: call    loc_140402D81
 * 0000000140402C73: add     rsp, 8
 * 0000000140402C77: call    loc_140402C6A
 * 0000000140402C7C: add     rsp, 8
 * 0000000140402C80: call    loc_140402C73
 * 0000000140402C85: add     rsp, 8
 * 0000000140402C89: call    loc_140402C7C
 * 0000000140402C8E: add     rsp, 8
 * 0000000140402C92: call    loc_140402C85
 * 0000000140402C97: add     rsp, 8
 * 0000000140402C9B: call    loc_140402C8E
 * 0000000140402CA0: add     rsp, 8
 * 0000000140402CA4: call    loc_140402C97
 * 0000000140402CA9: add     rsp, 8
 * 0000000140402CAD: call    loc_140402CA0
 * 0000000140402CB2: add     rsp, 8
 * 0000000140402CB6: call    loc_140402CA9
 * 0000000140402CBB: add     rsp, 8
 * 0000000140402CBF: call    loc_140402CB2
 * 0000000140402CC4: add     rsp, 8
 * 0000000140402CC8: call    loc_140402CBB
 * 0000000140402CCD: add     rsp, 8
 * 0000000140402CD1: call    loc_140402CC4
 * 0000000140402CD6: add     rsp, 8
 * 0000000140402CDA: call    loc_140402CCD
 * 0000000140402CDF: add     rsp, 8
 * 0000000140402CE3: call    loc_140402CD6
 * 0000000140402CE8: add     rsp, 8
 * 0000000140402CEC: call    loc_140402CDF
 * 0000000140402CF1: add     rsp, 8
 * 0000000140402CF5: call    loc_140402CE8
 * 0000000140402CFA: add     rsp, 8
 * 0000000140402CFE: call    loc_140402CF1
 * 0000000140402D03: add     rsp, 8
 * 0000000140402D07: call    loc_140402CFA
 * 0000000140402D0C: add     rsp, 8
 * 0000000140402D10: call    loc_140402D03
 * 0000000140402D15: add     rsp, 8
 * 0000000140402D19: call    loc_140402D0C
 * 0000000140402D1E: add     rsp, 8
 * 0000000140402D22: call    loc_140402D15
 * 0000000140402D27: add     rsp, 8
 * 0000000140402D2B: call    loc_140402D1E
 * 0000000140402D30: add     rsp, 8
 * 0000000140402D34: call    loc_140402D27
 * 0000000140402D39: add     rsp, 8
 * 0000000140402D3D: call    loc_140402D30
 * 0000000140402D42: add     rsp, 8
 * 0000000140402D46: call    loc_140402D39
 * 0000000140402D4B: add     rsp, 8
 * 0000000140402D4F: call    loc_140402D42
 * 0000000140402D54: add     rsp, 8
 * 0000000140402D58: call    loc_140402D4B
 * 0000000140402D5D: add     rsp, 8
 * 0000000140402D61: call    loc_140402D54
 * 0000000140402D66: add     rsp, 8
 * 0000000140402D6A: call    loc_140402D5D
 * 0000000140402D6F: add     rsp, 8
 * 0000000140402D73: call    loc_140402D66
 * 0000000140402D78: add     rsp, 8
 * 0000000140402D7C: call    loc_140402D6F
 * 0000000140402D81: add     rsp, 8
 * 0000000140402D85: lfence
 * 0000000140402D88: mov     byte ptr gs:853h, 0
 * 0000000140402D91: test    byte ptr [r10+3], 80h
 * 0000000140402D96: jz      short loc_140402DDA
 * 0000000140402D98: mov     ecx, 0C0000102h
 * 0000000140402D9D: rdmsr
 * 0000000140402D9F: shl     rdx, 20h
 * 0000000140402DA3: or      rax, rdx
 * 0000000140402DA6: cmp     rax, cs:MmUserProbeAddress
 * 0000000140402DAD: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140402DB5: cmp     [r10+0F0h], rax
 * 0000000140402DBC: jz      short loc_140402DDA
 * 0000000140402DBE: mov     rdx, [r10+1F0h]
 * 0000000140402DC5: bts     dword ptr [r10+74h], 8
 * 0000000140402DCB: dec     word ptr [r10+1E6h]
 * 0000000140402DD3: mov     [rdx+80h], rax
 * 0000000140402DDA: test    byte ptr [r10+3], 3
 * 0000000140402DDF: mov     [rbp+0E8h+var_68], 0
 * 0000000140402DE8: jz      short loc_140402DEF
 * 0000000140402DEA: call    KiSaveDebugRegisterState
 * 0000000140402DEF: cld
 * 0000000140402DF0: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140402DF4: ldmxcsr dword ptr gs:180h
 * 0000000140402DFD: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140402E01: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140402E05: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140402E09: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140402E0D: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140402E11: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140402E15: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140402E1C: jz      short loc_140402E2A
 * 0000000140402E1E: test    [rbp+0E8h+arg_0], 1
 * 0000000140402E25: jz      short loc_140402E2A
 * 0000000140402E27: stac
 * 0000000140402E2A: test    [rbp+0E8h+arg_8], 200h
 * 0000000140402E34: jz      short loc_140402E37
 * 0000000140402E36: sti
 * 0000000140402E37: mov     ecx, 0C0000095h
 * 0000000140402E3C: xor     edx, edx
 * 0000000140402E3E: mov     r8, [rbp+0E8h]
 * 0000000140402E45: dec     r8
 * 0000000140402E48: call    KiExceptionDispatch
 * 0000000140402E4D: nop
 * 0000000140402E4E: retn
 */
