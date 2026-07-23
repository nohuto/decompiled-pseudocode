/*
 * XREFs of KiSystemCall32 @ 0x140411600
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x140411600 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x1404128C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x140411600
 * Reason: Hex-Rays returned no pseudocode for 0x140411600
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140411600: swapgs
 * 0000000140411603: mov     gs:10h, rsp
 * 000000014041160C: mov     rsp, gs:1A8h
 * 0000000140411615: push    2Bh ; '+'
 * 0000000140411617: push    qword ptr gs:10h
 * 000000014041161F: push    r11
 * 0000000140411621: push    23h ; '#'
 * 0000000140411623: push    rcx
 * 0000000140411624: swapgs
 * 0000000140411627: lfence
 * 000000014041162A: sub     rsp, 8
 * 000000014041162E: push    rbp
 * 000000014041162F: sub     rsp, 158h
 * 0000000140411636: lea     rbp, [rsp+190h+var_110]
 * 000000014041163E: mov     byte ptr [rbp-55h], 1
 * 0000000140411642: mov     [rbp-50h], rax
 * 0000000140411646: mov     [rbp-48h], rcx
 * 000000014041164A: mov     [rbp-40h], rdx
 * 000000014041164E: mov     [rbp-38h], r8
 * 0000000140411652: mov     [rbp-30h], r9
 * 0000000140411656: mov     [rbp-28h], r10
 * 000000014041165A: mov     [rbp-20h], r11
 * 000000014041165E: test    byte ptr [rbp+0F0h], 1
 * 0000000140411665: jnz     short loc_140411696
 * 0000000140411667: lfence
 * 000000014041166A: test    word ptr gs:860h, 1
 * 0000000140411675: jnz     short loc_14041167F
 * 0000000140411677: lfence
 * 000000014041167A: jmp     loc_1404118E8
 * 000000014041167F: movzx   eax, word ptr gs:864h
 * 0000000140411688: mov     ecx, 48h ; 'H'
 * 000000014041168D: xor     edx, edx
 * 000000014041168F: wrmsr
 * 0000000140411691: jmp     loc_1404118E8
 * 0000000140411696: test    cs:KiKvaShadow, 1
 * 000000014041169D: jnz     short loc_1404116A2
 * 000000014041169F: swapgs
 * 00000001404116A2: lfence
 * 00000001404116A5: mov     r10, gs:188h
 * 00000001404116AE: mov     rcx, gs:188h
 * 00000001404116B7: mov     rcx, [rcx+220h]
 * 00000001404116BE: mov     rcx, [rcx+9E0h]
 * 00000001404116C5: mov     gs:858h, rcx
 * 00000001404116CE: mov     cx, gs:850h
 * 00000001404116D7: mov     gs:852h, cx
 * 00000001404116E0: mov     cx, gs:860h
 * 00000001404116E9: mov     gs:854h, cx
 * 00000001404116F2: movzx   eax, word ptr gs:866h
 * 00000001404116FB: cmp     gs:864h, ax
 * 0000000140411704: jz      short loc_140411718
 * 0000000140411706: mov     gs:864h, ax
 * 000000014041170F: mov     ecx, 48h ; 'H'
 * 0000000140411714: xor     edx, edx
 * 0000000140411716: wrmsr
 * 0000000140411718: movzx   edx, word ptr gs:860h
 * 0000000140411721: test    edx, 8
 * 0000000140411727: jz      short loc_140411740
 * 0000000140411729: mov     eax, 1
 * 000000014041172E: xor     edx, edx
 * 0000000140411730: mov     ecx, 49h ; 'I'
 * 0000000140411735: wrmsr
 * 0000000140411737: movzx   edx, word ptr gs:860h
 * 0000000140411740: test    edx, 2
 * 0000000140411746: jz      loc_140411871
 * 000000014041174C: call    loc_14041185F
 * 0000000140411751: add     rsp, 8
 * 0000000140411755: call    loc_140411868
 * 000000014041175A: add     rsp, 8
 * 000000014041175E: call    loc_140411751
 * 0000000140411763: add     rsp, 8
 * 0000000140411767: call    loc_14041175A
 * 000000014041176C: add     rsp, 8
 * 0000000140411770: call    loc_140411763
 * 0000000140411775: add     rsp, 8
 * 0000000140411779: call    loc_14041176C
 * 000000014041177E: add     rsp, 8
 * 0000000140411782: call    loc_140411775
 * 0000000140411787: add     rsp, 8
 * 000000014041178B: call    loc_14041177E
 * 0000000140411790: add     rsp, 8
 * 0000000140411794: call    loc_140411787
 * 0000000140411799: add     rsp, 8
 * 000000014041179D: call    loc_140411790
 * 00000001404117A2: add     rsp, 8
 * 00000001404117A6: call    loc_140411799
 * 00000001404117AB: add     rsp, 8
 * 00000001404117AF: call    loc_1404117A2
 * 00000001404117B4: add     rsp, 8
 * 00000001404117B8: call    loc_1404117AB
 * 00000001404117BD: add     rsp, 8
 * 00000001404117C1: call    loc_1404117B4
 * 00000001404117C6: add     rsp, 8
 * 00000001404117CA: call    loc_1404117BD
 * 00000001404117CF: add     rsp, 8
 * 00000001404117D3: call    loc_1404117C6
 * 00000001404117D8: add     rsp, 8
 * 00000001404117DC: call    loc_1404117CF
 * 00000001404117E1: add     rsp, 8
 * 00000001404117E5: call    loc_1404117D8
 * 00000001404117EA: add     rsp, 8
 * 00000001404117EE: call    loc_1404117E1
 * 00000001404117F3: add     rsp, 8
 * 00000001404117F7: call    loc_1404117EA
 * 00000001404117FC: add     rsp, 8
 * 0000000140411800: call    loc_1404117F3
 * 0000000140411805: add     rsp, 8
 * 0000000140411809: call    loc_1404117FC
 * 000000014041180E: add     rsp, 8
 * 0000000140411812: call    loc_140411805
 * 0000000140411817: add     rsp, 8
 * 000000014041181B: call    loc_14041180E
 * 0000000140411820: add     rsp, 8
 * 0000000140411824: call    loc_140411817
 * 0000000140411829: add     rsp, 8
 * 000000014041182D: call    loc_140411820
 * 0000000140411832: add     rsp, 8
 * 0000000140411836: call    loc_140411829
 * 000000014041183B: add     rsp, 8
 * 000000014041183F: call    loc_140411832
 * 0000000140411844: add     rsp, 8
 * 0000000140411848: call    loc_14041183B
 * 000000014041184D: add     rsp, 8
 * 0000000140411851: call    loc_140411844
 * 0000000140411856: add     rsp, 8
 * 000000014041185A: call    loc_14041184D
 * 000000014041185F: add     rsp, 8
 * 0000000140411863: call    loc_140411856
 * 0000000140411868: add     rsp, 8
 * 000000014041186C: mov     eax, 0DADAh
 * 0000000140411871: test    edx, 200h
 * 0000000140411877: jz      short loc_14041187E
 * 0000000140411879: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014041187E: lfence
 * 0000000140411881: mov     byte ptr gs:856h, 0
 * 000000014041188A: test    byte ptr [r10+3], 80h
 * 000000014041188F: jz      short loc_1404118D3
 * 0000000140411891: mov     ecx, 0C0000102h
 * 0000000140411896: rdmsr
 * 0000000140411898: shl     rdx, 20h
 * 000000014041189C: or      rax, rdx
 * 000000014041189F: cmp     rax, cs:MmUserProbeAddress
 * 00000001404118A6: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001404118AE: cmp     [r10+0F0h], rax
 * 00000001404118B5: jz      short loc_1404118D3
 * 00000001404118B7: mov     rdx, [r10+1F0h]
 * 00000001404118BE: bts     dword ptr [r10+74h], 8
 * 00000001404118C4: dec     word ptr [r10+1E6h]
 * 00000001404118CC: mov     [rdx+80h], rax
 * 00000001404118D3: test    byte ptr [r10+3], 3
 * 00000001404118D8: mov     word ptr [rbp+80h], 0
 * 00000001404118E1: jz      short loc_1404118E8
 * 00000001404118E3: call    KiSaveDebugRegisterState
 * 00000001404118E8: cld
 * 00000001404118E9: stmxcsr dword ptr [rbp-54h]
 * 00000001404118ED: ldmxcsr dword ptr gs:180h
 * 00000001404118F6: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404118FA: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404118FE: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140411902: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140411906: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014041190A: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014041190E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140411915: jz      short loc_140411923
 * 0000000140411917: test    byte ptr [rbp+0F0h], 1
 * 000000014041191E: jz      short loc_140411923
 * 0000000140411920: stac
 * 0000000140411923: sub     qword ptr [rbp+0E8h], 2
 * 000000014041192B: and     dword ptr [rbp+0ECh], 0
 * 0000000140411932: sti
 * 0000000140411933: mov     ecx, 0C000001Dh
 * 0000000140411938: xor     edx, edx
 * 000000014041193A: mov     r8, [rbp+0E8h]
 * 0000000140411941: call    KiExceptionDispatch
 * 0000000140411946: nop
 * 0000000140411947: retn
 */
