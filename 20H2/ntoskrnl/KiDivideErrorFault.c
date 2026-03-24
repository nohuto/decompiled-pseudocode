/*
 * XREFs of KiDivideErrorFault @ 0x140407F00
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x140A17100 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x140407F00 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x140407F00
 * Reason: Hex-Rays returned no pseudocode for 0x140407F00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140407F00: sub     rsp, 8
 * 0000000140407F04: push    rbp
 * 0000000140407F05: sub     rsp, 158h
 * 0000000140407F0C: lea     rbp, [rsp+80h]
 * 0000000140407F14: mov     [rbp+0E8h+var_13D], 1
 * 0000000140407F18: mov     [rbp+0E8h+var_138], rax
 * 0000000140407F1C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140407F20: mov     [rbp+0E8h+var_128], rdx
 * 0000000140407F24: mov     [rbp+0E8h+var_120], r8
 * 0000000140407F28: mov     [rbp+0E8h+var_118], r9
 * 0000000140407F2C: mov     [rbp+0E8h+var_110], r10
 * 0000000140407F30: mov     [rbp+0E8h+var_108], r11
 * 0000000140407F34: test    [rbp+0E8h+arg_0], 1
 * 0000000140407F3B: jnz     short loc_140407F6A
 * 0000000140407F3D: lfence
 * 0000000140407F40: test    byte ptr gs:278h, 1
 * 0000000140407F49: jnz     short loc_140407F53
 * 0000000140407F4B: lfence
 * 0000000140407F4E: jmp     loc_1404081A9
 * 0000000140407F53: movzx   eax, byte ptr gs:27Ah
 * 0000000140407F5C: mov     ecx, 48h ; 'H'
 * 0000000140407F61: xor     edx, edx
 * 0000000140407F63: wrmsr
 * 0000000140407F65: jmp     loc_1404081A9
 * 0000000140407F6A: test    cs:KiKvaShadow, 1
 * 0000000140407F71: jnz     short loc_140407F76
 * 0000000140407F73: swapgs
 * 0000000140407F76: lfence
 * 0000000140407F79: mov     r10, gs:188h
 * 0000000140407F82: mov     rcx, gs:188h
 * 0000000140407F8B: mov     rcx, [rcx+220h]
 * 0000000140407F92: mov     rcx, [rcx+9E0h]
 * 0000000140407F99: mov     gs:270h, rcx
 * 0000000140407FA2: mov     cl, gs:850h
 * 0000000140407FAA: mov     gs:851h, cl
 * 0000000140407FB2: mov     cl, gs:278h
 * 0000000140407FBA: mov     gs:852h, cl
 * 0000000140407FC2: movzx   eax, byte ptr gs:27Bh
 * 0000000140407FCB: cmp     gs:27Ah, al
 * 0000000140407FD3: jz      short loc_140407FE6
 * 0000000140407FD5: mov     gs:27Ah, al
 * 0000000140407FDD: mov     ecx, 48h ; 'H'
 * 0000000140407FE2: xor     edx, edx
 * 0000000140407FE4: wrmsr
 * 0000000140407FE6: movzx   edx, byte ptr gs:278h
 * 0000000140407FEF: test    edx, 8
 * 0000000140407FF5: jz      short loc_14040800E
 * 0000000140407FF7: mov     eax, 1
 * 0000000140407FFC: xor     edx, edx
 * 0000000140407FFE: mov     ecx, 49h ; 'I'
 * 0000000140408003: wrmsr
 * 0000000140408005: movzx   edx, byte ptr gs:278h
 * 000000014040800E: test    edx, 2
 * 0000000140408014: jz      loc_14040813F
 * 000000014040801A: call    loc_14040812D
 * 000000014040801F: add     rsp, 8
 * 0000000140408023: call    loc_140408136
 * 0000000140408028: add     rsp, 8
 * 000000014040802C: call    loc_14040801F
 * 0000000140408031: add     rsp, 8
 * 0000000140408035: call    loc_140408028
 * 000000014040803A: add     rsp, 8
 * 000000014040803E: call    loc_140408031
 * 0000000140408043: add     rsp, 8
 * 0000000140408047: call    loc_14040803A
 * 000000014040804C: add     rsp, 8
 * 0000000140408050: call    loc_140408043
 * 0000000140408055: add     rsp, 8
 * 0000000140408059: call    loc_14040804C
 * 000000014040805E: add     rsp, 8
 * 0000000140408062: call    loc_140408055
 * 0000000140408067: add     rsp, 8
 * 000000014040806B: call    loc_14040805E
 * 0000000140408070: add     rsp, 8
 * 0000000140408074: call    loc_140408067
 * 0000000140408079: add     rsp, 8
 * 000000014040807D: call    loc_140408070
 * 0000000140408082: add     rsp, 8
 * 0000000140408086: call    loc_140408079
 * 000000014040808B: add     rsp, 8
 * 000000014040808F: call    loc_140408082
 * 0000000140408094: add     rsp, 8
 * 0000000140408098: call    loc_14040808B
 * 000000014040809D: add     rsp, 8
 * 00000001404080A1: call    loc_140408094
 * 00000001404080A6: add     rsp, 8
 * 00000001404080AA: call    loc_14040809D
 * 00000001404080AF: add     rsp, 8
 * 00000001404080B3: call    loc_1404080A6
 * 00000001404080B8: add     rsp, 8
 * 00000001404080BC: call    loc_1404080AF
 * 00000001404080C1: add     rsp, 8
 * 00000001404080C5: call    loc_1404080B8
 * 00000001404080CA: add     rsp, 8
 * 00000001404080CE: call    loc_1404080C1
 * 00000001404080D3: add     rsp, 8
 * 00000001404080D7: call    loc_1404080CA
 * 00000001404080DC: add     rsp, 8
 * 00000001404080E0: call    loc_1404080D3
 * 00000001404080E5: add     rsp, 8
 * 00000001404080E9: call    loc_1404080DC
 * 00000001404080EE: add     rsp, 8
 * 00000001404080F2: call    loc_1404080E5
 * 00000001404080F7: add     rsp, 8
 * 00000001404080FB: call    loc_1404080EE
 * 0000000140408100: add     rsp, 8
 * 0000000140408104: call    loc_1404080F7
 * 0000000140408109: add     rsp, 8
 * 000000014040810D: call    loc_140408100
 * 0000000140408112: add     rsp, 8
 * 0000000140408116: call    loc_140408109
 * 000000014040811B: add     rsp, 8
 * 000000014040811F: call    loc_140408112
 * 0000000140408124: add     rsp, 8
 * 0000000140408128: call    loc_14040811B
 * 000000014040812D: add     rsp, 8
 * 0000000140408131: call    loc_140408124
 * 0000000140408136: add     rsp, 8
 * 000000014040813A: mov     eax, 0DADAh
 * 000000014040813F: lfence
 * 0000000140408142: mov     byte ptr gs:853h, 0
 * 000000014040814B: test    byte ptr [r10+3], 80h
 * 0000000140408150: jz      short loc_140408194
 * 0000000140408152: mov     ecx, 0C0000102h
 * 0000000140408157: rdmsr
 * 0000000140408159: shl     rdx, 20h
 * 000000014040815D: or      rax, rdx
 * 0000000140408160: cmp     rax, cs:MmUserProbeAddress
 * 0000000140408167: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040816F: cmp     [r10+0F0h], rax
 * 0000000140408176: jz      short loc_140408194
 * 0000000140408178: mov     rdx, [r10+1F0h]
 * 000000014040817F: bts     dword ptr [r10+74h], 8
 * 0000000140408185: dec     word ptr [r10+1E6h]
 * 000000014040818D: mov     [rdx+80h], rax
 * 0000000140408194: test    byte ptr [r10+3], 3
 * 0000000140408199: mov     [rbp+0E8h+var_68], 0
 * 00000001404081A2: jz      short loc_1404081A9
 * 00000001404081A4: call    KiSaveDebugRegisterState
 * 00000001404081A9: cld
 * 00000001404081AA: stmxcsr [rbp+0E8h+var_13C]
 * 00000001404081AE: ldmxcsr dword ptr gs:180h
 * 00000001404081B7: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001404081BB: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001404081BF: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001404081C3: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001404081C7: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001404081CB: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001404081CF: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404081D6: jz      short loc_1404081E4
 * 00000001404081D8: test    [rbp+0E8h+arg_0], 1
 * 00000001404081DF: jz      short loc_1404081E4
 * 00000001404081E1: stac
 * 00000001404081E4: test    [rbp+0E8h+arg_8], 200h
 * 00000001404081EE: jz      short loc_1404081F1
 * 00000001404081F0: sti
 * 00000001404081F1: mov     ecx, 10000003h
 * 00000001404081F6: xor     edx, edx
 * 00000001404081F8: mov     r8, [rbp+0E8h]
 * 00000001404081FF: call    KiExceptionDispatch
 * 0000000140408204: nop
 * 0000000140408205: retn
 */
