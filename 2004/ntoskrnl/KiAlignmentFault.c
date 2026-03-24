/*
 * XREFs of KiAlignmentFault @ 0x140405900
 * Callers:
 *     KiAlignmentFaultShadow @ 0x140A11940 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x140405900 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x140409080 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x140405900
 * Reason: Hex-Rays returned no pseudocode for 0x140405900
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140405900: push    rbp
 * 0000000140405901: sub     rsp, 158h
 * 0000000140405908: lea     rbp, [rsp+80h]
 * 0000000140405910: mov     [rbp+0D8h+var_12D], 1
 * 0000000140405914: mov     [rbp+0D8h+var_128], rax
 * 0000000140405918: mov     [rbp+0D8h+var_120], rcx
 * 000000014040591C: mov     [rbp+0D8h+var_118], rdx
 * 0000000140405920: mov     [rbp+0D8h+var_110], r8
 * 0000000140405924: mov     [rbp+0D8h+var_108], r9
 * 0000000140405928: mov     [rbp+0D8h+var_100], r10
 * 000000014040592C: mov     [rbp+0D8h+var_F8], r11
 * 0000000140405930: test    [rbp+0D8h+arg_8], 1
 * 0000000140405937: jnz     short loc_140405966
 * 0000000140405939: lfence
 * 000000014040593C: test    byte ptr gs:278h, 1
 * 0000000140405945: jnz     short loc_14040594F
 * 0000000140405947: lfence
 * 000000014040594A: jmp     loc_140405BAB
 * 000000014040594F: movzx   eax, byte ptr gs:27Ah
 * 0000000140405958: mov     ecx, 48h ; 'H'
 * 000000014040595D: xor     edx, edx
 * 000000014040595F: wrmsr
 * 0000000140405961: jmp     loc_140405BAB
 * 0000000140405966: test    cs:KiKvaShadow, 1
 * 000000014040596D: jnz     short loc_140405972
 * 000000014040596F: swapgs
 * 0000000140405972: lfence
 * 0000000140405975: mov     r10, gs:188h
 * 000000014040597E: mov     rcx, gs:188h
 * 0000000140405987: mov     rcx, [rcx+220h]
 * 000000014040598E: mov     rcx, [rcx+9E0h]
 * 0000000140405995: mov     gs:270h, rcx
 * 000000014040599E: mov     cl, gs:850h
 * 00000001404059A6: mov     gs:851h, cl
 * 00000001404059AE: mov     cl, gs:278h
 * 00000001404059B6: mov     gs:852h, cl
 * 00000001404059BE: movzx   eax, byte ptr gs:27Bh
 * 00000001404059C7: cmp     gs:27Ah, al
 * 00000001404059CF: jz      short loc_1404059E2
 * 00000001404059D1: mov     gs:27Ah, al
 * 00000001404059D9: mov     ecx, 48h ; 'H'
 * 00000001404059DE: xor     edx, edx
 * 00000001404059E0: wrmsr
 * 00000001404059E2: movzx   edx, byte ptr gs:278h
 * 00000001404059EB: test    edx, 8
 * 00000001404059F1: jz      short loc_140405A06
 * 00000001404059F3: mov     eax, 1
 * 00000001404059F8: xor     edx, edx
 * 00000001404059FA: mov     ecx, 49h ; 'I'
 * 00000001404059FF: wrmsr
 * 0000000140405A01: jmp     loc_140405B44
 * 0000000140405A06: test    edx, 2
 * 0000000140405A0C: jz      loc_140405B41
 * 0000000140405A12: test    byte ptr gs:279h, 4
 * 0000000140405A1B: jnz     loc_140405B41
 * 0000000140405A21: call    loc_140405B34
 * 0000000140405A26: add     rsp, 8
 * 0000000140405A2A: call    loc_140405B3D
 * 0000000140405A2F: add     rsp, 8
 * 0000000140405A33: call    loc_140405A26
 * 0000000140405A38: add     rsp, 8
 * 0000000140405A3C: call    loc_140405A2F
 * 0000000140405A41: add     rsp, 8
 * 0000000140405A45: call    loc_140405A38
 * 0000000140405A4A: add     rsp, 8
 * 0000000140405A4E: call    loc_140405A41
 * 0000000140405A53: add     rsp, 8
 * 0000000140405A57: call    loc_140405A4A
 * 0000000140405A5C: add     rsp, 8
 * 0000000140405A60: call    loc_140405A53
 * 0000000140405A65: add     rsp, 8
 * 0000000140405A69: call    loc_140405A5C
 * 0000000140405A6E: add     rsp, 8
 * 0000000140405A72: call    loc_140405A65
 * 0000000140405A77: add     rsp, 8
 * 0000000140405A7B: call    loc_140405A6E
 * 0000000140405A80: add     rsp, 8
 * 0000000140405A84: call    loc_140405A77
 * 0000000140405A89: add     rsp, 8
 * 0000000140405A8D: call    loc_140405A80
 * 0000000140405A92: add     rsp, 8
 * 0000000140405A96: call    loc_140405A89
 * 0000000140405A9B: add     rsp, 8
 * 0000000140405A9F: call    loc_140405A92
 * 0000000140405AA4: add     rsp, 8
 * 0000000140405AA8: call    loc_140405A9B
 * 0000000140405AAD: add     rsp, 8
 * 0000000140405AB1: call    loc_140405AA4
 * 0000000140405AB6: add     rsp, 8
 * 0000000140405ABA: call    loc_140405AAD
 * 0000000140405ABF: add     rsp, 8
 * 0000000140405AC3: call    loc_140405AB6
 * 0000000140405AC8: add     rsp, 8
 * 0000000140405ACC: call    loc_140405ABF
 * 0000000140405AD1: add     rsp, 8
 * 0000000140405AD5: call    loc_140405AC8
 * 0000000140405ADA: add     rsp, 8
 * 0000000140405ADE: call    loc_140405AD1
 * 0000000140405AE3: add     rsp, 8
 * 0000000140405AE7: call    loc_140405ADA
 * 0000000140405AEC: add     rsp, 8
 * 0000000140405AF0: call    loc_140405AE3
 * 0000000140405AF5: add     rsp, 8
 * 0000000140405AF9: call    loc_140405AEC
 * 0000000140405AFE: add     rsp, 8
 * 0000000140405B02: call    loc_140405AF5
 * 0000000140405B07: add     rsp, 8
 * 0000000140405B0B: call    loc_140405AFE
 * 0000000140405B10: add     rsp, 8
 * 0000000140405B14: call    loc_140405B07
 * 0000000140405B19: add     rsp, 8
 * 0000000140405B1D: call    loc_140405B10
 * 0000000140405B22: add     rsp, 8
 * 0000000140405B26: call    loc_140405B19
 * 0000000140405B2B: add     rsp, 8
 * 0000000140405B2F: call    loc_140405B22
 * 0000000140405B34: add     rsp, 8
 * 0000000140405B38: call    loc_140405B2B
 * 0000000140405B3D: add     rsp, 8
 * 0000000140405B41: lfence
 * 0000000140405B44: mov     byte ptr gs:853h, 0
 * 0000000140405B4D: test    byte ptr [r10+3], 80h
 * 0000000140405B52: jz      short loc_140405B96
 * 0000000140405B54: mov     ecx, 0C0000102h
 * 0000000140405B59: rdmsr
 * 0000000140405B5B: shl     rdx, 20h
 * 0000000140405B5F: or      rax, rdx
 * 0000000140405B62: cmp     rax, cs:MmUserProbeAddress
 * 0000000140405B69: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140405B71: cmp     [r10+0F0h], rax
 * 0000000140405B78: jz      short loc_140405B96
 * 0000000140405B7A: mov     rdx, [r10+1F0h]
 * 0000000140405B81: bts     dword ptr [r10+74h], 8
 * 0000000140405B87: dec     word ptr [r10+1E6h]
 * 0000000140405B8F: mov     [rdx+80h], rax
 * 0000000140405B96: test    byte ptr [r10+3], 3
 * 0000000140405B9B: mov     [rbp+0D8h+var_58], 0
 * 0000000140405BA4: jz      short loc_140405BAB
 * 0000000140405BA6: call    KiSaveDebugRegisterState
 * 0000000140405BAB: cld
 * 0000000140405BAC: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140405BB0: ldmxcsr dword ptr gs:180h
 * 0000000140405BB9: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140405BBD: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140405BC1: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140405BC5: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140405BC9: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140405BCD: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140405BD1: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140405BD8: jz      short loc_140405BE6
 * 0000000140405BDA: test    [rbp+0D8h+arg_8], 1
 * 0000000140405BE1: jz      short loc_140405BE6
 * 0000000140405BE3: stac
 * 0000000140405BE6: mov     eax, [rbp+0E0h]
 * 0000000140405BEC: test    [rbp+0D8h+arg_10], 200h
 * 0000000140405BF6: jz      short loc_140405BF9
 * 0000000140405BF8: sti
 * 0000000140405BF9: mov     ecx, 80000002h
 * 0000000140405BFE: xor     edx, edx
 * 0000000140405C00: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140405C07: call    KiExceptionDispatch
 * 0000000140405C0C: nop
 * 0000000140405C0D: retn
 */
