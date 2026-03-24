/*
 * XREFs of KiControlProtectionFault @ 0x140410280
 * Callers:
 *     KiControlProtectionFaultShadow @ 0x140A14BC0 (KiControlProtectionFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403520 (KiInitiateUserApc.c)
 *     KiControlProtectionFault @ 0x140410280 (KiControlProtectionFault.c)
 *     KiBugCheckDispatch @ 0x140412740 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1404127C0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140412C80 (KiFastFailDispatch.c)
 *     KiUmsExit @ 0x140413A00 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiProcessControlProtection @ 0x140512760 (KiProcessControlProtection.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiControlProtectionFault @ 0x140410280
 * Reason: Hex-Rays returned no pseudocode for 0x140410280
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140410280: push    rbp
 * 0000000140410281: sub     rsp, 158h
 * 0000000140410288: lea     rbp, [rsp+80h]
 * 0000000140410290: mov     [rbp+0D8h+var_12D], 1
 * 0000000140410294: mov     [rbp+0D8h+var_128], rax
 * 0000000140410298: mov     [rbp+0D8h+var_120], rcx
 * 000000014041029C: mov     [rbp+0D8h+var_118], rdx
 * 00000001404102A0: mov     [rbp+0D8h+var_110], r8
 * 00000001404102A4: mov     [rbp+0D8h+var_108], r9
 * 00000001404102A8: mov     [rbp+0D8h+var_100], r10
 * 00000001404102AC: mov     [rbp+0D8h+var_F8], r11
 * 00000001404102B0: test    [rbp+0D8h+arg_8], 1
 * 00000001404102B7: jnz     short loc_1404102E8
 * 00000001404102B9: lfence
 * 00000001404102BC: test    word ptr gs:860h, 1
 * 00000001404102C7: jnz     short loc_1404102D1
 * 00000001404102C9: lfence
 * 00000001404102CC: jmp     loc_1404104F1
 * 00000001404102D1: movzx   eax, word ptr gs:864h
 * 00000001404102DA: mov     ecx, 48h ; 'H'
 * 00000001404102DF: xor     edx, edx
 * 00000001404102E1: wrmsr
 * 00000001404102E3: jmp     loc_1404104F1
 * 00000001404102E8: test    cs:KiKvaShadow, 1
 * 00000001404102EF: jnz     short loc_1404102F4
 * 00000001404102F1: swapgs
 * 00000001404102F4: lfence
 * 00000001404102F7: mov     r10, gs:188h
 * 0000000140410300: mov     rcx, gs:188h
 * 0000000140410309: mov     rcx, [rcx+220h]
 * 0000000140410310: mov     rcx, [rcx+9E0h]
 * 0000000140410317: mov     gs:858h, rcx
 * 0000000140410320: mov     cx, gs:850h
 * 0000000140410329: mov     gs:852h, cx
 * 0000000140410332: mov     cx, gs:860h
 * 000000014041033B: mov     gs:854h, cx
 * 0000000140410344: movzx   eax, word ptr gs:866h
 * 000000014041034D: cmp     gs:864h, ax
 * 0000000140410356: jz      short loc_14041036A
 * 0000000140410358: mov     gs:864h, ax
 * 0000000140410361: mov     ecx, 48h ; 'H'
 * 0000000140410366: xor     edx, edx
 * 0000000140410368: wrmsr
 * 000000014041036A: movzx   edx, word ptr gs:860h
 * 0000000140410373: test    edx, 8
 * 0000000140410379: jz      short loc_140410392
 * 000000014041037B: mov     eax, 1
 * 0000000140410380: xor     edx, edx
 * 0000000140410382: mov     ecx, 49h ; 'I'
 * 0000000140410387: wrmsr
 * 0000000140410389: movzx   edx, word ptr gs:860h
 * 0000000140410392: test    edx, 2
 * 0000000140410398: jz      loc_1404104C3
 * 000000014041039E: call    loc_1404104B1
 * 00000001404103A3: add     rsp, 8
 * 00000001404103A7: call    loc_1404104BA
 * 00000001404103AC: add     rsp, 8
 * 00000001404103B0: call    loc_1404103A3
 * 00000001404103B5: add     rsp, 8
 * 00000001404103B9: call    loc_1404103AC
 * 00000001404103BE: add     rsp, 8
 * 00000001404103C2: call    loc_1404103B5
 * 00000001404103C7: add     rsp, 8
 * 00000001404103CB: call    loc_1404103BE
 * 00000001404103D0: add     rsp, 8
 * 00000001404103D4: call    loc_1404103C7
 * 00000001404103D9: add     rsp, 8
 * 00000001404103DD: call    loc_1404103D0
 * 00000001404103E2: add     rsp, 8
 * 00000001404103E6: call    loc_1404103D9
 * 00000001404103EB: add     rsp, 8
 * 00000001404103EF: call    loc_1404103E2
 * 00000001404103F4: add     rsp, 8
 * 00000001404103F8: call    loc_1404103EB
 * 00000001404103FD: add     rsp, 8
 * 0000000140410401: call    loc_1404103F4
 * 0000000140410406: add     rsp, 8
 * 000000014041040A: call    loc_1404103FD
 * 000000014041040F: add     rsp, 8
 * 0000000140410413: call    loc_140410406
 * 0000000140410418: add     rsp, 8
 * 000000014041041C: call    loc_14041040F
 * 0000000140410421: add     rsp, 8
 * 0000000140410425: call    loc_140410418
 * 000000014041042A: add     rsp, 8
 * 000000014041042E: call    loc_140410421
 * 0000000140410433: add     rsp, 8
 * 0000000140410437: call    loc_14041042A
 * 000000014041043C: add     rsp, 8
 * 0000000140410440: call    loc_140410433
 * 0000000140410445: add     rsp, 8
 * 0000000140410449: call    loc_14041043C
 * 000000014041044E: add     rsp, 8
 * 0000000140410452: call    loc_140410445
 * 0000000140410457: add     rsp, 8
 * 000000014041045B: call    loc_14041044E
 * 0000000140410460: add     rsp, 8
 * 0000000140410464: call    loc_140410457
 * 0000000140410469: add     rsp, 8
 * 000000014041046D: call    loc_140410460
 * 0000000140410472: add     rsp, 8
 * 0000000140410476: call    loc_140410469
 * 000000014041047B: add     rsp, 8
 * 000000014041047F: call    loc_140410472
 * 0000000140410484: add     rsp, 8
 * 0000000140410488: call    loc_14041047B
 * 000000014041048D: add     rsp, 8
 * 0000000140410491: call    loc_140410484
 * 0000000140410496: add     rsp, 8
 * 000000014041049A: call    loc_14041048D
 * 000000014041049F: add     rsp, 8
 * 00000001404104A3: call    loc_140410496
 * 00000001404104A8: add     rsp, 8
 * 00000001404104AC: call    loc_14041049F
 * 00000001404104B1: add     rsp, 8
 * 00000001404104B5: call    loc_1404104A8
 * 00000001404104BA: add     rsp, 8
 * 00000001404104BE: mov     eax, 0DADAh
 * 00000001404104C3: test    edx, 200h
 * 00000001404104C9: jz      short loc_1404104D0
 * 00000001404104CB: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404104D0: lfence
 * 00000001404104D3: mov     byte ptr gs:856h, 0
 * 00000001404104DC: test    byte ptr [r10+3], 3
 * 00000001404104E1: mov     [rbp+0D8h+var_58], 0
 * 00000001404104EA: jz      short loc_1404104F1
 * 00000001404104EC: call    KiSaveDebugRegisterState
 * 00000001404104F1: cld
 * 00000001404104F2: stmxcsr [rbp+0D8h+var_12C]
 * 00000001404104F6: ldmxcsr dword ptr gs:180h
 * 00000001404104FF: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140410503: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140410507: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014041050B: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014041050F: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140410513: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140410517: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014041051E: jz      short loc_14041052C
 * 0000000140410520: test    [rbp+0D8h+arg_8], 1
 * 0000000140410527: jz      short loc_14041052C
 * 0000000140410529: stac
 * 000000014041052C: mov     eax, [rbp+0E0h]
 * 0000000140410532: test    [rbp+0D8h+arg_10], 200h
 * 000000014041053C: jz      short loc_14041053F
 * 000000014041053E: sti
 * 000000014041053F: test    byte ptr gs:8725h, 40h
 * 0000000140410548: jz      short loc_140410592
 * 000000014041054A: mov     r9, gs:188h
 * 0000000140410553: test    byte ptr [r9+3], 80h
 * 0000000140410558: jnz     short loc_140410574
 * 000000014041055A: lea     rcx, [rbp+0D8h+var_158]
 * 000000014041055E: call    KiProcessControlProtection
 * 0000000140410563: cmp     eax, 1
 * 0000000140410566: jz      short loc_1404105B5
 * 0000000140410568: cmp     eax, 2
 * 000000014041056B: jz      short loc_140410574
 * 000000014041056D: cmp     eax, 3
 * 0000000140410570: jz      short loc_1404105A1
 * 0000000140410572: jmp     short loc_140410592
 * 0000000140410574: mov     r9, 39h ; '9'
 * 000000014041057B: mov     ecx, 0C0000409h
 * 0000000140410580: mov     edx, 1
 * 0000000140410585: mov     r8, [rbp+0D8h+arg_0]
 * 000000014041058C: call    KiFastFailDispatch
 * 0000000140410591: nop
 * 0000000140410592: mov     edx, 15h
 * 0000000140410597: mov     ecx, 7Fh
 * 000000014041059C: call    KiBugCheckDispatch
 * 00000001404105A1: mov     ecx, 80000033h
 * 00000001404105A6: xor     edx, edx
 * 00000001404105A8: mov     r8, [rbp+0D8h+arg_0]
 * 00000001404105AF: call    KiExceptionDispatch
 * 00000001404105B4: nop
 * 00000001404105B5: cli
 * 00000001404105B6: test    [rbp+0D8h+arg_8], 1
 * 00000001404105BD: jz      loc_140410870
 * 00000001404105C3: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404105CA: jz      short loc_1404105CF
 * 00000001404105CC: stac
 * 00000001404105CF: mov     rcx, gs:188h
 * 00000001404105D8: test    byte ptr [rcx+0C2h], 3
 * 00000001404105DF: jz      short loc_1404105FC
 * 00000001404105E1: mov     ecx, 1
 * 00000001404105E6: mov     cr8, rcx
 * 00000001404105EA: sti
 * 00000001404105EB: call    KiInitiateUserApc
 * 00000001404105F0: cli
 * 00000001404105F1: mov     ecx, 0
 * 00000001404105F6: mov     cr8, rcx
 * 00000001404105FA: jmp     short loc_1404105CF
 * 00000001404105FC: test    byte ptr gs:86Ch, 2
 * 0000000140410605: jz      short loc_14041060E
 * 0000000140410607: xor     ecx, ecx
 * 0000000140410609: call    KiUpdateStibpPairing
 * 000000014041060E: mov     rcx, gs:188h
 * 0000000140410617: test    dword ptr [rcx], 8000000h
 * 000000014041061D: jz      short loc_140410624
 * 000000014041061F: call    KiRestoreSetContextState
 * 0000000140410624: mov     rcx, gs:188h
 * 000000014041062D: test    dword ptr [rcx], 40010000h
 * 0000000140410633: jz      short loc_14041065A
 * 0000000140410635: test    byte ptr [rcx+2], 1
 * 0000000140410639: jz      short loc_140410649
 * 000000014041063B: call    KiCopyCounters
 * 0000000140410640: mov     rcx, gs:188h
 * 0000000140410649: test    byte ptr [rcx+3], 40h
 * 000000014041064D: jz      short loc_14041065A
 * 000000014041064F: lea     rsp, [rbp-80h]
 * 0000000140410653: mov     cl, 1
 * 0000000140410655: call    KiUmsExit
 * 000000014041065A: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014041065E: cmp     [rbp+0D8h+var_58], 0
 * 0000000140410666: jz      short loc_14041066D
 * 0000000140410668: call    KiRestoreDebugRegisterState
 * 000000014041066D: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140410671: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140410675: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140410679: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014041067D: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140410681: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140410685: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140410689: mov     r10, [rbp+0D8h+var_100]
 * 000000014041068D: mov     r9, [rbp+0D8h+var_108]
 * 0000000140410691: mov     r8, [rbp+0D8h+var_110]
 * 0000000140410695: mov     byte ptr gs:856h, 0
 * 000000014041069E: movzx   eax, word ptr gs:86Ah
 * 00000001404106A7: cmp     gs:864h, ax
 * 00000001404106B0: jz      short loc_1404106C4
 * 00000001404106B2: mov     gs:864h, ax
 * 00000001404106BB: mov     ecx, 48h ; 'H'
 * 00000001404106C0: xor     edx, edx
 * 00000001404106C2: wrmsr
 * 00000001404106C4: btr     word ptr gs:860h, 2
 * 00000001404106CF: jnb     short loc_1404106DF
 * 00000001404106D1: mov     eax, 1
 * 00000001404106D6: xor     edx, edx
 * 00000001404106D8: mov     ecx, 49h ; 'I'
 * 00000001404106DD: wrmsr
 * 00000001404106DF: btr     word ptr gs:860h, 5
 * 00000001404106EA: jnb     loc_140410815
 * 00000001404106F0: call    loc_140410803
 * 00000001404106F5: add     rsp, 8
 * 00000001404106F9: call    loc_14041080C
 * 00000001404106FE: add     rsp, 8
 * 0000000140410702: call    loc_1404106F5
 * 0000000140410707: add     rsp, 8
 * 000000014041070B: call    loc_1404106FE
 * 0000000140410710: add     rsp, 8
 * 0000000140410714: call    loc_140410707
 * 0000000140410719: add     rsp, 8
 * 000000014041071D: call    loc_140410710
 * 0000000140410722: add     rsp, 8
 * 0000000140410726: call    loc_140410719
 * 000000014041072B: add     rsp, 8
 * 000000014041072F: call    loc_140410722
 * 0000000140410734: add     rsp, 8
 * 0000000140410738: call    loc_14041072B
 * 000000014041073D: add     rsp, 8
 * 0000000140410741: call    loc_140410734
 * 0000000140410746: add     rsp, 8
 * 000000014041074A: call    loc_14041073D
 * 000000014041074F: add     rsp, 8
 * 0000000140410753: call    loc_140410746
 * 0000000140410758: add     rsp, 8
 * 000000014041075C: call    loc_14041074F
 * 0000000140410761: add     rsp, 8
 * 0000000140410765: call    loc_140410758
 * 000000014041076A: add     rsp, 8
 * 000000014041076E: call    loc_140410761
 * 0000000140410773: add     rsp, 8
 * 0000000140410777: call    loc_14041076A
 * 000000014041077C: add     rsp, 8
 * 0000000140410780: call    loc_140410773
 * 0000000140410785: add     rsp, 8
 * 0000000140410789: call    loc_14041077C
 * 000000014041078E: add     rsp, 8
 * 0000000140410792: call    loc_140410785
 * 0000000140410797: add     rsp, 8
 * 000000014041079B: call    loc_14041078E
 * 00000001404107A0: add     rsp, 8
 * 00000001404107A4: call    loc_140410797
 * 00000001404107A9: add     rsp, 8
 * 00000001404107AD: call    loc_1404107A0
 * 00000001404107B2: add     rsp, 8
 * 00000001404107B6: call    loc_1404107A9
 * 00000001404107BB: add     rsp, 8
 * 00000001404107BF: call    loc_1404107B2
 * 00000001404107C4: add     rsp, 8
 * 00000001404107C8: call    loc_1404107BB
 * 00000001404107CD: add     rsp, 8
 * 00000001404107D1: call    loc_1404107C4
 * 00000001404107D6: add     rsp, 8
 * 00000001404107DA: call    loc_1404107CD
 * 00000001404107DF: add     rsp, 8
 * 00000001404107E3: call    loc_1404107D6
 * 00000001404107E8: add     rsp, 8
 * 00000001404107EC: call    loc_1404107DF
 * 00000001404107F1: add     rsp, 8
 * 00000001404107F5: call    loc_1404107E8
 * 00000001404107FA: add     rsp, 8
 * 00000001404107FE: call    loc_1404107F1
 * 0000000140410803: add     rsp, 8
 * 0000000140410807: call    loc_1404107FA
 * 000000014041080C: add     rsp, 8
 * 0000000140410810: mov     eax, 0DADAh
 * 0000000140410815: test    word ptr gs:860h, 80h
 * 0000000140410820: jz      short loc_14041082E
 * 0000000140410822: xor     eax, eax
 * 0000000140410824: xor     edx, edx
 * 0000000140410826: mov     ecx, 1
 * 000000014041082B: div     rcx
 * 000000014041082E: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140410832: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140410836: mov     rax, [rbp+0D8h+var_128]
 * 000000014041083A: mov     rsp, rbp
 * 000000014041083D: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140410844: add     rsp, 0E8h
 * 000000014041084B: test    cs:KiKvaShadow, 1
 * 0000000140410852: jz      short loc_140410859
 * 0000000140410854: jmp     KiKernelExit
 * 0000000140410859: test    word ptr gs:860h, 100h
 * 0000000140410864: jz      short loc_14041086B
 * 0000000140410866: verw    [rsp-10h+arg_20]
 * 000000014041086B: swapgs
 * 000000014041086E: iretq
 * 0000000140410870: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140410874: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140410878: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014041087C: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140410880: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140410884: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140410888: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014041088C: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140410890: mov     r10, [rbp+0D8h+var_100]
 * 0000000140410894: mov     r9, [rbp+0D8h+var_108]
 * 0000000140410898: mov     r8, [rbp+0D8h+var_110]
 * 000000014041089C: mov     rdx, [rbp+0D8h+var_118]
 * 00000001404108A0: mov     rcx, [rbp+0D8h+var_120]
 * 00000001404108A4: mov     rax, [rbp+0D8h+var_128]
 * 00000001404108A8: mov     rsp, rbp
 * 00000001404108AB: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001404108B2: add     rsp, 0E8h
 * 00000001404108B9: iretq
 * 00000001404108BB: retn
 */
