/*
 * XREFs of KiHvInterrupt @ 0x1403FB6E0
 * Callers:
 *     KiHvInterruptShadow @ 0x140A11FC0 (KiHvInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140325D90 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiHvInterrupt @ 0x1403FB6E0 (KiHvInterrupt.c)
 *     KeWakeProcessor @ 0x1405145B0 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x1403FB6E0
 * Reason: Hex-Rays returned no pseudocode for 0x1403FB6E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FB6E0: push    0
 * 00000001403FB6E2: push    rbp
 * 00000001403FB6E3: push    rsi
 * 00000001403FB6E4: sub     rsp, 150h
 * 00000001403FB6EB: lea     rbp, [rsp+168h+var_E8]
 * 00000001403FB6F3: mov     byte ptr [rbp-55h], 0
 * 00000001403FB6F7: mov     [rbp-50h], rax
 * 00000001403FB6FB: mov     [rbp-48h], rcx
 * 00000001403FB6FF: mov     [rbp-40h], rdx
 * 00000001403FB703: mov     [rbp-38h], r8
 * 00000001403FB707: mov     [rbp-30h], r9
 * 00000001403FB70B: mov     [rbp-28h], r10
 * 00000001403FB70F: mov     [rbp-20h], r11
 * 00000001403FB713: test    byte ptr [rbp+0F0h], 1
 * 00000001403FB71A: jnz     short loc_1403FB749
 * 00000001403FB71C: lfence
 * 00000001403FB71F: test    byte ptr gs:278h, 1
 * 00000001403FB728: jnz     short loc_1403FB732
 * 00000001403FB72A: lfence
 * 00000001403FB72D: jmp     loc_1403FB945
 * 00000001403FB732: movzx   eax, byte ptr gs:27Ah
 * 00000001403FB73B: mov     ecx, 48h ; 'H'
 * 00000001403FB740: xor     edx, edx
 * 00000001403FB742: wrmsr
 * 00000001403FB744: jmp     loc_1403FB945
 * 00000001403FB749: test    cs:KiKvaShadow, 1
 * 00000001403FB750: jnz     short loc_1403FB755
 * 00000001403FB752: swapgs
 * 00000001403FB755: lfence
 * 00000001403FB758: mov     r10, gs:188h
 * 00000001403FB761: mov     rcx, gs:188h
 * 00000001403FB76A: mov     rcx, [rcx+220h]
 * 00000001403FB771: mov     rcx, [rcx+9E0h]
 * 00000001403FB778: mov     gs:270h, rcx
 * 00000001403FB781: mov     cl, gs:850h
 * 00000001403FB789: mov     gs:851h, cl
 * 00000001403FB791: mov     cl, gs:278h
 * 00000001403FB799: mov     gs:852h, cl
 * 00000001403FB7A1: movzx   eax, byte ptr gs:27Bh
 * 00000001403FB7AA: cmp     gs:27Ah, al
 * 00000001403FB7B2: jz      short loc_1403FB7C5
 * 00000001403FB7B4: mov     gs:27Ah, al
 * 00000001403FB7BC: mov     ecx, 48h ; 'H'
 * 00000001403FB7C1: xor     edx, edx
 * 00000001403FB7C3: wrmsr
 * 00000001403FB7C5: movzx   edx, byte ptr gs:278h
 * 00000001403FB7CE: test    edx, 8
 * 00000001403FB7D4: jz      short loc_1403FB7E9
 * 00000001403FB7D6: mov     eax, 1
 * 00000001403FB7DB: xor     edx, edx
 * 00000001403FB7DD: mov     ecx, 49h ; 'I'
 * 00000001403FB7E2: wrmsr
 * 00000001403FB7E4: jmp     loc_1403FB927
 * 00000001403FB7E9: test    edx, 2
 * 00000001403FB7EF: jz      loc_1403FB924
 * 00000001403FB7F5: test    byte ptr gs:279h, 4
 * 00000001403FB7FE: jnz     loc_1403FB924
 * 00000001403FB804: call    loc_1403FB917
 * 00000001403FB809: add     rsp, 8
 * 00000001403FB80D: call    loc_1403FB920
 * 00000001403FB812: add     rsp, 8
 * 00000001403FB816: call    loc_1403FB809
 * 00000001403FB81B: add     rsp, 8
 * 00000001403FB81F: call    loc_1403FB812
 * 00000001403FB824: add     rsp, 8
 * 00000001403FB828: call    loc_1403FB81B
 * 00000001403FB82D: add     rsp, 8
 * 00000001403FB831: call    loc_1403FB824
 * 00000001403FB836: add     rsp, 8
 * 00000001403FB83A: call    loc_1403FB82D
 * 00000001403FB83F: add     rsp, 8
 * 00000001403FB843: call    loc_1403FB836
 * 00000001403FB848: add     rsp, 8
 * 00000001403FB84C: call    loc_1403FB83F
 * 00000001403FB851: add     rsp, 8
 * 00000001403FB855: call    loc_1403FB848
 * 00000001403FB85A: add     rsp, 8
 * 00000001403FB85E: call    loc_1403FB851
 * 00000001403FB863: add     rsp, 8
 * 00000001403FB867: call    loc_1403FB85A
 * 00000001403FB86C: add     rsp, 8
 * 00000001403FB870: call    loc_1403FB863
 * 00000001403FB875: add     rsp, 8
 * 00000001403FB879: call    loc_1403FB86C
 * 00000001403FB87E: add     rsp, 8
 * 00000001403FB882: call    loc_1403FB875
 * 00000001403FB887: add     rsp, 8
 * 00000001403FB88B: call    loc_1403FB87E
 * 00000001403FB890: add     rsp, 8
 * 00000001403FB894: call    loc_1403FB887
 * 00000001403FB899: add     rsp, 8
 * 00000001403FB89D: call    loc_1403FB890
 * 00000001403FB8A2: add     rsp, 8
 * 00000001403FB8A6: call    loc_1403FB899
 * 00000001403FB8AB: add     rsp, 8
 * 00000001403FB8AF: call    loc_1403FB8A2
 * 00000001403FB8B4: add     rsp, 8
 * 00000001403FB8B8: call    loc_1403FB8AB
 * 00000001403FB8BD: add     rsp, 8
 * 00000001403FB8C1: call    loc_1403FB8B4
 * 00000001403FB8C6: add     rsp, 8
 * 00000001403FB8CA: call    loc_1403FB8BD
 * 00000001403FB8CF: add     rsp, 8
 * 00000001403FB8D3: call    loc_1403FB8C6
 * 00000001403FB8D8: add     rsp, 8
 * 00000001403FB8DC: call    loc_1403FB8CF
 * 00000001403FB8E1: add     rsp, 8
 * 00000001403FB8E5: call    loc_1403FB8D8
 * 00000001403FB8EA: add     rsp, 8
 * 00000001403FB8EE: call    loc_1403FB8E1
 * 00000001403FB8F3: add     rsp, 8
 * 00000001403FB8F7: call    loc_1403FB8EA
 * 00000001403FB8FC: add     rsp, 8
 * 00000001403FB900: call    loc_1403FB8F3
 * 00000001403FB905: add     rsp, 8
 * 00000001403FB909: call    loc_1403FB8FC
 * 00000001403FB90E: add     rsp, 8
 * 00000001403FB912: call    loc_1403FB905
 * 00000001403FB917: add     rsp, 8
 * 00000001403FB91B: call    loc_1403FB90E
 * 00000001403FB920: add     rsp, 8
 * 00000001403FB924: lfence
 * 00000001403FB927: mov     byte ptr gs:853h, 0
 * 00000001403FB930: test    byte ptr [r10+3], 3
 * 00000001403FB935: mov     word ptr [rbp+80h], 0
 * 00000001403FB93E: jz      short loc_1403FB945
 * 00000001403FB940: call    KiSaveDebugRegisterState
 * 00000001403FB945: cld
 * 00000001403FB946: stmxcsr dword ptr [rbp-54h]
 * 00000001403FB94A: ldmxcsr dword ptr gs:180h
 * 00000001403FB953: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001403FB957: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001403FB95B: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001403FB95F: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001403FB963: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001403FB967: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001403FB96B: cmp     byte ptr gs:801Ah, 0
 * 00000001403FB974: jz      short loc_1403FB97B
 * 00000001403FB976: call    KeWakeProcessor
 * 00000001403FB97B: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001403FB982: cmp     rax, [rbp+0E8h]
 * 00000001403FB989: jnb     short loc_1403FB9A4
 * 00000001403FB98B: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001403FB992: cmp     rax, [rbp+0E8h]
 * 00000001403FB999: jb      short loc_1403FB9A4
 * 00000001403FB99B: lea     rcx, [rbp-80h]
 * 00000001403FB99F: call    KiCheckForSListAddress
 * 00000001403FB9A4: xor     esi, esi
 * 00000001403FB9A6: inc     dword ptr gs:8000h
 * 00000001403FB9AE: jmp     KiHvInterruptDispatch
 */
