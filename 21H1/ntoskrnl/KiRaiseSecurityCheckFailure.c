/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x140406200
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x140A11D40 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x140406200 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x1404080C0 (KiFastFailDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x140406200
 * Reason: Hex-Rays returned no pseudocode for 0x140406200
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140406200: sub     qword ptr [rsp+0], 2
 * 0000000140406205: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014040620B: jnz     short loc_140406212
 * 000000014040620D: and     dword ptr [rsp+4], 0
 * 0000000140406212: sub     rsp, 8
 * 0000000140406216: push    rbp
 * 0000000140406217: sub     rsp, 158h
 * 000000014040621E: lea     rbp, [rsp+168h+var_E8]
 * 0000000140406226: mov     byte ptr [rbp-55h], 1
 * 000000014040622A: mov     [rbp-50h], rax
 * 000000014040622E: mov     [rbp-48h], rcx
 * 0000000140406232: mov     [rbp-40h], rdx
 * 0000000140406236: mov     [rbp-38h], r8
 * 000000014040623A: mov     [rbp-30h], r9
 * 000000014040623E: mov     [rbp-28h], r10
 * 0000000140406242: mov     [rbp-20h], r11
 * 0000000140406246: test    byte ptr [rbp+0F0h], 1
 * 000000014040624D: jnz     short loc_14040627C
 * 000000014040624F: lfence
 * 0000000140406252: test    byte ptr gs:278h, 1
 * 000000014040625B: jnz     short loc_140406265
 * 000000014040625D: lfence
 * 0000000140406260: jmp     loc_1404064C1
 * 0000000140406265: movzx   eax, byte ptr gs:27Ah
 * 000000014040626E: mov     ecx, 48h ; 'H'
 * 0000000140406273: xor     edx, edx
 * 0000000140406275: wrmsr
 * 0000000140406277: jmp     loc_1404064C1
 * 000000014040627C: test    cs:KiKvaShadow, 1
 * 0000000140406283: jnz     short loc_140406288
 * 0000000140406285: swapgs
 * 0000000140406288: lfence
 * 000000014040628B: mov     r10, gs:188h
 * 0000000140406294: mov     rcx, gs:188h
 * 000000014040629D: mov     rcx, [rcx+220h]
 * 00000001404062A4: mov     rcx, [rcx+9E0h]
 * 00000001404062AB: mov     gs:270h, rcx
 * 00000001404062B4: mov     cl, gs:850h
 * 00000001404062BC: mov     gs:851h, cl
 * 00000001404062C4: mov     cl, gs:278h
 * 00000001404062CC: mov     gs:852h, cl
 * 00000001404062D4: movzx   eax, byte ptr gs:27Bh
 * 00000001404062DD: cmp     gs:27Ah, al
 * 00000001404062E5: jz      short loc_1404062F8
 * 00000001404062E7: mov     gs:27Ah, al
 * 00000001404062EF: mov     ecx, 48h ; 'H'
 * 00000001404062F4: xor     edx, edx
 * 00000001404062F6: wrmsr
 * 00000001404062F8: movzx   edx, byte ptr gs:278h
 * 0000000140406301: test    edx, 8
 * 0000000140406307: jz      short loc_14040631C
 * 0000000140406309: mov     eax, 1
 * 000000014040630E: xor     edx, edx
 * 0000000140406310: mov     ecx, 49h ; 'I'
 * 0000000140406315: wrmsr
 * 0000000140406317: jmp     loc_14040645A
 * 000000014040631C: test    edx, 2
 * 0000000140406322: jz      loc_140406457
 * 0000000140406328: test    byte ptr gs:279h, 4
 * 0000000140406331: jnz     loc_140406457
 * 0000000140406337: call    loc_14040644A
 * 000000014040633C: add     rsp, 8
 * 0000000140406340: call    loc_140406453
 * 0000000140406345: add     rsp, 8
 * 0000000140406349: call    loc_14040633C
 * 000000014040634E: add     rsp, 8
 * 0000000140406352: call    loc_140406345
 * 0000000140406357: add     rsp, 8
 * 000000014040635B: call    loc_14040634E
 * 0000000140406360: add     rsp, 8
 * 0000000140406364: call    loc_140406357
 * 0000000140406369: add     rsp, 8
 * 000000014040636D: call    loc_140406360
 * 0000000140406372: add     rsp, 8
 * 0000000140406376: call    loc_140406369
 * 000000014040637B: add     rsp, 8
 * 000000014040637F: call    loc_140406372
 * 0000000140406384: add     rsp, 8
 * 0000000140406388: call    loc_14040637B
 * 000000014040638D: add     rsp, 8
 * 0000000140406391: call    loc_140406384
 * 0000000140406396: add     rsp, 8
 * 000000014040639A: call    loc_14040638D
 * 000000014040639F: add     rsp, 8
 * 00000001404063A3: call    loc_140406396
 * 00000001404063A8: add     rsp, 8
 * 00000001404063AC: call    loc_14040639F
 * 00000001404063B1: add     rsp, 8
 * 00000001404063B5: call    loc_1404063A8
 * 00000001404063BA: add     rsp, 8
 * 00000001404063BE: call    loc_1404063B1
 * 00000001404063C3: add     rsp, 8
 * 00000001404063C7: call    loc_1404063BA
 * 00000001404063CC: add     rsp, 8
 * 00000001404063D0: call    loc_1404063C3
 * 00000001404063D5: add     rsp, 8
 * 00000001404063D9: call    loc_1404063CC
 * 00000001404063DE: add     rsp, 8
 * 00000001404063E2: call    loc_1404063D5
 * 00000001404063E7: add     rsp, 8
 * 00000001404063EB: call    loc_1404063DE
 * 00000001404063F0: add     rsp, 8
 * 00000001404063F4: call    loc_1404063E7
 * 00000001404063F9: add     rsp, 8
 * 00000001404063FD: call    loc_1404063F0
 * 0000000140406402: add     rsp, 8
 * 0000000140406406: call    loc_1404063F9
 * 000000014040640B: add     rsp, 8
 * 000000014040640F: call    loc_140406402
 * 0000000140406414: add     rsp, 8
 * 0000000140406418: call    loc_14040640B
 * 000000014040641D: add     rsp, 8
 * 0000000140406421: call    loc_140406414
 * 0000000140406426: add     rsp, 8
 * 000000014040642A: call    loc_14040641D
 * 000000014040642F: add     rsp, 8
 * 0000000140406433: call    loc_140406426
 * 0000000140406438: add     rsp, 8
 * 000000014040643C: call    loc_14040642F
 * 0000000140406441: add     rsp, 8
 * 0000000140406445: call    loc_140406438
 * 000000014040644A: add     rsp, 8
 * 000000014040644E: call    loc_140406441
 * 0000000140406453: add     rsp, 8
 * 0000000140406457: lfence
 * 000000014040645A: mov     byte ptr gs:853h, 0
 * 0000000140406463: test    byte ptr [r10+3], 80h
 * 0000000140406468: jz      short loc_1404064AC
 * 000000014040646A: mov     ecx, 0C0000102h
 * 000000014040646F: rdmsr
 * 0000000140406471: shl     rdx, 20h
 * 0000000140406475: or      rax, rdx
 * 0000000140406478: cmp     rax, cs:MmUserProbeAddress
 * 000000014040647F: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140406487: cmp     [r10+0F0h], rax
 * 000000014040648E: jz      short loc_1404064AC
 * 0000000140406490: mov     rdx, [r10+1F0h]
 * 0000000140406497: bts     dword ptr [r10+74h], 8
 * 000000014040649D: dec     word ptr [r10+1E6h]
 * 00000001404064A5: mov     [rdx+80h], rax
 * 00000001404064AC: test    byte ptr [r10+3], 3
 * 00000001404064B1: mov     word ptr [rbp+80h], 0
 * 00000001404064BA: jz      short loc_1404064C1
 * 00000001404064BC: call    KiSaveDebugRegisterState
 * 00000001404064C1: cld
 * 00000001404064C2: stmxcsr dword ptr [rbp-54h]
 * 00000001404064C6: ldmxcsr dword ptr gs:180h
 * 00000001404064CF: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404064D3: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404064D7: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001404064DB: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001404064DF: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001404064E3: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001404064E7: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404064EE: jz      short loc_1404064FC
 * 00000001404064F0: test    byte ptr [rbp+0F0h], 1
 * 00000001404064F7: jz      short loc_1404064FC
 * 00000001404064F9: stac
 * 00000001404064FC: test    dword ptr [rbp+0F8h], 200h
 * 0000000140406506: jz      short loc_140406509
 * 0000000140406508: sti
 * 0000000140406509: mov     r9, [rbp-48h]
 * 000000014040650D: mov     ecx, 0C0000409h
 * 0000000140406512: mov     edx, 1
 * 0000000140406517: mov     r8, [rbp+0E8h]
 * 000000014040651E: call    KiFastFailDispatch
 * 0000000140406523: nop
 * 0000000140406524: retn
 */
