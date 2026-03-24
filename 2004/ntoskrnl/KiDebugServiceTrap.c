/*
 * XREFs of KiDebugServiceTrap @ 0x140407B80
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x140A11E40 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x140407B80 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x140409080 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x140407B80
 * Reason: Hex-Rays returned no pseudocode for 0x140407B80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140407B80: inc     qword ptr [rsp+0]
 * 0000000140407B84: cmp     [rsp+arg_0], 23h ; '#'
 * 0000000140407B8A: jnz     short loc_140407B91
 * 0000000140407B8C: and     dword ptr [rsp+4], 0
 * 0000000140407B91: sub     rsp, 8
 * 0000000140407B95: push    rbp
 * 0000000140407B96: sub     rsp, 158h
 * 0000000140407B9D: lea     rbp, [rsp+168h+var_E8]
 * 0000000140407BA5: mov     byte ptr [rbp-55h], 1
 * 0000000140407BA9: mov     [rbp-50h], rax
 * 0000000140407BAD: mov     [rbp-48h], rcx
 * 0000000140407BB1: mov     [rbp-40h], rdx
 * 0000000140407BB5: mov     [rbp-38h], r8
 * 0000000140407BB9: mov     [rbp-30h], r9
 * 0000000140407BBD: mov     [rbp-28h], r10
 * 0000000140407BC1: mov     [rbp-20h], r11
 * 0000000140407BC5: test    byte ptr [rbp+0F0h], 1
 * 0000000140407BCC: jnz     short loc_140407BFB
 * 0000000140407BCE: lfence
 * 0000000140407BD1: test    byte ptr gs:278h, 1
 * 0000000140407BDA: jnz     short loc_140407BE4
 * 0000000140407BDC: lfence
 * 0000000140407BDF: jmp     loc_140407E40
 * 0000000140407BE4: movzx   eax, byte ptr gs:27Ah
 * 0000000140407BED: mov     ecx, 48h ; 'H'
 * 0000000140407BF2: xor     edx, edx
 * 0000000140407BF4: wrmsr
 * 0000000140407BF6: jmp     loc_140407E40
 * 0000000140407BFB: test    cs:KiKvaShadow, 1
 * 0000000140407C02: jnz     short loc_140407C07
 * 0000000140407C04: swapgs
 * 0000000140407C07: lfence
 * 0000000140407C0A: mov     r10, gs:188h
 * 0000000140407C13: mov     rcx, gs:188h
 * 0000000140407C1C: mov     rcx, [rcx+220h]
 * 0000000140407C23: mov     rcx, [rcx+9E0h]
 * 0000000140407C2A: mov     gs:270h, rcx
 * 0000000140407C33: mov     cl, gs:850h
 * 0000000140407C3B: mov     gs:851h, cl
 * 0000000140407C43: mov     cl, gs:278h
 * 0000000140407C4B: mov     gs:852h, cl
 * 0000000140407C53: movzx   eax, byte ptr gs:27Bh
 * 0000000140407C5C: cmp     gs:27Ah, al
 * 0000000140407C64: jz      short loc_140407C77
 * 0000000140407C66: mov     gs:27Ah, al
 * 0000000140407C6E: mov     ecx, 48h ; 'H'
 * 0000000140407C73: xor     edx, edx
 * 0000000140407C75: wrmsr
 * 0000000140407C77: movzx   edx, byte ptr gs:278h
 * 0000000140407C80: test    edx, 8
 * 0000000140407C86: jz      short loc_140407C9B
 * 0000000140407C88: mov     eax, 1
 * 0000000140407C8D: xor     edx, edx
 * 0000000140407C8F: mov     ecx, 49h ; 'I'
 * 0000000140407C94: wrmsr
 * 0000000140407C96: jmp     loc_140407DD9
 * 0000000140407C9B: test    edx, 2
 * 0000000140407CA1: jz      loc_140407DD6
 * 0000000140407CA7: test    byte ptr gs:279h, 4
 * 0000000140407CB0: jnz     loc_140407DD6
 * 0000000140407CB6: call    loc_140407DC9
 * 0000000140407CBB: add     rsp, 8
 * 0000000140407CBF: call    loc_140407DD2
 * 0000000140407CC4: add     rsp, 8
 * 0000000140407CC8: call    loc_140407CBB
 * 0000000140407CCD: add     rsp, 8
 * 0000000140407CD1: call    loc_140407CC4
 * 0000000140407CD6: add     rsp, 8
 * 0000000140407CDA: call    loc_140407CCD
 * 0000000140407CDF: add     rsp, 8
 * 0000000140407CE3: call    loc_140407CD6
 * 0000000140407CE8: add     rsp, 8
 * 0000000140407CEC: call    loc_140407CDF
 * 0000000140407CF1: add     rsp, 8
 * 0000000140407CF5: call    loc_140407CE8
 * 0000000140407CFA: add     rsp, 8
 * 0000000140407CFE: call    loc_140407CF1
 * 0000000140407D03: add     rsp, 8
 * 0000000140407D07: call    loc_140407CFA
 * 0000000140407D0C: add     rsp, 8
 * 0000000140407D10: call    loc_140407D03
 * 0000000140407D15: add     rsp, 8
 * 0000000140407D19: call    loc_140407D0C
 * 0000000140407D1E: add     rsp, 8
 * 0000000140407D22: call    loc_140407D15
 * 0000000140407D27: add     rsp, 8
 * 0000000140407D2B: call    loc_140407D1E
 * 0000000140407D30: add     rsp, 8
 * 0000000140407D34: call    loc_140407D27
 * 0000000140407D39: add     rsp, 8
 * 0000000140407D3D: call    loc_140407D30
 * 0000000140407D42: add     rsp, 8
 * 0000000140407D46: call    loc_140407D39
 * 0000000140407D4B: add     rsp, 8
 * 0000000140407D4F: call    loc_140407D42
 * 0000000140407D54: add     rsp, 8
 * 0000000140407D58: call    loc_140407D4B
 * 0000000140407D5D: add     rsp, 8
 * 0000000140407D61: call    loc_140407D54
 * 0000000140407D66: add     rsp, 8
 * 0000000140407D6A: call    loc_140407D5D
 * 0000000140407D6F: add     rsp, 8
 * 0000000140407D73: call    loc_140407D66
 * 0000000140407D78: add     rsp, 8
 * 0000000140407D7C: call    loc_140407D6F
 * 0000000140407D81: add     rsp, 8
 * 0000000140407D85: call    loc_140407D78
 * 0000000140407D8A: add     rsp, 8
 * 0000000140407D8E: call    loc_140407D81
 * 0000000140407D93: add     rsp, 8
 * 0000000140407D97: call    loc_140407D8A
 * 0000000140407D9C: add     rsp, 8
 * 0000000140407DA0: call    loc_140407D93
 * 0000000140407DA5: add     rsp, 8
 * 0000000140407DA9: call    loc_140407D9C
 * 0000000140407DAE: add     rsp, 8
 * 0000000140407DB2: call    loc_140407DA5
 * 0000000140407DB7: add     rsp, 8
 * 0000000140407DBB: call    loc_140407DAE
 * 0000000140407DC0: add     rsp, 8
 * 0000000140407DC4: call    loc_140407DB7
 * 0000000140407DC9: add     rsp, 8
 * 0000000140407DCD: call    loc_140407DC0
 * 0000000140407DD2: add     rsp, 8
 * 0000000140407DD6: lfence
 * 0000000140407DD9: mov     byte ptr gs:853h, 0
 * 0000000140407DE2: test    byte ptr [r10+3], 80h
 * 0000000140407DE7: jz      short loc_140407E2B
 * 0000000140407DE9: mov     ecx, 0C0000102h
 * 0000000140407DEE: rdmsr
 * 0000000140407DF0: shl     rdx, 20h
 * 0000000140407DF4: or      rax, rdx
 * 0000000140407DF7: cmp     rax, cs:MmUserProbeAddress
 * 0000000140407DFE: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140407E06: cmp     [r10+0F0h], rax
 * 0000000140407E0D: jz      short loc_140407E2B
 * 0000000140407E0F: mov     rdx, [r10+1F0h]
 * 0000000140407E16: bts     dword ptr [r10+74h], 8
 * 0000000140407E1C: dec     word ptr [r10+1E6h]
 * 0000000140407E24: mov     [rdx+80h], rax
 * 0000000140407E2B: test    byte ptr [r10+3], 3
 * 0000000140407E30: mov     word ptr [rbp+80h], 0
 * 0000000140407E39: jz      short loc_140407E40
 * 0000000140407E3B: call    KiSaveDebugRegisterState
 * 0000000140407E40: cld
 * 0000000140407E41: stmxcsr dword ptr [rbp-54h]
 * 0000000140407E45: ldmxcsr dword ptr gs:180h
 * 0000000140407E4E: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140407E52: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140407E56: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140407E5A: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140407E5E: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140407E62: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140407E66: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140407E6D: jz      short loc_140407E7B
 * 0000000140407E6F: test    byte ptr [rbp+0F0h], 1
 * 0000000140407E76: jz      short loc_140407E7B
 * 0000000140407E78: stac
 * 0000000140407E7B: test    dword ptr [rbp+0F8h], 200h
 * 0000000140407E85: jz      short loc_140407E88
 * 0000000140407E87: sti
 * 0000000140407E88: mov     ecx, 80000003h
 * 0000000140407E8D: mov     edx, 1
 * 0000000140407E92: mov     r9, [rbp-50h]
 * 0000000140407E96: mov     r8, [rbp+0E8h]
 * 0000000140407E9D: call    KiExceptionDispatch
 * 0000000140407EA2: nop
 * 0000000140407EA3: retn
 */
