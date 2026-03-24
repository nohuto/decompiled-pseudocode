/*
 * XREFs of KyStartUserThread @ 0x1404048F0
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x1404048F0 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x140404BB0 (KxStartUserThread.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x1404048F0
 * Reason: Hex-Rays returned no pseudocode for 0x1404048F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404048F0: sub     rsp, 8
 * 00000001404048F4: push    rbp
 * 00000001404048F5: sub     rsp, 158h
 * 00000001404048FC: lea     rbp, [rsp+80h]
 * 0000000140404904: mov     [rbp+0E8h+var_13D], 1
 * 0000000140404908: mov     [rbp+0E8h+var_138], rax
 * 000000014040490C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140404910: mov     [rbp+0E8h+var_128], rdx
 * 0000000140404914: mov     [rbp+0E8h+var_120], r8
 * 0000000140404918: mov     [rbp+0E8h+var_118], r9
 * 000000014040491C: mov     [rbp+0E8h+var_110], r10
 * 0000000140404920: mov     [rbp+0E8h+var_108], r11
 * 0000000140404924: test    [rbp+0E8h+arg_0], 1
 * 000000014040492B: jnz     short loc_14040495A
 * 000000014040492D: lfence
 * 0000000140404930: test    byte ptr gs:278h, 1
 * 0000000140404939: jnz     short loc_140404943
 * 000000014040493B: lfence
 * 000000014040493E: jmp     loc_140404B50
 * 0000000140404943: movzx   eax, byte ptr gs:27Ah
 * 000000014040494C: mov     ecx, 48h ; 'H'
 * 0000000140404951: xor     edx, edx
 * 0000000140404953: wrmsr
 * 0000000140404955: jmp     loc_140404B50
 * 000000014040495A: test    cs:KiKvaShadow, 1
 * 0000000140404961: jnz     short loc_140404966
 * 0000000140404963: swapgs
 * 0000000140404966: lfence
 * 0000000140404969: mov     r10, gs:188h
 * 0000000140404972: mov     rcx, gs:188h
 * 000000014040497B: mov     rcx, [rcx+220h]
 * 0000000140404982: mov     rcx, [rcx+9E0h]
 * 0000000140404989: mov     gs:270h, rcx
 * 0000000140404992: mov     cl, gs:850h
 * 000000014040499A: mov     gs:851h, cl
 * 00000001404049A2: mov     cl, gs:278h
 * 00000001404049AA: mov     gs:852h, cl
 * 00000001404049B2: movzx   eax, byte ptr gs:27Bh
 * 00000001404049BB: cmp     gs:27Ah, al
 * 00000001404049C3: jz      short loc_1404049D6
 * 00000001404049C5: mov     gs:27Ah, al
 * 00000001404049CD: mov     ecx, 48h ; 'H'
 * 00000001404049D2: xor     edx, edx
 * 00000001404049D4: wrmsr
 * 00000001404049D6: movzx   edx, byte ptr gs:278h
 * 00000001404049DF: test    edx, 8
 * 00000001404049E5: jz      short loc_1404049FE
 * 00000001404049E7: mov     eax, 1
 * 00000001404049EC: xor     edx, edx
 * 00000001404049EE: mov     ecx, 49h ; 'I'
 * 00000001404049F3: wrmsr
 * 00000001404049F5: movzx   edx, byte ptr gs:278h
 * 00000001404049FE: test    edx, 2
 * 0000000140404A04: jz      loc_140404B2F
 * 0000000140404A0A: call    loc_140404B1D
 * 0000000140404A0F: add     rsp, 8
 * 0000000140404A13: call    loc_140404B26
 * 0000000140404A18: add     rsp, 8
 * 0000000140404A1C: call    loc_140404A0F
 * 0000000140404A21: add     rsp, 8
 * 0000000140404A25: call    loc_140404A18
 * 0000000140404A2A: add     rsp, 8
 * 0000000140404A2E: call    loc_140404A21
 * 0000000140404A33: add     rsp, 8
 * 0000000140404A37: call    loc_140404A2A
 * 0000000140404A3C: add     rsp, 8
 * 0000000140404A40: call    loc_140404A33
 * 0000000140404A45: add     rsp, 8
 * 0000000140404A49: call    loc_140404A3C
 * 0000000140404A4E: add     rsp, 8
 * 0000000140404A52: call    loc_140404A45
 * 0000000140404A57: add     rsp, 8
 * 0000000140404A5B: call    loc_140404A4E
 * 0000000140404A60: add     rsp, 8
 * 0000000140404A64: call    loc_140404A57
 * 0000000140404A69: add     rsp, 8
 * 0000000140404A6D: call    loc_140404A60
 * 0000000140404A72: add     rsp, 8
 * 0000000140404A76: call    loc_140404A69
 * 0000000140404A7B: add     rsp, 8
 * 0000000140404A7F: call    loc_140404A72
 * 0000000140404A84: add     rsp, 8
 * 0000000140404A88: call    loc_140404A7B
 * 0000000140404A8D: add     rsp, 8
 * 0000000140404A91: call    loc_140404A84
 * 0000000140404A96: add     rsp, 8
 * 0000000140404A9A: call    loc_140404A8D
 * 0000000140404A9F: add     rsp, 8
 * 0000000140404AA3: call    loc_140404A96
 * 0000000140404AA8: add     rsp, 8
 * 0000000140404AAC: call    loc_140404A9F
 * 0000000140404AB1: add     rsp, 8
 * 0000000140404AB5: call    loc_140404AA8
 * 0000000140404ABA: add     rsp, 8
 * 0000000140404ABE: call    loc_140404AB1
 * 0000000140404AC3: add     rsp, 8
 * 0000000140404AC7: call    loc_140404ABA
 * 0000000140404ACC: add     rsp, 8
 * 0000000140404AD0: call    loc_140404AC3
 * 0000000140404AD5: add     rsp, 8
 * 0000000140404AD9: call    loc_140404ACC
 * 0000000140404ADE: add     rsp, 8
 * 0000000140404AE2: call    loc_140404AD5
 * 0000000140404AE7: add     rsp, 8
 * 0000000140404AEB: call    loc_140404ADE
 * 0000000140404AF0: add     rsp, 8
 * 0000000140404AF4: call    loc_140404AE7
 * 0000000140404AF9: add     rsp, 8
 * 0000000140404AFD: call    loc_140404AF0
 * 0000000140404B02: add     rsp, 8
 * 0000000140404B06: call    loc_140404AF9
 * 0000000140404B0B: add     rsp, 8
 * 0000000140404B0F: call    loc_140404B02
 * 0000000140404B14: add     rsp, 8
 * 0000000140404B18: call    loc_140404B0B
 * 0000000140404B1D: add     rsp, 8
 * 0000000140404B21: call    loc_140404B14
 * 0000000140404B26: add     rsp, 8
 * 0000000140404B2A: mov     eax, 0DADAh
 * 0000000140404B2F: lfence
 * 0000000140404B32: mov     byte ptr gs:853h, 0
 * 0000000140404B3B: test    byte ptr [r10+3], 3
 * 0000000140404B40: mov     [rbp+0E8h+var_68], 0
 * 0000000140404B49: jz      short loc_140404B50
 * 0000000140404B4B: call    KiSaveDebugRegisterState
 * 0000000140404B50: cld
 * 0000000140404B51: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140404B55: ldmxcsr dword ptr gs:180h
 * 0000000140404B5E: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140404B62: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140404B66: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140404B6A: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140404B6E: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140404B72: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140404B76: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140404B7D: jz      short loc_140404B8B
 * 0000000140404B7F: test    [rbp+0E8h+arg_0], 1
 * 0000000140404B86: jz      short loc_140404B8B
 * 0000000140404B88: stac
 * 0000000140404B8B: test    [rbp+0E8h+arg_8], 200h
 * 0000000140404B95: jz      short loc_140404B98
 * 0000000140404B97: sti
 * 0000000140404B98: call    KxStartUserThread
 * 0000000140404B9D: nop     dword ptr [rax]
 * 0000000140404BA0: nop
 * 0000000140404BA1: retn
 */
