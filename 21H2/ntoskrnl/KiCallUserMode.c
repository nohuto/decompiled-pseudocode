/*
 * XREFs of KiCallUserMode @ 0x1404024B0
 * Callers:
 *     KeUserModeCallback @ 0x140707410 (KeUserModeCallback.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiCallUserMode @ 0x1404024B0 (KiCallUserMode.c)
 */

/*
 * Hex-Rays decompilation failed for KiCallUserMode @ 0x1404024B0
 * Reason: Hex-Rays returned no pseudocode for 0x1404024B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404024B0: sub     rsp, 138h
 * 00000001404024B7: lea     rax, [rsp+138h+var_38]
 * 00000001404024BF: movaps  [rsp+138h+var_108], xmm6
 * 00000001404024C4: movaps  [rsp+138h+var_F8], xmm7
 * 00000001404024C9: movaps  [rsp+138h+var_E8], xmm8
 * 00000001404024CF: movaps  [rsp+138h+var_D8], xmm9
 * 00000001404024D5: movaps  [rsp+138h+var_C8], xmm10
 * 00000001404024DB: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001404024E0: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001404024E5: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001404024EA: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001404024EF: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001404024F4: mov     [rax-8], rbp
 * 00000001404024F8: mov     rbp, rsp
 * 00000001404024FB: mov     [rax], rbx
 * 00000001404024FE: mov     [rax+8], rdi
 * 0000000140402502: mov     [rax+10h], rsi
 * 0000000140402506: mov     [rax+18h], r12
 * 000000014040250A: mov     [rax+20h], r13
 * 000000014040250E: mov     [rax+28h], r14
 * 0000000140402512: mov     [rax+30h], r15
 * 0000000140402516: xor     r10, r10
 * 0000000140402519: xor     r12, r12
 * 000000014040251C: xor     r13, r13
 * 000000014040251F: xor     r14, r14
 * 0000000140402522: xor     r15, r15
 * 0000000140402525: pxor    xmm6, xmm6
 * 0000000140402529: pxor    xmm7, xmm7
 * 000000014040252D: pxor    xmm8, xmm8
 * 0000000140402532: pxor    xmm9, xmm9
 * 0000000140402537: pxor    xmm10, xmm10
 * 000000014040253C: pxor    xmm11, xmm11
 * 0000000140402541: pxor    xmm12, xmm12
 * 0000000140402546: pxor    xmm13, xmm13
 * 000000014040254B: pxor    xmm14, xmm14
 * 0000000140402550: pxor    xmm15, xmm15
 * 0000000140402555: mov     [rbp+0D8h], rcx
 * 000000014040255C: mov     [rbp+0E0h], rdx
 * 0000000140402563: mov     rbx, gs:188h
 * 000000014040256C: mov     [r8+20h], rsp
 * 0000000140402570: mov     rsi, [rbx+90h]
 * 0000000140402577: mov     [rbp+0D0h], rsi
 * 000000014040257E: cli
 * 000000014040257F: mov     [rbx+28h], r8
 * 0000000140402583: mov     [rbx+38h], r9
 * 0000000140402587: test    cs:KiKvaShadow, 1
 * 000000014040258E: jnz     short loc_14040259F
 * 0000000140402590: mov     rdi, gs:8
 * 0000000140402599: mov     [rdi+4], r8
 * 000000014040259D: jmp     short loc_1404025A8
 * 000000014040259F: mov     gs:9008h, r8
 * 00000001404025A8: mov     ecx, cs:KeKernelStackSize
 * 00000001404025AE: sub     r9, rcx
 * 00000001404025B1: mov     gs:1A8h, r8
 * 00000001404025BA: mov     [rbx+30h], r9
 * 00000001404025BE: lea     rsp, [r8-190h]
 * 00000001404025C5: mov     rdi, rsp
 * 00000001404025C8: mov     ecx, 32h ; '2'
 * 00000001404025CD: rep movsq
 * 00000001404025D0: xor     edi, edi
 * 00000001404025D2: test    byte ptr [rbx+0C2h], 3
 * 00000001404025D9: jnz     loc_140402841
 * 00000001404025DF: test    dword ptr [rbx], 48010000h
 * 00000001404025E5: jnz     loc_140402841
 * 00000001404025EB: test    byte ptr gs:86Ch, 2
 * 00000001404025F4: jnz     loc_140402841
 * 00000001404025FA: lea     rbp, [rsi-110h]
 * 0000000140402601: ldmxcsr dword ptr [rbp-54h]
 * 0000000140402605: xor     esi, esi
 * 0000000140402607: test    byte ptr [rbx+3], 3
 * 000000014040260B: jnz     loc_140402816
 * 0000000140402611: mov     r9, cs:KeUserCallbackDispatcher
 * 0000000140402618: mov     byte ptr gs:856h, 0
 * 0000000140402621: movzx   eax, word ptr gs:86Ah
 * 000000014040262A: cmp     gs:864h, ax
 * 0000000140402633: jz      short loc_140402647
 * 0000000140402635: mov     gs:864h, ax
 * 000000014040263E: mov     ecx, 48h ; 'H'
 * 0000000140402643: xor     edx, edx
 * 0000000140402645: wrmsr
 * 0000000140402647: btr     word ptr gs:860h, 2
 * 0000000140402652: jnb     short loc_140402662
 * 0000000140402654: mov     eax, 1
 * 0000000140402659: xor     edx, edx
 * 000000014040265B: mov     ecx, 49h ; 'I'
 * 0000000140402660: wrmsr
 * 0000000140402662: btr     word ptr gs:860h, 5
 * 000000014040266D: jnb     loc_140402798
 * 0000000140402673: call    loc_140402786
 * 0000000140402678: add     rsp, 8
 * 000000014040267C: call    loc_14040278F
 * 0000000140402681: add     rsp, 8
 * 0000000140402685: call    loc_140402678
 * 000000014040268A: add     rsp, 8
 * 000000014040268E: call    loc_140402681
 * 0000000140402693: add     rsp, 8
 * 0000000140402697: call    loc_14040268A
 * 000000014040269C: add     rsp, 8
 * 00000001404026A0: call    loc_140402693
 * 00000001404026A5: add     rsp, 8
 * 00000001404026A9: call    loc_14040269C
 * 00000001404026AE: add     rsp, 8
 * 00000001404026B2: call    loc_1404026A5
 * 00000001404026B7: add     rsp, 8
 * 00000001404026BB: call    loc_1404026AE
 * 00000001404026C0: add     rsp, 8
 * 00000001404026C4: call    loc_1404026B7
 * 00000001404026C9: add     rsp, 8
 * 00000001404026CD: call    loc_1404026C0
 * 00000001404026D2: add     rsp, 8
 * 00000001404026D6: call    loc_1404026C9
 * 00000001404026DB: add     rsp, 8
 * 00000001404026DF: call    loc_1404026D2
 * 00000001404026E4: add     rsp, 8
 * 00000001404026E8: call    loc_1404026DB
 * 00000001404026ED: add     rsp, 8
 * 00000001404026F1: call    loc_1404026E4
 * 00000001404026F6: add     rsp, 8
 * 00000001404026FA: call    loc_1404026ED
 * 00000001404026FF: add     rsp, 8
 * 0000000140402703: call    loc_1404026F6
 * 0000000140402708: add     rsp, 8
 * 000000014040270C: call    loc_1404026FF
 * 0000000140402711: add     rsp, 8
 * 0000000140402715: call    loc_140402708
 * 000000014040271A: add     rsp, 8
 * 000000014040271E: call    loc_140402711
 * 0000000140402723: add     rsp, 8
 * 0000000140402727: call    loc_14040271A
 * 000000014040272C: add     rsp, 8
 * 0000000140402730: call    loc_140402723
 * 0000000140402735: add     rsp, 8
 * 0000000140402739: call    loc_14040272C
 * 000000014040273E: add     rsp, 8
 * 0000000140402742: call    loc_140402735
 * 0000000140402747: add     rsp, 8
 * 000000014040274B: call    loc_14040273E
 * 0000000140402750: add     rsp, 8
 * 0000000140402754: call    loc_140402747
 * 0000000140402759: add     rsp, 8
 * 000000014040275D: call    loc_140402750
 * 0000000140402762: add     rsp, 8
 * 0000000140402766: call    loc_140402759
 * 000000014040276B: add     rsp, 8
 * 000000014040276F: call    loc_140402762
 * 0000000140402774: add     rsp, 8
 * 0000000140402778: call    loc_14040276B
 * 000000014040277D: add     rsp, 8
 * 0000000140402781: call    loc_140402774
 * 0000000140402786: add     rsp, 8
 * 000000014040278A: call    loc_14040277D
 * 000000014040278F: add     rsp, 8
 * 0000000140402793: mov     eax, 0DADAh
 * 0000000140402798: test    word ptr gs:860h, 80h
 * 00000001404027A3: jz      short loc_1404027B1
 * 00000001404027A5: xor     eax, eax
 * 00000001404027A7: xor     edx, edx
 * 00000001404027A9: mov     ecx, 1
 * 00000001404027AE: div     rcx
 * 00000001404027B1: mov     rcx, r9
 * 00000001404027B4: xor     eax, eax
 * 00000001404027B6: xor     edx, edx
 * 00000001404027B8: mov     r8, [rbp+100h]
 * 00000001404027BF: mov     r9, [rbp+0D8h]
 * 00000001404027C6: pxor    xmm0, xmm0
 * 00000001404027CA: pxor    xmm1, xmm1
 * 00000001404027CE: pxor    xmm2, xmm2
 * 00000001404027D2: pxor    xmm3, xmm3
 * 00000001404027D6: pxor    xmm4, xmm4
 * 00000001404027DA: pxor    xmm5, xmm5
 * 00000001404027DE: mov     r11, [rbp+0F8h]
 * 00000001404027E5: xor     ebx, ebx
 * 00000001404027E7: test    cs:KiKvaShadow, 1
 * 00000001404027EE: jnz     KiKernelSysretExit
 * 00000001404027F4: mov     rbp, r9
 * 00000001404027F7: mov     rsp, r8
 * 00000001404027FA: test    word ptr gs:860h, 100h
 * 0000000140402805: jz      short loc_140402810
 * 0000000140402807: verw    word ptr gs:902Ah
 * 0000000140402810: swapgs
 * 0000000140402813: sysret
 * 0000000140402816: call    KiRestoreDebugRegisterState
 * 000000014040281B: mov     r10, cs:KeUserCallbackDispatcher
 * 0000000140402822: mov     r9, [rbx+0B8h]
 * 0000000140402829: mov     r9, [r9+3D8h]
 * 0000000140402830: or      r9, r9
 * 0000000140402833: jnz     loc_140402618
 * 0000000140402839: xchg    r9, r10
 * 000000014040283C: jmp     loc_140402618
 * 0000000140402841: lea     rbp, [rsp+138h+var_B8]
 * 0000000140402849: mov     word ptr [rbp+0F0h], 33h ; '3'
 * 0000000140402852: mov     rax, cs:KeUserCallbackDispatcher
 * 0000000140402859: mov     [rbp+0E8h], rax
 * 0000000140402860: lea     rcx, KiSystemServiceExit
 * 0000000140402867: jmp     rcx
 * 000000014040286D: retn
 */
