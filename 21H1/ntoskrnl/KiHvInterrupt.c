/*
 * XREFs of KiHvInterrupt @ 0x1403FA450
 * Callers:
 *     KiHvInterruptShadow @ 0x140A11FC0 (KiHvInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1402EC460 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KiHvInterrupt @ 0x1403FA450 (KiHvInterrupt.c)
 *     KeWakeProcessor @ 0x140513F60 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x1403FA450
 * Reason: Hex-Rays returned no pseudocode for 0x1403FA450
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FA450: push    0
 * 00000001403FA452: push    rbp
 * 00000001403FA453: push    rsi
 * 00000001403FA454: sub     rsp, 150h
 * 00000001403FA45B: lea     rbp, [rsp+168h+var_E8]
 * 00000001403FA463: mov     byte ptr [rbp-55h], 0
 * 00000001403FA467: mov     [rbp-50h], rax
 * 00000001403FA46B: mov     [rbp-48h], rcx
 * 00000001403FA46F: mov     [rbp-40h], rdx
 * 00000001403FA473: mov     [rbp-38h], r8
 * 00000001403FA477: mov     [rbp-30h], r9
 * 00000001403FA47B: mov     [rbp-28h], r10
 * 00000001403FA47F: mov     [rbp-20h], r11
 * 00000001403FA483: test    byte ptr [rbp+0F0h], 1
 * 00000001403FA48A: jnz     short loc_1403FA4B9
 * 00000001403FA48C: lfence
 * 00000001403FA48F: test    byte ptr gs:278h, 1
 * 00000001403FA498: jnz     short loc_1403FA4A2
 * 00000001403FA49A: lfence
 * 00000001403FA49D: jmp     loc_1403FA6B5
 * 00000001403FA4A2: movzx   eax, byte ptr gs:27Ah
 * 00000001403FA4AB: mov     ecx, 48h ; 'H'
 * 00000001403FA4B0: xor     edx, edx
 * 00000001403FA4B2: wrmsr
 * 00000001403FA4B4: jmp     loc_1403FA6B5
 * 00000001403FA4B9: test    cs:KiKvaShadow, 1
 * 00000001403FA4C0: jnz     short loc_1403FA4C5
 * 00000001403FA4C2: swapgs
 * 00000001403FA4C5: lfence
 * 00000001403FA4C8: mov     r10, gs:188h
 * 00000001403FA4D1: mov     rcx, gs:188h
 * 00000001403FA4DA: mov     rcx, [rcx+220h]
 * 00000001403FA4E1: mov     rcx, [rcx+9E0h]
 * 00000001403FA4E8: mov     gs:270h, rcx
 * 00000001403FA4F1: mov     cl, gs:850h
 * 00000001403FA4F9: mov     gs:851h, cl
 * 00000001403FA501: mov     cl, gs:278h
 * 00000001403FA509: mov     gs:852h, cl
 * 00000001403FA511: movzx   eax, byte ptr gs:27Bh
 * 00000001403FA51A: cmp     gs:27Ah, al
 * 00000001403FA522: jz      short loc_1403FA535
 * 00000001403FA524: mov     gs:27Ah, al
 * 00000001403FA52C: mov     ecx, 48h ; 'H'
 * 00000001403FA531: xor     edx, edx
 * 00000001403FA533: wrmsr
 * 00000001403FA535: movzx   edx, byte ptr gs:278h
 * 00000001403FA53E: test    edx, 8
 * 00000001403FA544: jz      short loc_1403FA559
 * 00000001403FA546: mov     eax, 1
 * 00000001403FA54B: xor     edx, edx
 * 00000001403FA54D: mov     ecx, 49h ; 'I'
 * 00000001403FA552: wrmsr
 * 00000001403FA554: jmp     loc_1403FA697
 * 00000001403FA559: test    edx, 2
 * 00000001403FA55F: jz      loc_1403FA694
 * 00000001403FA565: test    byte ptr gs:279h, 4
 * 00000001403FA56E: jnz     loc_1403FA694
 * 00000001403FA574: call    loc_1403FA687
 * 00000001403FA579: add     rsp, 8
 * 00000001403FA57D: call    loc_1403FA690
 * 00000001403FA582: add     rsp, 8
 * 00000001403FA586: call    loc_1403FA579
 * 00000001403FA58B: add     rsp, 8
 * 00000001403FA58F: call    loc_1403FA582
 * 00000001403FA594: add     rsp, 8
 * 00000001403FA598: call    loc_1403FA58B
 * 00000001403FA59D: add     rsp, 8
 * 00000001403FA5A1: call    loc_1403FA594
 * 00000001403FA5A6: add     rsp, 8
 * 00000001403FA5AA: call    loc_1403FA59D
 * 00000001403FA5AF: add     rsp, 8
 * 00000001403FA5B3: call    loc_1403FA5A6
 * 00000001403FA5B8: add     rsp, 8
 * 00000001403FA5BC: call    loc_1403FA5AF
 * 00000001403FA5C1: add     rsp, 8
 * 00000001403FA5C5: call    loc_1403FA5B8
 * 00000001403FA5CA: add     rsp, 8
 * 00000001403FA5CE: call    loc_1403FA5C1
 * 00000001403FA5D3: add     rsp, 8
 * 00000001403FA5D7: call    loc_1403FA5CA
 * 00000001403FA5DC: add     rsp, 8
 * 00000001403FA5E0: call    loc_1403FA5D3
 * 00000001403FA5E5: add     rsp, 8
 * 00000001403FA5E9: call    loc_1403FA5DC
 * 00000001403FA5EE: add     rsp, 8
 * 00000001403FA5F2: call    loc_1403FA5E5
 * 00000001403FA5F7: add     rsp, 8
 * 00000001403FA5FB: call    loc_1403FA5EE
 * 00000001403FA600: add     rsp, 8
 * 00000001403FA604: call    loc_1403FA5F7
 * 00000001403FA609: add     rsp, 8
 * 00000001403FA60D: call    loc_1403FA600
 * 00000001403FA612: add     rsp, 8
 * 00000001403FA616: call    loc_1403FA609
 * 00000001403FA61B: add     rsp, 8
 * 00000001403FA61F: call    loc_1403FA612
 * 00000001403FA624: add     rsp, 8
 * 00000001403FA628: call    loc_1403FA61B
 * 00000001403FA62D: add     rsp, 8
 * 00000001403FA631: call    loc_1403FA624
 * 00000001403FA636: add     rsp, 8
 * 00000001403FA63A: call    loc_1403FA62D
 * 00000001403FA63F: add     rsp, 8
 * 00000001403FA643: call    loc_1403FA636
 * 00000001403FA648: add     rsp, 8
 * 00000001403FA64C: call    loc_1403FA63F
 * 00000001403FA651: add     rsp, 8
 * 00000001403FA655: call    loc_1403FA648
 * 00000001403FA65A: add     rsp, 8
 * 00000001403FA65E: call    loc_1403FA651
 * 00000001403FA663: add     rsp, 8
 * 00000001403FA667: call    loc_1403FA65A
 * 00000001403FA66C: add     rsp, 8
 * 00000001403FA670: call    loc_1403FA663
 * 00000001403FA675: add     rsp, 8
 * 00000001403FA679: call    loc_1403FA66C
 * 00000001403FA67E: add     rsp, 8
 * 00000001403FA682: call    loc_1403FA675
 * 00000001403FA687: add     rsp, 8
 * 00000001403FA68B: call    loc_1403FA67E
 * 00000001403FA690: add     rsp, 8
 * 00000001403FA694: lfence
 * 00000001403FA697: mov     byte ptr gs:853h, 0
 * 00000001403FA6A0: test    byte ptr [r10+3], 3
 * 00000001403FA6A5: mov     word ptr [rbp+80h], 0
 * 00000001403FA6AE: jz      short loc_1403FA6B5
 * 00000001403FA6B0: call    KiSaveDebugRegisterState
 * 00000001403FA6B5: cld
 * 00000001403FA6B6: stmxcsr dword ptr [rbp-54h]
 * 00000001403FA6BA: ldmxcsr dword ptr gs:180h
 * 00000001403FA6C3: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001403FA6C7: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001403FA6CB: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001403FA6CF: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001403FA6D3: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001403FA6D7: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001403FA6DB: cmp     byte ptr gs:801Ah, 0
 * 00000001403FA6E4: jz      short loc_1403FA6EB
 * 00000001403FA6E6: call    KeWakeProcessor
 * 00000001403FA6EB: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001403FA6F2: cmp     rax, [rbp+0E8h]
 * 00000001403FA6F9: jnb     short loc_1403FA714
 * 00000001403FA6FB: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001403FA702: cmp     rax, [rbp+0E8h]
 * 00000001403FA709: jb      short loc_1403FA714
 * 00000001403FA70B: lea     rcx, [rbp-80h]
 * 00000001403FA70F: call    KiCheckForSListAddress
 * 00000001403FA714: xor     esi, esi
 * 00000001403FA716: inc     dword ptr gs:8000h
 * 00000001403FA71E: jmp     KiHvInterruptDispatch
 */
