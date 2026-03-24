/*
 * XREFs of KiAlignmentFault @ 0x14040BFC0
 * Callers:
 *     KiAlignmentFaultShadow @ 0x140A17940 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x14040BFC0 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x14040BFC0
 * Reason: Hex-Rays returned no pseudocode for 0x14040BFC0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040BFC0: push    rbp
 * 000000014040BFC1: sub     rsp, 158h
 * 000000014040BFC8: lea     rbp, [rsp+80h]
 * 000000014040BFD0: mov     [rbp+0D8h+var_12D], 1
 * 000000014040BFD4: mov     [rbp+0D8h+var_128], rax
 * 000000014040BFD8: mov     [rbp+0D8h+var_120], rcx
 * 000000014040BFDC: mov     [rbp+0D8h+var_118], rdx
 * 000000014040BFE0: mov     [rbp+0D8h+var_110], r8
 * 000000014040BFE4: mov     [rbp+0D8h+var_108], r9
 * 000000014040BFE8: mov     [rbp+0D8h+var_100], r10
 * 000000014040BFEC: mov     [rbp+0D8h+var_F8], r11
 * 000000014040BFF0: test    [rbp+0D8h+arg_8], 1
 * 000000014040BFF7: jnz     short loc_14040C026
 * 000000014040BFF9: lfence
 * 000000014040BFFC: test    byte ptr gs:278h, 1
 * 000000014040C005: jnz     short loc_14040C00F
 * 000000014040C007: lfence
 * 000000014040C00A: jmp     loc_14040C265
 * 000000014040C00F: movzx   eax, byte ptr gs:27Ah
 * 000000014040C018: mov     ecx, 48h ; 'H'
 * 000000014040C01D: xor     edx, edx
 * 000000014040C01F: wrmsr
 * 000000014040C021: jmp     loc_14040C265
 * 000000014040C026: test    cs:KiKvaShadow, 1
 * 000000014040C02D: jnz     short loc_14040C032
 * 000000014040C02F: swapgs
 * 000000014040C032: lfence
 * 000000014040C035: mov     r10, gs:188h
 * 000000014040C03E: mov     rcx, gs:188h
 * 000000014040C047: mov     rcx, [rcx+220h]
 * 000000014040C04E: mov     rcx, [rcx+9E0h]
 * 000000014040C055: mov     gs:270h, rcx
 * 000000014040C05E: mov     cl, gs:850h
 * 000000014040C066: mov     gs:851h, cl
 * 000000014040C06E: mov     cl, gs:278h
 * 000000014040C076: mov     gs:852h, cl
 * 000000014040C07E: movzx   eax, byte ptr gs:27Bh
 * 000000014040C087: cmp     gs:27Ah, al
 * 000000014040C08F: jz      short loc_14040C0A2
 * 000000014040C091: mov     gs:27Ah, al
 * 000000014040C099: mov     ecx, 48h ; 'H'
 * 000000014040C09E: xor     edx, edx
 * 000000014040C0A0: wrmsr
 * 000000014040C0A2: movzx   edx, byte ptr gs:278h
 * 000000014040C0AB: test    edx, 8
 * 000000014040C0B1: jz      short loc_14040C0CA
 * 000000014040C0B3: mov     eax, 1
 * 000000014040C0B8: xor     edx, edx
 * 000000014040C0BA: mov     ecx, 49h ; 'I'
 * 000000014040C0BF: wrmsr
 * 000000014040C0C1: movzx   edx, byte ptr gs:278h
 * 000000014040C0CA: test    edx, 2
 * 000000014040C0D0: jz      loc_14040C1FB
 * 000000014040C0D6: call    loc_14040C1E9
 * 000000014040C0DB: add     rsp, 8
 * 000000014040C0DF: call    loc_14040C1F2
 * 000000014040C0E4: add     rsp, 8
 * 000000014040C0E8: call    loc_14040C0DB
 * 000000014040C0ED: add     rsp, 8
 * 000000014040C0F1: call    loc_14040C0E4
 * 000000014040C0F6: add     rsp, 8
 * 000000014040C0FA: call    loc_14040C0ED
 * 000000014040C0FF: add     rsp, 8
 * 000000014040C103: call    loc_14040C0F6
 * 000000014040C108: add     rsp, 8
 * 000000014040C10C: call    loc_14040C0FF
 * 000000014040C111: add     rsp, 8
 * 000000014040C115: call    loc_14040C108
 * 000000014040C11A: add     rsp, 8
 * 000000014040C11E: call    loc_14040C111
 * 000000014040C123: add     rsp, 8
 * 000000014040C127: call    loc_14040C11A
 * 000000014040C12C: add     rsp, 8
 * 000000014040C130: call    loc_14040C123
 * 000000014040C135: add     rsp, 8
 * 000000014040C139: call    loc_14040C12C
 * 000000014040C13E: add     rsp, 8
 * 000000014040C142: call    loc_14040C135
 * 000000014040C147: add     rsp, 8
 * 000000014040C14B: call    loc_14040C13E
 * 000000014040C150: add     rsp, 8
 * 000000014040C154: call    loc_14040C147
 * 000000014040C159: add     rsp, 8
 * 000000014040C15D: call    loc_14040C150
 * 000000014040C162: add     rsp, 8
 * 000000014040C166: call    loc_14040C159
 * 000000014040C16B: add     rsp, 8
 * 000000014040C16F: call    loc_14040C162
 * 000000014040C174: add     rsp, 8
 * 000000014040C178: call    loc_14040C16B
 * 000000014040C17D: add     rsp, 8
 * 000000014040C181: call    loc_14040C174
 * 000000014040C186: add     rsp, 8
 * 000000014040C18A: call    loc_14040C17D
 * 000000014040C18F: add     rsp, 8
 * 000000014040C193: call    loc_14040C186
 * 000000014040C198: add     rsp, 8
 * 000000014040C19C: call    loc_14040C18F
 * 000000014040C1A1: add     rsp, 8
 * 000000014040C1A5: call    loc_14040C198
 * 000000014040C1AA: add     rsp, 8
 * 000000014040C1AE: call    loc_14040C1A1
 * 000000014040C1B3: add     rsp, 8
 * 000000014040C1B7: call    loc_14040C1AA
 * 000000014040C1BC: add     rsp, 8
 * 000000014040C1C0: call    loc_14040C1B3
 * 000000014040C1C5: add     rsp, 8
 * 000000014040C1C9: call    loc_14040C1BC
 * 000000014040C1CE: add     rsp, 8
 * 000000014040C1D2: call    loc_14040C1C5
 * 000000014040C1D7: add     rsp, 8
 * 000000014040C1DB: call    loc_14040C1CE
 * 000000014040C1E0: add     rsp, 8
 * 000000014040C1E4: call    loc_14040C1D7
 * 000000014040C1E9: add     rsp, 8
 * 000000014040C1ED: call    loc_14040C1E0
 * 000000014040C1F2: add     rsp, 8
 * 000000014040C1F6: mov     eax, 0DADAh
 * 000000014040C1FB: lfence
 * 000000014040C1FE: mov     byte ptr gs:853h, 0
 * 000000014040C207: test    byte ptr [r10+3], 80h
 * 000000014040C20C: jz      short loc_14040C250
 * 000000014040C20E: mov     ecx, 0C0000102h
 * 000000014040C213: rdmsr
 * 000000014040C215: shl     rdx, 20h
 * 000000014040C219: or      rax, rdx
 * 000000014040C21C: cmp     rax, cs:MmUserProbeAddress
 * 000000014040C223: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040C22B: cmp     [r10+0F0h], rax
 * 000000014040C232: jz      short loc_14040C250
 * 000000014040C234: mov     rdx, [r10+1F0h]
 * 000000014040C23B: bts     dword ptr [r10+74h], 8
 * 000000014040C241: dec     word ptr [r10+1E6h]
 * 000000014040C249: mov     [rdx+80h], rax
 * 000000014040C250: test    byte ptr [r10+3], 3
 * 000000014040C255: mov     [rbp+0D8h+var_58], 0
 * 000000014040C25E: jz      short loc_14040C265
 * 000000014040C260: call    KiSaveDebugRegisterState
 * 000000014040C265: cld
 * 000000014040C266: stmxcsr [rbp+0D8h+var_12C]
 * 000000014040C26A: ldmxcsr dword ptr gs:180h
 * 000000014040C273: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014040C277: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014040C27B: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014040C27F: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014040C283: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014040C287: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014040C28B: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040C292: jz      short loc_14040C2A0
 * 000000014040C294: test    [rbp+0D8h+arg_8], 1
 * 000000014040C29B: jz      short loc_14040C2A0
 * 000000014040C29D: stac
 * 000000014040C2A0: mov     eax, [rbp+0E0h]
 * 000000014040C2A6: test    [rbp+0D8h+arg_10], 200h
 * 000000014040C2B0: jz      short loc_14040C2B3
 * 000000014040C2B2: sti
 * 000000014040C2B3: mov     ecx, 80000002h
 * 000000014040C2B8: xor     edx, edx
 * 000000014040C2BA: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040C2C1: call    KiExceptionDispatch
 * 000000014040C2C6: nop
 * 000000014040C2C7: retn
 */
