/*
 * XREFs of KiUmsFastReturnToUser @ 0x140413200
 * Callers:
 *     KiUmsTrapEntry @ 0x140413680 (KiUmsTrapEntry.c)
 *     KiUmsCallEntry @ 0x140413880 (KiUmsCallEntry.c)
 *     KiUmsExceptionEntry @ 0x140413A40 (KiUmsExceptionEntry.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x140412840 (KiBugCheckDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140413200 (KiUmsFastReturnToUser.c)
 *     KiUmsExit @ 0x140413B00 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiUmsFastReturnToUser @ 0x140413200
 * Reason: Hex-Rays returned no pseudocode for 0x140413200
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140413200: sub     rsp, 28h
 * 0000000140413204: mov     rbx, gs:188h
 * 000000014041320D: mov     rcx, [rbx+90h]
 * 0000000140413214: lea     rbp, [rcx+80h]
 * 000000014041321B: mov     rax, cr8
 * 000000014041321F: or      al, [rbx+24Ah]
 * 0000000140413225: or      eax, [rbx+1E4h]
 * 000000014041322B: jz      short loc_140413261
 * 000000014041322D: mov     ecx, 4Ah ; 'J'
 * 0000000140413232: xor     r9d, r9d
 * 0000000140413235: mov     r8, cr8
 * 0000000140413239: or      r8d, r8d
 * 000000014041323C: jnz     short loc_140413252
 * 000000014041323E: mov     ecx, 1
 * 0000000140413243: movzx   r8d, byte ptr [rbx+24Ah]
 * 000000014041324B: mov     r9d, [rbx+1E4h]
 * 0000000140413252: mov     rdx, [rbp+0E8h]
 * 0000000140413259: mov     r10, rbp
 * 000000014041325C: call    KiBugCheckDispatch
 * 0000000140413261: cli
 * 0000000140413262: mov     rcx, gs:188h
 * 000000014041326B: test    byte ptr [rcx+0C2h], 3
 * 0000000140413272: jz      short loc_1404132CD
 * 0000000140413274: mov     [rbp-50h], rax
 * 0000000140413278: xor     eax, eax
 * 000000014041327A: mov     [rbp-48h], rax
 * 000000014041327E: mov     [rbp-40h], rax
 * 0000000140413282: mov     [rbp-38h], rax
 * 0000000140413286: mov     [rbp-30h], rax
 * 000000014041328A: mov     [rbp-28h], rax
 * 000000014041328E: mov     [rbp-20h], rax
 * 0000000140413292: pxor    xmm0, xmm0
 * 0000000140413296: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014041329A: movaps  xmmword ptr [rbp+0], xmm0
 * 000000014041329E: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001404132A2: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001404132A6: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001404132AA: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001404132AE: mov     ecx, 1
 * 00000001404132B3: mov     cr8, rcx
 * 00000001404132B7: sti
 * 00000001404132B8: call    KiInitiateUserApc
 * 00000001404132BD: cli
 * 00000001404132BE: mov     ecx, 0
 * 00000001404132C3: mov     cr8, rcx
 * 00000001404132C7: mov     rax, [rbp-50h]
 * 00000001404132CB: jmp     short loc_140413262
 * 00000001404132CD: test    byte ptr gs:86Ch, 2
 * 00000001404132D6: jz      short loc_1404132E7
 * 00000001404132D8: mov     [rbp-50h], rax
 * 00000001404132DC: xor     ecx, ecx
 * 00000001404132DE: call    KiUpdateStibpPairing
 * 00000001404132E3: mov     rax, [rbp-50h]
 * 00000001404132E7: mov     rcx, gs:188h
 * 00000001404132F0: test    dword ptr [rcx], 8000000h
 * 00000001404132F6: jz      short loc_140413337
 * 00000001404132F8: mov     [rbp-50h], rax
 * 00000001404132FC: xor     eax, eax
 * 00000001404132FE: mov     [rbp-48h], rax
 * 0000000140413302: mov     [rbp-40h], rax
 * 0000000140413306: mov     [rbp-38h], rax
 * 000000014041330A: mov     [rbp-30h], rax
 * 000000014041330E: mov     [rbp-28h], rax
 * 0000000140413312: mov     [rbp-20h], rax
 * 0000000140413316: pxor    xmm0, xmm0
 * 000000014041331A: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014041331E: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140413322: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140413326: movaps  xmmword ptr [rbp+20h], xmm0
 * 000000014041332A: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014041332E: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140413332: call    KiRestoreSetContextState
 * 0000000140413337: mov     rcx, gs:188h
 * 0000000140413340: test    dword ptr [rcx], 40010000h
 * 0000000140413346: jz      short loc_140413375
 * 0000000140413348: mov     [rbp-50h], rax
 * 000000014041334C: test    byte ptr [rcx+2], 1
 * 0000000140413350: jz      short loc_140413360
 * 0000000140413352: call    KiCopyCounters
 * 0000000140413357: mov     rcx, gs:188h
 * 0000000140413360: test    byte ptr [rcx+3], 40h
 * 0000000140413364: jz      short loc_140413371
 * 0000000140413366: lea     rsp, [rbp-80h]
 * 000000014041336A: xor     ecx, ecx
 * 000000014041336C: call    KiUmsExit
 * 0000000140413371: mov     rax, [rbp-50h]
 * 0000000140413375: ldmxcsr dword ptr [rbp-54h]
 * 0000000140413379: xor     r10, r10
 * 000000014041337C: cmp     word ptr [rbp+80h], 0
 * 0000000140413384: jz      short loc_1404133C7
 * 0000000140413386: mov     [rbp-50h], rax
 * 000000014041338A: call    KiRestoreDebugRegisterState
 * 000000014041338F: mov     rax, gs:188h
 * 0000000140413398: mov     rax, [rax+0B8h]
 * 000000014041339F: mov     rax, [rax+3D8h]
 * 00000001404133A6: or      rax, rax
 * 00000001404133A9: jz      short loc_1404133C3
 * 00000001404133AB: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 00000001404133B3: jnz     short loc_1404133C3
 * 00000001404133B5: mov     r10, [rbp+0E8h]
 * 00000001404133BC: mov     [rbp+0E8h], rax
 * 00000001404133C3: mov     rax, [rbp-50h]
 * 00000001404133C7: mov     [rbp-50h], rax
 * 00000001404133CB: mov     byte ptr gs:856h, 0
 * 00000001404133D4: movzx   eax, word ptr gs:86Ah
 * 00000001404133DD: cmp     gs:864h, ax
 * 00000001404133E6: jz      short loc_1404133FA
 * 00000001404133E8: mov     gs:864h, ax
 * 00000001404133F1: mov     ecx, 48h ; 'H'
 * 00000001404133F6: xor     edx, edx
 * 00000001404133F8: wrmsr
 * 00000001404133FA: btr     word ptr gs:860h, 2
 * 0000000140413405: jnb     short loc_140413415
 * 0000000140413407: mov     eax, 1
 * 000000014041340C: xor     edx, edx
 * 000000014041340E: mov     ecx, 49h ; 'I'
 * 0000000140413413: wrmsr
 * 0000000140413415: btr     word ptr gs:860h, 5
 * 0000000140413420: jnb     loc_14041354B
 * 0000000140413426: call    loc_140413539
 * 000000014041342B: add     rsp, 8
 * 000000014041342F: call    loc_140413542
 * 0000000140413434: add     rsp, 8
 * 0000000140413438: call    loc_14041342B
 * 000000014041343D: add     rsp, 8
 * 0000000140413441: call    loc_140413434
 * 0000000140413446: add     rsp, 8
 * 000000014041344A: call    loc_14041343D
 * 000000014041344F: add     rsp, 8
 * 0000000140413453: call    loc_140413446
 * 0000000140413458: add     rsp, 8
 * 000000014041345C: call    loc_14041344F
 * 0000000140413461: add     rsp, 8
 * 0000000140413465: call    loc_140413458
 * 000000014041346A: add     rsp, 8
 * 000000014041346E: call    loc_140413461
 * 0000000140413473: add     rsp, 8
 * 0000000140413477: call    loc_14041346A
 * 000000014041347C: add     rsp, 8
 * 0000000140413480: call    loc_140413473
 * 0000000140413485: add     rsp, 8
 * 0000000140413489: call    loc_14041347C
 * 000000014041348E: add     rsp, 8
 * 0000000140413492: call    loc_140413485
 * 0000000140413497: add     rsp, 8
 * 000000014041349B: call    loc_14041348E
 * 00000001404134A0: add     rsp, 8
 * 00000001404134A4: call    loc_140413497
 * 00000001404134A9: add     rsp, 8
 * 00000001404134AD: call    loc_1404134A0
 * 00000001404134B2: add     rsp, 8
 * 00000001404134B6: call    loc_1404134A9
 * 00000001404134BB: add     rsp, 8
 * 00000001404134BF: call    loc_1404134B2
 * 00000001404134C4: add     rsp, 8
 * 00000001404134C8: call    loc_1404134BB
 * 00000001404134CD: add     rsp, 8
 * 00000001404134D1: call    loc_1404134C4
 * 00000001404134D6: add     rsp, 8
 * 00000001404134DA: call    loc_1404134CD
 * 00000001404134DF: add     rsp, 8
 * 00000001404134E3: call    loc_1404134D6
 * 00000001404134E8: add     rsp, 8
 * 00000001404134EC: call    loc_1404134DF
 * 00000001404134F1: add     rsp, 8
 * 00000001404134F5: call    loc_1404134E8
 * 00000001404134FA: add     rsp, 8
 * 00000001404134FE: call    loc_1404134F1
 * 0000000140413503: add     rsp, 8
 * 0000000140413507: call    loc_1404134FA
 * 000000014041350C: add     rsp, 8
 * 0000000140413510: call    loc_140413503
 * 0000000140413515: add     rsp, 8
 * 0000000140413519: call    loc_14041350C
 * 000000014041351E: add     rsp, 8
 * 0000000140413522: call    loc_140413515
 * 0000000140413527: add     rsp, 8
 * 000000014041352B: call    loc_14041351E
 * 0000000140413530: add     rsp, 8
 * 0000000140413534: call    loc_140413527
 * 0000000140413539: add     rsp, 8
 * 000000014041353D: call    loc_140413530
 * 0000000140413542: add     rsp, 8
 * 0000000140413546: mov     eax, 0DADAh
 * 000000014041354B: test    word ptr gs:860h, 80h
 * 0000000140413556: jz      short loc_140413564
 * 0000000140413558: xor     eax, eax
 * 000000014041355A: xor     edx, edx
 * 000000014041355C: mov     ecx, 1
 * 0000000140413561: div     rcx
 * 0000000140413564: mov     rax, [rbp-50h]
 * 0000000140413568: mov     r8, [rbp+100h]
 * 000000014041356F: mov     r9, [rbp+0D8h]
 * 0000000140413576: xor     edx, edx
 * 0000000140413578: pxor    xmm0, xmm0
 * 000000014041357C: pxor    xmm1, xmm1
 * 0000000140413580: pxor    xmm2, xmm2
 * 0000000140413584: pxor    xmm3, xmm3
 * 0000000140413588: pxor    xmm4, xmm4
 * 000000014041358C: pxor    xmm5, xmm5
 * 0000000140413590: mov     rcx, [rbp+0E8h]
 * 0000000140413597: mov     r11, [rbp+0F8h]
 * 000000014041359E: test    cs:KiKvaShadow, 1
 * 00000001404135A5: jnz     KiKernelSysretExit
 * 00000001404135AB: mov     rbp, r9
 * 00000001404135AE: mov     rsp, r8
 * 00000001404135B1: test    word ptr gs:860h, 100h
 * 00000001404135BC: jz      short loc_1404135C7
 * 00000001404135BE: verw    word ptr gs:902Ah
 * 00000001404135C7: swapgs
 * 00000001404135CA: sysret
 * 00000001404135CD: retn
 */
