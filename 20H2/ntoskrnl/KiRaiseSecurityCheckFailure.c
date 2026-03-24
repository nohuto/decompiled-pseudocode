/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x14040DF40
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x140A17D40 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x14040DF40 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x1404101C0 (KiFastFailDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x14040DF40
 * Reason: Hex-Rays returned no pseudocode for 0x14040DF40
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040DF40: sub     qword ptr [rsp+0], 2
 * 000000014040DF45: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014040DF4B: jnz     short loc_14040DF52
 * 000000014040DF4D: and     dword ptr [rsp+4], 0
 * 000000014040DF52: sub     rsp, 8
 * 000000014040DF56: push    rbp
 * 000000014040DF57: sub     rsp, 158h
 * 000000014040DF5E: lea     rbp, [rsp+168h+var_E8]
 * 000000014040DF66: mov     byte ptr [rbp-55h], 1
 * 000000014040DF6A: mov     [rbp-50h], rax
 * 000000014040DF6E: mov     [rbp-48h], rcx
 * 000000014040DF72: mov     [rbp-40h], rdx
 * 000000014040DF76: mov     [rbp-38h], r8
 * 000000014040DF7A: mov     [rbp-30h], r9
 * 000000014040DF7E: mov     [rbp-28h], r10
 * 000000014040DF82: mov     [rbp-20h], r11
 * 000000014040DF86: test    byte ptr [rbp+0F0h], 1
 * 000000014040DF8D: jnz     short loc_14040DFBC
 * 000000014040DF8F: lfence
 * 000000014040DF92: test    byte ptr gs:278h, 1
 * 000000014040DF9B: jnz     short loc_14040DFA5
 * 000000014040DF9D: lfence
 * 000000014040DFA0: jmp     loc_14040E1FB
 * 000000014040DFA5: movzx   eax, byte ptr gs:27Ah
 * 000000014040DFAE: mov     ecx, 48h ; 'H'
 * 000000014040DFB3: xor     edx, edx
 * 000000014040DFB5: wrmsr
 * 000000014040DFB7: jmp     loc_14040E1FB
 * 000000014040DFBC: test    cs:KiKvaShadow, 1
 * 000000014040DFC3: jnz     short loc_14040DFC8
 * 000000014040DFC5: swapgs
 * 000000014040DFC8: lfence
 * 000000014040DFCB: mov     r10, gs:188h
 * 000000014040DFD4: mov     rcx, gs:188h
 * 000000014040DFDD: mov     rcx, [rcx+220h]
 * 000000014040DFE4: mov     rcx, [rcx+9E0h]
 * 000000014040DFEB: mov     gs:270h, rcx
 * 000000014040DFF4: mov     cl, gs:850h
 * 000000014040DFFC: mov     gs:851h, cl
 * 000000014040E004: mov     cl, gs:278h
 * 000000014040E00C: mov     gs:852h, cl
 * 000000014040E014: movzx   eax, byte ptr gs:27Bh
 * 000000014040E01D: cmp     gs:27Ah, al
 * 000000014040E025: jz      short loc_14040E038
 * 000000014040E027: mov     gs:27Ah, al
 * 000000014040E02F: mov     ecx, 48h ; 'H'
 * 000000014040E034: xor     edx, edx
 * 000000014040E036: wrmsr
 * 000000014040E038: movzx   edx, byte ptr gs:278h
 * 000000014040E041: test    edx, 8
 * 000000014040E047: jz      short loc_14040E060
 * 000000014040E049: mov     eax, 1
 * 000000014040E04E: xor     edx, edx
 * 000000014040E050: mov     ecx, 49h ; 'I'
 * 000000014040E055: wrmsr
 * 000000014040E057: movzx   edx, byte ptr gs:278h
 * 000000014040E060: test    edx, 2
 * 000000014040E066: jz      loc_14040E191
 * 000000014040E06C: call    loc_14040E17F
 * 000000014040E071: add     rsp, 8
 * 000000014040E075: call    loc_14040E188
 * 000000014040E07A: add     rsp, 8
 * 000000014040E07E: call    loc_14040E071
 * 000000014040E083: add     rsp, 8
 * 000000014040E087: call    loc_14040E07A
 * 000000014040E08C: add     rsp, 8
 * 000000014040E090: call    loc_14040E083
 * 000000014040E095: add     rsp, 8
 * 000000014040E099: call    loc_14040E08C
 * 000000014040E09E: add     rsp, 8
 * 000000014040E0A2: call    loc_14040E095
 * 000000014040E0A7: add     rsp, 8
 * 000000014040E0AB: call    loc_14040E09E
 * 000000014040E0B0: add     rsp, 8
 * 000000014040E0B4: call    loc_14040E0A7
 * 000000014040E0B9: add     rsp, 8
 * 000000014040E0BD: call    loc_14040E0B0
 * 000000014040E0C2: add     rsp, 8
 * 000000014040E0C6: call    loc_14040E0B9
 * 000000014040E0CB: add     rsp, 8
 * 000000014040E0CF: call    loc_14040E0C2
 * 000000014040E0D4: add     rsp, 8
 * 000000014040E0D8: call    loc_14040E0CB
 * 000000014040E0DD: add     rsp, 8
 * 000000014040E0E1: call    loc_14040E0D4
 * 000000014040E0E6: add     rsp, 8
 * 000000014040E0EA: call    loc_14040E0DD
 * 000000014040E0EF: add     rsp, 8
 * 000000014040E0F3: call    loc_14040E0E6
 * 000000014040E0F8: add     rsp, 8
 * 000000014040E0FC: call    loc_14040E0EF
 * 000000014040E101: add     rsp, 8
 * 000000014040E105: call    loc_14040E0F8
 * 000000014040E10A: add     rsp, 8
 * 000000014040E10E: call    loc_14040E101
 * 000000014040E113: add     rsp, 8
 * 000000014040E117: call    loc_14040E10A
 * 000000014040E11C: add     rsp, 8
 * 000000014040E120: call    loc_14040E113
 * 000000014040E125: add     rsp, 8
 * 000000014040E129: call    loc_14040E11C
 * 000000014040E12E: add     rsp, 8
 * 000000014040E132: call    loc_14040E125
 * 000000014040E137: add     rsp, 8
 * 000000014040E13B: call    loc_14040E12E
 * 000000014040E140: add     rsp, 8
 * 000000014040E144: call    loc_14040E137
 * 000000014040E149: add     rsp, 8
 * 000000014040E14D: call    loc_14040E140
 * 000000014040E152: add     rsp, 8
 * 000000014040E156: call    loc_14040E149
 * 000000014040E15B: add     rsp, 8
 * 000000014040E15F: call    loc_14040E152
 * 000000014040E164: add     rsp, 8
 * 000000014040E168: call    loc_14040E15B
 * 000000014040E16D: add     rsp, 8
 * 000000014040E171: call    loc_14040E164
 * 000000014040E176: add     rsp, 8
 * 000000014040E17A: call    loc_14040E16D
 * 000000014040E17F: add     rsp, 8
 * 000000014040E183: call    loc_14040E176
 * 000000014040E188: add     rsp, 8
 * 000000014040E18C: mov     eax, 0DADAh
 * 000000014040E191: lfence
 * 000000014040E194: mov     byte ptr gs:853h, 0
 * 000000014040E19D: test    byte ptr [r10+3], 80h
 * 000000014040E1A2: jz      short loc_14040E1E6
 * 000000014040E1A4: mov     ecx, 0C0000102h
 * 000000014040E1A9: rdmsr
 * 000000014040E1AB: shl     rdx, 20h
 * 000000014040E1AF: or      rax, rdx
 * 000000014040E1B2: cmp     rax, cs:MmUserProbeAddress
 * 000000014040E1B9: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040E1C1: cmp     [r10+0F0h], rax
 * 000000014040E1C8: jz      short loc_14040E1E6
 * 000000014040E1CA: mov     rdx, [r10+1F0h]
 * 000000014040E1D1: bts     dword ptr [r10+74h], 8
 * 000000014040E1D7: dec     word ptr [r10+1E6h]
 * 000000014040E1DF: mov     [rdx+80h], rax
 * 000000014040E1E6: test    byte ptr [r10+3], 3
 * 000000014040E1EB: mov     word ptr [rbp+80h], 0
 * 000000014040E1F4: jz      short loc_14040E1FB
 * 000000014040E1F6: call    KiSaveDebugRegisterState
 * 000000014040E1FB: cld
 * 000000014040E1FC: stmxcsr dword ptr [rbp-54h]
 * 000000014040E200: ldmxcsr dword ptr gs:180h
 * 000000014040E209: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014040E20D: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014040E211: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014040E215: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014040E219: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014040E21D: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014040E221: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040E228: jz      short loc_14040E236
 * 000000014040E22A: test    byte ptr [rbp+0F0h], 1
 * 000000014040E231: jz      short loc_14040E236
 * 000000014040E233: stac
 * 000000014040E236: test    dword ptr [rbp+0F8h], 200h
 * 000000014040E240: jz      short loc_14040E243
 * 000000014040E242: sti
 * 000000014040E243: mov     r9, [rbp-48h]
 * 000000014040E247: mov     ecx, 0C0000409h
 * 000000014040E24C: mov     edx, 1
 * 000000014040E251: mov     r8, [rbp+0E8h]
 * 000000014040E258: call    KiFastFailDispatch
 * 000000014040E25D: nop
 * 000000014040E25E: retn
 */
