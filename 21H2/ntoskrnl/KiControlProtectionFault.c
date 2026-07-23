/*
 * XREFs of KiControlProtectionFault @ 0x140410380
 * Callers:
 *     KiControlProtectionFaultShadow @ 0x140A15BC0 (KiControlProtectionFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiControlProtectionFault @ 0x140410380 (KiControlProtectionFault.c)
 *     KiBugCheckDispatch @ 0x140412840 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1404128C0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140412D80 (KiFastFailDispatch.c)
 *     KiUmsExit @ 0x140413B00 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiProcessControlProtection @ 0x1405129A0 (KiProcessControlProtection.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiControlProtectionFault @ 0x140410380
 * Reason: Hex-Rays returned no pseudocode for 0x140410380
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140410380: push    rbp
 * 0000000140410381: sub     rsp, 158h
 * 0000000140410388: lea     rbp, [rsp+80h]
 * 0000000140410390: mov     [rbp+0D8h+var_12D], 1
 * 0000000140410394: mov     [rbp+0D8h+var_128], rax
 * 0000000140410398: mov     [rbp+0D8h+var_120], rcx
 * 000000014041039C: mov     [rbp+0D8h+var_118], rdx
 * 00000001404103A0: mov     [rbp+0D8h+var_110], r8
 * 00000001404103A4: mov     [rbp+0D8h+var_108], r9
 * 00000001404103A8: mov     [rbp+0D8h+var_100], r10
 * 00000001404103AC: mov     [rbp+0D8h+var_F8], r11
 * 00000001404103B0: test    [rbp+0D8h+arg_8], 1
 * 00000001404103B7: jnz     short loc_1404103E8
 * 00000001404103B9: lfence
 * 00000001404103BC: test    word ptr gs:860h, 1
 * 00000001404103C7: jnz     short loc_1404103D1
 * 00000001404103C9: lfence
 * 00000001404103CC: jmp     loc_1404105F1
 * 00000001404103D1: movzx   eax, word ptr gs:864h
 * 00000001404103DA: mov     ecx, 48h ; 'H'
 * 00000001404103DF: xor     edx, edx
 * 00000001404103E1: wrmsr
 * 00000001404103E3: jmp     loc_1404105F1
 * 00000001404103E8: test    cs:KiKvaShadow, 1
 * 00000001404103EF: jnz     short loc_1404103F4
 * 00000001404103F1: swapgs
 * 00000001404103F4: lfence
 * 00000001404103F7: mov     r10, gs:188h
 * 0000000140410400: mov     rcx, gs:188h
 * 0000000140410409: mov     rcx, [rcx+220h]
 * 0000000140410410: mov     rcx, [rcx+9E0h]
 * 0000000140410417: mov     gs:858h, rcx
 * 0000000140410420: mov     cx, gs:850h
 * 0000000140410429: mov     gs:852h, cx
 * 0000000140410432: mov     cx, gs:860h
 * 000000014041043B: mov     gs:854h, cx
 * 0000000140410444: movzx   eax, word ptr gs:866h
 * 000000014041044D: cmp     gs:864h, ax
 * 0000000140410456: jz      short loc_14041046A
 * 0000000140410458: mov     gs:864h, ax
 * 0000000140410461: mov     ecx, 48h ; 'H'
 * 0000000140410466: xor     edx, edx
 * 0000000140410468: wrmsr
 * 000000014041046A: movzx   edx, word ptr gs:860h
 * 0000000140410473: test    edx, 8
 * 0000000140410479: jz      short loc_140410492
 * 000000014041047B: mov     eax, 1
 * 0000000140410480: xor     edx, edx
 * 0000000140410482: mov     ecx, 49h ; 'I'
 * 0000000140410487: wrmsr
 * 0000000140410489: movzx   edx, word ptr gs:860h
 * 0000000140410492: test    edx, 2
 * 0000000140410498: jz      loc_1404105C3
 * 000000014041049E: call    loc_1404105B1
 * 00000001404104A3: add     rsp, 8
 * 00000001404104A7: call    loc_1404105BA
 * 00000001404104AC: add     rsp, 8
 * 00000001404104B0: call    loc_1404104A3
 * 00000001404104B5: add     rsp, 8
 * 00000001404104B9: call    loc_1404104AC
 * 00000001404104BE: add     rsp, 8
 * 00000001404104C2: call    loc_1404104B5
 * 00000001404104C7: add     rsp, 8
 * 00000001404104CB: call    loc_1404104BE
 * 00000001404104D0: add     rsp, 8
 * 00000001404104D4: call    loc_1404104C7
 * 00000001404104D9: add     rsp, 8
 * 00000001404104DD: call    loc_1404104D0
 * 00000001404104E2: add     rsp, 8
 * 00000001404104E6: call    loc_1404104D9
 * 00000001404104EB: add     rsp, 8
 * 00000001404104EF: call    loc_1404104E2
 * 00000001404104F4: add     rsp, 8
 * 00000001404104F8: call    loc_1404104EB
 * 00000001404104FD: add     rsp, 8
 * 0000000140410501: call    loc_1404104F4
 * 0000000140410506: add     rsp, 8
 * 000000014041050A: call    loc_1404104FD
 * 000000014041050F: add     rsp, 8
 * 0000000140410513: call    loc_140410506
 * 0000000140410518: add     rsp, 8
 * 000000014041051C: call    loc_14041050F
 * 0000000140410521: add     rsp, 8
 * 0000000140410525: call    loc_140410518
 * 000000014041052A: add     rsp, 8
 * 000000014041052E: call    loc_140410521
 * 0000000140410533: add     rsp, 8
 * 0000000140410537: call    loc_14041052A
 * 000000014041053C: add     rsp, 8
 * 0000000140410540: call    loc_140410533
 * 0000000140410545: add     rsp, 8
 * 0000000140410549: call    loc_14041053C
 * 000000014041054E: add     rsp, 8
 * 0000000140410552: call    loc_140410545
 * 0000000140410557: add     rsp, 8
 * 000000014041055B: call    loc_14041054E
 * 0000000140410560: add     rsp, 8
 * 0000000140410564: call    loc_140410557
 * 0000000140410569: add     rsp, 8
 * 000000014041056D: call    loc_140410560
 * 0000000140410572: add     rsp, 8
 * 0000000140410576: call    loc_140410569
 * 000000014041057B: add     rsp, 8
 * 000000014041057F: call    loc_140410572
 * 0000000140410584: add     rsp, 8
 * 0000000140410588: call    loc_14041057B
 * 000000014041058D: add     rsp, 8
 * 0000000140410591: call    loc_140410584
 * 0000000140410596: add     rsp, 8
 * 000000014041059A: call    loc_14041058D
 * 000000014041059F: add     rsp, 8
 * 00000001404105A3: call    loc_140410596
 * 00000001404105A8: add     rsp, 8
 * 00000001404105AC: call    loc_14041059F
 * 00000001404105B1: add     rsp, 8
 * 00000001404105B5: call    loc_1404105A8
 * 00000001404105BA: add     rsp, 8
 * 00000001404105BE: mov     eax, 0DADAh
 * 00000001404105C3: test    edx, 200h
 * 00000001404105C9: jz      short loc_1404105D0
 * 00000001404105CB: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404105D0: lfence
 * 00000001404105D3: mov     byte ptr gs:856h, 0
 * 00000001404105DC: test    byte ptr [r10+3], 3
 * 00000001404105E1: mov     [rbp+0D8h+var_58], 0
 * 00000001404105EA: jz      short loc_1404105F1
 * 00000001404105EC: call    KiSaveDebugRegisterState
 * 00000001404105F1: cld
 * 00000001404105F2: stmxcsr [rbp+0D8h+var_12C]
 * 00000001404105F6: ldmxcsr dword ptr gs:180h
 * 00000001404105FF: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140410603: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140410607: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014041060B: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014041060F: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140410613: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140410617: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014041061E: jz      short loc_14041062C
 * 0000000140410620: test    [rbp+0D8h+arg_8], 1
 * 0000000140410627: jz      short loc_14041062C
 * 0000000140410629: stac
 * 000000014041062C: mov     eax, [rbp+0E0h]
 * 0000000140410632: test    [rbp+0D8h+arg_10], 200h
 * 000000014041063C: jz      short loc_14041063F
 * 000000014041063E: sti
 * 000000014041063F: test    byte ptr gs:8725h, 40h
 * 0000000140410648: jz      short loc_140410692
 * 000000014041064A: mov     r9, gs:188h
 * 0000000140410653: test    byte ptr [r9+3], 80h
 * 0000000140410658: jnz     short loc_140410674
 * 000000014041065A: lea     rcx, [rbp+0D8h+var_158]
 * 000000014041065E: call    KiProcessControlProtection
 * 0000000140410663: cmp     eax, 1
 * 0000000140410666: jz      short loc_1404106B5
 * 0000000140410668: cmp     eax, 2
 * 000000014041066B: jz      short loc_140410674
 * 000000014041066D: cmp     eax, 3
 * 0000000140410670: jz      short loc_1404106A1
 * 0000000140410672: jmp     short loc_140410692
 * 0000000140410674: mov     r9, 39h ; '9'
 * 000000014041067B: mov     ecx, 0C0000409h
 * 0000000140410680: mov     edx, 1
 * 0000000140410685: mov     r8, [rbp+0D8h+arg_0]
 * 000000014041068C: call    KiFastFailDispatch
 * 0000000140410691: nop
 * 0000000140410692: mov     edx, 15h
 * 0000000140410697: mov     ecx, 7Fh
 * 000000014041069C: call    KiBugCheckDispatch
 * 00000001404106A1: mov     ecx, 80000033h
 * 00000001404106A6: xor     edx, edx
 * 00000001404106A8: mov     r8, [rbp+0D8h+arg_0]
 * 00000001404106AF: call    KiExceptionDispatch
 * 00000001404106B4: nop
 * 00000001404106B5: cli
 * 00000001404106B6: test    [rbp+0D8h+arg_8], 1
 * 00000001404106BD: jz      loc_140410970
 * 00000001404106C3: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404106CA: jz      short loc_1404106CF
 * 00000001404106CC: stac
 * 00000001404106CF: mov     rcx, gs:188h
 * 00000001404106D8: test    byte ptr [rcx+0C2h], 3
 * 00000001404106DF: jz      short loc_1404106FC
 * 00000001404106E1: mov     ecx, 1
 * 00000001404106E6: mov     cr8, rcx
 * 00000001404106EA: sti
 * 00000001404106EB: call    KiInitiateUserApc
 * 00000001404106F0: cli
 * 00000001404106F1: mov     ecx, 0
 * 00000001404106F6: mov     cr8, rcx
 * 00000001404106FA: jmp     short loc_1404106CF
 * 00000001404106FC: test    byte ptr gs:86Ch, 2
 * 0000000140410705: jz      short loc_14041070E
 * 0000000140410707: xor     ecx, ecx
 * 0000000140410709: call    KiUpdateStibpPairing
 * 000000014041070E: mov     rcx, gs:188h
 * 0000000140410717: test    dword ptr [rcx], 8000000h
 * 000000014041071D: jz      short loc_140410724
 * 000000014041071F: call    KiRestoreSetContextState
 * 0000000140410724: mov     rcx, gs:188h
 * 000000014041072D: test    dword ptr [rcx], 40010000h
 * 0000000140410733: jz      short loc_14041075A
 * 0000000140410735: test    byte ptr [rcx+2], 1
 * 0000000140410739: jz      short loc_140410749
 * 000000014041073B: call    KiCopyCounters
 * 0000000140410740: mov     rcx, gs:188h
 * 0000000140410749: test    byte ptr [rcx+3], 40h
 * 000000014041074D: jz      short loc_14041075A
 * 000000014041074F: lea     rsp, [rbp-80h]
 * 0000000140410753: mov     cl, 1
 * 0000000140410755: call    KiUmsExit
 * 000000014041075A: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014041075E: cmp     [rbp+0D8h+var_58], 0
 * 0000000140410766: jz      short loc_14041076D
 * 0000000140410768: call    KiRestoreDebugRegisterState
 * 000000014041076D: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140410771: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140410775: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140410779: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014041077D: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140410781: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140410785: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140410789: mov     r10, [rbp+0D8h+var_100]
 * 000000014041078D: mov     r9, [rbp+0D8h+var_108]
 * 0000000140410791: mov     r8, [rbp+0D8h+var_110]
 * 0000000140410795: mov     byte ptr gs:856h, 0
 * 000000014041079E: movzx   eax, word ptr gs:86Ah
 * 00000001404107A7: cmp     gs:864h, ax
 * 00000001404107B0: jz      short loc_1404107C4
 * 00000001404107B2: mov     gs:864h, ax
 * 00000001404107BB: mov     ecx, 48h ; 'H'
 * 00000001404107C0: xor     edx, edx
 * 00000001404107C2: wrmsr
 * 00000001404107C4: btr     word ptr gs:860h, 2
 * 00000001404107CF: jnb     short loc_1404107DF
 * 00000001404107D1: mov     eax, 1
 * 00000001404107D6: xor     edx, edx
 * 00000001404107D8: mov     ecx, 49h ; 'I'
 * 00000001404107DD: wrmsr
 * 00000001404107DF: btr     word ptr gs:860h, 5
 * 00000001404107EA: jnb     loc_140410915
 * 00000001404107F0: call    loc_140410903
 * 00000001404107F5: add     rsp, 8
 * 00000001404107F9: call    loc_14041090C
 * 00000001404107FE: add     rsp, 8
 * 0000000140410802: call    loc_1404107F5
 * 0000000140410807: add     rsp, 8
 * 000000014041080B: call    loc_1404107FE
 * 0000000140410810: add     rsp, 8
 * 0000000140410814: call    loc_140410807
 * 0000000140410819: add     rsp, 8
 * 000000014041081D: call    loc_140410810
 * 0000000140410822: add     rsp, 8
 * 0000000140410826: call    loc_140410819
 * 000000014041082B: add     rsp, 8
 * 000000014041082F: call    loc_140410822
 * 0000000140410834: add     rsp, 8
 * 0000000140410838: call    loc_14041082B
 * 000000014041083D: add     rsp, 8
 * 0000000140410841: call    loc_140410834
 * 0000000140410846: add     rsp, 8
 * 000000014041084A: call    loc_14041083D
 * 000000014041084F: add     rsp, 8
 * 0000000140410853: call    loc_140410846
 * 0000000140410858: add     rsp, 8
 * 000000014041085C: call    loc_14041084F
 * 0000000140410861: add     rsp, 8
 * 0000000140410865: call    loc_140410858
 * 000000014041086A: add     rsp, 8
 * 000000014041086E: call    loc_140410861
 * 0000000140410873: add     rsp, 8
 * 0000000140410877: call    loc_14041086A
 * 000000014041087C: add     rsp, 8
 * 0000000140410880: call    loc_140410873
 * 0000000140410885: add     rsp, 8
 * 0000000140410889: call    loc_14041087C
 * 000000014041088E: add     rsp, 8
 * 0000000140410892: call    loc_140410885
 * 0000000140410897: add     rsp, 8
 * 000000014041089B: call    loc_14041088E
 * 00000001404108A0: add     rsp, 8
 * 00000001404108A4: call    loc_140410897
 * 00000001404108A9: add     rsp, 8
 * 00000001404108AD: call    loc_1404108A0
 * 00000001404108B2: add     rsp, 8
 * 00000001404108B6: call    loc_1404108A9
 * 00000001404108BB: add     rsp, 8
 * 00000001404108BF: call    loc_1404108B2
 * 00000001404108C4: add     rsp, 8
 * 00000001404108C8: call    loc_1404108BB
 * 00000001404108CD: add     rsp, 8
 * 00000001404108D1: call    loc_1404108C4
 * 00000001404108D6: add     rsp, 8
 * 00000001404108DA: call    loc_1404108CD
 * 00000001404108DF: add     rsp, 8
 * 00000001404108E3: call    loc_1404108D6
 * 00000001404108E8: add     rsp, 8
 * 00000001404108EC: call    loc_1404108DF
 * 00000001404108F1: add     rsp, 8
 * 00000001404108F5: call    loc_1404108E8
 * 00000001404108FA: add     rsp, 8
 * 00000001404108FE: call    loc_1404108F1
 * 0000000140410903: add     rsp, 8
 * 0000000140410907: call    loc_1404108FA
 * 000000014041090C: add     rsp, 8
 * 0000000140410910: mov     eax, 0DADAh
 * 0000000140410915: test    word ptr gs:860h, 80h
 * 0000000140410920: jz      short loc_14041092E
 * 0000000140410922: xor     eax, eax
 * 0000000140410924: xor     edx, edx
 * 0000000140410926: mov     ecx, 1
 * 000000014041092B: div     rcx
 * 000000014041092E: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140410932: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140410936: mov     rax, [rbp+0D8h+var_128]
 * 000000014041093A: mov     rsp, rbp
 * 000000014041093D: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140410944: add     rsp, 0E8h
 * 000000014041094B: test    cs:KiKvaShadow, 1
 * 0000000140410952: jz      short loc_140410959
 * 0000000140410954: jmp     KiKernelExit
 * 0000000140410959: test    word ptr gs:860h, 100h
 * 0000000140410964: jz      short loc_14041096B
 * 0000000140410966: verw    [rsp-10h+arg_20]
 * 000000014041096B: swapgs
 * 000000014041096E: iretq
 * 0000000140410970: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140410974: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140410978: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014041097C: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140410980: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140410984: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140410988: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014041098C: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140410990: mov     r10, [rbp+0D8h+var_100]
 * 0000000140410994: mov     r9, [rbp+0D8h+var_108]
 * 0000000140410998: mov     r8, [rbp+0D8h+var_110]
 * 000000014041099C: mov     rdx, [rbp+0D8h+var_118]
 * 00000001404109A0: mov     rcx, [rbp+0D8h+var_120]
 * 00000001404109A4: mov     rax, [rbp+0D8h+var_128]
 * 00000001404109A8: mov     rsp, rbp
 * 00000001404109AB: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001404109B2: add     rsp, 0E8h
 * 00000001404109B9: iretq
 * 00000001404109BB: retn
 */
