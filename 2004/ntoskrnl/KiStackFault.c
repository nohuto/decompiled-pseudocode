/*
 * XREFs of KiStackFault @ 0x140404880
 * Callers:
 *     KiStackFaultShadow @ 0x140A11740 (KiStackFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x140404880 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x140409080 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x140404880
 * Reason: Hex-Rays returned no pseudocode for 0x140404880
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140404880: push    rbp
 * 0000000140404881: sub     rsp, 158h
 * 0000000140404888: lea     rbp, [rsp+80h]
 * 0000000140404890: mov     [rbp+0D8h+var_12D], 1
 * 0000000140404894: mov     [rbp+0D8h+var_128], rax
 * 0000000140404898: mov     [rbp+0D8h+var_120], rcx
 * 000000014040489C: mov     [rbp+0D8h+var_118], rdx
 * 00000001404048A0: mov     [rbp+0D8h+var_110], r8
 * 00000001404048A4: mov     [rbp+0D8h+var_108], r9
 * 00000001404048A8: mov     [rbp+0D8h+var_100], r10
 * 00000001404048AC: mov     [rbp+0D8h+var_F8], r11
 * 00000001404048B0: test    [rbp+0D8h+arg_8], 1
 * 00000001404048B7: jnz     short loc_1404048E6
 * 00000001404048B9: lfence
 * 00000001404048BC: test    byte ptr gs:278h, 1
 * 00000001404048C5: jnz     short loc_1404048CF
 * 00000001404048C7: lfence
 * 00000001404048CA: jmp     loc_140404B2B
 * 00000001404048CF: movzx   eax, byte ptr gs:27Ah
 * 00000001404048D8: mov     ecx, 48h ; 'H'
 * 00000001404048DD: xor     edx, edx
 * 00000001404048DF: wrmsr
 * 00000001404048E1: jmp     loc_140404B2B
 * 00000001404048E6: test    cs:KiKvaShadow, 1
 * 00000001404048ED: jnz     short loc_1404048F2
 * 00000001404048EF: swapgs
 * 00000001404048F2: lfence
 * 00000001404048F5: mov     r10, gs:188h
 * 00000001404048FE: mov     rcx, gs:188h
 * 0000000140404907: mov     rcx, [rcx+220h]
 * 000000014040490E: mov     rcx, [rcx+9E0h]
 * 0000000140404915: mov     gs:270h, rcx
 * 000000014040491E: mov     cl, gs:850h
 * 0000000140404926: mov     gs:851h, cl
 * 000000014040492E: mov     cl, gs:278h
 * 0000000140404936: mov     gs:852h, cl
 * 000000014040493E: movzx   eax, byte ptr gs:27Bh
 * 0000000140404947: cmp     gs:27Ah, al
 * 000000014040494F: jz      short loc_140404962
 * 0000000140404951: mov     gs:27Ah, al
 * 0000000140404959: mov     ecx, 48h ; 'H'
 * 000000014040495E: xor     edx, edx
 * 0000000140404960: wrmsr
 * 0000000140404962: movzx   edx, byte ptr gs:278h
 * 000000014040496B: test    edx, 8
 * 0000000140404971: jz      short loc_140404986
 * 0000000140404973: mov     eax, 1
 * 0000000140404978: xor     edx, edx
 * 000000014040497A: mov     ecx, 49h ; 'I'
 * 000000014040497F: wrmsr
 * 0000000140404981: jmp     loc_140404AC4
 * 0000000140404986: test    edx, 2
 * 000000014040498C: jz      loc_140404AC1
 * 0000000140404992: test    byte ptr gs:279h, 4
 * 000000014040499B: jnz     loc_140404AC1
 * 00000001404049A1: call    loc_140404AB4
 * 00000001404049A6: add     rsp, 8
 * 00000001404049AA: call    loc_140404ABD
 * 00000001404049AF: add     rsp, 8
 * 00000001404049B3: call    loc_1404049A6
 * 00000001404049B8: add     rsp, 8
 * 00000001404049BC: call    loc_1404049AF
 * 00000001404049C1: add     rsp, 8
 * 00000001404049C5: call    loc_1404049B8
 * 00000001404049CA: add     rsp, 8
 * 00000001404049CE: call    loc_1404049C1
 * 00000001404049D3: add     rsp, 8
 * 00000001404049D7: call    loc_1404049CA
 * 00000001404049DC: add     rsp, 8
 * 00000001404049E0: call    loc_1404049D3
 * 00000001404049E5: add     rsp, 8
 * 00000001404049E9: call    loc_1404049DC
 * 00000001404049EE: add     rsp, 8
 * 00000001404049F2: call    loc_1404049E5
 * 00000001404049F7: add     rsp, 8
 * 00000001404049FB: call    loc_1404049EE
 * 0000000140404A00: add     rsp, 8
 * 0000000140404A04: call    loc_1404049F7
 * 0000000140404A09: add     rsp, 8
 * 0000000140404A0D: call    loc_140404A00
 * 0000000140404A12: add     rsp, 8
 * 0000000140404A16: call    loc_140404A09
 * 0000000140404A1B: add     rsp, 8
 * 0000000140404A1F: call    loc_140404A12
 * 0000000140404A24: add     rsp, 8
 * 0000000140404A28: call    loc_140404A1B
 * 0000000140404A2D: add     rsp, 8
 * 0000000140404A31: call    loc_140404A24
 * 0000000140404A36: add     rsp, 8
 * 0000000140404A3A: call    loc_140404A2D
 * 0000000140404A3F: add     rsp, 8
 * 0000000140404A43: call    loc_140404A36
 * 0000000140404A48: add     rsp, 8
 * 0000000140404A4C: call    loc_140404A3F
 * 0000000140404A51: add     rsp, 8
 * 0000000140404A55: call    loc_140404A48
 * 0000000140404A5A: add     rsp, 8
 * 0000000140404A5E: call    loc_140404A51
 * 0000000140404A63: add     rsp, 8
 * 0000000140404A67: call    loc_140404A5A
 * 0000000140404A6C: add     rsp, 8
 * 0000000140404A70: call    loc_140404A63
 * 0000000140404A75: add     rsp, 8
 * 0000000140404A79: call    loc_140404A6C
 * 0000000140404A7E: add     rsp, 8
 * 0000000140404A82: call    loc_140404A75
 * 0000000140404A87: add     rsp, 8
 * 0000000140404A8B: call    loc_140404A7E
 * 0000000140404A90: add     rsp, 8
 * 0000000140404A94: call    loc_140404A87
 * 0000000140404A99: add     rsp, 8
 * 0000000140404A9D: call    loc_140404A90
 * 0000000140404AA2: add     rsp, 8
 * 0000000140404AA6: call    loc_140404A99
 * 0000000140404AAB: add     rsp, 8
 * 0000000140404AAF: call    loc_140404AA2
 * 0000000140404AB4: add     rsp, 8
 * 0000000140404AB8: call    loc_140404AAB
 * 0000000140404ABD: add     rsp, 8
 * 0000000140404AC1: lfence
 * 0000000140404AC4: mov     byte ptr gs:853h, 0
 * 0000000140404ACD: test    byte ptr [r10+3], 80h
 * 0000000140404AD2: jz      short loc_140404B16
 * 0000000140404AD4: mov     ecx, 0C0000102h
 * 0000000140404AD9: rdmsr
 * 0000000140404ADB: shl     rdx, 20h
 * 0000000140404ADF: or      rax, rdx
 * 0000000140404AE2: cmp     rax, cs:MmUserProbeAddress
 * 0000000140404AE9: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140404AF1: cmp     [r10+0F0h], rax
 * 0000000140404AF8: jz      short loc_140404B16
 * 0000000140404AFA: mov     rdx, [r10+1F0h]
 * 0000000140404B01: bts     dword ptr [r10+74h], 8
 * 0000000140404B07: dec     word ptr [r10+1E6h]
 * 0000000140404B0F: mov     [rdx+80h], rax
 * 0000000140404B16: test    byte ptr [r10+3], 3
 * 0000000140404B1B: mov     [rbp+0D8h+var_58], 0
 * 0000000140404B24: jz      short loc_140404B2B
 * 0000000140404B26: call    KiSaveDebugRegisterState
 * 0000000140404B2B: cld
 * 0000000140404B2C: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140404B30: ldmxcsr dword ptr gs:180h
 * 0000000140404B39: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140404B3D: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140404B41: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140404B45: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140404B49: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140404B4D: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140404B51: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140404B58: jz      short loc_140404B66
 * 0000000140404B5A: test    [rbp+0D8h+arg_8], 1
 * 0000000140404B61: jz      short loc_140404B66
 * 0000000140404B63: stac
 * 0000000140404B66: mov     eax, [rbp+0E0h]
 * 0000000140404B6C: test    [rbp+0D8h+arg_10], 200h
 * 0000000140404B76: jz      short loc_140404B79
 * 0000000140404B78: sti
 * 0000000140404B79: mov     ecx, 0C0000005h
 * 0000000140404B7E: mov     edx, 2
 * 0000000140404B83: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140404B8A: mov     r9d, [rbp+0E0h]
 * 0000000140404B91: or      r9d, 3
 * 0000000140404B95: and     r9d, 0FFFFh
 * 0000000140404B9C: test    [rbp+0D8h+arg_8], 1
 * 0000000140404BA3: jnz     short loc_140404BA9
 * 0000000140404BA5: or      r9, 0FFFFFFFFFFFFFFFFh
 * 0000000140404BA9: xor     r10, r10
 * 0000000140404BAC: call    KiExceptionDispatch
 * 0000000140404BB1: nop
 * 0000000140404BB2: retn
 */
