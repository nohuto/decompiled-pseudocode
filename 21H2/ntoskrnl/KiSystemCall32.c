/*
 * XREFs of KiSystemCall32 @ 0x140411500
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x140411500 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x1404127C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x140411500
 * Reason: Hex-Rays returned no pseudocode for 0x140411500
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140411500: swapgs
 * 0000000140411503: mov     gs:10h, rsp
 * 000000014041150C: mov     rsp, gs:1A8h
 * 0000000140411515: push    2Bh ; '+'
 * 0000000140411517: push    qword ptr gs:10h
 * 000000014041151F: push    r11
 * 0000000140411521: push    23h ; '#'
 * 0000000140411523: push    rcx
 * 0000000140411524: swapgs
 * 0000000140411527: lfence
 * 000000014041152A: sub     rsp, 8
 * 000000014041152E: push    rbp
 * 000000014041152F: sub     rsp, 158h
 * 0000000140411536: lea     rbp, [rsp+190h+var_110]
 * 000000014041153E: mov     byte ptr [rbp-55h], 1
 * 0000000140411542: mov     [rbp-50h], rax
 * 0000000140411546: mov     [rbp-48h], rcx
 * 000000014041154A: mov     [rbp-40h], rdx
 * 000000014041154E: mov     [rbp-38h], r8
 * 0000000140411552: mov     [rbp-30h], r9
 * 0000000140411556: mov     [rbp-28h], r10
 * 000000014041155A: mov     [rbp-20h], r11
 * 000000014041155E: test    byte ptr [rbp+0F0h], 1
 * 0000000140411565: jnz     short loc_140411596
 * 0000000140411567: lfence
 * 000000014041156A: test    word ptr gs:860h, 1
 * 0000000140411575: jnz     short loc_14041157F
 * 0000000140411577: lfence
 * 000000014041157A: jmp     loc_1404117E8
 * 000000014041157F: movzx   eax, word ptr gs:864h
 * 0000000140411588: mov     ecx, 48h ; 'H'
 * 000000014041158D: xor     edx, edx
 * 000000014041158F: wrmsr
 * 0000000140411591: jmp     loc_1404117E8
 * 0000000140411596: test    cs:KiKvaShadow, 1
 * 000000014041159D: jnz     short loc_1404115A2
 * 000000014041159F: swapgs
 * 00000001404115A2: lfence
 * 00000001404115A5: mov     r10, gs:188h
 * 00000001404115AE: mov     rcx, gs:188h
 * 00000001404115B7: mov     rcx, [rcx+220h]
 * 00000001404115BE: mov     rcx, [rcx+9E0h]
 * 00000001404115C5: mov     gs:858h, rcx
 * 00000001404115CE: mov     cx, gs:850h
 * 00000001404115D7: mov     gs:852h, cx
 * 00000001404115E0: mov     cx, gs:860h
 * 00000001404115E9: mov     gs:854h, cx
 * 00000001404115F2: movzx   eax, word ptr gs:866h
 * 00000001404115FB: cmp     gs:864h, ax
 * 0000000140411604: jz      short loc_140411618
 * 0000000140411606: mov     gs:864h, ax
 * 000000014041160F: mov     ecx, 48h ; 'H'
 * 0000000140411614: xor     edx, edx
 * 0000000140411616: wrmsr
 * 0000000140411618: movzx   edx, word ptr gs:860h
 * 0000000140411621: test    edx, 8
 * 0000000140411627: jz      short loc_140411640
 * 0000000140411629: mov     eax, 1
 * 000000014041162E: xor     edx, edx
 * 0000000140411630: mov     ecx, 49h ; 'I'
 * 0000000140411635: wrmsr
 * 0000000140411637: movzx   edx, word ptr gs:860h
 * 0000000140411640: test    edx, 2
 * 0000000140411646: jz      loc_140411771
 * 000000014041164C: call    loc_14041175F
 * 0000000140411651: add     rsp, 8
 * 0000000140411655: call    loc_140411768
 * 000000014041165A: add     rsp, 8
 * 000000014041165E: call    loc_140411651
 * 0000000140411663: add     rsp, 8
 * 0000000140411667: call    loc_14041165A
 * 000000014041166C: add     rsp, 8
 * 0000000140411670: call    loc_140411663
 * 0000000140411675: add     rsp, 8
 * 0000000140411679: call    loc_14041166C
 * 000000014041167E: add     rsp, 8
 * 0000000140411682: call    loc_140411675
 * 0000000140411687: add     rsp, 8
 * 000000014041168B: call    loc_14041167E
 * 0000000140411690: add     rsp, 8
 * 0000000140411694: call    loc_140411687
 * 0000000140411699: add     rsp, 8
 * 000000014041169D: call    loc_140411690
 * 00000001404116A2: add     rsp, 8
 * 00000001404116A6: call    loc_140411699
 * 00000001404116AB: add     rsp, 8
 * 00000001404116AF: call    loc_1404116A2
 * 00000001404116B4: add     rsp, 8
 * 00000001404116B8: call    loc_1404116AB
 * 00000001404116BD: add     rsp, 8
 * 00000001404116C1: call    loc_1404116B4
 * 00000001404116C6: add     rsp, 8
 * 00000001404116CA: call    loc_1404116BD
 * 00000001404116CF: add     rsp, 8
 * 00000001404116D3: call    loc_1404116C6
 * 00000001404116D8: add     rsp, 8
 * 00000001404116DC: call    loc_1404116CF
 * 00000001404116E1: add     rsp, 8
 * 00000001404116E5: call    loc_1404116D8
 * 00000001404116EA: add     rsp, 8
 * 00000001404116EE: call    loc_1404116E1
 * 00000001404116F3: add     rsp, 8
 * 00000001404116F7: call    loc_1404116EA
 * 00000001404116FC: add     rsp, 8
 * 0000000140411700: call    loc_1404116F3
 * 0000000140411705: add     rsp, 8
 * 0000000140411709: call    loc_1404116FC
 * 000000014041170E: add     rsp, 8
 * 0000000140411712: call    loc_140411705
 * 0000000140411717: add     rsp, 8
 * 000000014041171B: call    loc_14041170E
 * 0000000140411720: add     rsp, 8
 * 0000000140411724: call    loc_140411717
 * 0000000140411729: add     rsp, 8
 * 000000014041172D: call    loc_140411720
 * 0000000140411732: add     rsp, 8
 * 0000000140411736: call    loc_140411729
 * 000000014041173B: add     rsp, 8
 * 000000014041173F: call    loc_140411732
 * 0000000140411744: add     rsp, 8
 * 0000000140411748: call    loc_14041173B
 * 000000014041174D: add     rsp, 8
 * 0000000140411751: call    loc_140411744
 * 0000000140411756: add     rsp, 8
 * 000000014041175A: call    loc_14041174D
 * 000000014041175F: add     rsp, 8
 * 0000000140411763: call    loc_140411756
 * 0000000140411768: add     rsp, 8
 * 000000014041176C: mov     eax, 0DADAh
 * 0000000140411771: test    edx, 200h
 * 0000000140411777: jz      short loc_14041177E
 * 0000000140411779: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014041177E: lfence
 * 0000000140411781: mov     byte ptr gs:856h, 0
 * 000000014041178A: test    byte ptr [r10+3], 80h
 * 000000014041178F: jz      short loc_1404117D3
 * 0000000140411791: mov     ecx, 0C0000102h
 * 0000000140411796: rdmsr
 * 0000000140411798: shl     rdx, 20h
 * 000000014041179C: or      rax, rdx
 * 000000014041179F: cmp     rax, cs:MmUserProbeAddress
 * 00000001404117A6: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001404117AE: cmp     [r10+0F0h], rax
 * 00000001404117B5: jz      short loc_1404117D3
 * 00000001404117B7: mov     rdx, [r10+1F0h]
 * 00000001404117BE: bts     dword ptr [r10+74h], 8
 * 00000001404117C4: dec     word ptr [r10+1E6h]
 * 00000001404117CC: mov     [rdx+80h], rax
 * 00000001404117D3: test    byte ptr [r10+3], 3
 * 00000001404117D8: mov     word ptr [rbp+80h], 0
 * 00000001404117E1: jz      short loc_1404117E8
 * 00000001404117E3: call    KiSaveDebugRegisterState
 * 00000001404117E8: cld
 * 00000001404117E9: stmxcsr dword ptr [rbp-54h]
 * 00000001404117ED: ldmxcsr dword ptr gs:180h
 * 00000001404117F6: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404117FA: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404117FE: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140411802: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140411806: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014041180A: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014041180E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140411815: jz      short loc_140411823
 * 0000000140411817: test    byte ptr [rbp+0F0h], 1
 * 000000014041181E: jz      short loc_140411823
 * 0000000140411820: stac
 * 0000000140411823: sub     qword ptr [rbp+0E8h], 2
 * 000000014041182B: and     dword ptr [rbp+0ECh], 0
 * 0000000140411832: sti
 * 0000000140411833: mov     ecx, 0C000001Dh
 * 0000000140411838: xor     edx, edx
 * 000000014041183A: mov     r8, [rbp+0E8h]
 * 0000000140411841: call    KiExceptionDispatch
 * 0000000140411846: nop
 * 0000000140411847: retn
 */
