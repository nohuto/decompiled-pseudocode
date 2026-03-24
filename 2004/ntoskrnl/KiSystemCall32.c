/*
 * XREFs of KiSystemCall32 @ 0x140408100
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x140408100 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x140409080 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x140408100
 * Reason: Hex-Rays returned no pseudocode for 0x140408100
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140408100: swapgs
 * 0000000140408103: mov     gs:10h, rsp
 * 000000014040810C: mov     rsp, gs:1A8h
 * 0000000140408115: push    2Bh ; '+'
 * 0000000140408117: push    qword ptr gs:10h
 * 000000014040811F: push    r11
 * 0000000140408121: push    23h ; '#'
 * 0000000140408123: push    rcx
 * 0000000140408124: swapgs
 * 0000000140408127: lfence
 * 000000014040812A: sub     rsp, 8
 * 000000014040812E: push    rbp
 * 000000014040812F: sub     rsp, 158h
 * 0000000140408136: lea     rbp, [rsp+190h+var_110]
 * 000000014040813E: mov     byte ptr [rbp-55h], 1
 * 0000000140408142: mov     [rbp-50h], rax
 * 0000000140408146: mov     [rbp-48h], rcx
 * 000000014040814A: mov     [rbp-40h], rdx
 * 000000014040814E: mov     [rbp-38h], r8
 * 0000000140408152: mov     [rbp-30h], r9
 * 0000000140408156: mov     [rbp-28h], r10
 * 000000014040815A: mov     [rbp-20h], r11
 * 000000014040815E: test    byte ptr [rbp+0F0h], 1
 * 0000000140408165: jnz     short loc_140408194
 * 0000000140408167: lfence
 * 000000014040816A: test    byte ptr gs:278h, 1
 * 0000000140408173: jnz     short loc_14040817D
 * 0000000140408175: lfence
 * 0000000140408178: jmp     loc_1404083D9
 * 000000014040817D: movzx   eax, byte ptr gs:27Ah
 * 0000000140408186: mov     ecx, 48h ; 'H'
 * 000000014040818B: xor     edx, edx
 * 000000014040818D: wrmsr
 * 000000014040818F: jmp     loc_1404083D9
 * 0000000140408194: test    cs:KiKvaShadow, 1
 * 000000014040819B: jnz     short loc_1404081A0
 * 000000014040819D: swapgs
 * 00000001404081A0: lfence
 * 00000001404081A3: mov     r10, gs:188h
 * 00000001404081AC: mov     rcx, gs:188h
 * 00000001404081B5: mov     rcx, [rcx+220h]
 * 00000001404081BC: mov     rcx, [rcx+9E0h]
 * 00000001404081C3: mov     gs:270h, rcx
 * 00000001404081CC: mov     cl, gs:850h
 * 00000001404081D4: mov     gs:851h, cl
 * 00000001404081DC: mov     cl, gs:278h
 * 00000001404081E4: mov     gs:852h, cl
 * 00000001404081EC: movzx   eax, byte ptr gs:27Bh
 * 00000001404081F5: cmp     gs:27Ah, al
 * 00000001404081FD: jz      short loc_140408210
 * 00000001404081FF: mov     gs:27Ah, al
 * 0000000140408207: mov     ecx, 48h ; 'H'
 * 000000014040820C: xor     edx, edx
 * 000000014040820E: wrmsr
 * 0000000140408210: movzx   edx, byte ptr gs:278h
 * 0000000140408219: test    edx, 8
 * 000000014040821F: jz      short loc_140408234
 * 0000000140408221: mov     eax, 1
 * 0000000140408226: xor     edx, edx
 * 0000000140408228: mov     ecx, 49h ; 'I'
 * 000000014040822D: wrmsr
 * 000000014040822F: jmp     loc_140408372
 * 0000000140408234: test    edx, 2
 * 000000014040823A: jz      loc_14040836F
 * 0000000140408240: test    byte ptr gs:279h, 4
 * 0000000140408249: jnz     loc_14040836F
 * 000000014040824F: call    loc_140408362
 * 0000000140408254: add     rsp, 8
 * 0000000140408258: call    loc_14040836B
 * 000000014040825D: add     rsp, 8
 * 0000000140408261: call    loc_140408254
 * 0000000140408266: add     rsp, 8
 * 000000014040826A: call    loc_14040825D
 * 000000014040826F: add     rsp, 8
 * 0000000140408273: call    loc_140408266
 * 0000000140408278: add     rsp, 8
 * 000000014040827C: call    loc_14040826F
 * 0000000140408281: add     rsp, 8
 * 0000000140408285: call    loc_140408278
 * 000000014040828A: add     rsp, 8
 * 000000014040828E: call    loc_140408281
 * 0000000140408293: add     rsp, 8
 * 0000000140408297: call    loc_14040828A
 * 000000014040829C: add     rsp, 8
 * 00000001404082A0: call    loc_140408293
 * 00000001404082A5: add     rsp, 8
 * 00000001404082A9: call    loc_14040829C
 * 00000001404082AE: add     rsp, 8
 * 00000001404082B2: call    loc_1404082A5
 * 00000001404082B7: add     rsp, 8
 * 00000001404082BB: call    loc_1404082AE
 * 00000001404082C0: add     rsp, 8
 * 00000001404082C4: call    loc_1404082B7
 * 00000001404082C9: add     rsp, 8
 * 00000001404082CD: call    loc_1404082C0
 * 00000001404082D2: add     rsp, 8
 * 00000001404082D6: call    loc_1404082C9
 * 00000001404082DB: add     rsp, 8
 * 00000001404082DF: call    loc_1404082D2
 * 00000001404082E4: add     rsp, 8
 * 00000001404082E8: call    loc_1404082DB
 * 00000001404082ED: add     rsp, 8
 * 00000001404082F1: call    loc_1404082E4
 * 00000001404082F6: add     rsp, 8
 * 00000001404082FA: call    loc_1404082ED
 * 00000001404082FF: add     rsp, 8
 * 0000000140408303: call    loc_1404082F6
 * 0000000140408308: add     rsp, 8
 * 000000014040830C: call    loc_1404082FF
 * 0000000140408311: add     rsp, 8
 * 0000000140408315: call    loc_140408308
 * 000000014040831A: add     rsp, 8
 * 000000014040831E: call    loc_140408311
 * 0000000140408323: add     rsp, 8
 * 0000000140408327: call    loc_14040831A
 * 000000014040832C: add     rsp, 8
 * 0000000140408330: call    loc_140408323
 * 0000000140408335: add     rsp, 8
 * 0000000140408339: call    loc_14040832C
 * 000000014040833E: add     rsp, 8
 * 0000000140408342: call    loc_140408335
 * 0000000140408347: add     rsp, 8
 * 000000014040834B: call    loc_14040833E
 * 0000000140408350: add     rsp, 8
 * 0000000140408354: call    loc_140408347
 * 0000000140408359: add     rsp, 8
 * 000000014040835D: call    loc_140408350
 * 0000000140408362: add     rsp, 8
 * 0000000140408366: call    loc_140408359
 * 000000014040836B: add     rsp, 8
 * 000000014040836F: lfence
 * 0000000140408372: mov     byte ptr gs:853h, 0
 * 000000014040837B: test    byte ptr [r10+3], 80h
 * 0000000140408380: jz      short loc_1404083C4
 * 0000000140408382: mov     ecx, 0C0000102h
 * 0000000140408387: rdmsr
 * 0000000140408389: shl     rdx, 20h
 * 000000014040838D: or      rax, rdx
 * 0000000140408390: cmp     rax, cs:MmUserProbeAddress
 * 0000000140408397: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040839F: cmp     [r10+0F0h], rax
 * 00000001404083A6: jz      short loc_1404083C4
 * 00000001404083A8: mov     rdx, [r10+1F0h]
 * 00000001404083AF: bts     dword ptr [r10+74h], 8
 * 00000001404083B5: dec     word ptr [r10+1E6h]
 * 00000001404083BD: mov     [rdx+80h], rax
 * 00000001404083C4: test    byte ptr [r10+3], 3
 * 00000001404083C9: mov     word ptr [rbp+80h], 0
 * 00000001404083D2: jz      short loc_1404083D9
 * 00000001404083D4: call    KiSaveDebugRegisterState
 * 00000001404083D9: cld
 * 00000001404083DA: stmxcsr dword ptr [rbp-54h]
 * 00000001404083DE: ldmxcsr dword ptr gs:180h
 * 00000001404083E7: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404083EB: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404083EF: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001404083F3: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001404083F7: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001404083FB: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001404083FF: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140408406: jz      short loc_140408414
 * 0000000140408408: test    byte ptr [rbp+0F0h], 1
 * 000000014040840F: jz      short loc_140408414
 * 0000000140408411: stac
 * 0000000140408414: sub     qword ptr [rbp+0E8h], 2
 * 000000014040841C: and     dword ptr [rbp+0ECh], 0
 * 0000000140408423: sti
 * 0000000140408424: mov     ecx, 0C000001Dh
 * 0000000140408429: xor     edx, edx
 * 000000014040842B: mov     r8, [rbp+0E8h]
 * 0000000140408432: call    KiExceptionDispatch
 * 0000000140408437: nop
 * 0000000140408438: retn
 */
