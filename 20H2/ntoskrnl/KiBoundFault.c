/*
 * XREFs of KiBoundFault @ 0x140409240
 * Callers:
 *     KiBoundFaultShadow @ 0x140A173C0 (KiBoundFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiBoundFault @ 0x140409240 (KiBoundFault.c)
 *     KiBugCheckDispatch @ 0x14040FCC0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1404101C0 (KiFastFailDispatch.c)
 *     KiUmsTrapEntry @ 0x140410A40 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140410EC0 (KiUmsExit.c)
 *     KiHandleBound @ 0x140513030 (KiHandleBound.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiBoundFault @ 0x140409240
 * Reason: Hex-Rays returned no pseudocode for 0x140409240
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140409240: sub     rsp, 8
 * 0000000140409244: push    rbp
 * 0000000140409245: sub     rsp, 158h
 * 000000014040924C: lea     rbp, [rsp+80h]
 * 0000000140409254: mov     [rbp+0E8h+var_13D], 1
 * 0000000140409258: mov     [rbp+0E8h+var_138], rax
 * 000000014040925C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140409260: mov     [rbp+0E8h+var_128], rdx
 * 0000000140409264: mov     [rbp+0E8h+var_120], r8
 * 0000000140409268: mov     [rbp+0E8h+var_118], r9
 * 000000014040926C: mov     [rbp+0E8h+var_110], r10
 * 0000000140409270: mov     [rbp+0E8h+var_108], r11
 * 0000000140409274: test    [rbp+0E8h+arg_0], 1
 * 000000014040927B: jnz     short loc_1404092AA
 * 000000014040927D: lfence
 * 0000000140409280: test    byte ptr gs:278h, 1
 * 0000000140409289: jnz     short loc_140409293
 * 000000014040928B: lfence
 * 000000014040928E: jmp     loc_1404094E9
 * 0000000140409293: movzx   eax, byte ptr gs:27Ah
 * 000000014040929C: mov     ecx, 48h ; 'H'
 * 00000001404092A1: xor     edx, edx
 * 00000001404092A3: wrmsr
 * 00000001404092A5: jmp     loc_1404094E9
 * 00000001404092AA: test    cs:KiKvaShadow, 1
 * 00000001404092B1: jnz     short loc_1404092B6
 * 00000001404092B3: swapgs
 * 00000001404092B6: lfence
 * 00000001404092B9: mov     r10, gs:188h
 * 00000001404092C2: mov     rcx, gs:188h
 * 00000001404092CB: mov     rcx, [rcx+220h]
 * 00000001404092D2: mov     rcx, [rcx+9E0h]
 * 00000001404092D9: mov     gs:270h, rcx
 * 00000001404092E2: mov     cl, gs:850h
 * 00000001404092EA: mov     gs:851h, cl
 * 00000001404092F2: mov     cl, gs:278h
 * 00000001404092FA: mov     gs:852h, cl
 * 0000000140409302: movzx   eax, byte ptr gs:27Bh
 * 000000014040930B: cmp     gs:27Ah, al
 * 0000000140409313: jz      short loc_140409326
 * 0000000140409315: mov     gs:27Ah, al
 * 000000014040931D: mov     ecx, 48h ; 'H'
 * 0000000140409322: xor     edx, edx
 * 0000000140409324: wrmsr
 * 0000000140409326: movzx   edx, byte ptr gs:278h
 * 000000014040932F: test    edx, 8
 * 0000000140409335: jz      short loc_14040934E
 * 0000000140409337: mov     eax, 1
 * 000000014040933C: xor     edx, edx
 * 000000014040933E: mov     ecx, 49h ; 'I'
 * 0000000140409343: wrmsr
 * 0000000140409345: movzx   edx, byte ptr gs:278h
 * 000000014040934E: test    edx, 2
 * 0000000140409354: jz      loc_14040947F
 * 000000014040935A: call    loc_14040946D
 * 000000014040935F: add     rsp, 8
 * 0000000140409363: call    loc_140409476
 * 0000000140409368: add     rsp, 8
 * 000000014040936C: call    loc_14040935F
 * 0000000140409371: add     rsp, 8
 * 0000000140409375: call    loc_140409368
 * 000000014040937A: add     rsp, 8
 * 000000014040937E: call    loc_140409371
 * 0000000140409383: add     rsp, 8
 * 0000000140409387: call    loc_14040937A
 * 000000014040938C: add     rsp, 8
 * 0000000140409390: call    loc_140409383
 * 0000000140409395: add     rsp, 8
 * 0000000140409399: call    loc_14040938C
 * 000000014040939E: add     rsp, 8
 * 00000001404093A2: call    loc_140409395
 * 00000001404093A7: add     rsp, 8
 * 00000001404093AB: call    loc_14040939E
 * 00000001404093B0: add     rsp, 8
 * 00000001404093B4: call    loc_1404093A7
 * 00000001404093B9: add     rsp, 8
 * 00000001404093BD: call    loc_1404093B0
 * 00000001404093C2: add     rsp, 8
 * 00000001404093C6: call    loc_1404093B9
 * 00000001404093CB: add     rsp, 8
 * 00000001404093CF: call    loc_1404093C2
 * 00000001404093D4: add     rsp, 8
 * 00000001404093D8: call    loc_1404093CB
 * 00000001404093DD: add     rsp, 8
 * 00000001404093E1: call    loc_1404093D4
 * 00000001404093E6: add     rsp, 8
 * 00000001404093EA: call    loc_1404093DD
 * 00000001404093EF: add     rsp, 8
 * 00000001404093F3: call    loc_1404093E6
 * 00000001404093F8: add     rsp, 8
 * 00000001404093FC: call    loc_1404093EF
 * 0000000140409401: add     rsp, 8
 * 0000000140409405: call    loc_1404093F8
 * 000000014040940A: add     rsp, 8
 * 000000014040940E: call    loc_140409401
 * 0000000140409413: add     rsp, 8
 * 0000000140409417: call    loc_14040940A
 * 000000014040941C: add     rsp, 8
 * 0000000140409420: call    loc_140409413
 * 0000000140409425: add     rsp, 8
 * 0000000140409429: call    loc_14040941C
 * 000000014040942E: add     rsp, 8
 * 0000000140409432: call    loc_140409425
 * 0000000140409437: add     rsp, 8
 * 000000014040943B: call    loc_14040942E
 * 0000000140409440: add     rsp, 8
 * 0000000140409444: call    loc_140409437
 * 0000000140409449: add     rsp, 8
 * 000000014040944D: call    loc_140409440
 * 0000000140409452: add     rsp, 8
 * 0000000140409456: call    loc_140409449
 * 000000014040945B: add     rsp, 8
 * 000000014040945F: call    loc_140409452
 * 0000000140409464: add     rsp, 8
 * 0000000140409468: call    loc_14040945B
 * 000000014040946D: add     rsp, 8
 * 0000000140409471: call    loc_140409464
 * 0000000140409476: add     rsp, 8
 * 000000014040947A: mov     eax, 0DADAh
 * 000000014040947F: lfence
 * 0000000140409482: mov     byte ptr gs:853h, 0
 * 000000014040948B: test    byte ptr [r10+3], 80h
 * 0000000140409490: jz      short loc_1404094D4
 * 0000000140409492: mov     ecx, 0C0000102h
 * 0000000140409497: rdmsr
 * 0000000140409499: shl     rdx, 20h
 * 000000014040949D: or      rax, rdx
 * 00000001404094A0: cmp     rax, cs:MmUserProbeAddress
 * 00000001404094A7: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001404094AF: cmp     [r10+0F0h], rax
 * 00000001404094B6: jz      short loc_1404094D4
 * 00000001404094B8: mov     rdx, [r10+1F0h]
 * 00000001404094BF: bts     dword ptr [r10+74h], 8
 * 00000001404094C5: dec     word ptr [r10+1E6h]
 * 00000001404094CD: mov     [rdx+80h], rax
 * 00000001404094D4: test    byte ptr [r10+3], 3
 * 00000001404094D9: mov     [rbp+0E8h+var_68], 0
 * 00000001404094E2: jz      short loc_1404094E9
 * 00000001404094E4: call    KiSaveDebugRegisterState
 * 00000001404094E9: cld
 * 00000001404094EA: stmxcsr [rbp+0E8h+var_13C]
 * 00000001404094EE: ldmxcsr dword ptr gs:180h
 * 00000001404094F7: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001404094FB: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001404094FF: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140409503: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140409507: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040950B: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040950F: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140409516: jz      short loc_140409524
 * 0000000140409518: test    [rbp+0E8h+arg_0], 1
 * 000000014040951F: jz      short loc_140409524
 * 0000000140409521: stac
 * 0000000140409524: test    [rbp+0E8h+arg_8], 200h
 * 000000014040952E: jz      short loc_140409531
 * 0000000140409530: sti
 * 0000000140409531: test    [rbp+0E8h+arg_0], 1
 * 0000000140409538: jz      short loc_140409591
 * 000000014040953A: mov     r9, gs:188h
 * 0000000140409543: bt      dword ptr [r9+74h], 8
 * 0000000140409549: jnb     short loc_140409550
 * 000000014040954B: call    KiUmsTrapEntry
 * 0000000140409550: call    KiHandleBound
 * 0000000140409555: cmp     eax, 0
 * 0000000140409558: jz      short loc_140409591
 * 000000014040955A: cmp     eax, 1
 * 000000014040955D: jz      short loc_1404095A5
 * 000000014040955F: cmp     eax, 2
 * 0000000140409562: jz      short loc_140409573
 * 0000000140409564: mov     edx, 5
 * 0000000140409569: mov     ecx, 7Fh
 * 000000014040956E: call    KiBugCheckDispatch
 * 0000000140409573: mov     r9, 1Ch
 * 000000014040957A: mov     ecx, 0C0000409h
 * 000000014040957F: mov     edx, 1
 * 0000000140409584: mov     r8, [rbp+0E8h]
 * 000000014040958B: call    KiFastFailDispatch
 * 0000000140409590: nop
 * 0000000140409591: mov     ecx, 0C000008Ch
 * 0000000140409596: xor     edx, edx
 * 0000000140409598: mov     r8, [rbp+0E8h]
 * 000000014040959F: call    KiExceptionDispatch
 * 00000001404095A4: nop
 * 00000001404095A5: cli
 * 00000001404095A6: test    [rbp+0E8h+arg_0], 1
 * 00000001404095AD: jz      loc_140409833
 * 00000001404095B3: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404095BA: jz      short loc_1404095BF
 * 00000001404095BC: stac
 * 00000001404095BF: mov     rcx, gs:188h
 * 00000001404095C8: test    byte ptr [rcx+0C2h], 3
 * 00000001404095CF: jz      short loc_1404095EC
 * 00000001404095D1: mov     ecx, 1
 * 00000001404095D6: mov     cr8, rcx
 * 00000001404095DA: sti
 * 00000001404095DB: call    KiInitiateUserApc
 * 00000001404095E0: cli
 * 00000001404095E1: mov     ecx, 0
 * 00000001404095E6: mov     cr8, rcx
 * 00000001404095EA: jmp     short loc_1404095BF
 * 00000001404095EC: test    byte ptr gs:27Eh, 2
 * 00000001404095F5: jz      short loc_1404095FE
 * 00000001404095F7: xor     ecx, ecx
 * 00000001404095F9: call    KiUpdateStibpPairing
 * 00000001404095FE: mov     rcx, gs:188h
 * 0000000140409607: test    dword ptr [rcx], 8000000h
 * 000000014040960D: jz      short loc_140409614
 * 000000014040960F: call    KiRestoreSetContextState
 * 0000000140409614: mov     rcx, gs:188h
 * 000000014040961D: test    dword ptr [rcx], 40010000h
 * 0000000140409623: jz      short loc_14040964A
 * 0000000140409625: test    byte ptr [rcx+2], 1
 * 0000000140409629: jz      short loc_140409639
 * 000000014040962B: call    KiCopyCounters
 * 0000000140409630: mov     rcx, gs:188h
 * 0000000140409639: test    byte ptr [rcx+3], 40h
 * 000000014040963D: jz      short loc_14040964A
 * 000000014040963F: lea     rsp, [rbp-80h]
 * 0000000140409643: mov     cl, 1
 * 0000000140409645: call    KiUmsExit
 * 000000014040964A: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014040964E: cmp     [rbp+0E8h+var_68], 0
 * 0000000140409656: jz      short loc_14040965D
 * 0000000140409658: call    KiRestoreDebugRegisterState
 * 000000014040965D: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140409661: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140409665: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140409669: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014040966D: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140409671: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140409675: mov     r11, [rbp+0E8h+var_108]
 * 0000000140409679: mov     r10, [rbp+0E8h+var_110]
 * 000000014040967D: mov     r9, [rbp+0E8h+var_118]
 * 0000000140409681: mov     r8, [rbp+0E8h+var_120]
 * 0000000140409685: mov     byte ptr gs:853h, 0
 * 000000014040968E: movzx   eax, byte ptr gs:27Dh
 * 0000000140409697: cmp     gs:27Ah, al
 * 000000014040969F: jz      short loc_1404096B2
 * 00000001404096A1: mov     gs:27Ah, al
 * 00000001404096A9: mov     ecx, 48h ; 'H'
 * 00000001404096AE: xor     edx, edx
 * 00000001404096B0: wrmsr
 * 00000001404096B2: btr     word ptr gs:278h, 2
 * 00000001404096BD: jnb     short loc_1404096CD
 * 00000001404096BF: mov     eax, 1
 * 00000001404096C4: xor     edx, edx
 * 00000001404096C6: mov     ecx, 49h ; 'I'
 * 00000001404096CB: wrmsr
 * 00000001404096CD: btr     word ptr gs:278h, 5
 * 00000001404096D8: jnb     loc_140409803
 * 00000001404096DE: call    loc_1404097F1
 * 00000001404096E3: add     rsp, 8
 * 00000001404096E7: call    loc_1404097FA
 * 00000001404096EC: add     rsp, 8
 * 00000001404096F0: call    loc_1404096E3
 * 00000001404096F5: add     rsp, 8
 * 00000001404096F9: call    loc_1404096EC
 * 00000001404096FE: add     rsp, 8
 * 0000000140409702: call    loc_1404096F5
 * 0000000140409707: add     rsp, 8
 * 000000014040970B: call    loc_1404096FE
 * 0000000140409710: add     rsp, 8
 * 0000000140409714: call    loc_140409707
 * 0000000140409719: add     rsp, 8
 * 000000014040971D: call    loc_140409710
 * 0000000140409722: add     rsp, 8
 * 0000000140409726: call    loc_140409719
 * 000000014040972B: add     rsp, 8
 * 000000014040972F: call    loc_140409722
 * 0000000140409734: add     rsp, 8
 * 0000000140409738: call    loc_14040972B
 * 000000014040973D: add     rsp, 8
 * 0000000140409741: call    loc_140409734
 * 0000000140409746: add     rsp, 8
 * 000000014040974A: call    loc_14040973D
 * 000000014040974F: add     rsp, 8
 * 0000000140409753: call    loc_140409746
 * 0000000140409758: add     rsp, 8
 * 000000014040975C: call    loc_14040974F
 * 0000000140409761: add     rsp, 8
 * 0000000140409765: call    loc_140409758
 * 000000014040976A: add     rsp, 8
 * 000000014040976E: call    loc_140409761
 * 0000000140409773: add     rsp, 8
 * 0000000140409777: call    loc_14040976A
 * 000000014040977C: add     rsp, 8
 * 0000000140409780: call    loc_140409773
 * 0000000140409785: add     rsp, 8
 * 0000000140409789: call    loc_14040977C
 * 000000014040978E: add     rsp, 8
 * 0000000140409792: call    loc_140409785
 * 0000000140409797: add     rsp, 8
 * 000000014040979B: call    loc_14040978E
 * 00000001404097A0: add     rsp, 8
 * 00000001404097A4: call    loc_140409797
 * 00000001404097A9: add     rsp, 8
 * 00000001404097AD: call    loc_1404097A0
 * 00000001404097B2: add     rsp, 8
 * 00000001404097B6: call    loc_1404097A9
 * 00000001404097BB: add     rsp, 8
 * 00000001404097BF: call    loc_1404097B2
 * 00000001404097C4: add     rsp, 8
 * 00000001404097C8: call    loc_1404097BB
 * 00000001404097CD: add     rsp, 8
 * 00000001404097D1: call    loc_1404097C4
 * 00000001404097D6: add     rsp, 8
 * 00000001404097DA: call    loc_1404097CD
 * 00000001404097DF: add     rsp, 8
 * 00000001404097E3: call    loc_1404097D6
 * 00000001404097E8: add     rsp, 8
 * 00000001404097EC: call    loc_1404097DF
 * 00000001404097F1: add     rsp, 8
 * 00000001404097F5: call    loc_1404097E8
 * 00000001404097FA: add     rsp, 8
 * 00000001404097FE: mov     eax, 0DADAh
 * 0000000140409803: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140409807: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040980B: mov     rax, [rbp+0E8h+var_138]
 * 000000014040980F: mov     rsp, rbp
 * 0000000140409812: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140409819: add     rsp, 0E8h
 * 0000000140409820: test    cs:KiKvaShadow, 1
 * 0000000140409827: jz      short loc_14040982E
 * 0000000140409829: jmp     KiKernelExit
 * 000000014040982E: swapgs
 * 0000000140409831: iretq
 * 0000000140409833: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140409837: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040983B: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040983F: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140409843: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140409847: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040984B: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040984F: mov     r11, [rbp+0E8h+var_108]
 * 0000000140409853: mov     r10, [rbp+0E8h+var_110]
 * 0000000140409857: mov     r9, [rbp+0E8h+var_118]
 * 000000014040985B: mov     r8, [rbp+0E8h+var_120]
 * 000000014040985F: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140409863: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140409867: mov     rax, [rbp+0E8h+var_138]
 * 000000014040986B: mov     rsp, rbp
 * 000000014040986E: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140409875: add     rsp, 0E8h
 * 000000014040987C: iretq
 */
