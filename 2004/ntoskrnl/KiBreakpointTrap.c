/*
 * XREFs of KiBreakpointTrap @ 0x140402800
 * Callers:
 *     KiBreakpointTrapShadow @ 0x140A112C0 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x140402800 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x140409080 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x140402800
 * Reason: Hex-Rays returned no pseudocode for 0x140402800
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140402800: sub     rsp, 8
 * 0000000140402804: push    rbp
 * 0000000140402805: sub     rsp, 158h
 * 000000014040280C: lea     rbp, [rsp+80h]
 * 0000000140402814: mov     [rbp+0E8h+var_13D], 1
 * 0000000140402818: mov     [rbp+0E8h+var_138], rax
 * 000000014040281C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140402820: mov     [rbp+0E8h+var_128], rdx
 * 0000000140402824: mov     [rbp+0E8h+var_120], r8
 * 0000000140402828: mov     [rbp+0E8h+var_118], r9
 * 000000014040282C: mov     [rbp+0E8h+var_110], r10
 * 0000000140402830: mov     [rbp+0E8h+var_108], r11
 * 0000000140402834: test    [rbp+0E8h+arg_0], 1
 * 000000014040283B: jnz     short loc_14040286A
 * 000000014040283D: lfence
 * 0000000140402840: test    byte ptr gs:278h, 1
 * 0000000140402849: jnz     short loc_140402853
 * 000000014040284B: lfence
 * 000000014040284E: jmp     loc_140402AAF
 * 0000000140402853: movzx   eax, byte ptr gs:27Ah
 * 000000014040285C: mov     ecx, 48h ; 'H'
 * 0000000140402861: xor     edx, edx
 * 0000000140402863: wrmsr
 * 0000000140402865: jmp     loc_140402AAF
 * 000000014040286A: test    cs:KiKvaShadow, 1
 * 0000000140402871: jnz     short loc_140402876
 * 0000000140402873: swapgs
 * 0000000140402876: lfence
 * 0000000140402879: mov     r10, gs:188h
 * 0000000140402882: mov     rcx, gs:188h
 * 000000014040288B: mov     rcx, [rcx+220h]
 * 0000000140402892: mov     rcx, [rcx+9E0h]
 * 0000000140402899: mov     gs:270h, rcx
 * 00000001404028A2: mov     cl, gs:850h
 * 00000001404028AA: mov     gs:851h, cl
 * 00000001404028B2: mov     cl, gs:278h
 * 00000001404028BA: mov     gs:852h, cl
 * 00000001404028C2: movzx   eax, byte ptr gs:27Bh
 * 00000001404028CB: cmp     gs:27Ah, al
 * 00000001404028D3: jz      short loc_1404028E6
 * 00000001404028D5: mov     gs:27Ah, al
 * 00000001404028DD: mov     ecx, 48h ; 'H'
 * 00000001404028E2: xor     edx, edx
 * 00000001404028E4: wrmsr
 * 00000001404028E6: movzx   edx, byte ptr gs:278h
 * 00000001404028EF: test    edx, 8
 * 00000001404028F5: jz      short loc_14040290A
 * 00000001404028F7: mov     eax, 1
 * 00000001404028FC: xor     edx, edx
 * 00000001404028FE: mov     ecx, 49h ; 'I'
 * 0000000140402903: wrmsr
 * 0000000140402905: jmp     loc_140402A48
 * 000000014040290A: test    edx, 2
 * 0000000140402910: jz      loc_140402A45
 * 0000000140402916: test    byte ptr gs:279h, 4
 * 000000014040291F: jnz     loc_140402A45
 * 0000000140402925: call    loc_140402A38
 * 000000014040292A: add     rsp, 8
 * 000000014040292E: call    loc_140402A41
 * 0000000140402933: add     rsp, 8
 * 0000000140402937: call    loc_14040292A
 * 000000014040293C: add     rsp, 8
 * 0000000140402940: call    loc_140402933
 * 0000000140402945: add     rsp, 8
 * 0000000140402949: call    loc_14040293C
 * 000000014040294E: add     rsp, 8
 * 0000000140402952: call    loc_140402945
 * 0000000140402957: add     rsp, 8
 * 000000014040295B: call    loc_14040294E
 * 0000000140402960: add     rsp, 8
 * 0000000140402964: call    loc_140402957
 * 0000000140402969: add     rsp, 8
 * 000000014040296D: call    loc_140402960
 * 0000000140402972: add     rsp, 8
 * 0000000140402976: call    loc_140402969
 * 000000014040297B: add     rsp, 8
 * 000000014040297F: call    loc_140402972
 * 0000000140402984: add     rsp, 8
 * 0000000140402988: call    loc_14040297B
 * 000000014040298D: add     rsp, 8
 * 0000000140402991: call    loc_140402984
 * 0000000140402996: add     rsp, 8
 * 000000014040299A: call    loc_14040298D
 * 000000014040299F: add     rsp, 8
 * 00000001404029A3: call    loc_140402996
 * 00000001404029A8: add     rsp, 8
 * 00000001404029AC: call    loc_14040299F
 * 00000001404029B1: add     rsp, 8
 * 00000001404029B5: call    loc_1404029A8
 * 00000001404029BA: add     rsp, 8
 * 00000001404029BE: call    loc_1404029B1
 * 00000001404029C3: add     rsp, 8
 * 00000001404029C7: call    loc_1404029BA
 * 00000001404029CC: add     rsp, 8
 * 00000001404029D0: call    loc_1404029C3
 * 00000001404029D5: add     rsp, 8
 * 00000001404029D9: call    loc_1404029CC
 * 00000001404029DE: add     rsp, 8
 * 00000001404029E2: call    loc_1404029D5
 * 00000001404029E7: add     rsp, 8
 * 00000001404029EB: call    loc_1404029DE
 * 00000001404029F0: add     rsp, 8
 * 00000001404029F4: call    loc_1404029E7
 * 00000001404029F9: add     rsp, 8
 * 00000001404029FD: call    loc_1404029F0
 * 0000000140402A02: add     rsp, 8
 * 0000000140402A06: call    loc_1404029F9
 * 0000000140402A0B: add     rsp, 8
 * 0000000140402A0F: call    loc_140402A02
 * 0000000140402A14: add     rsp, 8
 * 0000000140402A18: call    loc_140402A0B
 * 0000000140402A1D: add     rsp, 8
 * 0000000140402A21: call    loc_140402A14
 * 0000000140402A26: add     rsp, 8
 * 0000000140402A2A: call    loc_140402A1D
 * 0000000140402A2F: add     rsp, 8
 * 0000000140402A33: call    loc_140402A26
 * 0000000140402A38: add     rsp, 8
 * 0000000140402A3C: call    loc_140402A2F
 * 0000000140402A41: add     rsp, 8
 * 0000000140402A45: lfence
 * 0000000140402A48: mov     byte ptr gs:853h, 0
 * 0000000140402A51: test    byte ptr [r10+3], 80h
 * 0000000140402A56: jz      short loc_140402A9A
 * 0000000140402A58: mov     ecx, 0C0000102h
 * 0000000140402A5D: rdmsr
 * 0000000140402A5F: shl     rdx, 20h
 * 0000000140402A63: or      rax, rdx
 * 0000000140402A66: cmp     rax, cs:MmUserProbeAddress
 * 0000000140402A6D: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140402A75: cmp     [r10+0F0h], rax
 * 0000000140402A7C: jz      short loc_140402A9A
 * 0000000140402A7E: mov     rdx, [r10+1F0h]
 * 0000000140402A85: bts     dword ptr [r10+74h], 8
 * 0000000140402A8B: dec     word ptr [r10+1E6h]
 * 0000000140402A93: mov     [rdx+80h], rax
 * 0000000140402A9A: test    byte ptr [r10+3], 3
 * 0000000140402A9F: mov     [rbp+0E8h+var_68], 0
 * 0000000140402AA8: jz      short loc_140402AAF
 * 0000000140402AAA: call    KiSaveDebugRegisterState
 * 0000000140402AAF: cld
 * 0000000140402AB0: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140402AB4: ldmxcsr dword ptr gs:180h
 * 0000000140402ABD: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140402AC1: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140402AC5: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140402AC9: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140402ACD: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140402AD1: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140402AD5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140402ADC: jz      short loc_140402AEA
 * 0000000140402ADE: test    [rbp+0E8h+arg_0], 1
 * 0000000140402AE5: jz      short loc_140402AEA
 * 0000000140402AE7: stac
 * 0000000140402AEA: test    [rbp+0E8h+arg_8], 200h
 * 0000000140402AF4: jz      short loc_140402AF7
 * 0000000140402AF6: sti
 * 0000000140402AF7: mov     ecx, 80000003h
 * 0000000140402AFC: mov     edx, 1
 * 0000000140402B01: mov     r8, [rbp+0E8h]
 * 0000000140402B08: dec     r8
 * 0000000140402B0B: mov     r9d, 0
 * 0000000140402B11: call    KiExceptionDispatch
 * 0000000140402B16: nop
 * 0000000140402B17: retn
 */
