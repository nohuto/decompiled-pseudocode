/*
 * XREFs of KiDpcInterrupt @ 0x140403100
 * Callers:
 *     KiDpcInterruptShadow @ 0x140A17F40 (KiDpcInterruptShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x1402F5F40 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x140403100 (KiDpcInterrupt.c)
 *     KiDispatchInterrupt @ 0x140403F40 (KiDispatchInterrupt.c)
 *     KzSetIrqlUnsafe @ 0x140511100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x140403100
 * Reason: Hex-Rays returned no pseudocode for 0x140403100
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140403100: sub     rsp, 8
 * 0000000140403104: push    rbp
 * 0000000140403105: push    rsi
 * 0000000140403106: sub     rsp, 150h
 * 000000014040310D: lea     rbp, [rsp+80h]
 * 0000000140403115: mov     [rbp+0E8h+var_13D], 0
 * 0000000140403119: mov     [rbp+0E8h+var_138], rax
 * 000000014040311D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140403121: mov     [rbp+0E8h+var_128], rdx
 * 0000000140403125: mov     [rbp+0E8h+var_120], r8
 * 0000000140403129: mov     [rbp+0E8h+var_118], r9
 * 000000014040312D: mov     [rbp+0E8h+var_110], r10
 * 0000000140403131: mov     [rbp+0E8h+var_108], r11
 * 0000000140403135: test    [rbp+0E8h+arg_0], 1
 * 000000014040313C: jnz     short loc_14040316B
 * 000000014040313E: lfence
 * 0000000140403141: test    byte ptr gs:278h, 1
 * 000000014040314A: jnz     short loc_140403154
 * 000000014040314C: lfence
 * 000000014040314F: jmp     loc_140403361
 * 0000000140403154: movzx   eax, byte ptr gs:27Ah
 * 000000014040315D: mov     ecx, 48h ; 'H'
 * 0000000140403162: xor     edx, edx
 * 0000000140403164: wrmsr
 * 0000000140403166: jmp     loc_140403361
 * 000000014040316B: test    cs:KiKvaShadow, 1
 * 0000000140403172: jnz     short loc_140403177
 * 0000000140403174: swapgs
 * 0000000140403177: lfence
 * 000000014040317A: mov     r10, gs:188h
 * 0000000140403183: mov     rcx, gs:188h
 * 000000014040318C: mov     rcx, [rcx+220h]
 * 0000000140403193: mov     rcx, [rcx+9E0h]
 * 000000014040319A: mov     gs:270h, rcx
 * 00000001404031A3: mov     cl, gs:850h
 * 00000001404031AB: mov     gs:851h, cl
 * 00000001404031B3: mov     cl, gs:278h
 * 00000001404031BB: mov     gs:852h, cl
 * 00000001404031C3: movzx   eax, byte ptr gs:27Bh
 * 00000001404031CC: cmp     gs:27Ah, al
 * 00000001404031D4: jz      short loc_1404031E7
 * 00000001404031D6: mov     gs:27Ah, al
 * 00000001404031DE: mov     ecx, 48h ; 'H'
 * 00000001404031E3: xor     edx, edx
 * 00000001404031E5: wrmsr
 * 00000001404031E7: movzx   edx, byte ptr gs:278h
 * 00000001404031F0: test    edx, 8
 * 00000001404031F6: jz      short loc_14040320F
 * 00000001404031F8: mov     eax, 1
 * 00000001404031FD: xor     edx, edx
 * 00000001404031FF: mov     ecx, 49h ; 'I'
 * 0000000140403204: wrmsr
 * 0000000140403206: movzx   edx, byte ptr gs:278h
 * 000000014040320F: test    edx, 2
 * 0000000140403215: jz      loc_140403340
 * 000000014040321B: call    loc_14040332E
 * 0000000140403220: add     rsp, 8
 * 0000000140403224: call    loc_140403337
 * 0000000140403229: add     rsp, 8
 * 000000014040322D: call    loc_140403220
 * 0000000140403232: add     rsp, 8
 * 0000000140403236: call    loc_140403229
 * 000000014040323B: add     rsp, 8
 * 000000014040323F: call    loc_140403232
 * 0000000140403244: add     rsp, 8
 * 0000000140403248: call    loc_14040323B
 * 000000014040324D: add     rsp, 8
 * 0000000140403251: call    loc_140403244
 * 0000000140403256: add     rsp, 8
 * 000000014040325A: call    loc_14040324D
 * 000000014040325F: add     rsp, 8
 * 0000000140403263: call    loc_140403256
 * 0000000140403268: add     rsp, 8
 * 000000014040326C: call    loc_14040325F
 * 0000000140403271: add     rsp, 8
 * 0000000140403275: call    loc_140403268
 * 000000014040327A: add     rsp, 8
 * 000000014040327E: call    loc_140403271
 * 0000000140403283: add     rsp, 8
 * 0000000140403287: call    loc_14040327A
 * 000000014040328C: add     rsp, 8
 * 0000000140403290: call    loc_140403283
 * 0000000140403295: add     rsp, 8
 * 0000000140403299: call    loc_14040328C
 * 000000014040329E: add     rsp, 8
 * 00000001404032A2: call    loc_140403295
 * 00000001404032A7: add     rsp, 8
 * 00000001404032AB: call    loc_14040329E
 * 00000001404032B0: add     rsp, 8
 * 00000001404032B4: call    loc_1404032A7
 * 00000001404032B9: add     rsp, 8
 * 00000001404032BD: call    loc_1404032B0
 * 00000001404032C2: add     rsp, 8
 * 00000001404032C6: call    loc_1404032B9
 * 00000001404032CB: add     rsp, 8
 * 00000001404032CF: call    loc_1404032C2
 * 00000001404032D4: add     rsp, 8
 * 00000001404032D8: call    loc_1404032CB
 * 00000001404032DD: add     rsp, 8
 * 00000001404032E1: call    loc_1404032D4
 * 00000001404032E6: add     rsp, 8
 * 00000001404032EA: call    loc_1404032DD
 * 00000001404032EF: add     rsp, 8
 * 00000001404032F3: call    loc_1404032E6
 * 00000001404032F8: add     rsp, 8
 * 00000001404032FC: call    loc_1404032EF
 * 0000000140403301: add     rsp, 8
 * 0000000140403305: call    loc_1404032F8
 * 000000014040330A: add     rsp, 8
 * 000000014040330E: call    loc_140403301
 * 0000000140403313: add     rsp, 8
 * 0000000140403317: call    loc_14040330A
 * 000000014040331C: add     rsp, 8
 * 0000000140403320: call    loc_140403313
 * 0000000140403325: add     rsp, 8
 * 0000000140403329: call    loc_14040331C
 * 000000014040332E: add     rsp, 8
 * 0000000140403332: call    loc_140403325
 * 0000000140403337: add     rsp, 8
 * 000000014040333B: mov     eax, 0DADAh
 * 0000000140403340: lfence
 * 0000000140403343: mov     byte ptr gs:853h, 0
 * 000000014040334C: test    byte ptr [r10+3], 3
 * 0000000140403351: mov     [rbp+0E8h+var_68], 0
 * 000000014040335A: jz      short loc_140403361
 * 000000014040335C: call    KiSaveDebugRegisterState
 * 0000000140403361: cld
 * 0000000140403362: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140403366: ldmxcsr dword ptr gs:180h
 * 000000014040336F: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140403373: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140403377: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040337B: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040337F: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140403383: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140403387: xor     esi, esi
 * 0000000140403389: inc     dword ptr gs:8000h
 * 0000000140403391: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140403398: jz      short loc_14040339D
 * 000000014040339A: clac
 * 000000014040339D: mov     ecx, 2
 * 00000001404033A2: cmp     cs:KiIrqlFlags, 0
 * 00000001404033A9: jz      short loc_1404033B2
 * 00000001404033AB: call    KzSetIrqlUnsafe
 * 00000001404033B0: jmp     short loc_1404033BA
 * 00000001404033B2: mov     rax, cr8
 * 00000001404033B6: mov     cr8, rcx
 * 00000001404033BA: mov     [rbp+0E8h+var_13F], al
 * 00000001404033BD: mov     rcx, rsi
 * 00000001404033C0: call    HalPerformEndOfInterrupt
 * 00000001404033C5: sti
 * 00000001404033C6: cmp     byte ptr gs:187h, 0
 * 00000001404033CF: jnz     short loc_1404033E8
 * 00000001404033D1: mov     al, [rbp+0E8h+var_13F]
 * 00000001404033D4: mov     rcx, gs:188h
 * 00000001404033DD: mov     [rcx+186h], al
 * 00000001404033E3: call    KiDispatchInterrupt
 * 00000001404033E8: cli
 * 00000001404033E9: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001404033ED: cmp     cs:KiIrqlFlags, 0
 * 00000001404033F4: jz      short loc_1404033FD
 * 00000001404033F6: call    KzSetIrqlUnsafe
 * 00000001404033FB: jmp     short loc_140403401
 * 00000001404033FD: mov     cr8, rcx
 * 0000000140403401: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140403408: cli
 * 0000000140403409: test    [rbp+0E8h+arg_0], 1
 * 0000000140403410: jz      loc_140403685
 * 0000000140403416: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040341D: jz      short loc_140403422
 * 000000014040341F: stac
 * 0000000140403422: mov     rcx, gs:188h
 * 000000014040342B: test    byte ptr [rcx+0C2h], 3
 * 0000000140403432: jz      short loc_14040344F
 * 0000000140403434: mov     ecx, 1
 * 0000000140403439: mov     cr8, rcx
 * 000000014040343D: sti
 * 000000014040343E: call    KiInitiateUserApc
 * 0000000140403443: cli
 * 0000000140403444: mov     ecx, 0
 * 0000000140403449: mov     cr8, rcx
 * 000000014040344D: jmp     short loc_140403422
 * 000000014040344F: test    byte ptr gs:27Eh, 2
 * 0000000140403458: jz      short loc_140403461
 * 000000014040345A: xor     ecx, ecx
 * 000000014040345C: call    KiUpdateStibpPairing
 * 0000000140403461: mov     rcx, gs:188h
 * 000000014040346A: test    dword ptr [rcx], 8000000h
 * 0000000140403470: jz      short loc_140403477
 * 0000000140403472: call    KiRestoreSetContextState
 * 0000000140403477: mov     rcx, gs:188h
 * 0000000140403480: test    dword ptr [rcx], 40010000h
 * 0000000140403486: jz      short loc_14040349C
 * 0000000140403488: test    byte ptr [rcx+2], 1
 * 000000014040348C: jz      short loc_14040349C
 * 000000014040348E: call    KiCopyCounters
 * 0000000140403493: mov     rcx, gs:188h
 * 000000014040349C: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404034A0: cmp     [rbp+0E8h+var_68], 0
 * 00000001404034A8: jz      short loc_1404034AF
 * 00000001404034AA: call    KiRestoreDebugRegisterState
 * 00000001404034AF: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404034B3: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404034B7: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404034BB: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404034BF: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404034C3: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404034C7: mov     r11, [rbp+0E8h+var_108]
 * 00000001404034CB: mov     r10, [rbp+0E8h+var_110]
 * 00000001404034CF: mov     r9, [rbp+0E8h+var_118]
 * 00000001404034D3: mov     r8, [rbp+0E8h+var_120]
 * 00000001404034D7: mov     byte ptr gs:853h, 0
 * 00000001404034E0: movzx   eax, byte ptr gs:27Dh
 * 00000001404034E9: cmp     gs:27Ah, al
 * 00000001404034F1: jz      short loc_140403504
 * 00000001404034F3: mov     gs:27Ah, al
 * 00000001404034FB: mov     ecx, 48h ; 'H'
 * 0000000140403500: xor     edx, edx
 * 0000000140403502: wrmsr
 * 0000000140403504: btr     word ptr gs:278h, 2
 * 000000014040350F: jnb     short loc_14040351F
 * 0000000140403511: mov     eax, 1
 * 0000000140403516: xor     edx, edx
 * 0000000140403518: mov     ecx, 49h ; 'I'
 * 000000014040351D: wrmsr
 * 000000014040351F: btr     word ptr gs:278h, 5
 * 000000014040352A: jnb     loc_140403655
 * 0000000140403530: call    loc_140403643
 * 0000000140403535: add     rsp, 8
 * 0000000140403539: call    loc_14040364C
 * 000000014040353E: add     rsp, 8
 * 0000000140403542: call    loc_140403535
 * 0000000140403547: add     rsp, 8
 * 000000014040354B: call    loc_14040353E
 * 0000000140403550: add     rsp, 8
 * 0000000140403554: call    loc_140403547
 * 0000000140403559: add     rsp, 8
 * 000000014040355D: call    loc_140403550
 * 0000000140403562: add     rsp, 8
 * 0000000140403566: call    loc_140403559
 * 000000014040356B: add     rsp, 8
 * 000000014040356F: call    loc_140403562
 * 0000000140403574: add     rsp, 8
 * 0000000140403578: call    loc_14040356B
 * 000000014040357D: add     rsp, 8
 * 0000000140403581: call    loc_140403574
 * 0000000140403586: add     rsp, 8
 * 000000014040358A: call    loc_14040357D
 * 000000014040358F: add     rsp, 8
 * 0000000140403593: call    loc_140403586
 * 0000000140403598: add     rsp, 8
 * 000000014040359C: call    loc_14040358F
 * 00000001404035A1: add     rsp, 8
 * 00000001404035A5: call    loc_140403598
 * 00000001404035AA: add     rsp, 8
 * 00000001404035AE: call    loc_1404035A1
 * 00000001404035B3: add     rsp, 8
 * 00000001404035B7: call    loc_1404035AA
 * 00000001404035BC: add     rsp, 8
 * 00000001404035C0: call    loc_1404035B3
 * 00000001404035C5: add     rsp, 8
 * 00000001404035C9: call    loc_1404035BC
 * 00000001404035CE: add     rsp, 8
 * 00000001404035D2: call    loc_1404035C5
 * 00000001404035D7: add     rsp, 8
 * 00000001404035DB: call    loc_1404035CE
 * 00000001404035E0: add     rsp, 8
 * 00000001404035E4: call    loc_1404035D7
 * 00000001404035E9: add     rsp, 8
 * 00000001404035ED: call    loc_1404035E0
 * 00000001404035F2: add     rsp, 8
 * 00000001404035F6: call    loc_1404035E9
 * 00000001404035FB: add     rsp, 8
 * 00000001404035FF: call    loc_1404035F2
 * 0000000140403604: add     rsp, 8
 * 0000000140403608: call    loc_1404035FB
 * 000000014040360D: add     rsp, 8
 * 0000000140403611: call    loc_140403604
 * 0000000140403616: add     rsp, 8
 * 000000014040361A: call    loc_14040360D
 * 000000014040361F: add     rsp, 8
 * 0000000140403623: call    loc_140403616
 * 0000000140403628: add     rsp, 8
 * 000000014040362C: call    loc_14040361F
 * 0000000140403631: add     rsp, 8
 * 0000000140403635: call    loc_140403628
 * 000000014040363A: add     rsp, 8
 * 000000014040363E: call    loc_140403631
 * 0000000140403643: add     rsp, 8
 * 0000000140403647: call    loc_14040363A
 * 000000014040364C: add     rsp, 8
 * 0000000140403650: mov     eax, 0DADAh
 * 0000000140403655: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140403659: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040365D: mov     rax, [rbp+0E8h+var_138]
 * 0000000140403661: mov     rsp, rbp
 * 0000000140403664: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040366B: add     rsp, 0E8h
 * 0000000140403672: test    cs:KiKvaShadow, 1
 * 0000000140403679: jz      short loc_140403680
 * 000000014040367B: jmp     KiKernelExit
 * 0000000140403680: swapgs
 * 0000000140403683: iretq
 * 0000000140403685: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140403689: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040368D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140403691: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140403695: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140403699: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040369D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404036A1: mov     r11, [rbp+0E8h+var_108]
 * 00000001404036A5: mov     r10, [rbp+0E8h+var_110]
 * 00000001404036A9: mov     r9, [rbp+0E8h+var_118]
 * 00000001404036AD: mov     r8, [rbp+0E8h+var_120]
 * 00000001404036B1: mov     rdx, [rbp+0E8h+var_128]
 * 00000001404036B5: mov     rcx, [rbp+0E8h+var_130]
 * 00000001404036B9: mov     rax, [rbp+0E8h+var_138]
 * 00000001404036BD: mov     rsp, rbp
 * 00000001404036C0: mov     rbp, [rbp+0E8h+var_10]
 * 00000001404036C7: add     rsp, 0E8h
 * 00000001404036CE: iretq
 */
