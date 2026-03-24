/*
 * XREFs of KiSystemCall32Shadow @ 0x140A18E40
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 *     KiSystemCall32Shadow @ 0x140A18E40 (KiSystemCall32Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32Shadow @ 0x140A18E40
 * Reason: Hex-Rays returned no pseudocode for 0x140A18E40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A18E40: swapgs
 * 0000000140A18E43: mov     gs:9010h, rsp
 * 0000000140A18E4C: mov     rsp, gs:9000h
 * 0000000140A18E55: mov     cr3, rsp
 * 0000000140A18E58: mov     rsp, gs:9008h
 * 0000000140A18E61: push    2Bh ; '+'
 * 0000000140A18E63: push    qword ptr gs:9010h
 * 0000000140A18E6B: push    r11
 * 0000000140A18E6D: push    23h ; '#'
 * 0000000140A18E6F: push    rcx
 * 0000000140A18E70: sub     rsp, 8
 * 0000000140A18E74: push    rbp
 * 0000000140A18E75: sub     rsp, 158h
 * 0000000140A18E7C: lea     rbp, [rsp+190h+var_110]
 * 0000000140A18E84: mov     byte ptr [rbp-55h], 1
 * 0000000140A18E88: mov     [rbp-50h], rax
 * 0000000140A18E8C: mov     [rbp-48h], rcx
 * 0000000140A18E90: mov     [rbp-40h], rdx
 * 0000000140A18E94: mov     [rbp-38h], r8
 * 0000000140A18E98: mov     [rbp-30h], r9
 * 0000000140A18E9C: mov     [rbp-28h], r10
 * 0000000140A18EA0: mov     [rbp-20h], r11
 * 0000000140A18EA4: test    byte ptr [rbp+0F0h], 1
 * 0000000140A18EAB: jnz     short loc_140A18EDA
 * 0000000140A18EAD: lfence
 * 0000000140A18EB0: test    byte ptr gs:278h, 1
 * 0000000140A18EB9: jnz     short loc_140A18EC3
 * 0000000140A18EBB: lfence
 * 0000000140A18EBE: jmp     loc_140A19119
 * 0000000140A18EC3: movzx   eax, byte ptr gs:27Ah
 * 0000000140A18ECC: mov     ecx, 48h ; 'H'
 * 0000000140A18ED1: xor     edx, edx
 * 0000000140A18ED3: wrmsr
 * 0000000140A18ED5: jmp     loc_140A19119
 * 0000000140A18EDA: test    cs:KiKvaShadow, 1
 * 0000000140A18EE1: jnz     short loc_140A18EE6
 * 0000000140A18EE3: swapgs
 * 0000000140A18EE6: lfence
 * 0000000140A18EE9: mov     r10, gs:188h
 * 0000000140A18EF2: mov     rcx, gs:188h
 * 0000000140A18EFB: mov     rcx, [rcx+220h]
 * 0000000140A18F02: mov     rcx, [rcx+9E0h]
 * 0000000140A18F09: mov     gs:270h, rcx
 * 0000000140A18F12: mov     cl, gs:850h
 * 0000000140A18F1A: mov     gs:851h, cl
 * 0000000140A18F22: mov     cl, gs:278h
 * 0000000140A18F2A: mov     gs:852h, cl
 * 0000000140A18F32: movzx   eax, byte ptr gs:27Bh
 * 0000000140A18F3B: cmp     gs:27Ah, al
 * 0000000140A18F43: jz      short loc_140A18F56
 * 0000000140A18F45: mov     gs:27Ah, al
 * 0000000140A18F4D: mov     ecx, 48h ; 'H'
 * 0000000140A18F52: xor     edx, edx
 * 0000000140A18F54: wrmsr
 * 0000000140A18F56: movzx   edx, byte ptr gs:278h
 * 0000000140A18F5F: test    edx, 8
 * 0000000140A18F65: jz      short loc_140A18F7E
 * 0000000140A18F67: mov     eax, 1
 * 0000000140A18F6C: xor     edx, edx
 * 0000000140A18F6E: mov     ecx, 49h ; 'I'
 * 0000000140A18F73: wrmsr
 * 0000000140A18F75: movzx   edx, byte ptr gs:278h
 * 0000000140A18F7E: test    edx, 2
 * 0000000140A18F84: jz      loc_140A190AF
 * 0000000140A18F8A: call    loc_140A1909D
 * 0000000140A18F8F: add     rsp, 8
 * 0000000140A18F93: call    loc_140A190A6
 * 0000000140A18F98: add     rsp, 8
 * 0000000140A18F9C: call    loc_140A18F8F
 * 0000000140A18FA1: add     rsp, 8
 * 0000000140A18FA5: call    loc_140A18F98
 * 0000000140A18FAA: add     rsp, 8
 * 0000000140A18FAE: call    loc_140A18FA1
 * 0000000140A18FB3: add     rsp, 8
 * 0000000140A18FB7: call    loc_140A18FAA
 * 0000000140A18FBC: add     rsp, 8
 * 0000000140A18FC0: call    loc_140A18FB3
 * 0000000140A18FC5: add     rsp, 8
 * 0000000140A18FC9: call    loc_140A18FBC
 * 0000000140A18FCE: add     rsp, 8
 * 0000000140A18FD2: call    loc_140A18FC5
 * 0000000140A18FD7: add     rsp, 8
 * 0000000140A18FDB: call    loc_140A18FCE
 * 0000000140A18FE0: add     rsp, 8
 * 0000000140A18FE4: call    loc_140A18FD7
 * 0000000140A18FE9: add     rsp, 8
 * 0000000140A18FED: call    loc_140A18FE0
 * 0000000140A18FF2: add     rsp, 8
 * 0000000140A18FF6: call    loc_140A18FE9
 * 0000000140A18FFB: add     rsp, 8
 * 0000000140A18FFF: call    loc_140A18FF2
 * 0000000140A19004: add     rsp, 8
 * 0000000140A19008: call    loc_140A18FFB
 * 0000000140A1900D: add     rsp, 8
 * 0000000140A19011: call    loc_140A19004
 * 0000000140A19016: add     rsp, 8
 * 0000000140A1901A: call    loc_140A1900D
 * 0000000140A1901F: add     rsp, 8
 * 0000000140A19023: call    loc_140A19016
 * 0000000140A19028: add     rsp, 8
 * 0000000140A1902C: call    loc_140A1901F
 * 0000000140A19031: add     rsp, 8
 * 0000000140A19035: call    loc_140A19028
 * 0000000140A1903A: add     rsp, 8
 * 0000000140A1903E: call    loc_140A19031
 * 0000000140A19043: add     rsp, 8
 * 0000000140A19047: call    loc_140A1903A
 * 0000000140A1904C: add     rsp, 8
 * 0000000140A19050: call    loc_140A19043
 * 0000000140A19055: add     rsp, 8
 * 0000000140A19059: call    loc_140A1904C
 * 0000000140A1905E: add     rsp, 8
 * 0000000140A19062: call    loc_140A19055
 * 0000000140A19067: add     rsp, 8
 * 0000000140A1906B: call    loc_140A1905E
 * 0000000140A19070: add     rsp, 8
 * 0000000140A19074: call    loc_140A19067
 * 0000000140A19079: add     rsp, 8
 * 0000000140A1907D: call    loc_140A19070
 * 0000000140A19082: add     rsp, 8
 * 0000000140A19086: call    loc_140A19079
 * 0000000140A1908B: add     rsp, 8
 * 0000000140A1908F: call    loc_140A19082
 * 0000000140A19094: add     rsp, 8
 * 0000000140A19098: call    loc_140A1908B
 * 0000000140A1909D: add     rsp, 8
 * 0000000140A190A1: call    loc_140A19094
 * 0000000140A190A6: add     rsp, 8
 * 0000000140A190AA: mov     eax, 0DADAh
 * 0000000140A190AF: lfence
 * 0000000140A190B2: mov     byte ptr gs:853h, 0
 * 0000000140A190BB: test    byte ptr [r10+3], 80h
 * 0000000140A190C0: jz      short loc_140A19104
 * 0000000140A190C2: mov     ecx, 0C0000102h
 * 0000000140A190C7: rdmsr
 * 0000000140A190C9: shl     rdx, 20h
 * 0000000140A190CD: or      rax, rdx
 * 0000000140A190D0: cmp     rax, cs:MmUserProbeAddress
 * 0000000140A190D7: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140A190DF: cmp     [r10+0F0h], rax
 * 0000000140A190E6: jz      short loc_140A19104
 * 0000000140A190E8: mov     rdx, [r10+1F0h]
 * 0000000140A190EF: bts     dword ptr [r10+74h], 8
 * 0000000140A190F5: dec     word ptr [r10+1E6h]
 * 0000000140A190FD: mov     [rdx+80h], rax
 * 0000000140A19104: test    byte ptr [r10+3], 3
 * 0000000140A19109: mov     word ptr [rbp+80h], 0
 * 0000000140A19112: jz      short loc_140A19119
 * 0000000140A19114: call    KiSaveDebugRegisterState
 * 0000000140A19119: cld
 * 0000000140A1911A: stmxcsr dword ptr [rbp-54h]
 * 0000000140A1911E: ldmxcsr dword ptr gs:180h
 * 0000000140A19127: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140A1912B: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140A1912F: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140A19133: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140A19137: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140A1913B: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140A1913F: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140A19146: jz      short loc_140A19154
 * 0000000140A19148: test    byte ptr [rbp+0F0h], 1
 * 0000000140A1914F: jz      short loc_140A19154
 * 0000000140A19151: stac
 * 0000000140A19154: sub     qword ptr [rbp+0E8h], 2
 * 0000000140A1915C: and     dword ptr [rbp+0ECh], 0
 * 0000000140A19163: sti
 * 0000000140A19164: mov     ecx, 0C000001Dh
 * 0000000140A19169: xor     edx, edx
 * 0000000140A1916B: mov     r8, [rbp+0E8h]
 * 0000000140A19172: call    KiExceptionDispatch
 * 0000000140A19177: nop
 * 0000000140A19178: retn
 */
