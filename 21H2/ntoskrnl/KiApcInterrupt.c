/*
 * XREFs of KiApcInterrupt @ 0x1404030D0
 * Callers:
 *     KiApcInterruptShadow @ 0x140A15C40 (KiApcInterruptShadow.c)
 * Callees:
 *     HalPerformEndOfInterrupt @ 0x14020F440 (HalPerformEndOfInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x1404030D0 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140413B00 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x140512E80 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiApcInterrupt @ 0x1404030D0
 * Reason: Hex-Rays returned no pseudocode for 0x1404030D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404030D0: sub     rsp, 8
 * 00000001404030D4: push    rbp
 * 00000001404030D5: push    rsi
 * 00000001404030D6: sub     rsp, 150h
 * 00000001404030DD: lea     rbp, [rsp+80h]
 * 00000001404030E5: mov     [rbp+0E8h+var_13D], 0
 * 00000001404030E9: mov     [rbp+0E8h+var_138], rax
 * 00000001404030ED: mov     [rbp+0E8h+var_130], rcx
 * 00000001404030F1: mov     [rbp+0E8h+var_128], rdx
 * 00000001404030F5: mov     [rbp+0E8h+var_120], r8
 * 00000001404030F9: mov     [rbp+0E8h+var_118], r9
 * 00000001404030FD: mov     [rbp+0E8h+var_110], r10
 * 0000000140403101: mov     [rbp+0E8h+var_108], r11
 * 0000000140403105: test    [rbp+0E8h+arg_0], 1
 * 000000014040310C: jnz     short loc_14040313D
 * 000000014040310E: lfence
 * 0000000140403111: test    word ptr gs:860h, 1
 * 000000014040311C: jnz     short loc_140403126
 * 000000014040311E: lfence
 * 0000000140403121: jmp     loc_140403346
 * 0000000140403126: movzx   eax, word ptr gs:864h
 * 000000014040312F: mov     ecx, 48h ; 'H'
 * 0000000140403134: xor     edx, edx
 * 0000000140403136: wrmsr
 * 0000000140403138: jmp     loc_140403346
 * 000000014040313D: test    cs:KiKvaShadow, 1
 * 0000000140403144: jnz     short loc_140403149
 * 0000000140403146: swapgs
 * 0000000140403149: lfence
 * 000000014040314C: mov     r10, gs:188h
 * 0000000140403155: mov     rcx, gs:188h
 * 000000014040315E: mov     rcx, [rcx+220h]
 * 0000000140403165: mov     rcx, [rcx+9E0h]
 * 000000014040316C: mov     gs:858h, rcx
 * 0000000140403175: mov     cx, gs:850h
 * 000000014040317E: mov     gs:852h, cx
 * 0000000140403187: mov     cx, gs:860h
 * 0000000140403190: mov     gs:854h, cx
 * 0000000140403199: movzx   eax, word ptr gs:866h
 * 00000001404031A2: cmp     gs:864h, ax
 * 00000001404031AB: jz      short loc_1404031BF
 * 00000001404031AD: mov     gs:864h, ax
 * 00000001404031B6: mov     ecx, 48h ; 'H'
 * 00000001404031BB: xor     edx, edx
 * 00000001404031BD: wrmsr
 * 00000001404031BF: movzx   edx, word ptr gs:860h
 * 00000001404031C8: test    edx, 8
 * 00000001404031CE: jz      short loc_1404031E7
 * 00000001404031D0: mov     eax, 1
 * 00000001404031D5: xor     edx, edx
 * 00000001404031D7: mov     ecx, 49h ; 'I'
 * 00000001404031DC: wrmsr
 * 00000001404031DE: movzx   edx, word ptr gs:860h
 * 00000001404031E7: test    edx, 2
 * 00000001404031ED: jz      loc_140403318
 * 00000001404031F3: call    loc_140403306
 * 00000001404031F8: add     rsp, 8
 * 00000001404031FC: call    loc_14040330F
 * 0000000140403201: add     rsp, 8
 * 0000000140403205: call    loc_1404031F8
 * 000000014040320A: add     rsp, 8
 * 000000014040320E: call    loc_140403201
 * 0000000140403213: add     rsp, 8
 * 0000000140403217: call    loc_14040320A
 * 000000014040321C: add     rsp, 8
 * 0000000140403220: call    loc_140403213
 * 0000000140403225: add     rsp, 8
 * 0000000140403229: call    loc_14040321C
 * 000000014040322E: add     rsp, 8
 * 0000000140403232: call    loc_140403225
 * 0000000140403237: add     rsp, 8
 * 000000014040323B: call    loc_14040322E
 * 0000000140403240: add     rsp, 8
 * 0000000140403244: call    loc_140403237
 * 0000000140403249: add     rsp, 8
 * 000000014040324D: call    loc_140403240
 * 0000000140403252: add     rsp, 8
 * 0000000140403256: call    loc_140403249
 * 000000014040325B: add     rsp, 8
 * 000000014040325F: call    loc_140403252
 * 0000000140403264: add     rsp, 8
 * 0000000140403268: call    loc_14040325B
 * 000000014040326D: add     rsp, 8
 * 0000000140403271: call    loc_140403264
 * 0000000140403276: add     rsp, 8
 * 000000014040327A: call    loc_14040326D
 * 000000014040327F: add     rsp, 8
 * 0000000140403283: call    loc_140403276
 * 0000000140403288: add     rsp, 8
 * 000000014040328C: call    loc_14040327F
 * 0000000140403291: add     rsp, 8
 * 0000000140403295: call    loc_140403288
 * 000000014040329A: add     rsp, 8
 * 000000014040329E: call    loc_140403291
 * 00000001404032A3: add     rsp, 8
 * 00000001404032A7: call    loc_14040329A
 * 00000001404032AC: add     rsp, 8
 * 00000001404032B0: call    loc_1404032A3
 * 00000001404032B5: add     rsp, 8
 * 00000001404032B9: call    loc_1404032AC
 * 00000001404032BE: add     rsp, 8
 * 00000001404032C2: call    loc_1404032B5
 * 00000001404032C7: add     rsp, 8
 * 00000001404032CB: call    loc_1404032BE
 * 00000001404032D0: add     rsp, 8
 * 00000001404032D4: call    loc_1404032C7
 * 00000001404032D9: add     rsp, 8
 * 00000001404032DD: call    loc_1404032D0
 * 00000001404032E2: add     rsp, 8
 * 00000001404032E6: call    loc_1404032D9
 * 00000001404032EB: add     rsp, 8
 * 00000001404032EF: call    loc_1404032E2
 * 00000001404032F4: add     rsp, 8
 * 00000001404032F8: call    loc_1404032EB
 * 00000001404032FD: add     rsp, 8
 * 0000000140403301: call    loc_1404032F4
 * 0000000140403306: add     rsp, 8
 * 000000014040330A: call    loc_1404032FD
 * 000000014040330F: add     rsp, 8
 * 0000000140403313: mov     eax, 0DADAh
 * 0000000140403318: test    edx, 200h
 * 000000014040331E: jz      short loc_140403325
 * 0000000140403320: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140403325: lfence
 * 0000000140403328: mov     byte ptr gs:856h, 0
 * 0000000140403331: test    byte ptr [r10+3], 3
 * 0000000140403336: mov     [rbp+0E8h+var_68], 0
 * 000000014040333F: jz      short loc_140403346
 * 0000000140403341: call    KiSaveDebugRegisterState
 * 0000000140403346: cld
 * 0000000140403347: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040334B: ldmxcsr dword ptr gs:180h
 * 0000000140403354: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140403358: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040335C: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140403360: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140403364: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140403368: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040336C: xor     esi, esi
 * 000000014040336E: inc     dword ptr gs:8000h
 * 0000000140403376: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040337D: jz      short loc_14040338B
 * 000000014040337F: test    [rbp+0E8h+arg_0], 1
 * 0000000140403386: jz      short loc_14040338B
 * 0000000140403388: stac
 * 000000014040338B: mov     ecx, 1
 * 0000000140403390: cmp     cs:KiIrqlFlags, 0
 * 0000000140403397: jz      short loc_1404033A0
 * 0000000140403399: call    KzSetIrqlUnsafe
 * 000000014040339E: jmp     short loc_1404033A8
 * 00000001404033A0: mov     rax, cr8
 * 00000001404033A4: mov     cr8, rcx
 * 00000001404033A8: mov     [rbp+0E8h+var_13F], al
 * 00000001404033AB: mov     rcx, rsi
 * 00000001404033AE: call    HalPerformEndOfInterrupt
 * 00000001404033B3: sti
 * 00000001404033B4: cmp     byte ptr gs:187h, 0
 * 00000001404033BD: jnz     short loc_1404033CF
 * 00000001404033BF: mov     ecx, 0
 * 00000001404033C4: xor     edx, edx
 * 00000001404033C6: lea     r8, [rbp+0E8h+var_168]
 * 00000001404033CA: call    KiDeliverApc
 * 00000001404033CF: cli
 * 00000001404033D0: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001404033D4: cmp     cs:KiIrqlFlags, 0
 * 00000001404033DB: jz      short loc_1404033E4
 * 00000001404033DD: call    KzSetIrqlUnsafe
 * 00000001404033E2: jmp     short loc_1404033E8
 * 00000001404033E4: mov     cr8, rcx
 * 00000001404033E8: mov     rsi, [rbp+0E8h+var_18]
 * 00000001404033EF: cli
 * 00000001404033F0: test    [rbp+0E8h+arg_0], 1
 * 00000001404033F7: jz      loc_1404036AA
 * 00000001404033FD: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140403404: jz      short loc_140403409
 * 0000000140403406: stac
 * 0000000140403409: mov     rcx, gs:188h
 * 0000000140403412: test    byte ptr [rcx+0C2h], 3
 * 0000000140403419: jz      short loc_140403436
 * 000000014040341B: mov     ecx, 1
 * 0000000140403420: mov     cr8, rcx
 * 0000000140403424: sti
 * 0000000140403425: call    KiInitiateUserApc
 * 000000014040342A: cli
 * 000000014040342B: mov     ecx, 0
 * 0000000140403430: mov     cr8, rcx
 * 0000000140403434: jmp     short loc_140403409
 * 0000000140403436: test    byte ptr gs:86Ch, 2
 * 000000014040343F: jz      short loc_140403448
 * 0000000140403441: xor     ecx, ecx
 * 0000000140403443: call    KiUpdateStibpPairing
 * 0000000140403448: mov     rcx, gs:188h
 * 0000000140403451: test    dword ptr [rcx], 8000000h
 * 0000000140403457: jz      short loc_14040345E
 * 0000000140403459: call    KiRestoreSetContextState
 * 000000014040345E: mov     rcx, gs:188h
 * 0000000140403467: test    dword ptr [rcx], 40010000h
 * 000000014040346D: jz      short loc_140403494
 * 000000014040346F: test    byte ptr [rcx+2], 1
 * 0000000140403473: jz      short loc_140403483
 * 0000000140403475: call    KiCopyCounters
 * 000000014040347A: mov     rcx, gs:188h
 * 0000000140403483: test    byte ptr [rcx+3], 40h
 * 0000000140403487: jz      short loc_140403494
 * 0000000140403489: lea     rsp, [rbp-80h]
 * 000000014040348D: mov     cl, 1
 * 000000014040348F: call    KiUmsExit
 * 0000000140403494: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140403498: cmp     [rbp+0E8h+var_68], 0
 * 00000001404034A0: jz      short loc_1404034A7
 * 00000001404034A2: call    KiRestoreDebugRegisterState
 * 00000001404034A7: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404034AB: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404034AF: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404034B3: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404034B7: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404034BB: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404034BF: mov     r11, [rbp+0E8h+var_108]
 * 00000001404034C3: mov     r10, [rbp+0E8h+var_110]
 * 00000001404034C7: mov     r9, [rbp+0E8h+var_118]
 * 00000001404034CB: mov     r8, [rbp+0E8h+var_120]
 * 00000001404034CF: mov     byte ptr gs:856h, 0
 * 00000001404034D8: movzx   eax, word ptr gs:86Ah
 * 00000001404034E1: cmp     gs:864h, ax
 * 00000001404034EA: jz      short loc_1404034FE
 * 00000001404034EC: mov     gs:864h, ax
 * 00000001404034F5: mov     ecx, 48h ; 'H'
 * 00000001404034FA: xor     edx, edx
 * 00000001404034FC: wrmsr
 * 00000001404034FE: btr     word ptr gs:860h, 2
 * 0000000140403509: jnb     short loc_140403519
 * 000000014040350B: mov     eax, 1
 * 0000000140403510: xor     edx, edx
 * 0000000140403512: mov     ecx, 49h ; 'I'
 * 0000000140403517: wrmsr
 * 0000000140403519: btr     word ptr gs:860h, 5
 * 0000000140403524: jnb     loc_14040364F
 * 000000014040352A: call    loc_14040363D
 * 000000014040352F: add     rsp, 8
 * 0000000140403533: call    loc_140403646
 * 0000000140403538: add     rsp, 8
 * 000000014040353C: call    loc_14040352F
 * 0000000140403541: add     rsp, 8
 * 0000000140403545: call    loc_140403538
 * 000000014040354A: add     rsp, 8
 * 000000014040354E: call    loc_140403541
 * 0000000140403553: add     rsp, 8
 * 0000000140403557: call    loc_14040354A
 * 000000014040355C: add     rsp, 8
 * 0000000140403560: call    loc_140403553
 * 0000000140403565: add     rsp, 8
 * 0000000140403569: call    loc_14040355C
 * 000000014040356E: add     rsp, 8
 * 0000000140403572: call    loc_140403565
 * 0000000140403577: add     rsp, 8
 * 000000014040357B: call    loc_14040356E
 * 0000000140403580: add     rsp, 8
 * 0000000140403584: call    loc_140403577
 * 0000000140403589: add     rsp, 8
 * 000000014040358D: call    loc_140403580
 * 0000000140403592: add     rsp, 8
 * 0000000140403596: call    loc_140403589
 * 000000014040359B: add     rsp, 8
 * 000000014040359F: call    loc_140403592
 * 00000001404035A4: add     rsp, 8
 * 00000001404035A8: call    loc_14040359B
 * 00000001404035AD: add     rsp, 8
 * 00000001404035B1: call    loc_1404035A4
 * 00000001404035B6: add     rsp, 8
 * 00000001404035BA: call    loc_1404035AD
 * 00000001404035BF: add     rsp, 8
 * 00000001404035C3: call    loc_1404035B6
 * 00000001404035C8: add     rsp, 8
 * 00000001404035CC: call    loc_1404035BF
 * 00000001404035D1: add     rsp, 8
 * 00000001404035D5: call    loc_1404035C8
 * 00000001404035DA: add     rsp, 8
 * 00000001404035DE: call    loc_1404035D1
 * 00000001404035E3: add     rsp, 8
 * 00000001404035E7: call    loc_1404035DA
 * 00000001404035EC: add     rsp, 8
 * 00000001404035F0: call    loc_1404035E3
 * 00000001404035F5: add     rsp, 8
 * 00000001404035F9: call    loc_1404035EC
 * 00000001404035FE: add     rsp, 8
 * 0000000140403602: call    loc_1404035F5
 * 0000000140403607: add     rsp, 8
 * 000000014040360B: call    loc_1404035FE
 * 0000000140403610: add     rsp, 8
 * 0000000140403614: call    loc_140403607
 * 0000000140403619: add     rsp, 8
 * 000000014040361D: call    loc_140403610
 * 0000000140403622: add     rsp, 8
 * 0000000140403626: call    loc_140403619
 * 000000014040362B: add     rsp, 8
 * 000000014040362F: call    loc_140403622
 * 0000000140403634: add     rsp, 8
 * 0000000140403638: call    loc_14040362B
 * 000000014040363D: add     rsp, 8
 * 0000000140403641: call    loc_140403634
 * 0000000140403646: add     rsp, 8
 * 000000014040364A: mov     eax, 0DADAh
 * 000000014040364F: test    word ptr gs:860h, 80h
 * 000000014040365A: jz      short loc_140403668
 * 000000014040365C: xor     eax, eax
 * 000000014040365E: xor     edx, edx
 * 0000000140403660: mov     ecx, 1
 * 0000000140403665: div     rcx
 * 0000000140403668: mov     rdx, [rbp+0E8h+var_128]
 * 000000014040366C: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140403670: mov     rax, [rbp+0E8h+var_138]
 * 0000000140403674: mov     rsp, rbp
 * 0000000140403677: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040367E: add     rsp, 0E8h
 * 0000000140403685: test    cs:KiKvaShadow, 1
 * 000000014040368C: jz      short loc_140403693
 * 000000014040368E: jmp     KiKernelExit
 * 0000000140403693: test    word ptr gs:860h, 100h
 * 000000014040369E: jz      short loc_1404036A5
 * 00000001404036A0: verw    [rsp+arg_18]
 * 00000001404036A5: swapgs
 * 00000001404036A8: iretq
 * 00000001404036AA: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404036AE: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404036B2: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404036B6: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404036BA: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404036BE: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404036C2: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404036C6: mov     r11, [rbp+0E8h+var_108]
 * 00000001404036CA: mov     r10, [rbp+0E8h+var_110]
 * 00000001404036CE: mov     r9, [rbp+0E8h+var_118]
 * 00000001404036D2: mov     r8, [rbp+0E8h+var_120]
 * 00000001404036D6: mov     rdx, [rbp+0E8h+var_128]
 * 00000001404036DA: mov     rcx, [rbp+0E8h+var_130]
 * 00000001404036DE: mov     rax, [rbp+0E8h+var_138]
 * 00000001404036E2: mov     rsp, rbp
 * 00000001404036E5: mov     rbp, [rbp+0E8h+var_10]
 * 00000001404036EC: add     rsp, 0E8h
 * 00000001404036F3: iretq
 */
