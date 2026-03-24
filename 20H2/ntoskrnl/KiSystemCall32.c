/*
 * XREFs of KiSystemCall32 @ 0x14040EB40
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x14040EB40 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x14040EB40
 * Reason: Hex-Rays returned no pseudocode for 0x14040EB40
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040EB40: swapgs
 * 000000014040EB43: mov     gs:10h, rsp
 * 000000014040EB4C: mov     rsp, gs:1A8h
 * 000000014040EB55: push    2Bh ; '+'
 * 000000014040EB57: push    qword ptr gs:10h
 * 000000014040EB5F: push    r11
 * 000000014040EB61: push    23h ; '#'
 * 000000014040EB63: push    rcx
 * 000000014040EB64: swapgs
 * 000000014040EB67: lfence
 * 000000014040EB6A: sub     rsp, 8
 * 000000014040EB6E: push    rbp
 * 000000014040EB6F: sub     rsp, 158h
 * 000000014040EB76: lea     rbp, [rsp+190h+var_110]
 * 000000014040EB7E: mov     byte ptr [rbp-55h], 1
 * 000000014040EB82: mov     [rbp-50h], rax
 * 000000014040EB86: mov     [rbp-48h], rcx
 * 000000014040EB8A: mov     [rbp-40h], rdx
 * 000000014040EB8E: mov     [rbp-38h], r8
 * 000000014040EB92: mov     [rbp-30h], r9
 * 000000014040EB96: mov     [rbp-28h], r10
 * 000000014040EB9A: mov     [rbp-20h], r11
 * 000000014040EB9E: test    byte ptr [rbp+0F0h], 1
 * 000000014040EBA5: jnz     short loc_14040EBD4
 * 000000014040EBA7: lfence
 * 000000014040EBAA: test    byte ptr gs:278h, 1
 * 000000014040EBB3: jnz     short loc_14040EBBD
 * 000000014040EBB5: lfence
 * 000000014040EBB8: jmp     loc_14040EE13
 * 000000014040EBBD: movzx   eax, byte ptr gs:27Ah
 * 000000014040EBC6: mov     ecx, 48h ; 'H'
 * 000000014040EBCB: xor     edx, edx
 * 000000014040EBCD: wrmsr
 * 000000014040EBCF: jmp     loc_14040EE13
 * 000000014040EBD4: test    cs:KiKvaShadow, 1
 * 000000014040EBDB: jnz     short loc_14040EBE0
 * 000000014040EBDD: swapgs
 * 000000014040EBE0: lfence
 * 000000014040EBE3: mov     r10, gs:188h
 * 000000014040EBEC: mov     rcx, gs:188h
 * 000000014040EBF5: mov     rcx, [rcx+220h]
 * 000000014040EBFC: mov     rcx, [rcx+9E0h]
 * 000000014040EC03: mov     gs:270h, rcx
 * 000000014040EC0C: mov     cl, gs:850h
 * 000000014040EC14: mov     gs:851h, cl
 * 000000014040EC1C: mov     cl, gs:278h
 * 000000014040EC24: mov     gs:852h, cl
 * 000000014040EC2C: movzx   eax, byte ptr gs:27Bh
 * 000000014040EC35: cmp     gs:27Ah, al
 * 000000014040EC3D: jz      short loc_14040EC50
 * 000000014040EC3F: mov     gs:27Ah, al
 * 000000014040EC47: mov     ecx, 48h ; 'H'
 * 000000014040EC4C: xor     edx, edx
 * 000000014040EC4E: wrmsr
 * 000000014040EC50: movzx   edx, byte ptr gs:278h
 * 000000014040EC59: test    edx, 8
 * 000000014040EC5F: jz      short loc_14040EC78
 * 000000014040EC61: mov     eax, 1
 * 000000014040EC66: xor     edx, edx
 * 000000014040EC68: mov     ecx, 49h ; 'I'
 * 000000014040EC6D: wrmsr
 * 000000014040EC6F: movzx   edx, byte ptr gs:278h
 * 000000014040EC78: test    edx, 2
 * 000000014040EC7E: jz      loc_14040EDA9
 * 000000014040EC84: call    loc_14040ED97
 * 000000014040EC89: add     rsp, 8
 * 000000014040EC8D: call    loc_14040EDA0
 * 000000014040EC92: add     rsp, 8
 * 000000014040EC96: call    loc_14040EC89
 * 000000014040EC9B: add     rsp, 8
 * 000000014040EC9F: call    loc_14040EC92
 * 000000014040ECA4: add     rsp, 8
 * 000000014040ECA8: call    loc_14040EC9B
 * 000000014040ECAD: add     rsp, 8
 * 000000014040ECB1: call    loc_14040ECA4
 * 000000014040ECB6: add     rsp, 8
 * 000000014040ECBA: call    loc_14040ECAD
 * 000000014040ECBF: add     rsp, 8
 * 000000014040ECC3: call    loc_14040ECB6
 * 000000014040ECC8: add     rsp, 8
 * 000000014040ECCC: call    loc_14040ECBF
 * 000000014040ECD1: add     rsp, 8
 * 000000014040ECD5: call    loc_14040ECC8
 * 000000014040ECDA: add     rsp, 8
 * 000000014040ECDE: call    loc_14040ECD1
 * 000000014040ECE3: add     rsp, 8
 * 000000014040ECE7: call    loc_14040ECDA
 * 000000014040ECEC: add     rsp, 8
 * 000000014040ECF0: call    loc_14040ECE3
 * 000000014040ECF5: add     rsp, 8
 * 000000014040ECF9: call    loc_14040ECEC
 * 000000014040ECFE: add     rsp, 8
 * 000000014040ED02: call    loc_14040ECF5
 * 000000014040ED07: add     rsp, 8
 * 000000014040ED0B: call    loc_14040ECFE
 * 000000014040ED10: add     rsp, 8
 * 000000014040ED14: call    loc_14040ED07
 * 000000014040ED19: add     rsp, 8
 * 000000014040ED1D: call    loc_14040ED10
 * 000000014040ED22: add     rsp, 8
 * 000000014040ED26: call    loc_14040ED19
 * 000000014040ED2B: add     rsp, 8
 * 000000014040ED2F: call    loc_14040ED22
 * 000000014040ED34: add     rsp, 8
 * 000000014040ED38: call    loc_14040ED2B
 * 000000014040ED3D: add     rsp, 8
 * 000000014040ED41: call    loc_14040ED34
 * 000000014040ED46: add     rsp, 8
 * 000000014040ED4A: call    loc_14040ED3D
 * 000000014040ED4F: add     rsp, 8
 * 000000014040ED53: call    loc_14040ED46
 * 000000014040ED58: add     rsp, 8
 * 000000014040ED5C: call    loc_14040ED4F
 * 000000014040ED61: add     rsp, 8
 * 000000014040ED65: call    loc_14040ED58
 * 000000014040ED6A: add     rsp, 8
 * 000000014040ED6E: call    loc_14040ED61
 * 000000014040ED73: add     rsp, 8
 * 000000014040ED77: call    loc_14040ED6A
 * 000000014040ED7C: add     rsp, 8
 * 000000014040ED80: call    loc_14040ED73
 * 000000014040ED85: add     rsp, 8
 * 000000014040ED89: call    loc_14040ED7C
 * 000000014040ED8E: add     rsp, 8
 * 000000014040ED92: call    loc_14040ED85
 * 000000014040ED97: add     rsp, 8
 * 000000014040ED9B: call    loc_14040ED8E
 * 000000014040EDA0: add     rsp, 8
 * 000000014040EDA4: mov     eax, 0DADAh
 * 000000014040EDA9: lfence
 * 000000014040EDAC: mov     byte ptr gs:853h, 0
 * 000000014040EDB5: test    byte ptr [r10+3], 80h
 * 000000014040EDBA: jz      short loc_14040EDFE
 * 000000014040EDBC: mov     ecx, 0C0000102h
 * 000000014040EDC1: rdmsr
 * 000000014040EDC3: shl     rdx, 20h
 * 000000014040EDC7: or      rax, rdx
 * 000000014040EDCA: cmp     rax, cs:MmUserProbeAddress
 * 000000014040EDD1: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040EDD9: cmp     [r10+0F0h], rax
 * 000000014040EDE0: jz      short loc_14040EDFE
 * 000000014040EDE2: mov     rdx, [r10+1F0h]
 * 000000014040EDE9: bts     dword ptr [r10+74h], 8
 * 000000014040EDEF: dec     word ptr [r10+1E6h]
 * 000000014040EDF7: mov     [rdx+80h], rax
 * 000000014040EDFE: test    byte ptr [r10+3], 3
 * 000000014040EE03: mov     word ptr [rbp+80h], 0
 * 000000014040EE0C: jz      short loc_14040EE13
 * 000000014040EE0E: call    KiSaveDebugRegisterState
 * 000000014040EE13: cld
 * 000000014040EE14: stmxcsr dword ptr [rbp-54h]
 * 000000014040EE18: ldmxcsr dword ptr gs:180h
 * 000000014040EE21: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014040EE25: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014040EE29: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014040EE2D: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014040EE31: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014040EE35: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014040EE39: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040EE40: jz      short loc_14040EE4E
 * 000000014040EE42: test    byte ptr [rbp+0F0h], 1
 * 000000014040EE49: jz      short loc_14040EE4E
 * 000000014040EE4B: stac
 * 000000014040EE4E: sub     qword ptr [rbp+0E8h], 2
 * 000000014040EE56: and     dword ptr [rbp+0ECh], 0
 * 000000014040EE5D: sti
 * 000000014040EE5E: mov     ecx, 0C000001Dh
 * 000000014040EE63: xor     edx, edx
 * 000000014040EE65: mov     r8, [rbp+0E8h]
 * 000000014040EE6C: call    KiExceptionDispatch
 * 000000014040EE71: nop
 * 000000014040EE72: retn
 */
