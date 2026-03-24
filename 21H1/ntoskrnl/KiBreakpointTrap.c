/*
 * XREFs of KiBreakpointTrap @ 0x140401500
 * Callers:
 *     KiBreakpointTrapShadow @ 0x140A112C0 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x140401500 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x140407D80 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x140401500
 * Reason: Hex-Rays returned no pseudocode for 0x140401500
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140401500: sub     rsp, 8
 * 0000000140401504: push    rbp
 * 0000000140401505: sub     rsp, 158h
 * 000000014040150C: lea     rbp, [rsp+80h]
 * 0000000140401514: mov     [rbp+0E8h+var_13D], 1
 * 0000000140401518: mov     [rbp+0E8h+var_138], rax
 * 000000014040151C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140401520: mov     [rbp+0E8h+var_128], rdx
 * 0000000140401524: mov     [rbp+0E8h+var_120], r8
 * 0000000140401528: mov     [rbp+0E8h+var_118], r9
 * 000000014040152C: mov     [rbp+0E8h+var_110], r10
 * 0000000140401530: mov     [rbp+0E8h+var_108], r11
 * 0000000140401534: test    [rbp+0E8h+arg_0], 1
 * 000000014040153B: jnz     short loc_14040156A
 * 000000014040153D: lfence
 * 0000000140401540: test    byte ptr gs:278h, 1
 * 0000000140401549: jnz     short loc_140401553
 * 000000014040154B: lfence
 * 000000014040154E: jmp     loc_1404017AF
 * 0000000140401553: movzx   eax, byte ptr gs:27Ah
 * 000000014040155C: mov     ecx, 48h ; 'H'
 * 0000000140401561: xor     edx, edx
 * 0000000140401563: wrmsr
 * 0000000140401565: jmp     loc_1404017AF
 * 000000014040156A: test    cs:KiKvaShadow, 1
 * 0000000140401571: jnz     short loc_140401576
 * 0000000140401573: swapgs
 * 0000000140401576: lfence
 * 0000000140401579: mov     r10, gs:188h
 * 0000000140401582: mov     rcx, gs:188h
 * 000000014040158B: mov     rcx, [rcx+220h]
 * 0000000140401592: mov     rcx, [rcx+9E0h]
 * 0000000140401599: mov     gs:270h, rcx
 * 00000001404015A2: mov     cl, gs:850h
 * 00000001404015AA: mov     gs:851h, cl
 * 00000001404015B2: mov     cl, gs:278h
 * 00000001404015BA: mov     gs:852h, cl
 * 00000001404015C2: movzx   eax, byte ptr gs:27Bh
 * 00000001404015CB: cmp     gs:27Ah, al
 * 00000001404015D3: jz      short loc_1404015E6
 * 00000001404015D5: mov     gs:27Ah, al
 * 00000001404015DD: mov     ecx, 48h ; 'H'
 * 00000001404015E2: xor     edx, edx
 * 00000001404015E4: wrmsr
 * 00000001404015E6: movzx   edx, byte ptr gs:278h
 * 00000001404015EF: test    edx, 8
 * 00000001404015F5: jz      short loc_14040160A
 * 00000001404015F7: mov     eax, 1
 * 00000001404015FC: xor     edx, edx
 * 00000001404015FE: mov     ecx, 49h ; 'I'
 * 0000000140401603: wrmsr
 * 0000000140401605: jmp     loc_140401748
 * 000000014040160A: test    edx, 2
 * 0000000140401610: jz      loc_140401745
 * 0000000140401616: test    byte ptr gs:279h, 4
 * 000000014040161F: jnz     loc_140401745
 * 0000000140401625: call    loc_140401738
 * 000000014040162A: add     rsp, 8
 * 000000014040162E: call    loc_140401741
 * 0000000140401633: add     rsp, 8
 * 0000000140401637: call    loc_14040162A
 * 000000014040163C: add     rsp, 8
 * 0000000140401640: call    loc_140401633
 * 0000000140401645: add     rsp, 8
 * 0000000140401649: call    loc_14040163C
 * 000000014040164E: add     rsp, 8
 * 0000000140401652: call    loc_140401645
 * 0000000140401657: add     rsp, 8
 * 000000014040165B: call    loc_14040164E
 * 0000000140401660: add     rsp, 8
 * 0000000140401664: call    loc_140401657
 * 0000000140401669: add     rsp, 8
 * 000000014040166D: call    loc_140401660
 * 0000000140401672: add     rsp, 8
 * 0000000140401676: call    loc_140401669
 * 000000014040167B: add     rsp, 8
 * 000000014040167F: call    loc_140401672
 * 0000000140401684: add     rsp, 8
 * 0000000140401688: call    loc_14040167B
 * 000000014040168D: add     rsp, 8
 * 0000000140401691: call    loc_140401684
 * 0000000140401696: add     rsp, 8
 * 000000014040169A: call    loc_14040168D
 * 000000014040169F: add     rsp, 8
 * 00000001404016A3: call    loc_140401696
 * 00000001404016A8: add     rsp, 8
 * 00000001404016AC: call    loc_14040169F
 * 00000001404016B1: add     rsp, 8
 * 00000001404016B5: call    loc_1404016A8
 * 00000001404016BA: add     rsp, 8
 * 00000001404016BE: call    loc_1404016B1
 * 00000001404016C3: add     rsp, 8
 * 00000001404016C7: call    loc_1404016BA
 * 00000001404016CC: add     rsp, 8
 * 00000001404016D0: call    loc_1404016C3
 * 00000001404016D5: add     rsp, 8
 * 00000001404016D9: call    loc_1404016CC
 * 00000001404016DE: add     rsp, 8
 * 00000001404016E2: call    loc_1404016D5
 * 00000001404016E7: add     rsp, 8
 * 00000001404016EB: call    loc_1404016DE
 * 00000001404016F0: add     rsp, 8
 * 00000001404016F4: call    loc_1404016E7
 * 00000001404016F9: add     rsp, 8
 * 00000001404016FD: call    loc_1404016F0
 * 0000000140401702: add     rsp, 8
 * 0000000140401706: call    loc_1404016F9
 * 000000014040170B: add     rsp, 8
 * 000000014040170F: call    loc_140401702
 * 0000000140401714: add     rsp, 8
 * 0000000140401718: call    loc_14040170B
 * 000000014040171D: add     rsp, 8
 * 0000000140401721: call    loc_140401714
 * 0000000140401726: add     rsp, 8
 * 000000014040172A: call    loc_14040171D
 * 000000014040172F: add     rsp, 8
 * 0000000140401733: call    loc_140401726
 * 0000000140401738: add     rsp, 8
 * 000000014040173C: call    loc_14040172F
 * 0000000140401741: add     rsp, 8
 * 0000000140401745: lfence
 * 0000000140401748: mov     byte ptr gs:853h, 0
 * 0000000140401751: test    byte ptr [r10+3], 80h
 * 0000000140401756: jz      short loc_14040179A
 * 0000000140401758: mov     ecx, 0C0000102h
 * 000000014040175D: rdmsr
 * 000000014040175F: shl     rdx, 20h
 * 0000000140401763: or      rax, rdx
 * 0000000140401766: cmp     rax, cs:MmUserProbeAddress
 * 000000014040176D: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140401775: cmp     [r10+0F0h], rax
 * 000000014040177C: jz      short loc_14040179A
 * 000000014040177E: mov     rdx, [r10+1F0h]
 * 0000000140401785: bts     dword ptr [r10+74h], 8
 * 000000014040178B: dec     word ptr [r10+1E6h]
 * 0000000140401793: mov     [rdx+80h], rax
 * 000000014040179A: test    byte ptr [r10+3], 3
 * 000000014040179F: mov     [rbp+0E8h+var_68], 0
 * 00000001404017A8: jz      short loc_1404017AF
 * 00000001404017AA: call    KiSaveDebugRegisterState
 * 00000001404017AF: cld
 * 00000001404017B0: stmxcsr [rbp+0E8h+var_13C]
 * 00000001404017B4: ldmxcsr dword ptr gs:180h
 * 00000001404017BD: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001404017C1: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001404017C5: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001404017C9: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001404017CD: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001404017D1: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001404017D5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404017DC: jz      short loc_1404017EA
 * 00000001404017DE: test    [rbp+0E8h+arg_0], 1
 * 00000001404017E5: jz      short loc_1404017EA
 * 00000001404017E7: stac
 * 00000001404017EA: test    [rbp+0E8h+arg_8], 200h
 * 00000001404017F4: jz      short loc_1404017F7
 * 00000001404017F6: sti
 * 00000001404017F7: mov     ecx, 80000003h
 * 00000001404017FC: mov     edx, 1
 * 0000000140401801: mov     r8, [rbp+0E8h]
 * 0000000140401808: dec     r8
 * 000000014040180B: mov     r9d, 0
 * 0000000140401811: call    KiExceptionDispatch
 * 0000000140401816: nop
 * 0000000140401817: retn
 */
