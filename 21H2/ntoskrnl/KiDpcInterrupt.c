/*
 * XREFs of KiDpcInterrupt @ 0x140405870
 * Callers:
 *     KiDpcInterruptShadow @ 0x140A15F40 (KiDpcInterruptShadow.c)
 * Callees:
 *     HalPerformEndOfInterrupt @ 0x14020F440 (HalPerformEndOfInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x140405870 (KiDpcInterrupt.c)
 *     KiDispatchInterrupt @ 0x140406730 (KiDispatchInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x140512E80 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x140405870
 * Reason: Hex-Rays returned no pseudocode for 0x140405870
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140405870: sub     rsp, 8
 * 0000000140405874: push    rbp
 * 0000000140405875: push    rsi
 * 0000000140405876: sub     rsp, 150h
 * 000000014040587D: lea     rbp, [rsp+80h]
 * 0000000140405885: mov     [rbp+0E8h+var_13D], 0
 * 0000000140405889: mov     [rbp+0E8h+var_138], rax
 * 000000014040588D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140405891: mov     [rbp+0E8h+var_128], rdx
 * 0000000140405895: mov     [rbp+0E8h+var_120], r8
 * 0000000140405899: mov     [rbp+0E8h+var_118], r9
 * 000000014040589D: mov     [rbp+0E8h+var_110], r10
 * 00000001404058A1: mov     [rbp+0E8h+var_108], r11
 * 00000001404058A5: test    [rbp+0E8h+arg_0], 1
 * 00000001404058AC: jnz     short loc_1404058DD
 * 00000001404058AE: lfence
 * 00000001404058B1: test    word ptr gs:860h, 1
 * 00000001404058BC: jnz     short loc_1404058C6
 * 00000001404058BE: lfence
 * 00000001404058C1: jmp     loc_140405AE6
 * 00000001404058C6: movzx   eax, word ptr gs:864h
 * 00000001404058CF: mov     ecx, 48h ; 'H'
 * 00000001404058D4: xor     edx, edx
 * 00000001404058D6: wrmsr
 * 00000001404058D8: jmp     loc_140405AE6
 * 00000001404058DD: test    cs:KiKvaShadow, 1
 * 00000001404058E4: jnz     short loc_1404058E9
 * 00000001404058E6: swapgs
 * 00000001404058E9: lfence
 * 00000001404058EC: mov     r10, gs:188h
 * 00000001404058F5: mov     rcx, gs:188h
 * 00000001404058FE: mov     rcx, [rcx+220h]
 * 0000000140405905: mov     rcx, [rcx+9E0h]
 * 000000014040590C: mov     gs:858h, rcx
 * 0000000140405915: mov     cx, gs:850h
 * 000000014040591E: mov     gs:852h, cx
 * 0000000140405927: mov     cx, gs:860h
 * 0000000140405930: mov     gs:854h, cx
 * 0000000140405939: movzx   eax, word ptr gs:866h
 * 0000000140405942: cmp     gs:864h, ax
 * 000000014040594B: jz      short loc_14040595F
 * 000000014040594D: mov     gs:864h, ax
 * 0000000140405956: mov     ecx, 48h ; 'H'
 * 000000014040595B: xor     edx, edx
 * 000000014040595D: wrmsr
 * 000000014040595F: movzx   edx, word ptr gs:860h
 * 0000000140405968: test    edx, 8
 * 000000014040596E: jz      short loc_140405987
 * 0000000140405970: mov     eax, 1
 * 0000000140405975: xor     edx, edx
 * 0000000140405977: mov     ecx, 49h ; 'I'
 * 000000014040597C: wrmsr
 * 000000014040597E: movzx   edx, word ptr gs:860h
 * 0000000140405987: test    edx, 2
 * 000000014040598D: jz      loc_140405AB8
 * 0000000140405993: call    loc_140405AA6
 * 0000000140405998: add     rsp, 8
 * 000000014040599C: call    loc_140405AAF
 * 00000001404059A1: add     rsp, 8
 * 00000001404059A5: call    loc_140405998
 * 00000001404059AA: add     rsp, 8
 * 00000001404059AE: call    loc_1404059A1
 * 00000001404059B3: add     rsp, 8
 * 00000001404059B7: call    loc_1404059AA
 * 00000001404059BC: add     rsp, 8
 * 00000001404059C0: call    loc_1404059B3
 * 00000001404059C5: add     rsp, 8
 * 00000001404059C9: call    loc_1404059BC
 * 00000001404059CE: add     rsp, 8
 * 00000001404059D2: call    loc_1404059C5
 * 00000001404059D7: add     rsp, 8
 * 00000001404059DB: call    loc_1404059CE
 * 00000001404059E0: add     rsp, 8
 * 00000001404059E4: call    loc_1404059D7
 * 00000001404059E9: add     rsp, 8
 * 00000001404059ED: call    loc_1404059E0
 * 00000001404059F2: add     rsp, 8
 * 00000001404059F6: call    loc_1404059E9
 * 00000001404059FB: add     rsp, 8
 * 00000001404059FF: call    loc_1404059F2
 * 0000000140405A04: add     rsp, 8
 * 0000000140405A08: call    loc_1404059FB
 * 0000000140405A0D: add     rsp, 8
 * 0000000140405A11: call    loc_140405A04
 * 0000000140405A16: add     rsp, 8
 * 0000000140405A1A: call    loc_140405A0D
 * 0000000140405A1F: add     rsp, 8
 * 0000000140405A23: call    loc_140405A16
 * 0000000140405A28: add     rsp, 8
 * 0000000140405A2C: call    loc_140405A1F
 * 0000000140405A31: add     rsp, 8
 * 0000000140405A35: call    loc_140405A28
 * 0000000140405A3A: add     rsp, 8
 * 0000000140405A3E: call    loc_140405A31
 * 0000000140405A43: add     rsp, 8
 * 0000000140405A47: call    loc_140405A3A
 * 0000000140405A4C: add     rsp, 8
 * 0000000140405A50: call    loc_140405A43
 * 0000000140405A55: add     rsp, 8
 * 0000000140405A59: call    loc_140405A4C
 * 0000000140405A5E: add     rsp, 8
 * 0000000140405A62: call    loc_140405A55
 * 0000000140405A67: add     rsp, 8
 * 0000000140405A6B: call    loc_140405A5E
 * 0000000140405A70: add     rsp, 8
 * 0000000140405A74: call    loc_140405A67
 * 0000000140405A79: add     rsp, 8
 * 0000000140405A7D: call    loc_140405A70
 * 0000000140405A82: add     rsp, 8
 * 0000000140405A86: call    loc_140405A79
 * 0000000140405A8B: add     rsp, 8
 * 0000000140405A8F: call    loc_140405A82
 * 0000000140405A94: add     rsp, 8
 * 0000000140405A98: call    loc_140405A8B
 * 0000000140405A9D: add     rsp, 8
 * 0000000140405AA1: call    loc_140405A94
 * 0000000140405AA6: add     rsp, 8
 * 0000000140405AAA: call    loc_140405A9D
 * 0000000140405AAF: add     rsp, 8
 * 0000000140405AB3: mov     eax, 0DADAh
 * 0000000140405AB8: test    edx, 200h
 * 0000000140405ABE: jz      short loc_140405AC5
 * 0000000140405AC0: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140405AC5: lfence
 * 0000000140405AC8: mov     byte ptr gs:856h, 0
 * 0000000140405AD1: test    byte ptr [r10+3], 3
 * 0000000140405AD6: mov     [rbp+0E8h+var_68], 0
 * 0000000140405ADF: jz      short loc_140405AE6
 * 0000000140405AE1: call    KiSaveDebugRegisterState
 * 0000000140405AE6: cld
 * 0000000140405AE7: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140405AEB: ldmxcsr dword ptr gs:180h
 * 0000000140405AF4: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140405AF8: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140405AFC: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140405B00: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140405B04: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140405B08: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140405B0C: xor     esi, esi
 * 0000000140405B0E: inc     dword ptr gs:8000h
 * 0000000140405B16: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140405B1D: jz      short loc_140405B22
 * 0000000140405B1F: clac
 * 0000000140405B22: mov     ecx, 2
 * 0000000140405B27: cmp     cs:KiIrqlFlags, 0
 * 0000000140405B2E: jz      short loc_140405B37
 * 0000000140405B30: call    KzSetIrqlUnsafe
 * 0000000140405B35: jmp     short loc_140405B3F
 * 0000000140405B37: mov     rax, cr8
 * 0000000140405B3B: mov     cr8, rcx
 * 0000000140405B3F: mov     [rbp+0E8h+var_13F], al
 * 0000000140405B42: mov     rcx, rsi
 * 0000000140405B45: call    HalPerformEndOfInterrupt
 * 0000000140405B4A: sti
 * 0000000140405B4B: cmp     byte ptr gs:187h, 0
 * 0000000140405B54: jnz     short loc_140405B6D
 * 0000000140405B56: mov     al, [rbp+0E8h+var_13F]
 * 0000000140405B59: mov     rcx, gs:188h
 * 0000000140405B62: mov     [rcx+186h], al
 * 0000000140405B68: call    KiDispatchInterrupt
 * 0000000140405B6D: cli
 * 0000000140405B6E: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140405B72: cmp     cs:KiIrqlFlags, 0
 * 0000000140405B79: jz      short loc_140405B82
 * 0000000140405B7B: call    KzSetIrqlUnsafe
 * 0000000140405B80: jmp     short loc_140405B86
 * 0000000140405B82: mov     cr8, rcx
 * 0000000140405B86: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140405B8D: cli
 * 0000000140405B8E: test    [rbp+0E8h+arg_0], 1
 * 0000000140405B95: jz      loc_140405E37
 * 0000000140405B9B: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140405BA2: jz      short loc_140405BA7
 * 0000000140405BA4: stac
 * 0000000140405BA7: mov     rcx, gs:188h
 * 0000000140405BB0: test    byte ptr [rcx+0C2h], 3
 * 0000000140405BB7: jz      short loc_140405BD4
 * 0000000140405BB9: mov     ecx, 1
 * 0000000140405BBE: mov     cr8, rcx
 * 0000000140405BC2: sti
 * 0000000140405BC3: call    KiInitiateUserApc
 * 0000000140405BC8: cli
 * 0000000140405BC9: mov     ecx, 0
 * 0000000140405BCE: mov     cr8, rcx
 * 0000000140405BD2: jmp     short loc_140405BA7
 * 0000000140405BD4: test    byte ptr gs:86Ch, 2
 * 0000000140405BDD: jz      short loc_140405BE6
 * 0000000140405BDF: xor     ecx, ecx
 * 0000000140405BE1: call    KiUpdateStibpPairing
 * 0000000140405BE6: mov     rcx, gs:188h
 * 0000000140405BEF: test    dword ptr [rcx], 8000000h
 * 0000000140405BF5: jz      short loc_140405BFC
 * 0000000140405BF7: call    KiRestoreSetContextState
 * 0000000140405BFC: mov     rcx, gs:188h
 * 0000000140405C05: test    dword ptr [rcx], 40010000h
 * 0000000140405C0B: jz      short loc_140405C21
 * 0000000140405C0D: test    byte ptr [rcx+2], 1
 * 0000000140405C11: jz      short loc_140405C21
 * 0000000140405C13: call    KiCopyCounters
 * 0000000140405C18: mov     rcx, gs:188h
 * 0000000140405C21: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140405C25: cmp     [rbp+0E8h+var_68], 0
 * 0000000140405C2D: jz      short loc_140405C34
 * 0000000140405C2F: call    KiRestoreDebugRegisterState
 * 0000000140405C34: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140405C38: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140405C3C: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140405C40: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140405C44: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140405C48: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140405C4C: mov     r11, [rbp+0E8h+var_108]
 * 0000000140405C50: mov     r10, [rbp+0E8h+var_110]
 * 0000000140405C54: mov     r9, [rbp+0E8h+var_118]
 * 0000000140405C58: mov     r8, [rbp+0E8h+var_120]
 * 0000000140405C5C: mov     byte ptr gs:856h, 0
 * 0000000140405C65: movzx   eax, word ptr gs:86Ah
 * 0000000140405C6E: cmp     gs:864h, ax
 * 0000000140405C77: jz      short loc_140405C8B
 * 0000000140405C79: mov     gs:864h, ax
 * 0000000140405C82: mov     ecx, 48h ; 'H'
 * 0000000140405C87: xor     edx, edx
 * 0000000140405C89: wrmsr
 * 0000000140405C8B: btr     word ptr gs:860h, 2
 * 0000000140405C96: jnb     short loc_140405CA6
 * 0000000140405C98: mov     eax, 1
 * 0000000140405C9D: xor     edx, edx
 * 0000000140405C9F: mov     ecx, 49h ; 'I'
 * 0000000140405CA4: wrmsr
 * 0000000140405CA6: btr     word ptr gs:860h, 5
 * 0000000140405CB1: jnb     loc_140405DDC
 * 0000000140405CB7: call    loc_140405DCA
 * 0000000140405CBC: add     rsp, 8
 * 0000000140405CC0: call    loc_140405DD3
 * 0000000140405CC5: add     rsp, 8
 * 0000000140405CC9: call    loc_140405CBC
 * 0000000140405CCE: add     rsp, 8
 * 0000000140405CD2: call    loc_140405CC5
 * 0000000140405CD7: add     rsp, 8
 * 0000000140405CDB: call    loc_140405CCE
 * 0000000140405CE0: add     rsp, 8
 * 0000000140405CE4: call    loc_140405CD7
 * 0000000140405CE9: add     rsp, 8
 * 0000000140405CED: call    loc_140405CE0
 * 0000000140405CF2: add     rsp, 8
 * 0000000140405CF6: call    loc_140405CE9
 * 0000000140405CFB: add     rsp, 8
 * 0000000140405CFF: call    loc_140405CF2
 * 0000000140405D04: add     rsp, 8
 * 0000000140405D08: call    loc_140405CFB
 * 0000000140405D0D: add     rsp, 8
 * 0000000140405D11: call    loc_140405D04
 * 0000000140405D16: add     rsp, 8
 * 0000000140405D1A: call    loc_140405D0D
 * 0000000140405D1F: add     rsp, 8
 * 0000000140405D23: call    loc_140405D16
 * 0000000140405D28: add     rsp, 8
 * 0000000140405D2C: call    loc_140405D1F
 * 0000000140405D31: add     rsp, 8
 * 0000000140405D35: call    loc_140405D28
 * 0000000140405D3A: add     rsp, 8
 * 0000000140405D3E: call    loc_140405D31
 * 0000000140405D43: add     rsp, 8
 * 0000000140405D47: call    loc_140405D3A
 * 0000000140405D4C: add     rsp, 8
 * 0000000140405D50: call    loc_140405D43
 * 0000000140405D55: add     rsp, 8
 * 0000000140405D59: call    loc_140405D4C
 * 0000000140405D5E: add     rsp, 8
 * 0000000140405D62: call    loc_140405D55
 * 0000000140405D67: add     rsp, 8
 * 0000000140405D6B: call    loc_140405D5E
 * 0000000140405D70: add     rsp, 8
 * 0000000140405D74: call    loc_140405D67
 * 0000000140405D79: add     rsp, 8
 * 0000000140405D7D: call    loc_140405D70
 * 0000000140405D82: add     rsp, 8
 * 0000000140405D86: call    loc_140405D79
 * 0000000140405D8B: add     rsp, 8
 * 0000000140405D8F: call    loc_140405D82
 * 0000000140405D94: add     rsp, 8
 * 0000000140405D98: call    loc_140405D8B
 * 0000000140405D9D: add     rsp, 8
 * 0000000140405DA1: call    loc_140405D94
 * 0000000140405DA6: add     rsp, 8
 * 0000000140405DAA: call    loc_140405D9D
 * 0000000140405DAF: add     rsp, 8
 * 0000000140405DB3: call    loc_140405DA6
 * 0000000140405DB8: add     rsp, 8
 * 0000000140405DBC: call    loc_140405DAF
 * 0000000140405DC1: add     rsp, 8
 * 0000000140405DC5: call    loc_140405DB8
 * 0000000140405DCA: add     rsp, 8
 * 0000000140405DCE: call    loc_140405DC1
 * 0000000140405DD3: add     rsp, 8
 * 0000000140405DD7: mov     eax, 0DADAh
 * 0000000140405DDC: test    word ptr gs:860h, 80h
 * 0000000140405DE7: jz      short loc_140405DF5
 * 0000000140405DE9: xor     eax, eax
 * 0000000140405DEB: xor     edx, edx
 * 0000000140405DED: mov     ecx, 1
 * 0000000140405DF2: div     rcx
 * 0000000140405DF5: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140405DF9: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140405DFD: mov     rax, [rbp+0E8h+var_138]
 * 0000000140405E01: mov     rsp, rbp
 * 0000000140405E04: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140405E0B: add     rsp, 0E8h
 * 0000000140405E12: test    cs:KiKvaShadow, 1
 * 0000000140405E19: jz      short loc_140405E20
 * 0000000140405E1B: jmp     KiKernelExit
 * 0000000140405E20: test    word ptr gs:860h, 100h
 * 0000000140405E2B: jz      short loc_140405E32
 * 0000000140405E2D: verw    [rsp+arg_18]
 * 0000000140405E32: swapgs
 * 0000000140405E35: iretq
 * 0000000140405E37: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140405E3B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140405E3F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140405E43: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140405E47: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140405E4B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140405E4F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140405E53: mov     r11, [rbp+0E8h+var_108]
 * 0000000140405E57: mov     r10, [rbp+0E8h+var_110]
 * 0000000140405E5B: mov     r9, [rbp+0E8h+var_118]
 * 0000000140405E5F: mov     r8, [rbp+0E8h+var_120]
 * 0000000140405E63: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140405E67: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140405E6B: mov     rax, [rbp+0E8h+var_138]
 * 0000000140405E6F: mov     rsp, rbp
 * 0000000140405E72: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140405E79: add     rsp, 0E8h
 * 0000000140405E80: iretq
 */
