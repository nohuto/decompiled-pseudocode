/*
 * XREFs of KiDivideErrorFault @ 0x140400800
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x140A11100 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x140400800 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x140407D80 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x140400800
 * Reason: Hex-Rays returned no pseudocode for 0x140400800
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140400800: sub     rsp, 8
 * 0000000140400804: push    rbp
 * 0000000140400805: sub     rsp, 158h
 * 000000014040080C: lea     rbp, [rsp+80h]
 * 0000000140400814: mov     [rbp+0E8h+var_13D], 1
 * 0000000140400818: mov     [rbp+0E8h+var_138], rax
 * 000000014040081C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140400820: mov     [rbp+0E8h+var_128], rdx
 * 0000000140400824: mov     [rbp+0E8h+var_120], r8
 * 0000000140400828: mov     [rbp+0E8h+var_118], r9
 * 000000014040082C: mov     [rbp+0E8h+var_110], r10
 * 0000000140400830: mov     [rbp+0E8h+var_108], r11
 * 0000000140400834: test    [rbp+0E8h+arg_0], 1
 * 000000014040083B: jnz     short loc_14040086A
 * 000000014040083D: lfence
 * 0000000140400840: test    byte ptr gs:278h, 1
 * 0000000140400849: jnz     short loc_140400853
 * 000000014040084B: lfence
 * 000000014040084E: jmp     loc_140400AAF
 * 0000000140400853: movzx   eax, byte ptr gs:27Ah
 * 000000014040085C: mov     ecx, 48h ; 'H'
 * 0000000140400861: xor     edx, edx
 * 0000000140400863: wrmsr
 * 0000000140400865: jmp     loc_140400AAF
 * 000000014040086A: test    cs:KiKvaShadow, 1
 * 0000000140400871: jnz     short loc_140400876
 * 0000000140400873: swapgs
 * 0000000140400876: lfence
 * 0000000140400879: mov     r10, gs:188h
 * 0000000140400882: mov     rcx, gs:188h
 * 000000014040088B: mov     rcx, [rcx+220h]
 * 0000000140400892: mov     rcx, [rcx+9E0h]
 * 0000000140400899: mov     gs:270h, rcx
 * 00000001404008A2: mov     cl, gs:850h
 * 00000001404008AA: mov     gs:851h, cl
 * 00000001404008B2: mov     cl, gs:278h
 * 00000001404008BA: mov     gs:852h, cl
 * 00000001404008C2: movzx   eax, byte ptr gs:27Bh
 * 00000001404008CB: cmp     gs:27Ah, al
 * 00000001404008D3: jz      short loc_1404008E6
 * 00000001404008D5: mov     gs:27Ah, al
 * 00000001404008DD: mov     ecx, 48h ; 'H'
 * 00000001404008E2: xor     edx, edx
 * 00000001404008E4: wrmsr
 * 00000001404008E6: movzx   edx, byte ptr gs:278h
 * 00000001404008EF: test    edx, 8
 * 00000001404008F5: jz      short loc_14040090A
 * 00000001404008F7: mov     eax, 1
 * 00000001404008FC: xor     edx, edx
 * 00000001404008FE: mov     ecx, 49h ; 'I'
 * 0000000140400903: wrmsr
 * 0000000140400905: jmp     loc_140400A48
 * 000000014040090A: test    edx, 2
 * 0000000140400910: jz      loc_140400A45
 * 0000000140400916: test    byte ptr gs:279h, 4
 * 000000014040091F: jnz     loc_140400A45
 * 0000000140400925: call    loc_140400A38
 * 000000014040092A: add     rsp, 8
 * 000000014040092E: call    loc_140400A41
 * 0000000140400933: add     rsp, 8
 * 0000000140400937: call    loc_14040092A
 * 000000014040093C: add     rsp, 8
 * 0000000140400940: call    loc_140400933
 * 0000000140400945: add     rsp, 8
 * 0000000140400949: call    loc_14040093C
 * 000000014040094E: add     rsp, 8
 * 0000000140400952: call    loc_140400945
 * 0000000140400957: add     rsp, 8
 * 000000014040095B: call    loc_14040094E
 * 0000000140400960: add     rsp, 8
 * 0000000140400964: call    loc_140400957
 * 0000000140400969: add     rsp, 8
 * 000000014040096D: call    loc_140400960
 * 0000000140400972: add     rsp, 8
 * 0000000140400976: call    loc_140400969
 * 000000014040097B: add     rsp, 8
 * 000000014040097F: call    loc_140400972
 * 0000000140400984: add     rsp, 8
 * 0000000140400988: call    loc_14040097B
 * 000000014040098D: add     rsp, 8
 * 0000000140400991: call    loc_140400984
 * 0000000140400996: add     rsp, 8
 * 000000014040099A: call    loc_14040098D
 * 000000014040099F: add     rsp, 8
 * 00000001404009A3: call    loc_140400996
 * 00000001404009A8: add     rsp, 8
 * 00000001404009AC: call    loc_14040099F
 * 00000001404009B1: add     rsp, 8
 * 00000001404009B5: call    loc_1404009A8
 * 00000001404009BA: add     rsp, 8
 * 00000001404009BE: call    loc_1404009B1
 * 00000001404009C3: add     rsp, 8
 * 00000001404009C7: call    loc_1404009BA
 * 00000001404009CC: add     rsp, 8
 * 00000001404009D0: call    loc_1404009C3
 * 00000001404009D5: add     rsp, 8
 * 00000001404009D9: call    loc_1404009CC
 * 00000001404009DE: add     rsp, 8
 * 00000001404009E2: call    loc_1404009D5
 * 00000001404009E7: add     rsp, 8
 * 00000001404009EB: call    loc_1404009DE
 * 00000001404009F0: add     rsp, 8
 * 00000001404009F4: call    loc_1404009E7
 * 00000001404009F9: add     rsp, 8
 * 00000001404009FD: call    loc_1404009F0
 * 0000000140400A02: add     rsp, 8
 * 0000000140400A06: call    loc_1404009F9
 * 0000000140400A0B: add     rsp, 8
 * 0000000140400A0F: call    loc_140400A02
 * 0000000140400A14: add     rsp, 8
 * 0000000140400A18: call    loc_140400A0B
 * 0000000140400A1D: add     rsp, 8
 * 0000000140400A21: call    loc_140400A14
 * 0000000140400A26: add     rsp, 8
 * 0000000140400A2A: call    loc_140400A1D
 * 0000000140400A2F: add     rsp, 8
 * 0000000140400A33: call    loc_140400A26
 * 0000000140400A38: add     rsp, 8
 * 0000000140400A3C: call    loc_140400A2F
 * 0000000140400A41: add     rsp, 8
 * 0000000140400A45: lfence
 * 0000000140400A48: mov     byte ptr gs:853h, 0
 * 0000000140400A51: test    byte ptr [r10+3], 80h
 * 0000000140400A56: jz      short loc_140400A9A
 * 0000000140400A58: mov     ecx, 0C0000102h
 * 0000000140400A5D: rdmsr
 * 0000000140400A5F: shl     rdx, 20h
 * 0000000140400A63: or      rax, rdx
 * 0000000140400A66: cmp     rax, cs:MmUserProbeAddress
 * 0000000140400A6D: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140400A75: cmp     [r10+0F0h], rax
 * 0000000140400A7C: jz      short loc_140400A9A
 * 0000000140400A7E: mov     rdx, [r10+1F0h]
 * 0000000140400A85: bts     dword ptr [r10+74h], 8
 * 0000000140400A8B: dec     word ptr [r10+1E6h]
 * 0000000140400A93: mov     [rdx+80h], rax
 * 0000000140400A9A: test    byte ptr [r10+3], 3
 * 0000000140400A9F: mov     [rbp+0E8h+var_68], 0
 * 0000000140400AA8: jz      short loc_140400AAF
 * 0000000140400AAA: call    KiSaveDebugRegisterState
 * 0000000140400AAF: cld
 * 0000000140400AB0: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140400AB4: ldmxcsr dword ptr gs:180h
 * 0000000140400ABD: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140400AC1: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140400AC5: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140400AC9: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140400ACD: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140400AD1: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140400AD5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140400ADC: jz      short loc_140400AEA
 * 0000000140400ADE: test    [rbp+0E8h+arg_0], 1
 * 0000000140400AE5: jz      short loc_140400AEA
 * 0000000140400AE7: stac
 * 0000000140400AEA: test    [rbp+0E8h+arg_8], 200h
 * 0000000140400AF4: jz      short loc_140400AF7
 * 0000000140400AF6: sti
 * 0000000140400AF7: mov     ecx, 10000003h
 * 0000000140400AFC: xor     edx, edx
 * 0000000140400AFE: mov     r8, [rbp+0E8h]
 * 0000000140400B05: call    KiExceptionDispatch
 * 0000000140400B0A: nop
 * 0000000140400B0B: retn
 */
