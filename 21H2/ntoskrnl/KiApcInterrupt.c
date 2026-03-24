/*
 * XREFs of KiApcInterrupt @ 0x140402EF0
 * Callers:
 *     KiApcInterruptShadow @ 0x140A14C40 (KiApcInterruptShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiDeliverApc @ 0x14024A750 (KiDeliverApc.c)
 *     HalPerformEndOfInterrupt @ 0x1402914D0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x140402EF0 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x140403520 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140413A00 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x140512C40 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiApcInterrupt @ 0x140402EF0
 * Reason: Hex-Rays returned no pseudocode for 0x140402EF0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140402EF0: sub     rsp, 8
 * 0000000140402EF4: push    rbp
 * 0000000140402EF5: push    rsi
 * 0000000140402EF6: sub     rsp, 150h
 * 0000000140402EFD: lea     rbp, [rsp+80h]
 * 0000000140402F05: mov     [rbp+0E8h+var_13D], 0
 * 0000000140402F09: mov     [rbp+0E8h+var_138], rax
 * 0000000140402F0D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140402F11: mov     [rbp+0E8h+var_128], rdx
 * 0000000140402F15: mov     [rbp+0E8h+var_120], r8
 * 0000000140402F19: mov     [rbp+0E8h+var_118], r9
 * 0000000140402F1D: mov     [rbp+0E8h+var_110], r10
 * 0000000140402F21: mov     [rbp+0E8h+var_108], r11
 * 0000000140402F25: test    [rbp+0E8h+arg_0], 1
 * 0000000140402F2C: jnz     short loc_140402F5D
 * 0000000140402F2E: lfence
 * 0000000140402F31: test    word ptr gs:860h, 1
 * 0000000140402F3C: jnz     short loc_140402F46
 * 0000000140402F3E: lfence
 * 0000000140402F41: jmp     loc_140403166
 * 0000000140402F46: movzx   eax, word ptr gs:864h
 * 0000000140402F4F: mov     ecx, 48h ; 'H'
 * 0000000140402F54: xor     edx, edx
 * 0000000140402F56: wrmsr
 * 0000000140402F58: jmp     loc_140403166
 * 0000000140402F5D: test    cs:KiKvaShadow, 1
 * 0000000140402F64: jnz     short loc_140402F69
 * 0000000140402F66: swapgs
 * 0000000140402F69: lfence
 * 0000000140402F6C: mov     r10, gs:188h
 * 0000000140402F75: mov     rcx, gs:188h
 * 0000000140402F7E: mov     rcx, [rcx+220h]
 * 0000000140402F85: mov     rcx, [rcx+9E0h]
 * 0000000140402F8C: mov     gs:858h, rcx
 * 0000000140402F95: mov     cx, gs:850h
 * 0000000140402F9E: mov     gs:852h, cx
 * 0000000140402FA7: mov     cx, gs:860h
 * 0000000140402FB0: mov     gs:854h, cx
 * 0000000140402FB9: movzx   eax, word ptr gs:866h
 * 0000000140402FC2: cmp     gs:864h, ax
 * 0000000140402FCB: jz      short loc_140402FDF
 * 0000000140402FCD: mov     gs:864h, ax
 * 0000000140402FD6: mov     ecx, 48h ; 'H'
 * 0000000140402FDB: xor     edx, edx
 * 0000000140402FDD: wrmsr
 * 0000000140402FDF: movzx   edx, word ptr gs:860h
 * 0000000140402FE8: test    edx, 8
 * 0000000140402FEE: jz      short loc_140403007
 * 0000000140402FF0: mov     eax, 1
 * 0000000140402FF5: xor     edx, edx
 * 0000000140402FF7: mov     ecx, 49h ; 'I'
 * 0000000140402FFC: wrmsr
 * 0000000140402FFE: movzx   edx, word ptr gs:860h
 * 0000000140403007: test    edx, 2
 * 000000014040300D: jz      loc_140403138
 * 0000000140403013: call    loc_140403126
 * 0000000140403018: add     rsp, 8
 * 000000014040301C: call    loc_14040312F
 * 0000000140403021: add     rsp, 8
 * 0000000140403025: call    loc_140403018
 * 000000014040302A: add     rsp, 8
 * 000000014040302E: call    loc_140403021
 * 0000000140403033: add     rsp, 8
 * 0000000140403037: call    loc_14040302A
 * 000000014040303C: add     rsp, 8
 * 0000000140403040: call    loc_140403033
 * 0000000140403045: add     rsp, 8
 * 0000000140403049: call    loc_14040303C
 * 000000014040304E: add     rsp, 8
 * 0000000140403052: call    loc_140403045
 * 0000000140403057: add     rsp, 8
 * 000000014040305B: call    loc_14040304E
 * 0000000140403060: add     rsp, 8
 * 0000000140403064: call    loc_140403057
 * 0000000140403069: add     rsp, 8
 * 000000014040306D: call    loc_140403060
 * 0000000140403072: add     rsp, 8
 * 0000000140403076: call    loc_140403069
 * 000000014040307B: add     rsp, 8
 * 000000014040307F: call    loc_140403072
 * 0000000140403084: add     rsp, 8
 * 0000000140403088: call    loc_14040307B
 * 000000014040308D: add     rsp, 8
 * 0000000140403091: call    loc_140403084
 * 0000000140403096: add     rsp, 8
 * 000000014040309A: call    loc_14040308D
 * 000000014040309F: add     rsp, 8
 * 00000001404030A3: call    loc_140403096
 * 00000001404030A8: add     rsp, 8
 * 00000001404030AC: call    loc_14040309F
 * 00000001404030B1: add     rsp, 8
 * 00000001404030B5: call    loc_1404030A8
 * 00000001404030BA: add     rsp, 8
 * 00000001404030BE: call    loc_1404030B1
 * 00000001404030C3: add     rsp, 8
 * 00000001404030C7: call    loc_1404030BA
 * 00000001404030CC: add     rsp, 8
 * 00000001404030D0: call    loc_1404030C3
 * 00000001404030D5: add     rsp, 8
 * 00000001404030D9: call    loc_1404030CC
 * 00000001404030DE: add     rsp, 8
 * 00000001404030E2: call    loc_1404030D5
 * 00000001404030E7: add     rsp, 8
 * 00000001404030EB: call    loc_1404030DE
 * 00000001404030F0: add     rsp, 8
 * 00000001404030F4: call    loc_1404030E7
 * 00000001404030F9: add     rsp, 8
 * 00000001404030FD: call    loc_1404030F0
 * 0000000140403102: add     rsp, 8
 * 0000000140403106: call    loc_1404030F9
 * 000000014040310B: add     rsp, 8
 * 000000014040310F: call    loc_140403102
 * 0000000140403114: add     rsp, 8
 * 0000000140403118: call    loc_14040310B
 * 000000014040311D: add     rsp, 8
 * 0000000140403121: call    loc_140403114
 * 0000000140403126: add     rsp, 8
 * 000000014040312A: call    loc_14040311D
 * 000000014040312F: add     rsp, 8
 * 0000000140403133: mov     eax, 0DADAh
 * 0000000140403138: test    edx, 200h
 * 000000014040313E: jz      short loc_140403145
 * 0000000140403140: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140403145: lfence
 * 0000000140403148: mov     byte ptr gs:856h, 0
 * 0000000140403151: test    byte ptr [r10+3], 3
 * 0000000140403156: mov     [rbp+0E8h+var_68], 0
 * 000000014040315F: jz      short loc_140403166
 * 0000000140403161: call    KiSaveDebugRegisterState
 * 0000000140403166: cld
 * 0000000140403167: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040316B: ldmxcsr dword ptr gs:180h
 * 0000000140403174: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140403178: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040317C: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140403180: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140403184: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140403188: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040318C: xor     esi, esi
 * 000000014040318E: inc     dword ptr gs:8000h
 * 0000000140403196: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040319D: jz      short loc_1404031AB
 * 000000014040319F: test    [rbp+0E8h+arg_0], 1
 * 00000001404031A6: jz      short loc_1404031AB
 * 00000001404031A8: stac
 * 00000001404031AB: mov     ecx, 1
 * 00000001404031B0: cmp     cs:KiIrqlFlags, 0
 * 00000001404031B7: jz      short loc_1404031C0
 * 00000001404031B9: call    KzSetIrqlUnsafe
 * 00000001404031BE: jmp     short loc_1404031C8
 * 00000001404031C0: mov     rax, cr8
 * 00000001404031C4: mov     cr8, rcx
 * 00000001404031C8: mov     [rbp+0E8h+var_13F], al
 * 00000001404031CB: mov     rcx, rsi
 * 00000001404031CE: call    HalPerformEndOfInterrupt
 * 00000001404031D3: sti
 * 00000001404031D4: cmp     byte ptr gs:187h, 0
 * 00000001404031DD: jnz     short loc_1404031EF
 * 00000001404031DF: mov     ecx, 0
 * 00000001404031E4: xor     edx, edx
 * 00000001404031E6: lea     r8, [rbp+0E8h+var_168]
 * 00000001404031EA: call    KiDeliverApc
 * 00000001404031EF: cli
 * 00000001404031F0: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001404031F4: cmp     cs:KiIrqlFlags, 0
 * 00000001404031FB: jz      short loc_140403204
 * 00000001404031FD: call    KzSetIrqlUnsafe
 * 0000000140403202: jmp     short loc_140403208
 * 0000000140403204: mov     cr8, rcx
 * 0000000140403208: mov     rsi, [rbp+0E8h+var_18]
 * 000000014040320F: cli
 * 0000000140403210: test    [rbp+0E8h+arg_0], 1
 * 0000000140403217: jz      loc_1404034CA
 * 000000014040321D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140403224: jz      short loc_140403229
 * 0000000140403226: stac
 * 0000000140403229: mov     rcx, gs:188h
 * 0000000140403232: test    byte ptr [rcx+0C2h], 3
 * 0000000140403239: jz      short loc_140403256
 * 000000014040323B: mov     ecx, 1
 * 0000000140403240: mov     cr8, rcx
 * 0000000140403244: sti
 * 0000000140403245: call    KiInitiateUserApc
 * 000000014040324A: cli
 * 000000014040324B: mov     ecx, 0
 * 0000000140403250: mov     cr8, rcx
 * 0000000140403254: jmp     short loc_140403229
 * 0000000140403256: test    byte ptr gs:86Ch, 2
 * 000000014040325F: jz      short loc_140403268
 * 0000000140403261: xor     ecx, ecx
 * 0000000140403263: call    KiUpdateStibpPairing
 * 0000000140403268: mov     rcx, gs:188h
 * 0000000140403271: test    dword ptr [rcx], 8000000h
 * 0000000140403277: jz      short loc_14040327E
 * 0000000140403279: call    KiRestoreSetContextState
 * 000000014040327E: mov     rcx, gs:188h
 * 0000000140403287: test    dword ptr [rcx], 40010000h
 * 000000014040328D: jz      short loc_1404032B4
 * 000000014040328F: test    byte ptr [rcx+2], 1
 * 0000000140403293: jz      short loc_1404032A3
 * 0000000140403295: call    KiCopyCounters
 * 000000014040329A: mov     rcx, gs:188h
 * 00000001404032A3: test    byte ptr [rcx+3], 40h
 * 00000001404032A7: jz      short loc_1404032B4
 * 00000001404032A9: lea     rsp, [rbp-80h]
 * 00000001404032AD: mov     cl, 1
 * 00000001404032AF: call    KiUmsExit
 * 00000001404032B4: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404032B8: cmp     [rbp+0E8h+var_68], 0
 * 00000001404032C0: jz      short loc_1404032C7
 * 00000001404032C2: call    KiRestoreDebugRegisterState
 * 00000001404032C7: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404032CB: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404032CF: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404032D3: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404032D7: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404032DB: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404032DF: mov     r11, [rbp+0E8h+var_108]
 * 00000001404032E3: mov     r10, [rbp+0E8h+var_110]
 * 00000001404032E7: mov     r9, [rbp+0E8h+var_118]
 * 00000001404032EB: mov     r8, [rbp+0E8h+var_120]
 * 00000001404032EF: mov     byte ptr gs:856h, 0
 * 00000001404032F8: movzx   eax, word ptr gs:86Ah
 * 0000000140403301: cmp     gs:864h, ax
 * 000000014040330A: jz      short loc_14040331E
 * 000000014040330C: mov     gs:864h, ax
 * 0000000140403315: mov     ecx, 48h ; 'H'
 * 000000014040331A: xor     edx, edx
 * 000000014040331C: wrmsr
 * 000000014040331E: btr     word ptr gs:860h, 2
 * 0000000140403329: jnb     short loc_140403339
 * 000000014040332B: mov     eax, 1
 * 0000000140403330: xor     edx, edx
 * 0000000140403332: mov     ecx, 49h ; 'I'
 * 0000000140403337: wrmsr
 * 0000000140403339: btr     word ptr gs:860h, 5
 * 0000000140403344: jnb     loc_14040346F
 * 000000014040334A: call    loc_14040345D
 * 000000014040334F: add     rsp, 8
 * 0000000140403353: call    loc_140403466
 * 0000000140403358: add     rsp, 8
 * 000000014040335C: call    loc_14040334F
 * 0000000140403361: add     rsp, 8
 * 0000000140403365: call    loc_140403358
 * 000000014040336A: add     rsp, 8
 * 000000014040336E: call    loc_140403361
 * 0000000140403373: add     rsp, 8
 * 0000000140403377: call    loc_14040336A
 * 000000014040337C: add     rsp, 8
 * 0000000140403380: call    loc_140403373
 * 0000000140403385: add     rsp, 8
 * 0000000140403389: call    loc_14040337C
 * 000000014040338E: add     rsp, 8
 * 0000000140403392: call    loc_140403385
 * 0000000140403397: add     rsp, 8
 * 000000014040339B: call    loc_14040338E
 * 00000001404033A0: add     rsp, 8
 * 00000001404033A4: call    loc_140403397
 * 00000001404033A9: add     rsp, 8
 * 00000001404033AD: call    loc_1404033A0
 * 00000001404033B2: add     rsp, 8
 * 00000001404033B6: call    loc_1404033A9
 * 00000001404033BB: add     rsp, 8
 * 00000001404033BF: call    loc_1404033B2
 * 00000001404033C4: add     rsp, 8
 * 00000001404033C8: call    loc_1404033BB
 * 00000001404033CD: add     rsp, 8
 * 00000001404033D1: call    loc_1404033C4
 * 00000001404033D6: add     rsp, 8
 * 00000001404033DA: call    loc_1404033CD
 * 00000001404033DF: add     rsp, 8
 * 00000001404033E3: call    loc_1404033D6
 * 00000001404033E8: add     rsp, 8
 * 00000001404033EC: call    loc_1404033DF
 * 00000001404033F1: add     rsp, 8
 * 00000001404033F5: call    loc_1404033E8
 * 00000001404033FA: add     rsp, 8
 * 00000001404033FE: call    loc_1404033F1
 * 0000000140403403: add     rsp, 8
 * 0000000140403407: call    loc_1404033FA
 * 000000014040340C: add     rsp, 8
 * 0000000140403410: call    loc_140403403
 * 0000000140403415: add     rsp, 8
 * 0000000140403419: call    loc_14040340C
 * 000000014040341E: add     rsp, 8
 * 0000000140403422: call    loc_140403415
 * 0000000140403427: add     rsp, 8
 * 000000014040342B: call    loc_14040341E
 * 0000000140403430: add     rsp, 8
 * 0000000140403434: call    loc_140403427
 * 0000000140403439: add     rsp, 8
 * 000000014040343D: call    loc_140403430
 * 0000000140403442: add     rsp, 8
 * 0000000140403446: call    loc_140403439
 * 000000014040344B: add     rsp, 8
 * 000000014040344F: call    loc_140403442
 * 0000000140403454: add     rsp, 8
 * 0000000140403458: call    loc_14040344B
 * 000000014040345D: add     rsp, 8
 * 0000000140403461: call    loc_140403454
 * 0000000140403466: add     rsp, 8
 * 000000014040346A: mov     eax, 0DADAh
 * 000000014040346F: test    word ptr gs:860h, 80h
 * 000000014040347A: jz      short loc_140403488
 * 000000014040347C: xor     eax, eax
 * 000000014040347E: xor     edx, edx
 * 0000000140403480: mov     ecx, 1
 * 0000000140403485: div     rcx
 * 0000000140403488: mov     rdx, [rbp+0E8h+var_128]
 * 000000014040348C: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140403490: mov     rax, [rbp+0E8h+var_138]
 * 0000000140403494: mov     rsp, rbp
 * 0000000140403497: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040349E: add     rsp, 0E8h
 * 00000001404034A5: test    cs:KiKvaShadow, 1
 * 00000001404034AC: jz      short loc_1404034B3
 * 00000001404034AE: jmp     KiKernelExit
 * 00000001404034B3: test    word ptr gs:860h, 100h
 * 00000001404034BE: jz      short loc_1404034C5
 * 00000001404034C0: verw    [rsp+arg_18]
 * 00000001404034C5: swapgs
 * 00000001404034C8: iretq
 * 00000001404034CA: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404034CE: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404034D2: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404034D6: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404034DA: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404034DE: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404034E2: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404034E6: mov     r11, [rbp+0E8h+var_108]
 * 00000001404034EA: mov     r10, [rbp+0E8h+var_110]
 * 00000001404034EE: mov     r9, [rbp+0E8h+var_118]
 * 00000001404034F2: mov     r8, [rbp+0E8h+var_120]
 * 00000001404034F6: mov     rdx, [rbp+0E8h+var_128]
 * 00000001404034FA: mov     rcx, [rbp+0E8h+var_130]
 * 00000001404034FE: mov     rax, [rbp+0E8h+var_138]
 * 0000000140403502: mov     rsp, rbp
 * 0000000140403505: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040350C: add     rsp, 0E8h
 * 0000000140403513: iretq
 */
