/*
 * XREFs of KiVmbusInterrupt3 @ 0x140401CE0
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x140A181C0 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1402DF2E0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt3 @ 0x140401CE0 (KiVmbusInterrupt3.c)
 *     KeWakeProcessor @ 0x140517EE0 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x140401CE0
 * Reason: Hex-Rays returned no pseudocode for 0x140401CE0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140401CE0: push    4
 * 0000000140401CE2: push    rbp
 * 0000000140401CE3: push    rsi
 * 0000000140401CE4: sub     rsp, 150h
 * 0000000140401CEB: lea     rbp, [rsp+168h+var_E8]
 * 0000000140401CF3: mov     byte ptr [rbp-55h], 0
 * 0000000140401CF7: mov     [rbp-50h], rax
 * 0000000140401CFB: mov     [rbp-48h], rcx
 * 0000000140401CFF: mov     [rbp-40h], rdx
 * 0000000140401D03: mov     [rbp-38h], r8
 * 0000000140401D07: mov     [rbp-30h], r9
 * 0000000140401D0B: mov     [rbp-28h], r10
 * 0000000140401D0F: mov     [rbp-20h], r11
 * 0000000140401D13: test    byte ptr [rbp+0F0h], 1
 * 0000000140401D1A: jnz     short loc_140401D49
 * 0000000140401D1C: lfence
 * 0000000140401D1F: test    byte ptr gs:278h, 1
 * 0000000140401D28: jnz     short loc_140401D32
 * 0000000140401D2A: lfence
 * 0000000140401D2D: jmp     loc_140401F3F
 * 0000000140401D32: movzx   eax, byte ptr gs:27Ah
 * 0000000140401D3B: mov     ecx, 48h ; 'H'
 * 0000000140401D40: xor     edx, edx
 * 0000000140401D42: wrmsr
 * 0000000140401D44: jmp     loc_140401F3F
 * 0000000140401D49: test    cs:KiKvaShadow, 1
 * 0000000140401D50: jnz     short loc_140401D55
 * 0000000140401D52: swapgs
 * 0000000140401D55: lfence
 * 0000000140401D58: mov     r10, gs:188h
 * 0000000140401D61: mov     rcx, gs:188h
 * 0000000140401D6A: mov     rcx, [rcx+220h]
 * 0000000140401D71: mov     rcx, [rcx+9E0h]
 * 0000000140401D78: mov     gs:270h, rcx
 * 0000000140401D81: mov     cl, gs:850h
 * 0000000140401D89: mov     gs:851h, cl
 * 0000000140401D91: mov     cl, gs:278h
 * 0000000140401D99: mov     gs:852h, cl
 * 0000000140401DA1: movzx   eax, byte ptr gs:27Bh
 * 0000000140401DAA: cmp     gs:27Ah, al
 * 0000000140401DB2: jz      short loc_140401DC5
 * 0000000140401DB4: mov     gs:27Ah, al
 * 0000000140401DBC: mov     ecx, 48h ; 'H'
 * 0000000140401DC1: xor     edx, edx
 * 0000000140401DC3: wrmsr
 * 0000000140401DC5: movzx   edx, byte ptr gs:278h
 * 0000000140401DCE: test    edx, 8
 * 0000000140401DD4: jz      short loc_140401DED
 * 0000000140401DD6: mov     eax, 1
 * 0000000140401DDB: xor     edx, edx
 * 0000000140401DDD: mov     ecx, 49h ; 'I'
 * 0000000140401DE2: wrmsr
 * 0000000140401DE4: movzx   edx, byte ptr gs:278h
 * 0000000140401DED: test    edx, 2
 * 0000000140401DF3: jz      loc_140401F1E
 * 0000000140401DF9: call    loc_140401F0C
 * 0000000140401DFE: add     rsp, 8
 * 0000000140401E02: call    loc_140401F15
 * 0000000140401E07: add     rsp, 8
 * 0000000140401E0B: call    loc_140401DFE
 * 0000000140401E10: add     rsp, 8
 * 0000000140401E14: call    loc_140401E07
 * 0000000140401E19: add     rsp, 8
 * 0000000140401E1D: call    loc_140401E10
 * 0000000140401E22: add     rsp, 8
 * 0000000140401E26: call    loc_140401E19
 * 0000000140401E2B: add     rsp, 8
 * 0000000140401E2F: call    loc_140401E22
 * 0000000140401E34: add     rsp, 8
 * 0000000140401E38: call    loc_140401E2B
 * 0000000140401E3D: add     rsp, 8
 * 0000000140401E41: call    loc_140401E34
 * 0000000140401E46: add     rsp, 8
 * 0000000140401E4A: call    loc_140401E3D
 * 0000000140401E4F: add     rsp, 8
 * 0000000140401E53: call    loc_140401E46
 * 0000000140401E58: add     rsp, 8
 * 0000000140401E5C: call    loc_140401E4F
 * 0000000140401E61: add     rsp, 8
 * 0000000140401E65: call    loc_140401E58
 * 0000000140401E6A: add     rsp, 8
 * 0000000140401E6E: call    loc_140401E61
 * 0000000140401E73: add     rsp, 8
 * 0000000140401E77: call    loc_140401E6A
 * 0000000140401E7C: add     rsp, 8
 * 0000000140401E80: call    loc_140401E73
 * 0000000140401E85: add     rsp, 8
 * 0000000140401E89: call    loc_140401E7C
 * 0000000140401E8E: add     rsp, 8
 * 0000000140401E92: call    loc_140401E85
 * 0000000140401E97: add     rsp, 8
 * 0000000140401E9B: call    loc_140401E8E
 * 0000000140401EA0: add     rsp, 8
 * 0000000140401EA4: call    loc_140401E97
 * 0000000140401EA9: add     rsp, 8
 * 0000000140401EAD: call    loc_140401EA0
 * 0000000140401EB2: add     rsp, 8
 * 0000000140401EB6: call    loc_140401EA9
 * 0000000140401EBB: add     rsp, 8
 * 0000000140401EBF: call    loc_140401EB2
 * 0000000140401EC4: add     rsp, 8
 * 0000000140401EC8: call    loc_140401EBB
 * 0000000140401ECD: add     rsp, 8
 * 0000000140401ED1: call    loc_140401EC4
 * 0000000140401ED6: add     rsp, 8
 * 0000000140401EDA: call    loc_140401ECD
 * 0000000140401EDF: add     rsp, 8
 * 0000000140401EE3: call    loc_140401ED6
 * 0000000140401EE8: add     rsp, 8
 * 0000000140401EEC: call    loc_140401EDF
 * 0000000140401EF1: add     rsp, 8
 * 0000000140401EF5: call    loc_140401EE8
 * 0000000140401EFA: add     rsp, 8
 * 0000000140401EFE: call    loc_140401EF1
 * 0000000140401F03: add     rsp, 8
 * 0000000140401F07: call    loc_140401EFA
 * 0000000140401F0C: add     rsp, 8
 * 0000000140401F10: call    loc_140401F03
 * 0000000140401F15: add     rsp, 8
 * 0000000140401F19: mov     eax, 0DADAh
 * 0000000140401F1E: lfence
 * 0000000140401F21: mov     byte ptr gs:853h, 0
 * 0000000140401F2A: test    byte ptr [r10+3], 3
 * 0000000140401F2F: mov     word ptr [rbp+80h], 0
 * 0000000140401F38: jz      short loc_140401F3F
 * 0000000140401F3A: call    KiSaveDebugRegisterState
 * 0000000140401F3F: cld
 * 0000000140401F40: stmxcsr dword ptr [rbp-54h]
 * 0000000140401F44: ldmxcsr dword ptr gs:180h
 * 0000000140401F4D: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140401F51: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140401F55: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140401F59: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140401F5D: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140401F61: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140401F65: cmp     byte ptr gs:801Ah, 0
 * 0000000140401F6E: jz      short loc_140401F75
 * 0000000140401F70: call    KeWakeProcessor
 * 0000000140401F75: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140401F7C: cmp     rax, [rbp+0E8h]
 * 0000000140401F83: jnb     short loc_140401F9E
 * 0000000140401F85: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140401F8C: cmp     rax, [rbp+0E8h]
 * 0000000140401F93: jb      short loc_140401F9E
 * 0000000140401F95: lea     rcx, [rbp-80h]
 * 0000000140401F99: call    KiCheckForSListAddress
 * 0000000140401F9E: xor     esi, esi
 * 0000000140401FA0: inc     dword ptr gs:8000h
 * 0000000140401FA8: jmp     KiVmbusInterruptDispatch
 */
