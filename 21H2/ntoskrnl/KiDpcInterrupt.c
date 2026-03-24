/*
 * XREFs of KiDpcInterrupt @ 0x140405690
 * Callers:
 *     KiDpcInterruptShadow @ 0x140A14F40 (KiDpcInterruptShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x1402914D0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403520 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x140405690 (KiDpcInterrupt.c)
 *     KiDispatchInterrupt @ 0x140406550 (KiDispatchInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x140512C40 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x140405690
 * Reason: Hex-Rays returned no pseudocode for 0x140405690
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140405690: sub     rsp, 8
 * 0000000140405694: push    rbp
 * 0000000140405695: push    rsi
 * 0000000140405696: sub     rsp, 150h
 * 000000014040569D: lea     rbp, [rsp+80h]
 * 00000001404056A5: mov     [rbp+0E8h+var_13D], 0
 * 00000001404056A9: mov     [rbp+0E8h+var_138], rax
 * 00000001404056AD: mov     [rbp+0E8h+var_130], rcx
 * 00000001404056B1: mov     [rbp+0E8h+var_128], rdx
 * 00000001404056B5: mov     [rbp+0E8h+var_120], r8
 * 00000001404056B9: mov     [rbp+0E8h+var_118], r9
 * 00000001404056BD: mov     [rbp+0E8h+var_110], r10
 * 00000001404056C1: mov     [rbp+0E8h+var_108], r11
 * 00000001404056C5: test    [rbp+0E8h+arg_0], 1
 * 00000001404056CC: jnz     short loc_1404056FD
 * 00000001404056CE: lfence
 * 00000001404056D1: test    word ptr gs:860h, 1
 * 00000001404056DC: jnz     short loc_1404056E6
 * 00000001404056DE: lfence
 * 00000001404056E1: jmp     loc_140405906
 * 00000001404056E6: movzx   eax, word ptr gs:864h
 * 00000001404056EF: mov     ecx, 48h ; 'H'
 * 00000001404056F4: xor     edx, edx
 * 00000001404056F6: wrmsr
 * 00000001404056F8: jmp     loc_140405906
 * 00000001404056FD: test    cs:KiKvaShadow, 1
 * 0000000140405704: jnz     short loc_140405709
 * 0000000140405706: swapgs
 * 0000000140405709: lfence
 * 000000014040570C: mov     r10, gs:188h
 * 0000000140405715: mov     rcx, gs:188h
 * 000000014040571E: mov     rcx, [rcx+220h]
 * 0000000140405725: mov     rcx, [rcx+9E0h]
 * 000000014040572C: mov     gs:858h, rcx
 * 0000000140405735: mov     cx, gs:850h
 * 000000014040573E: mov     gs:852h, cx
 * 0000000140405747: mov     cx, gs:860h
 * 0000000140405750: mov     gs:854h, cx
 * 0000000140405759: movzx   eax, word ptr gs:866h
 * 0000000140405762: cmp     gs:864h, ax
 * 000000014040576B: jz      short loc_14040577F
 * 000000014040576D: mov     gs:864h, ax
 * 0000000140405776: mov     ecx, 48h ; 'H'
 * 000000014040577B: xor     edx, edx
 * 000000014040577D: wrmsr
 * 000000014040577F: movzx   edx, word ptr gs:860h
 * 0000000140405788: test    edx, 8
 * 000000014040578E: jz      short loc_1404057A7
 * 0000000140405790: mov     eax, 1
 * 0000000140405795: xor     edx, edx
 * 0000000140405797: mov     ecx, 49h ; 'I'
 * 000000014040579C: wrmsr
 * 000000014040579E: movzx   edx, word ptr gs:860h
 * 00000001404057A7: test    edx, 2
 * 00000001404057AD: jz      loc_1404058D8
 * 00000001404057B3: call    loc_1404058C6
 * 00000001404057B8: add     rsp, 8
 * 00000001404057BC: call    loc_1404058CF
 * 00000001404057C1: add     rsp, 8
 * 00000001404057C5: call    loc_1404057B8
 * 00000001404057CA: add     rsp, 8
 * 00000001404057CE: call    loc_1404057C1
 * 00000001404057D3: add     rsp, 8
 * 00000001404057D7: call    loc_1404057CA
 * 00000001404057DC: add     rsp, 8
 * 00000001404057E0: call    loc_1404057D3
 * 00000001404057E5: add     rsp, 8
 * 00000001404057E9: call    loc_1404057DC
 * 00000001404057EE: add     rsp, 8
 * 00000001404057F2: call    loc_1404057E5
 * 00000001404057F7: add     rsp, 8
 * 00000001404057FB: call    loc_1404057EE
 * 0000000140405800: add     rsp, 8
 * 0000000140405804: call    loc_1404057F7
 * 0000000140405809: add     rsp, 8
 * 000000014040580D: call    loc_140405800
 * 0000000140405812: add     rsp, 8
 * 0000000140405816: call    loc_140405809
 * 000000014040581B: add     rsp, 8
 * 000000014040581F: call    loc_140405812
 * 0000000140405824: add     rsp, 8
 * 0000000140405828: call    loc_14040581B
 * 000000014040582D: add     rsp, 8
 * 0000000140405831: call    loc_140405824
 * 0000000140405836: add     rsp, 8
 * 000000014040583A: call    loc_14040582D
 * 000000014040583F: add     rsp, 8
 * 0000000140405843: call    loc_140405836
 * 0000000140405848: add     rsp, 8
 * 000000014040584C: call    loc_14040583F
 * 0000000140405851: add     rsp, 8
 * 0000000140405855: call    loc_140405848
 * 000000014040585A: add     rsp, 8
 * 000000014040585E: call    loc_140405851
 * 0000000140405863: add     rsp, 8
 * 0000000140405867: call    loc_14040585A
 * 000000014040586C: add     rsp, 8
 * 0000000140405870: call    loc_140405863
 * 0000000140405875: add     rsp, 8
 * 0000000140405879: call    loc_14040586C
 * 000000014040587E: add     rsp, 8
 * 0000000140405882: call    loc_140405875
 * 0000000140405887: add     rsp, 8
 * 000000014040588B: call    loc_14040587E
 * 0000000140405890: add     rsp, 8
 * 0000000140405894: call    loc_140405887
 * 0000000140405899: add     rsp, 8
 * 000000014040589D: call    loc_140405890
 * 00000001404058A2: add     rsp, 8
 * 00000001404058A6: call    loc_140405899
 * 00000001404058AB: add     rsp, 8
 * 00000001404058AF: call    loc_1404058A2
 * 00000001404058B4: add     rsp, 8
 * 00000001404058B8: call    loc_1404058AB
 * 00000001404058BD: add     rsp, 8
 * 00000001404058C1: call    loc_1404058B4
 * 00000001404058C6: add     rsp, 8
 * 00000001404058CA: call    loc_1404058BD
 * 00000001404058CF: add     rsp, 8
 * 00000001404058D3: mov     eax, 0DADAh
 * 00000001404058D8: test    edx, 200h
 * 00000001404058DE: jz      short loc_1404058E5
 * 00000001404058E0: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404058E5: lfence
 * 00000001404058E8: mov     byte ptr gs:856h, 0
 * 00000001404058F1: test    byte ptr [r10+3], 3
 * 00000001404058F6: mov     [rbp+0E8h+var_68], 0
 * 00000001404058FF: jz      short loc_140405906
 * 0000000140405901: call    KiSaveDebugRegisterState
 * 0000000140405906: cld
 * 0000000140405907: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040590B: ldmxcsr dword ptr gs:180h
 * 0000000140405914: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140405918: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040591C: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140405920: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140405924: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140405928: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040592C: xor     esi, esi
 * 000000014040592E: inc     dword ptr gs:8000h
 * 0000000140405936: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040593D: jz      short loc_140405942
 * 000000014040593F: clac
 * 0000000140405942: mov     ecx, 2
 * 0000000140405947: cmp     cs:KiIrqlFlags, 0
 * 000000014040594E: jz      short loc_140405957
 * 0000000140405950: call    KzSetIrqlUnsafe
 * 0000000140405955: jmp     short loc_14040595F
 * 0000000140405957: mov     rax, cr8
 * 000000014040595B: mov     cr8, rcx
 * 000000014040595F: mov     [rbp+0E8h+var_13F], al
 * 0000000140405962: mov     rcx, rsi
 * 0000000140405965: call    HalPerformEndOfInterrupt
 * 000000014040596A: sti
 * 000000014040596B: cmp     byte ptr gs:187h, 0
 * 0000000140405974: jnz     short loc_14040598D
 * 0000000140405976: mov     al, [rbp+0E8h+var_13F]
 * 0000000140405979: mov     rcx, gs:188h
 * 0000000140405982: mov     [rcx+186h], al
 * 0000000140405988: call    KiDispatchInterrupt
 * 000000014040598D: cli
 * 000000014040598E: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140405992: cmp     cs:KiIrqlFlags, 0
 * 0000000140405999: jz      short loc_1404059A2
 * 000000014040599B: call    KzSetIrqlUnsafe
 * 00000001404059A0: jmp     short loc_1404059A6
 * 00000001404059A2: mov     cr8, rcx
 * 00000001404059A6: mov     rsi, [rbp+0E8h+var_18]
 * 00000001404059AD: cli
 * 00000001404059AE: test    [rbp+0E8h+arg_0], 1
 * 00000001404059B5: jz      loc_140405C57
 * 00000001404059BB: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404059C2: jz      short loc_1404059C7
 * 00000001404059C4: stac
 * 00000001404059C7: mov     rcx, gs:188h
 * 00000001404059D0: test    byte ptr [rcx+0C2h], 3
 * 00000001404059D7: jz      short loc_1404059F4
 * 00000001404059D9: mov     ecx, 1
 * 00000001404059DE: mov     cr8, rcx
 * 00000001404059E2: sti
 * 00000001404059E3: call    KiInitiateUserApc
 * 00000001404059E8: cli
 * 00000001404059E9: mov     ecx, 0
 * 00000001404059EE: mov     cr8, rcx
 * 00000001404059F2: jmp     short loc_1404059C7
 * 00000001404059F4: test    byte ptr gs:86Ch, 2
 * 00000001404059FD: jz      short loc_140405A06
 * 00000001404059FF: xor     ecx, ecx
 * 0000000140405A01: call    KiUpdateStibpPairing
 * 0000000140405A06: mov     rcx, gs:188h
 * 0000000140405A0F: test    dword ptr [rcx], 8000000h
 * 0000000140405A15: jz      short loc_140405A1C
 * 0000000140405A17: call    KiRestoreSetContextState
 * 0000000140405A1C: mov     rcx, gs:188h
 * 0000000140405A25: test    dword ptr [rcx], 40010000h
 * 0000000140405A2B: jz      short loc_140405A41
 * 0000000140405A2D: test    byte ptr [rcx+2], 1
 * 0000000140405A31: jz      short loc_140405A41
 * 0000000140405A33: call    KiCopyCounters
 * 0000000140405A38: mov     rcx, gs:188h
 * 0000000140405A41: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140405A45: cmp     [rbp+0E8h+var_68], 0
 * 0000000140405A4D: jz      short loc_140405A54
 * 0000000140405A4F: call    KiRestoreDebugRegisterState
 * 0000000140405A54: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140405A58: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140405A5C: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140405A60: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140405A64: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140405A68: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140405A6C: mov     r11, [rbp+0E8h+var_108]
 * 0000000140405A70: mov     r10, [rbp+0E8h+var_110]
 * 0000000140405A74: mov     r9, [rbp+0E8h+var_118]
 * 0000000140405A78: mov     r8, [rbp+0E8h+var_120]
 * 0000000140405A7C: mov     byte ptr gs:856h, 0
 * 0000000140405A85: movzx   eax, word ptr gs:86Ah
 * 0000000140405A8E: cmp     gs:864h, ax
 * 0000000140405A97: jz      short loc_140405AAB
 * 0000000140405A99: mov     gs:864h, ax
 * 0000000140405AA2: mov     ecx, 48h ; 'H'
 * 0000000140405AA7: xor     edx, edx
 * 0000000140405AA9: wrmsr
 * 0000000140405AAB: btr     word ptr gs:860h, 2
 * 0000000140405AB6: jnb     short loc_140405AC6
 * 0000000140405AB8: mov     eax, 1
 * 0000000140405ABD: xor     edx, edx
 * 0000000140405ABF: mov     ecx, 49h ; 'I'
 * 0000000140405AC4: wrmsr
 * 0000000140405AC6: btr     word ptr gs:860h, 5
 * 0000000140405AD1: jnb     loc_140405BFC
 * 0000000140405AD7: call    loc_140405BEA
 * 0000000140405ADC: add     rsp, 8
 * 0000000140405AE0: call    loc_140405BF3
 * 0000000140405AE5: add     rsp, 8
 * 0000000140405AE9: call    loc_140405ADC
 * 0000000140405AEE: add     rsp, 8
 * 0000000140405AF2: call    loc_140405AE5
 * 0000000140405AF7: add     rsp, 8
 * 0000000140405AFB: call    loc_140405AEE
 * 0000000140405B00: add     rsp, 8
 * 0000000140405B04: call    loc_140405AF7
 * 0000000140405B09: add     rsp, 8
 * 0000000140405B0D: call    loc_140405B00
 * 0000000140405B12: add     rsp, 8
 * 0000000140405B16: call    loc_140405B09
 * 0000000140405B1B: add     rsp, 8
 * 0000000140405B1F: call    loc_140405B12
 * 0000000140405B24: add     rsp, 8
 * 0000000140405B28: call    loc_140405B1B
 * 0000000140405B2D: add     rsp, 8
 * 0000000140405B31: call    loc_140405B24
 * 0000000140405B36: add     rsp, 8
 * 0000000140405B3A: call    loc_140405B2D
 * 0000000140405B3F: add     rsp, 8
 * 0000000140405B43: call    loc_140405B36
 * 0000000140405B48: add     rsp, 8
 * 0000000140405B4C: call    loc_140405B3F
 * 0000000140405B51: add     rsp, 8
 * 0000000140405B55: call    loc_140405B48
 * 0000000140405B5A: add     rsp, 8
 * 0000000140405B5E: call    loc_140405B51
 * 0000000140405B63: add     rsp, 8
 * 0000000140405B67: call    loc_140405B5A
 * 0000000140405B6C: add     rsp, 8
 * 0000000140405B70: call    loc_140405B63
 * 0000000140405B75: add     rsp, 8
 * 0000000140405B79: call    loc_140405B6C
 * 0000000140405B7E: add     rsp, 8
 * 0000000140405B82: call    loc_140405B75
 * 0000000140405B87: add     rsp, 8
 * 0000000140405B8B: call    loc_140405B7E
 * 0000000140405B90: add     rsp, 8
 * 0000000140405B94: call    loc_140405B87
 * 0000000140405B99: add     rsp, 8
 * 0000000140405B9D: call    loc_140405B90
 * 0000000140405BA2: add     rsp, 8
 * 0000000140405BA6: call    loc_140405B99
 * 0000000140405BAB: add     rsp, 8
 * 0000000140405BAF: call    loc_140405BA2
 * 0000000140405BB4: add     rsp, 8
 * 0000000140405BB8: call    loc_140405BAB
 * 0000000140405BBD: add     rsp, 8
 * 0000000140405BC1: call    loc_140405BB4
 * 0000000140405BC6: add     rsp, 8
 * 0000000140405BCA: call    loc_140405BBD
 * 0000000140405BCF: add     rsp, 8
 * 0000000140405BD3: call    loc_140405BC6
 * 0000000140405BD8: add     rsp, 8
 * 0000000140405BDC: call    loc_140405BCF
 * 0000000140405BE1: add     rsp, 8
 * 0000000140405BE5: call    loc_140405BD8
 * 0000000140405BEA: add     rsp, 8
 * 0000000140405BEE: call    loc_140405BE1
 * 0000000140405BF3: add     rsp, 8
 * 0000000140405BF7: mov     eax, 0DADAh
 * 0000000140405BFC: test    word ptr gs:860h, 80h
 * 0000000140405C07: jz      short loc_140405C15
 * 0000000140405C09: xor     eax, eax
 * 0000000140405C0B: xor     edx, edx
 * 0000000140405C0D: mov     ecx, 1
 * 0000000140405C12: div     rcx
 * 0000000140405C15: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140405C19: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140405C1D: mov     rax, [rbp+0E8h+var_138]
 * 0000000140405C21: mov     rsp, rbp
 * 0000000140405C24: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140405C2B: add     rsp, 0E8h
 * 0000000140405C32: test    cs:KiKvaShadow, 1
 * 0000000140405C39: jz      short loc_140405C40
 * 0000000140405C3B: jmp     KiKernelExit
 * 0000000140405C40: test    word ptr gs:860h, 100h
 * 0000000140405C4B: jz      short loc_140405C52
 * 0000000140405C4D: verw    [rsp+arg_18]
 * 0000000140405C52: swapgs
 * 0000000140405C55: iretq
 * 0000000140405C57: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140405C5B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140405C5F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140405C63: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140405C67: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140405C6B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140405C6F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140405C73: mov     r11, [rbp+0E8h+var_108]
 * 0000000140405C77: mov     r10, [rbp+0E8h+var_110]
 * 0000000140405C7B: mov     r9, [rbp+0E8h+var_118]
 * 0000000140405C7F: mov     r8, [rbp+0E8h+var_120]
 * 0000000140405C83: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140405C87: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140405C8B: mov     rax, [rbp+0E8h+var_138]
 * 0000000140405C8F: mov     rsp, rbp
 * 0000000140405C92: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140405C99: add     rsp, 0E8h
 * 0000000140405CA0: iretq
 */
