/*
 * XREFs of KiGeneralProtectionFault @ 0x14040B140
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x140A177C0 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x14040B140 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x14040B140
 * Reason: Hex-Rays returned no pseudocode for 0x14040B140
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040B140: push    rbp
 * 000000014040B141: sub     rsp, 158h
 * 000000014040B148: lea     rbp, [rsp+80h]
 * 000000014040B150: mov     [rbp+0D8h+var_12D], 1
 * 000000014040B154: mov     [rbp+0D8h+var_128], rax
 * 000000014040B158: mov     [rbp+0D8h+var_120], rcx
 * 000000014040B15C: mov     [rbp+0D8h+var_118], rdx
 * 000000014040B160: mov     [rbp+0D8h+var_110], r8
 * 000000014040B164: mov     [rbp+0D8h+var_108], r9
 * 000000014040B168: mov     [rbp+0D8h+var_100], r10
 * 000000014040B16C: mov     [rbp+0D8h+var_F8], r11
 * 000000014040B170: test    [rbp+0D8h+arg_8], 1
 * 000000014040B177: jnz     short loc_14040B1A6
 * 000000014040B179: lfence
 * 000000014040B17C: test    byte ptr gs:278h, 1
 * 000000014040B185: jnz     short loc_14040B18F
 * 000000014040B187: lfence
 * 000000014040B18A: jmp     loc_14040B3E5
 * 000000014040B18F: movzx   eax, byte ptr gs:27Ah
 * 000000014040B198: mov     ecx, 48h ; 'H'
 * 000000014040B19D: xor     edx, edx
 * 000000014040B19F: wrmsr
 * 000000014040B1A1: jmp     loc_14040B3E5
 * 000000014040B1A6: test    cs:KiKvaShadow, 1
 * 000000014040B1AD: jnz     short loc_14040B1B2
 * 000000014040B1AF: swapgs
 * 000000014040B1B2: lfence
 * 000000014040B1B5: mov     r10, gs:188h
 * 000000014040B1BE: mov     rcx, gs:188h
 * 000000014040B1C7: mov     rcx, [rcx+220h]
 * 000000014040B1CE: mov     rcx, [rcx+9E0h]
 * 000000014040B1D5: mov     gs:270h, rcx
 * 000000014040B1DE: mov     cl, gs:850h
 * 000000014040B1E6: mov     gs:851h, cl
 * 000000014040B1EE: mov     cl, gs:278h
 * 000000014040B1F6: mov     gs:852h, cl
 * 000000014040B1FE: movzx   eax, byte ptr gs:27Bh
 * 000000014040B207: cmp     gs:27Ah, al
 * 000000014040B20F: jz      short loc_14040B222
 * 000000014040B211: mov     gs:27Ah, al
 * 000000014040B219: mov     ecx, 48h ; 'H'
 * 000000014040B21E: xor     edx, edx
 * 000000014040B220: wrmsr
 * 000000014040B222: movzx   edx, byte ptr gs:278h
 * 000000014040B22B: test    edx, 8
 * 000000014040B231: jz      short loc_14040B24A
 * 000000014040B233: mov     eax, 1
 * 000000014040B238: xor     edx, edx
 * 000000014040B23A: mov     ecx, 49h ; 'I'
 * 000000014040B23F: wrmsr
 * 000000014040B241: movzx   edx, byte ptr gs:278h
 * 000000014040B24A: test    edx, 2
 * 000000014040B250: jz      loc_14040B37B
 * 000000014040B256: call    loc_14040B369
 * 000000014040B25B: add     rsp, 8
 * 000000014040B25F: call    loc_14040B372
 * 000000014040B264: add     rsp, 8
 * 000000014040B268: call    loc_14040B25B
 * 000000014040B26D: add     rsp, 8
 * 000000014040B271: call    loc_14040B264
 * 000000014040B276: add     rsp, 8
 * 000000014040B27A: call    loc_14040B26D
 * 000000014040B27F: add     rsp, 8
 * 000000014040B283: call    loc_14040B276
 * 000000014040B288: add     rsp, 8
 * 000000014040B28C: call    loc_14040B27F
 * 000000014040B291: add     rsp, 8
 * 000000014040B295: call    loc_14040B288
 * 000000014040B29A: add     rsp, 8
 * 000000014040B29E: call    loc_14040B291
 * 000000014040B2A3: add     rsp, 8
 * 000000014040B2A7: call    loc_14040B29A
 * 000000014040B2AC: add     rsp, 8
 * 000000014040B2B0: call    loc_14040B2A3
 * 000000014040B2B5: add     rsp, 8
 * 000000014040B2B9: call    loc_14040B2AC
 * 000000014040B2BE: add     rsp, 8
 * 000000014040B2C2: call    loc_14040B2B5
 * 000000014040B2C7: add     rsp, 8
 * 000000014040B2CB: call    loc_14040B2BE
 * 000000014040B2D0: add     rsp, 8
 * 000000014040B2D4: call    loc_14040B2C7
 * 000000014040B2D9: add     rsp, 8
 * 000000014040B2DD: call    loc_14040B2D0
 * 000000014040B2E2: add     rsp, 8
 * 000000014040B2E6: call    loc_14040B2D9
 * 000000014040B2EB: add     rsp, 8
 * 000000014040B2EF: call    loc_14040B2E2
 * 000000014040B2F4: add     rsp, 8
 * 000000014040B2F8: call    loc_14040B2EB
 * 000000014040B2FD: add     rsp, 8
 * 000000014040B301: call    loc_14040B2F4
 * 000000014040B306: add     rsp, 8
 * 000000014040B30A: call    loc_14040B2FD
 * 000000014040B30F: add     rsp, 8
 * 000000014040B313: call    loc_14040B306
 * 000000014040B318: add     rsp, 8
 * 000000014040B31C: call    loc_14040B30F
 * 000000014040B321: add     rsp, 8
 * 000000014040B325: call    loc_14040B318
 * 000000014040B32A: add     rsp, 8
 * 000000014040B32E: call    loc_14040B321
 * 000000014040B333: add     rsp, 8
 * 000000014040B337: call    loc_14040B32A
 * 000000014040B33C: add     rsp, 8
 * 000000014040B340: call    loc_14040B333
 * 000000014040B345: add     rsp, 8
 * 000000014040B349: call    loc_14040B33C
 * 000000014040B34E: add     rsp, 8
 * 000000014040B352: call    loc_14040B345
 * 000000014040B357: add     rsp, 8
 * 000000014040B35B: call    loc_14040B34E
 * 000000014040B360: add     rsp, 8
 * 000000014040B364: call    loc_14040B357
 * 000000014040B369: add     rsp, 8
 * 000000014040B36D: call    loc_14040B360
 * 000000014040B372: add     rsp, 8
 * 000000014040B376: mov     eax, 0DADAh
 * 000000014040B37B: lfence
 * 000000014040B37E: mov     byte ptr gs:853h, 0
 * 000000014040B387: test    byte ptr [r10+3], 80h
 * 000000014040B38C: jz      short loc_14040B3D0
 * 000000014040B38E: mov     ecx, 0C0000102h
 * 000000014040B393: rdmsr
 * 000000014040B395: shl     rdx, 20h
 * 000000014040B399: or      rax, rdx
 * 000000014040B39C: cmp     rax, cs:MmUserProbeAddress
 * 000000014040B3A3: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040B3AB: cmp     [r10+0F0h], rax
 * 000000014040B3B2: jz      short loc_14040B3D0
 * 000000014040B3B4: mov     rdx, [r10+1F0h]
 * 000000014040B3BB: bts     dword ptr [r10+74h], 8
 * 000000014040B3C1: dec     word ptr [r10+1E6h]
 * 000000014040B3C9: mov     [rdx+80h], rax
 * 000000014040B3D0: test    byte ptr [r10+3], 3
 * 000000014040B3D5: mov     [rbp+0D8h+var_58], 0
 * 000000014040B3DE: jz      short loc_14040B3E5
 * 000000014040B3E0: call    KiSaveDebugRegisterState
 * 000000014040B3E5: cld
 * 000000014040B3E6: stmxcsr [rbp+0D8h+var_12C]
 * 000000014040B3EA: ldmxcsr dword ptr gs:180h
 * 000000014040B3F3: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014040B3F7: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014040B3FB: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014040B3FF: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014040B403: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014040B407: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014040B40B: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040B412: jz      short loc_14040B420
 * 000000014040B414: test    [rbp+0D8h+arg_8], 1
 * 000000014040B41B: jz      short loc_14040B420
 * 000000014040B41D: stac
 * 000000014040B420: mov     eax, [rbp+0E0h]
 * 000000014040B426: test    [rbp+0D8h+arg_10], 200h
 * 000000014040B430: jz      short loc_14040B433
 * 000000014040B432: sti
 * 000000014040B433: mov     ecx, 10000001h
 * 000000014040B438: mov     edx, 2
 * 000000014040B43D: mov     r9d, [rbp+0E0h]
 * 000000014040B444: and     r9d, 0FFFFh
 * 000000014040B44B: xor     r10, r10
 * 000000014040B44E: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040B455: call    KiExceptionDispatch
 * 000000014040B45A: nop
 * 000000014040B45B: retn
 */
