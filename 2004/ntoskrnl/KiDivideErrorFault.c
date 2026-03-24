/*
 * XREFs of KiDivideErrorFault @ 0x140401B00
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x140A11100 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x140401B00 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x140409080 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x140401B00
 * Reason: Hex-Rays returned no pseudocode for 0x140401B00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140401B00: sub     rsp, 8
 * 0000000140401B04: push    rbp
 * 0000000140401B05: sub     rsp, 158h
 * 0000000140401B0C: lea     rbp, [rsp+80h]
 * 0000000140401B14: mov     [rbp+0E8h+var_13D], 1
 * 0000000140401B18: mov     [rbp+0E8h+var_138], rax
 * 0000000140401B1C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140401B20: mov     [rbp+0E8h+var_128], rdx
 * 0000000140401B24: mov     [rbp+0E8h+var_120], r8
 * 0000000140401B28: mov     [rbp+0E8h+var_118], r9
 * 0000000140401B2C: mov     [rbp+0E8h+var_110], r10
 * 0000000140401B30: mov     [rbp+0E8h+var_108], r11
 * 0000000140401B34: test    [rbp+0E8h+arg_0], 1
 * 0000000140401B3B: jnz     short loc_140401B6A
 * 0000000140401B3D: lfence
 * 0000000140401B40: test    byte ptr gs:278h, 1
 * 0000000140401B49: jnz     short loc_140401B53
 * 0000000140401B4B: lfence
 * 0000000140401B4E: jmp     loc_140401DAF
 * 0000000140401B53: movzx   eax, byte ptr gs:27Ah
 * 0000000140401B5C: mov     ecx, 48h ; 'H'
 * 0000000140401B61: xor     edx, edx
 * 0000000140401B63: wrmsr
 * 0000000140401B65: jmp     loc_140401DAF
 * 0000000140401B6A: test    cs:KiKvaShadow, 1
 * 0000000140401B71: jnz     short loc_140401B76
 * 0000000140401B73: swapgs
 * 0000000140401B76: lfence
 * 0000000140401B79: mov     r10, gs:188h
 * 0000000140401B82: mov     rcx, gs:188h
 * 0000000140401B8B: mov     rcx, [rcx+220h]
 * 0000000140401B92: mov     rcx, [rcx+9E0h]
 * 0000000140401B99: mov     gs:270h, rcx
 * 0000000140401BA2: mov     cl, gs:850h
 * 0000000140401BAA: mov     gs:851h, cl
 * 0000000140401BB2: mov     cl, gs:278h
 * 0000000140401BBA: mov     gs:852h, cl
 * 0000000140401BC2: movzx   eax, byte ptr gs:27Bh
 * 0000000140401BCB: cmp     gs:27Ah, al
 * 0000000140401BD3: jz      short loc_140401BE6
 * 0000000140401BD5: mov     gs:27Ah, al
 * 0000000140401BDD: mov     ecx, 48h ; 'H'
 * 0000000140401BE2: xor     edx, edx
 * 0000000140401BE4: wrmsr
 * 0000000140401BE6: movzx   edx, byte ptr gs:278h
 * 0000000140401BEF: test    edx, 8
 * 0000000140401BF5: jz      short loc_140401C0A
 * 0000000140401BF7: mov     eax, 1
 * 0000000140401BFC: xor     edx, edx
 * 0000000140401BFE: mov     ecx, 49h ; 'I'
 * 0000000140401C03: wrmsr
 * 0000000140401C05: jmp     loc_140401D48
 * 0000000140401C0A: test    edx, 2
 * 0000000140401C10: jz      loc_140401D45
 * 0000000140401C16: test    byte ptr gs:279h, 4
 * 0000000140401C1F: jnz     loc_140401D45
 * 0000000140401C25: call    loc_140401D38
 * 0000000140401C2A: add     rsp, 8
 * 0000000140401C2E: call    loc_140401D41
 * 0000000140401C33: add     rsp, 8
 * 0000000140401C37: call    loc_140401C2A
 * 0000000140401C3C: add     rsp, 8
 * 0000000140401C40: call    loc_140401C33
 * 0000000140401C45: add     rsp, 8
 * 0000000140401C49: call    loc_140401C3C
 * 0000000140401C4E: add     rsp, 8
 * 0000000140401C52: call    loc_140401C45
 * 0000000140401C57: add     rsp, 8
 * 0000000140401C5B: call    loc_140401C4E
 * 0000000140401C60: add     rsp, 8
 * 0000000140401C64: call    loc_140401C57
 * 0000000140401C69: add     rsp, 8
 * 0000000140401C6D: call    loc_140401C60
 * 0000000140401C72: add     rsp, 8
 * 0000000140401C76: call    loc_140401C69
 * 0000000140401C7B: add     rsp, 8
 * 0000000140401C7F: call    loc_140401C72
 * 0000000140401C84: add     rsp, 8
 * 0000000140401C88: call    loc_140401C7B
 * 0000000140401C8D: add     rsp, 8
 * 0000000140401C91: call    loc_140401C84
 * 0000000140401C96: add     rsp, 8
 * 0000000140401C9A: call    loc_140401C8D
 * 0000000140401C9F: add     rsp, 8
 * 0000000140401CA3: call    loc_140401C96
 * 0000000140401CA8: add     rsp, 8
 * 0000000140401CAC: call    loc_140401C9F
 * 0000000140401CB1: add     rsp, 8
 * 0000000140401CB5: call    loc_140401CA8
 * 0000000140401CBA: add     rsp, 8
 * 0000000140401CBE: call    loc_140401CB1
 * 0000000140401CC3: add     rsp, 8
 * 0000000140401CC7: call    loc_140401CBA
 * 0000000140401CCC: add     rsp, 8
 * 0000000140401CD0: call    loc_140401CC3
 * 0000000140401CD5: add     rsp, 8
 * 0000000140401CD9: call    loc_140401CCC
 * 0000000140401CDE: add     rsp, 8
 * 0000000140401CE2: call    loc_140401CD5
 * 0000000140401CE7: add     rsp, 8
 * 0000000140401CEB: call    loc_140401CDE
 * 0000000140401CF0: add     rsp, 8
 * 0000000140401CF4: call    loc_140401CE7
 * 0000000140401CF9: add     rsp, 8
 * 0000000140401CFD: call    loc_140401CF0
 * 0000000140401D02: add     rsp, 8
 * 0000000140401D06: call    loc_140401CF9
 * 0000000140401D0B: add     rsp, 8
 * 0000000140401D0F: call    loc_140401D02
 * 0000000140401D14: add     rsp, 8
 * 0000000140401D18: call    loc_140401D0B
 * 0000000140401D1D: add     rsp, 8
 * 0000000140401D21: call    loc_140401D14
 * 0000000140401D26: add     rsp, 8
 * 0000000140401D2A: call    loc_140401D1D
 * 0000000140401D2F: add     rsp, 8
 * 0000000140401D33: call    loc_140401D26
 * 0000000140401D38: add     rsp, 8
 * 0000000140401D3C: call    loc_140401D2F
 * 0000000140401D41: add     rsp, 8
 * 0000000140401D45: lfence
 * 0000000140401D48: mov     byte ptr gs:853h, 0
 * 0000000140401D51: test    byte ptr [r10+3], 80h
 * 0000000140401D56: jz      short loc_140401D9A
 * 0000000140401D58: mov     ecx, 0C0000102h
 * 0000000140401D5D: rdmsr
 * 0000000140401D5F: shl     rdx, 20h
 * 0000000140401D63: or      rax, rdx
 * 0000000140401D66: cmp     rax, cs:MmUserProbeAddress
 * 0000000140401D6D: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140401D75: cmp     [r10+0F0h], rax
 * 0000000140401D7C: jz      short loc_140401D9A
 * 0000000140401D7E: mov     rdx, [r10+1F0h]
 * 0000000140401D85: bts     dword ptr [r10+74h], 8
 * 0000000140401D8B: dec     word ptr [r10+1E6h]
 * 0000000140401D93: mov     [rdx+80h], rax
 * 0000000140401D9A: test    byte ptr [r10+3], 3
 * 0000000140401D9F: mov     [rbp+0E8h+var_68], 0
 * 0000000140401DA8: jz      short loc_140401DAF
 * 0000000140401DAA: call    KiSaveDebugRegisterState
 * 0000000140401DAF: cld
 * 0000000140401DB0: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140401DB4: ldmxcsr dword ptr gs:180h
 * 0000000140401DBD: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140401DC1: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140401DC5: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140401DC9: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140401DCD: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140401DD1: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140401DD5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140401DDC: jz      short loc_140401DEA
 * 0000000140401DDE: test    [rbp+0E8h+arg_0], 1
 * 0000000140401DE5: jz      short loc_140401DEA
 * 0000000140401DE7: stac
 * 0000000140401DEA: test    [rbp+0E8h+arg_8], 200h
 * 0000000140401DF4: jz      short loc_140401DF7
 * 0000000140401DF6: sti
 * 0000000140401DF7: mov     ecx, 10000003h
 * 0000000140401DFC: xor     edx, edx
 * 0000000140401DFE: mov     r8, [rbp+0E8h]
 * 0000000140401E05: call    KiExceptionDispatch
 * 0000000140401E0A: nop
 * 0000000140401E0B: retn
 */
