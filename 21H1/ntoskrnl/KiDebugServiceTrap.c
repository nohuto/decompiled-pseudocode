/*
 * XREFs of KiDebugServiceTrap @ 0x140406880
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x140A11E40 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x140406880 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x140407D80 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x140406880
 * Reason: Hex-Rays returned no pseudocode for 0x140406880
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140406880: inc     qword ptr [rsp+0]
 * 0000000140406884: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014040688A: jnz     short loc_140406891
 * 000000014040688C: and     dword ptr [rsp+4], 0
 * 0000000140406891: sub     rsp, 8
 * 0000000140406895: push    rbp
 * 0000000140406896: sub     rsp, 158h
 * 000000014040689D: lea     rbp, [rsp+168h+var_E8]
 * 00000001404068A5: mov     byte ptr [rbp-55h], 1
 * 00000001404068A9: mov     [rbp-50h], rax
 * 00000001404068AD: mov     [rbp-48h], rcx
 * 00000001404068B1: mov     [rbp-40h], rdx
 * 00000001404068B5: mov     [rbp-38h], r8
 * 00000001404068B9: mov     [rbp-30h], r9
 * 00000001404068BD: mov     [rbp-28h], r10
 * 00000001404068C1: mov     [rbp-20h], r11
 * 00000001404068C5: test    byte ptr [rbp+0F0h], 1
 * 00000001404068CC: jnz     short loc_1404068FB
 * 00000001404068CE: lfence
 * 00000001404068D1: test    byte ptr gs:278h, 1
 * 00000001404068DA: jnz     short loc_1404068E4
 * 00000001404068DC: lfence
 * 00000001404068DF: jmp     loc_140406B40
 * 00000001404068E4: movzx   eax, byte ptr gs:27Ah
 * 00000001404068ED: mov     ecx, 48h ; 'H'
 * 00000001404068F2: xor     edx, edx
 * 00000001404068F4: wrmsr
 * 00000001404068F6: jmp     loc_140406B40
 * 00000001404068FB: test    cs:KiKvaShadow, 1
 * 0000000140406902: jnz     short loc_140406907
 * 0000000140406904: swapgs
 * 0000000140406907: lfence
 * 000000014040690A: mov     r10, gs:188h
 * 0000000140406913: mov     rcx, gs:188h
 * 000000014040691C: mov     rcx, [rcx+220h]
 * 0000000140406923: mov     rcx, [rcx+9E0h]
 * 000000014040692A: mov     gs:270h, rcx
 * 0000000140406933: mov     cl, gs:850h
 * 000000014040693B: mov     gs:851h, cl
 * 0000000140406943: mov     cl, gs:278h
 * 000000014040694B: mov     gs:852h, cl
 * 0000000140406953: movzx   eax, byte ptr gs:27Bh
 * 000000014040695C: cmp     gs:27Ah, al
 * 0000000140406964: jz      short loc_140406977
 * 0000000140406966: mov     gs:27Ah, al
 * 000000014040696E: mov     ecx, 48h ; 'H'
 * 0000000140406973: xor     edx, edx
 * 0000000140406975: wrmsr
 * 0000000140406977: movzx   edx, byte ptr gs:278h
 * 0000000140406980: test    edx, 8
 * 0000000140406986: jz      short loc_14040699B
 * 0000000140406988: mov     eax, 1
 * 000000014040698D: xor     edx, edx
 * 000000014040698F: mov     ecx, 49h ; 'I'
 * 0000000140406994: wrmsr
 * 0000000140406996: jmp     loc_140406AD9
 * 000000014040699B: test    edx, 2
 * 00000001404069A1: jz      loc_140406AD6
 * 00000001404069A7: test    byte ptr gs:279h, 4
 * 00000001404069B0: jnz     loc_140406AD6
 * 00000001404069B6: call    loc_140406AC9
 * 00000001404069BB: add     rsp, 8
 * 00000001404069BF: call    loc_140406AD2
 * 00000001404069C4: add     rsp, 8
 * 00000001404069C8: call    loc_1404069BB
 * 00000001404069CD: add     rsp, 8
 * 00000001404069D1: call    loc_1404069C4
 * 00000001404069D6: add     rsp, 8
 * 00000001404069DA: call    loc_1404069CD
 * 00000001404069DF: add     rsp, 8
 * 00000001404069E3: call    loc_1404069D6
 * 00000001404069E8: add     rsp, 8
 * 00000001404069EC: call    loc_1404069DF
 * 00000001404069F1: add     rsp, 8
 * 00000001404069F5: call    loc_1404069E8
 * 00000001404069FA: add     rsp, 8
 * 00000001404069FE: call    loc_1404069F1
 * 0000000140406A03: add     rsp, 8
 * 0000000140406A07: call    loc_1404069FA
 * 0000000140406A0C: add     rsp, 8
 * 0000000140406A10: call    loc_140406A03
 * 0000000140406A15: add     rsp, 8
 * 0000000140406A19: call    loc_140406A0C
 * 0000000140406A1E: add     rsp, 8
 * 0000000140406A22: call    loc_140406A15
 * 0000000140406A27: add     rsp, 8
 * 0000000140406A2B: call    loc_140406A1E
 * 0000000140406A30: add     rsp, 8
 * 0000000140406A34: call    loc_140406A27
 * 0000000140406A39: add     rsp, 8
 * 0000000140406A3D: call    loc_140406A30
 * 0000000140406A42: add     rsp, 8
 * 0000000140406A46: call    loc_140406A39
 * 0000000140406A4B: add     rsp, 8
 * 0000000140406A4F: call    loc_140406A42
 * 0000000140406A54: add     rsp, 8
 * 0000000140406A58: call    loc_140406A4B
 * 0000000140406A5D: add     rsp, 8
 * 0000000140406A61: call    loc_140406A54
 * 0000000140406A66: add     rsp, 8
 * 0000000140406A6A: call    loc_140406A5D
 * 0000000140406A6F: add     rsp, 8
 * 0000000140406A73: call    loc_140406A66
 * 0000000140406A78: add     rsp, 8
 * 0000000140406A7C: call    loc_140406A6F
 * 0000000140406A81: add     rsp, 8
 * 0000000140406A85: call    loc_140406A78
 * 0000000140406A8A: add     rsp, 8
 * 0000000140406A8E: call    loc_140406A81
 * 0000000140406A93: add     rsp, 8
 * 0000000140406A97: call    loc_140406A8A
 * 0000000140406A9C: add     rsp, 8
 * 0000000140406AA0: call    loc_140406A93
 * 0000000140406AA5: add     rsp, 8
 * 0000000140406AA9: call    loc_140406A9C
 * 0000000140406AAE: add     rsp, 8
 * 0000000140406AB2: call    loc_140406AA5
 * 0000000140406AB7: add     rsp, 8
 * 0000000140406ABB: call    loc_140406AAE
 * 0000000140406AC0: add     rsp, 8
 * 0000000140406AC4: call    loc_140406AB7
 * 0000000140406AC9: add     rsp, 8
 * 0000000140406ACD: call    loc_140406AC0
 * 0000000140406AD2: add     rsp, 8
 * 0000000140406AD6: lfence
 * 0000000140406AD9: mov     byte ptr gs:853h, 0
 * 0000000140406AE2: test    byte ptr [r10+3], 80h
 * 0000000140406AE7: jz      short loc_140406B2B
 * 0000000140406AE9: mov     ecx, 0C0000102h
 * 0000000140406AEE: rdmsr
 * 0000000140406AF0: shl     rdx, 20h
 * 0000000140406AF4: or      rax, rdx
 * 0000000140406AF7: cmp     rax, cs:MmUserProbeAddress
 * 0000000140406AFE: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140406B06: cmp     [r10+0F0h], rax
 * 0000000140406B0D: jz      short loc_140406B2B
 * 0000000140406B0F: mov     rdx, [r10+1F0h]
 * 0000000140406B16: bts     dword ptr [r10+74h], 8
 * 0000000140406B1C: dec     word ptr [r10+1E6h]
 * 0000000140406B24: mov     [rdx+80h], rax
 * 0000000140406B2B: test    byte ptr [r10+3], 3
 * 0000000140406B30: mov     word ptr [rbp+80h], 0
 * 0000000140406B39: jz      short loc_140406B40
 * 0000000140406B3B: call    KiSaveDebugRegisterState
 * 0000000140406B40: cld
 * 0000000140406B41: stmxcsr dword ptr [rbp-54h]
 * 0000000140406B45: ldmxcsr dword ptr gs:180h
 * 0000000140406B4E: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140406B52: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140406B56: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140406B5A: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140406B5E: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140406B62: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140406B66: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140406B6D: jz      short loc_140406B7B
 * 0000000140406B6F: test    byte ptr [rbp+0F0h], 1
 * 0000000140406B76: jz      short loc_140406B7B
 * 0000000140406B78: stac
 * 0000000140406B7B: test    dword ptr [rbp+0F8h], 200h
 * 0000000140406B85: jz      short loc_140406B88
 * 0000000140406B87: sti
 * 0000000140406B88: mov     ecx, 80000003h
 * 0000000140406B8D: mov     edx, 1
 * 0000000140406B92: mov     r9, [rbp-50h]
 * 0000000140406B96: mov     r8, [rbp+0E8h]
 * 0000000140406B9D: call    KiExceptionDispatch
 * 0000000140406BA2: nop
 * 0000000140406BA3: retn
 */
