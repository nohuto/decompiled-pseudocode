/*
 * XREFs of KiSwInterrupt @ 0x140402A10
 * Callers:
 *     KiSwInterruptShadow @ 0x140A17CC0 (KiSwInterruptShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x1402BEDE0 (KiEndThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1402DF2E0 (KiCheckForSListAddress.c)
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402EBA40 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402F5F40 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 *     KiSwInterruptDispatch @ 0x1403DC2B0 (KiSwInterruptDispatch.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x140402A10 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x1404036E0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140511100 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140517EE0 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x140402A10
 * Reason: Hex-Rays returned no pseudocode for 0x140402A10
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140402A10: sub     rsp, 8
 * 0000000140402A14: push    rbp
 * 0000000140402A15: push    rsi
 * 0000000140402A16: sub     rsp, 150h
 * 0000000140402A1D: lea     rbp, [rsp+80h]
 * 0000000140402A25: mov     [rbp+0E8h+var_13D], 0
 * 0000000140402A29: mov     [rbp+0E8h+var_138], rax
 * 0000000140402A2D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140402A31: mov     [rbp+0E8h+var_128], rdx
 * 0000000140402A35: mov     [rbp+0E8h+var_120], r8
 * 0000000140402A39: mov     [rbp+0E8h+var_118], r9
 * 0000000140402A3D: mov     [rbp+0E8h+var_110], r10
 * 0000000140402A41: mov     [rbp+0E8h+var_108], r11
 * 0000000140402A45: test    [rbp+0E8h+arg_0], 1
 * 0000000140402A4C: jnz     short loc_140402A7B
 * 0000000140402A4E: lfence
 * 0000000140402A51: test    byte ptr gs:278h, 1
 * 0000000140402A5A: jnz     short loc_140402A64
 * 0000000140402A5C: lfence
 * 0000000140402A5F: jmp     loc_140402C71
 * 0000000140402A64: movzx   eax, byte ptr gs:27Ah
 * 0000000140402A6D: mov     ecx, 48h ; 'H'
 * 0000000140402A72: xor     edx, edx
 * 0000000140402A74: wrmsr
 * 0000000140402A76: jmp     loc_140402C71
 * 0000000140402A7B: test    cs:KiKvaShadow, 1
 * 0000000140402A82: jnz     short loc_140402A87
 * 0000000140402A84: swapgs
 * 0000000140402A87: lfence
 * 0000000140402A8A: mov     r10, gs:188h
 * 0000000140402A93: mov     rcx, gs:188h
 * 0000000140402A9C: mov     rcx, [rcx+220h]
 * 0000000140402AA3: mov     rcx, [rcx+9E0h]
 * 0000000140402AAA: mov     gs:270h, rcx
 * 0000000140402AB3: mov     cl, gs:850h
 * 0000000140402ABB: mov     gs:851h, cl
 * 0000000140402AC3: mov     cl, gs:278h
 * 0000000140402ACB: mov     gs:852h, cl
 * 0000000140402AD3: movzx   eax, byte ptr gs:27Bh
 * 0000000140402ADC: cmp     gs:27Ah, al
 * 0000000140402AE4: jz      short loc_140402AF7
 * 0000000140402AE6: mov     gs:27Ah, al
 * 0000000140402AEE: mov     ecx, 48h ; 'H'
 * 0000000140402AF3: xor     edx, edx
 * 0000000140402AF5: wrmsr
 * 0000000140402AF7: movzx   edx, byte ptr gs:278h
 * 0000000140402B00: test    edx, 8
 * 0000000140402B06: jz      short loc_140402B1F
 * 0000000140402B08: mov     eax, 1
 * 0000000140402B0D: xor     edx, edx
 * 0000000140402B0F: mov     ecx, 49h ; 'I'
 * 0000000140402B14: wrmsr
 * 0000000140402B16: movzx   edx, byte ptr gs:278h
 * 0000000140402B1F: test    edx, 2
 * 0000000140402B25: jz      loc_140402C50
 * 0000000140402B2B: call    loc_140402C3E
 * 0000000140402B30: add     rsp, 8
 * 0000000140402B34: call    loc_140402C47
 * 0000000140402B39: add     rsp, 8
 * 0000000140402B3D: call    loc_140402B30
 * 0000000140402B42: add     rsp, 8
 * 0000000140402B46: call    loc_140402B39
 * 0000000140402B4B: add     rsp, 8
 * 0000000140402B4F: call    loc_140402B42
 * 0000000140402B54: add     rsp, 8
 * 0000000140402B58: call    loc_140402B4B
 * 0000000140402B5D: add     rsp, 8
 * 0000000140402B61: call    loc_140402B54
 * 0000000140402B66: add     rsp, 8
 * 0000000140402B6A: call    loc_140402B5D
 * 0000000140402B6F: add     rsp, 8
 * 0000000140402B73: call    loc_140402B66
 * 0000000140402B78: add     rsp, 8
 * 0000000140402B7C: call    loc_140402B6F
 * 0000000140402B81: add     rsp, 8
 * 0000000140402B85: call    loc_140402B78
 * 0000000140402B8A: add     rsp, 8
 * 0000000140402B8E: call    loc_140402B81
 * 0000000140402B93: add     rsp, 8
 * 0000000140402B97: call    loc_140402B8A
 * 0000000140402B9C: add     rsp, 8
 * 0000000140402BA0: call    loc_140402B93
 * 0000000140402BA5: add     rsp, 8
 * 0000000140402BA9: call    loc_140402B9C
 * 0000000140402BAE: add     rsp, 8
 * 0000000140402BB2: call    loc_140402BA5
 * 0000000140402BB7: add     rsp, 8
 * 0000000140402BBB: call    loc_140402BAE
 * 0000000140402BC0: add     rsp, 8
 * 0000000140402BC4: call    loc_140402BB7
 * 0000000140402BC9: add     rsp, 8
 * 0000000140402BCD: call    loc_140402BC0
 * 0000000140402BD2: add     rsp, 8
 * 0000000140402BD6: call    loc_140402BC9
 * 0000000140402BDB: add     rsp, 8
 * 0000000140402BDF: call    loc_140402BD2
 * 0000000140402BE4: add     rsp, 8
 * 0000000140402BE8: call    loc_140402BDB
 * 0000000140402BED: add     rsp, 8
 * 0000000140402BF1: call    loc_140402BE4
 * 0000000140402BF6: add     rsp, 8
 * 0000000140402BFA: call    loc_140402BED
 * 0000000140402BFF: add     rsp, 8
 * 0000000140402C03: call    loc_140402BF6
 * 0000000140402C08: add     rsp, 8
 * 0000000140402C0C: call    loc_140402BFF
 * 0000000140402C11: add     rsp, 8
 * 0000000140402C15: call    loc_140402C08
 * 0000000140402C1A: add     rsp, 8
 * 0000000140402C1E: call    loc_140402C11
 * 0000000140402C23: add     rsp, 8
 * 0000000140402C27: call    loc_140402C1A
 * 0000000140402C2C: add     rsp, 8
 * 0000000140402C30: call    loc_140402C23
 * 0000000140402C35: add     rsp, 8
 * 0000000140402C39: call    loc_140402C2C
 * 0000000140402C3E: add     rsp, 8
 * 0000000140402C42: call    loc_140402C35
 * 0000000140402C47: add     rsp, 8
 * 0000000140402C4B: mov     eax, 0DADAh
 * 0000000140402C50: lfence
 * 0000000140402C53: mov     byte ptr gs:853h, 0
 * 0000000140402C5C: test    byte ptr [r10+3], 3
 * 0000000140402C61: mov     [rbp+0E8h+var_68], 0
 * 0000000140402C6A: jz      short loc_140402C71
 * 0000000140402C6C: call    KiSaveDebugRegisterState
 * 0000000140402C71: cld
 * 0000000140402C72: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140402C76: ldmxcsr dword ptr gs:180h
 * 0000000140402C7F: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140402C83: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140402C87: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140402C8B: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140402C8F: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140402C93: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140402C97: cmp     byte ptr gs:801Ah, 0
 * 0000000140402CA0: jz      short loc_140402CA7
 * 0000000140402CA2: call    KeWakeProcessor
 * 0000000140402CA7: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140402CAE: cmp     rax, [rbp+0E8h]
 * 0000000140402CB5: jnb     short loc_140402CD0
 * 0000000140402CB7: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140402CBE: cmp     rax, [rbp+0E8h]
 * 0000000140402CC5: jb      short loc_140402CD0
 * 0000000140402CC7: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140402CCB: call    KiCheckForSListAddress
 * 0000000140402CD0: xor     esi, esi
 * 0000000140402CD2: inc     dword ptr gs:8000h
 * 0000000140402CDA: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140402CE1: jz      short loc_140402CE6
 * 0000000140402CE3: clac
 * 0000000140402CE6: mov     ecx, 2
 * 0000000140402CEB: cmp     cs:KiIrqlFlags, 0
 * 0000000140402CF2: jz      short loc_140402CFB
 * 0000000140402CF4: call    KzSetIrqlUnsafe
 * 0000000140402CF9: jmp     short loc_140402D03
 * 0000000140402CFB: mov     rax, cr8
 * 0000000140402CFF: mov     cr8, rcx
 * 0000000140402D03: mov     [rbp+0E8h+var_13F], al
 * 0000000140402D06: mov     rcx, gs:20h
 * 0000000140402D0F: inc     byte ptr [rcx+20h]
 * 0000000140402D12: cmp     byte ptr [rcx+20h], 1
 * 0000000140402D16: jnz     short loc_140402D68
 * 0000000140402D18: rdtsc
 * 0000000140402D1A: shl     rdx, 20h
 * 0000000140402D1E: or      rax, rdx
 * 0000000140402D21: mov     r8, [rcx+8]
 * 0000000140402D25: sub     rax, [rcx+7EC0h]
 * 0000000140402D2C: add     [r8+48h], rax
 * 0000000140402D30: mov     edx, [r8+50h]
 * 0000000140402D34: add     [rcx+7EC0h], rax
 * 0000000140402D3B: add     rdx, rax
 * 0000000140402D3E: mov     ecx, edx
 * 0000000140402D40: shr     rdx, 20h
 * 0000000140402D44: jz      short loc_140402D49
 * 0000000140402D46: or      ecx, 0FFFFFFFFh
 * 0000000140402D49: mov     [r8+50h], ecx
 * 0000000140402D4D: test    byte ptr [r8+2], 3Eh
 * 0000000140402D52: jz      short loc_140402D68
 * 0000000140402D54: mov     rdx, r8
 * 0000000140402D57: mov     r8, rax
 * 0000000140402D5A: mov     rcx, gs:20h
 * 0000000140402D63: call    KiEndThreadAccountingPeriod
 * 0000000140402D68: sti
 * 0000000140402D69: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140402D6D: call    KiSwInterruptDispatch
 * 0000000140402D72: cli
 * 0000000140402D73: mov     rcx, rsi
 * 0000000140402D76: call    HalPerformEndOfInterrupt
 * 0000000140402D7B: mov     rcx, gs:20h
 * 0000000140402D84: cmp     byte ptr [rcx+20h], 1
 * 0000000140402D88: ja      short loc_140402E04
 * 0000000140402D8A: rdtsc
 * 0000000140402D8C: shl     rdx, 20h
 * 0000000140402D90: or      rax, rdx
 * 0000000140402D93: sub     rax, [rcx+7EC0h]
 * 0000000140402D9A: add     [rcx+7F38h], rax
 * 0000000140402DA1: add     [rcx+7EC0h], rax
 * 0000000140402DA8: mov     r8, rax
 * 0000000140402DAB: mov     rax, [rcx+8]
 * 0000000140402DAF: test    byte ptr [rax+2], 72h
 * 0000000140402DB3: jz      short loc_140402DC8
 * 0000000140402DB5: xor     edx, edx
 * 0000000140402DB7: call    KiBeginThreadAccountingPeriod
 * 0000000140402DBC: mov     rcx, gs:20h
 * 0000000140402DC5: inc     byte ptr [rcx+20h]
 * 0000000140402DC8: mov     dl, [rcx+6]
 * 0000000140402DCB: and     byte ptr [rcx+6], 0
 * 0000000140402DCF: cmp     byte ptr [rcx+7], 0
 * 0000000140402DD3: jnz     short loc_140402E04
 * 0000000140402DD5: test    dl, dl
 * 0000000140402DD7: jz      short loc_140402E04
 * 0000000140402DD9: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140402DDD: jnb     short loc_140402DEA
 * 0000000140402DDF: and     byte ptr [rcx+20h], 0
 * 0000000140402DE3: call    KiDpcInterruptBypass
 * 0000000140402DE8: jmp     short loc_140402E07
 * 0000000140402DEA: mov     ecx, 2
 * 0000000140402DEF: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140402DF6: nop     dword ptr [rax+rax+00h]
 * 0000000140402DFB: mov     rcx, gs:20h
 * 0000000140402E04: dec     byte ptr [rcx+20h]
 * 0000000140402E07: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140402E0B: cmp     cs:KiIrqlFlags, 0
 * 0000000140402E12: jz      short loc_140402E1B
 * 0000000140402E14: call    KzSetIrqlUnsafe
 * 0000000140402E19: jmp     short loc_140402E1F
 * 0000000140402E1B: mov     cr8, rcx
 * 0000000140402E1F: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140402E26: cli
 * 0000000140402E27: test    [rbp+0E8h+arg_0], 1
 * 0000000140402E2E: jz      loc_1404030A3
 * 0000000140402E34: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140402E3B: jz      short loc_140402E40
 * 0000000140402E3D: stac
 * 0000000140402E40: mov     rcx, gs:188h
 * 0000000140402E49: test    byte ptr [rcx+0C2h], 3
 * 0000000140402E50: jz      short loc_140402E6D
 * 0000000140402E52: mov     ecx, 1
 * 0000000140402E57: mov     cr8, rcx
 * 0000000140402E5B: sti
 * 0000000140402E5C: call    KiInitiateUserApc
 * 0000000140402E61: cli
 * 0000000140402E62: mov     ecx, 0
 * 0000000140402E67: mov     cr8, rcx
 * 0000000140402E6B: jmp     short loc_140402E40
 * 0000000140402E6D: test    byte ptr gs:27Eh, 2
 * 0000000140402E76: jz      short loc_140402E7F
 * 0000000140402E78: xor     ecx, ecx
 * 0000000140402E7A: call    KiUpdateStibpPairing
 * 0000000140402E7F: mov     rcx, gs:188h
 * 0000000140402E88: test    dword ptr [rcx], 8000000h
 * 0000000140402E8E: jz      short loc_140402E95
 * 0000000140402E90: call    KiRestoreSetContextState
 * 0000000140402E95: mov     rcx, gs:188h
 * 0000000140402E9E: test    dword ptr [rcx], 40010000h
 * 0000000140402EA4: jz      short loc_140402EBA
 * 0000000140402EA6: test    byte ptr [rcx+2], 1
 * 0000000140402EAA: jz      short loc_140402EBA
 * 0000000140402EAC: call    KiCopyCounters
 * 0000000140402EB1: mov     rcx, gs:188h
 * 0000000140402EBA: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140402EBE: cmp     [rbp+0E8h+var_68], 0
 * 0000000140402EC6: jz      short loc_140402ECD
 * 0000000140402EC8: call    KiRestoreDebugRegisterState
 * 0000000140402ECD: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140402ED1: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140402ED5: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140402ED9: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140402EDD: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140402EE1: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140402EE5: mov     r11, [rbp+0E8h+var_108]
 * 0000000140402EE9: mov     r10, [rbp+0E8h+var_110]
 * 0000000140402EED: mov     r9, [rbp+0E8h+var_118]
 * 0000000140402EF1: mov     r8, [rbp+0E8h+var_120]
 * 0000000140402EF5: mov     byte ptr gs:853h, 0
 * 0000000140402EFE: movzx   eax, byte ptr gs:27Dh
 * 0000000140402F07: cmp     gs:27Ah, al
 * 0000000140402F0F: jz      short loc_140402F22
 * 0000000140402F11: mov     gs:27Ah, al
 * 0000000140402F19: mov     ecx, 48h ; 'H'
 * 0000000140402F1E: xor     edx, edx
 * 0000000140402F20: wrmsr
 * 0000000140402F22: btr     word ptr gs:278h, 2
 * 0000000140402F2D: jnb     short loc_140402F3D
 * 0000000140402F2F: mov     eax, 1
 * 0000000140402F34: xor     edx, edx
 * 0000000140402F36: mov     ecx, 49h ; 'I'
 * 0000000140402F3B: wrmsr
 * 0000000140402F3D: btr     word ptr gs:278h, 5
 * 0000000140402F48: jnb     loc_140403073
 * 0000000140402F4E: call    loc_140403061
 * 0000000140402F53: add     rsp, 8
 * 0000000140402F57: call    loc_14040306A
 * 0000000140402F5C: add     rsp, 8
 * 0000000140402F60: call    loc_140402F53
 * 0000000140402F65: add     rsp, 8
 * 0000000140402F69: call    loc_140402F5C
 * 0000000140402F6E: add     rsp, 8
 * 0000000140402F72: call    loc_140402F65
 * 0000000140402F77: add     rsp, 8
 * 0000000140402F7B: call    loc_140402F6E
 * 0000000140402F80: add     rsp, 8
 * 0000000140402F84: call    loc_140402F77
 * 0000000140402F89: add     rsp, 8
 * 0000000140402F8D: call    loc_140402F80
 * 0000000140402F92: add     rsp, 8
 * 0000000140402F96: call    loc_140402F89
 * 0000000140402F9B: add     rsp, 8
 * 0000000140402F9F: call    loc_140402F92
 * 0000000140402FA4: add     rsp, 8
 * 0000000140402FA8: call    loc_140402F9B
 * 0000000140402FAD: add     rsp, 8
 * 0000000140402FB1: call    loc_140402FA4
 * 0000000140402FB6: add     rsp, 8
 * 0000000140402FBA: call    loc_140402FAD
 * 0000000140402FBF: add     rsp, 8
 * 0000000140402FC3: call    loc_140402FB6
 * 0000000140402FC8: add     rsp, 8
 * 0000000140402FCC: call    loc_140402FBF
 * 0000000140402FD1: add     rsp, 8
 * 0000000140402FD5: call    loc_140402FC8
 * 0000000140402FDA: add     rsp, 8
 * 0000000140402FDE: call    loc_140402FD1
 * 0000000140402FE3: add     rsp, 8
 * 0000000140402FE7: call    loc_140402FDA
 * 0000000140402FEC: add     rsp, 8
 * 0000000140402FF0: call    loc_140402FE3
 * 0000000140402FF5: add     rsp, 8
 * 0000000140402FF9: call    loc_140402FEC
 * 0000000140402FFE: add     rsp, 8
 * 0000000140403002: call    loc_140402FF5
 * 0000000140403007: add     rsp, 8
 * 000000014040300B: call    loc_140402FFE
 * 0000000140403010: add     rsp, 8
 * 0000000140403014: call    loc_140403007
 * 0000000140403019: add     rsp, 8
 * 000000014040301D: call    loc_140403010
 * 0000000140403022: add     rsp, 8
 * 0000000140403026: call    loc_140403019
 * 000000014040302B: add     rsp, 8
 * 000000014040302F: call    loc_140403022
 * 0000000140403034: add     rsp, 8
 * 0000000140403038: call    loc_14040302B
 * 000000014040303D: add     rsp, 8
 * 0000000140403041: call    loc_140403034
 * 0000000140403046: add     rsp, 8
 * 000000014040304A: call    loc_14040303D
 * 000000014040304F: add     rsp, 8
 * 0000000140403053: call    loc_140403046
 * 0000000140403058: add     rsp, 8
 * 000000014040305C: call    loc_14040304F
 * 0000000140403061: add     rsp, 8
 * 0000000140403065: call    loc_140403058
 * 000000014040306A: add     rsp, 8
 * 000000014040306E: mov     eax, 0DADAh
 * 0000000140403073: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140403077: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040307B: mov     rax, [rbp+0E8h+var_138]
 * 000000014040307F: mov     rsp, rbp
 * 0000000140403082: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140403089: add     rsp, 0E8h
 * 0000000140403090: test    cs:KiKvaShadow, 1
 * 0000000140403097: jz      short loc_14040309E
 * 0000000140403099: jmp     KiKernelExit
 * 000000014040309E: swapgs
 * 00000001404030A1: iretq
 * 00000001404030A3: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404030A7: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404030AB: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404030AF: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404030B3: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404030B7: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404030BB: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404030BF: mov     r11, [rbp+0E8h+var_108]
 * 00000001404030C3: mov     r10, [rbp+0E8h+var_110]
 * 00000001404030C7: mov     r9, [rbp+0E8h+var_118]
 * 00000001404030CB: mov     r8, [rbp+0E8h+var_120]
 * 00000001404030CF: mov     rdx, [rbp+0E8h+var_128]
 * 00000001404030D3: mov     rcx, [rbp+0E8h+var_130]
 * 00000001404030D7: mov     rax, [rbp+0E8h+var_138]
 * 00000001404030DB: mov     rsp, rbp
 * 00000001404030DE: mov     rbp, [rbp+0E8h+var_10]
 * 00000001404030E5: add     rsp, 0E8h
 * 00000001404030EC: iretq
 */
