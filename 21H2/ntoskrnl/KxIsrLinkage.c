/*
 * XREFs of KxIsrLinkage @ 0x140401B40
 * Callers:
 *     KxIsrLinkageShadow @ 0x140A15B00 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiEndThreadAccountingPeriod @ 0x140231380 (KiEndThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x14024D5B0 (KiCheckForSListAddress.c)
 *     KiBeginThreadAccountingPeriod @ 0x140288A40 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402914D0 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x140293E90 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x140401B40 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x140403520 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405CB0 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x140412740 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x140512C40 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140519A20 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x1405AA440 (PerfInfoLogUnexpectedInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x140401B40
 * Reason: Hex-Rays returned no pseudocode for 0x140401B40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140401B40: push    rbp
 * 0000000140401B41: push    rsi
 * 0000000140401B42: sub     rsp, 150h
 * 0000000140401B49: lea     rbp, [rsp+80h]
 * 0000000140401B51: mov     [rbp+0D8h+var_12D], 0
 * 0000000140401B55: mov     [rbp+0D8h+var_128], rax
 * 0000000140401B59: mov     [rbp+0D8h+var_120], rcx
 * 0000000140401B5D: mov     [rbp+0D8h+var_118], rdx
 * 0000000140401B61: mov     [rbp+0D8h+var_110], r8
 * 0000000140401B65: mov     [rbp+0D8h+var_108], r9
 * 0000000140401B69: mov     [rbp+0D8h+var_100], r10
 * 0000000140401B6D: mov     [rbp+0D8h+var_F8], r11
 * 0000000140401B71: test    [rbp+0D8h+arg_8], 1
 * 0000000140401B78: jnz     short loc_140401BA9
 * 0000000140401B7A: lfence
 * 0000000140401B7D: test    word ptr gs:860h, 1
 * 0000000140401B88: jnz     short loc_140401B92
 * 0000000140401B8A: lfence
 * 0000000140401B8D: jmp     loc_140401DB2
 * 0000000140401B92: movzx   eax, word ptr gs:864h
 * 0000000140401B9B: mov     ecx, 48h ; 'H'
 * 0000000140401BA0: xor     edx, edx
 * 0000000140401BA2: wrmsr
 * 0000000140401BA4: jmp     loc_140401DB2
 * 0000000140401BA9: test    cs:KiKvaShadow, 1
 * 0000000140401BB0: jnz     short loc_140401BB5
 * 0000000140401BB2: swapgs
 * 0000000140401BB5: lfence
 * 0000000140401BB8: mov     r10, gs:188h
 * 0000000140401BC1: mov     rcx, gs:188h
 * 0000000140401BCA: mov     rcx, [rcx+220h]
 * 0000000140401BD1: mov     rcx, [rcx+9E0h]
 * 0000000140401BD8: mov     gs:858h, rcx
 * 0000000140401BE1: mov     cx, gs:850h
 * 0000000140401BEA: mov     gs:852h, cx
 * 0000000140401BF3: mov     cx, gs:860h
 * 0000000140401BFC: mov     gs:854h, cx
 * 0000000140401C05: movzx   eax, word ptr gs:866h
 * 0000000140401C0E: cmp     gs:864h, ax
 * 0000000140401C17: jz      short loc_140401C2B
 * 0000000140401C19: mov     gs:864h, ax
 * 0000000140401C22: mov     ecx, 48h ; 'H'
 * 0000000140401C27: xor     edx, edx
 * 0000000140401C29: wrmsr
 * 0000000140401C2B: movzx   edx, word ptr gs:860h
 * 0000000140401C34: test    edx, 8
 * 0000000140401C3A: jz      short loc_140401C53
 * 0000000140401C3C: mov     eax, 1
 * 0000000140401C41: xor     edx, edx
 * 0000000140401C43: mov     ecx, 49h ; 'I'
 * 0000000140401C48: wrmsr
 * 0000000140401C4A: movzx   edx, word ptr gs:860h
 * 0000000140401C53: test    edx, 2
 * 0000000140401C59: jz      loc_140401D84
 * 0000000140401C5F: call    loc_140401D72
 * 0000000140401C64: add     rsp, 8
 * 0000000140401C68: call    loc_140401D7B
 * 0000000140401C6D: add     rsp, 8
 * 0000000140401C71: call    loc_140401C64
 * 0000000140401C76: add     rsp, 8
 * 0000000140401C7A: call    loc_140401C6D
 * 0000000140401C7F: add     rsp, 8
 * 0000000140401C83: call    loc_140401C76
 * 0000000140401C88: add     rsp, 8
 * 0000000140401C8C: call    loc_140401C7F
 * 0000000140401C91: add     rsp, 8
 * 0000000140401C95: call    loc_140401C88
 * 0000000140401C9A: add     rsp, 8
 * 0000000140401C9E: call    loc_140401C91
 * 0000000140401CA3: add     rsp, 8
 * 0000000140401CA7: call    loc_140401C9A
 * 0000000140401CAC: add     rsp, 8
 * 0000000140401CB0: call    loc_140401CA3
 * 0000000140401CB5: add     rsp, 8
 * 0000000140401CB9: call    loc_140401CAC
 * 0000000140401CBE: add     rsp, 8
 * 0000000140401CC2: call    loc_140401CB5
 * 0000000140401CC7: add     rsp, 8
 * 0000000140401CCB: call    loc_140401CBE
 * 0000000140401CD0: add     rsp, 8
 * 0000000140401CD4: call    loc_140401CC7
 * 0000000140401CD9: add     rsp, 8
 * 0000000140401CDD: call    loc_140401CD0
 * 0000000140401CE2: add     rsp, 8
 * 0000000140401CE6: call    loc_140401CD9
 * 0000000140401CEB: add     rsp, 8
 * 0000000140401CEF: call    loc_140401CE2
 * 0000000140401CF4: add     rsp, 8
 * 0000000140401CF8: call    loc_140401CEB
 * 0000000140401CFD: add     rsp, 8
 * 0000000140401D01: call    loc_140401CF4
 * 0000000140401D06: add     rsp, 8
 * 0000000140401D0A: call    loc_140401CFD
 * 0000000140401D0F: add     rsp, 8
 * 0000000140401D13: call    loc_140401D06
 * 0000000140401D18: add     rsp, 8
 * 0000000140401D1C: call    loc_140401D0F
 * 0000000140401D21: add     rsp, 8
 * 0000000140401D25: call    loc_140401D18
 * 0000000140401D2A: add     rsp, 8
 * 0000000140401D2E: call    loc_140401D21
 * 0000000140401D33: add     rsp, 8
 * 0000000140401D37: call    loc_140401D2A
 * 0000000140401D3C: add     rsp, 8
 * 0000000140401D40: call    loc_140401D33
 * 0000000140401D45: add     rsp, 8
 * 0000000140401D49: call    loc_140401D3C
 * 0000000140401D4E: add     rsp, 8
 * 0000000140401D52: call    loc_140401D45
 * 0000000140401D57: add     rsp, 8
 * 0000000140401D5B: call    loc_140401D4E
 * 0000000140401D60: add     rsp, 8
 * 0000000140401D64: call    loc_140401D57
 * 0000000140401D69: add     rsp, 8
 * 0000000140401D6D: call    loc_140401D60
 * 0000000140401D72: add     rsp, 8
 * 0000000140401D76: call    loc_140401D69
 * 0000000140401D7B: add     rsp, 8
 * 0000000140401D7F: mov     eax, 0DADAh
 * 0000000140401D84: test    edx, 200h
 * 0000000140401D8A: jz      short loc_140401D91
 * 0000000140401D8C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140401D91: lfence
 * 0000000140401D94: mov     byte ptr gs:856h, 0
 * 0000000140401D9D: test    byte ptr [r10+3], 3
 * 0000000140401DA2: mov     [rbp+0D8h+var_58], 0
 * 0000000140401DAB: jz      short loc_140401DB2
 * 0000000140401DAD: call    KiSaveDebugRegisterState
 * 0000000140401DB2: cld
 * 0000000140401DB3: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140401DB7: ldmxcsr dword ptr gs:180h
 * 0000000140401DC0: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140401DC4: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140401DC8: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140401DCC: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140401DD0: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140401DD4: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140401DD8: cmp     byte ptr gs:801Ah, 0
 * 0000000140401DE1: jz      short loc_140401DE8
 * 0000000140401DE3: call    KeWakeProcessor
 * 0000000140401DE8: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140401DEF: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140401DF6: jnb     short loc_140401E11
 * 0000000140401DF8: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140401DFF: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140401E06: jb      short loc_140401E11
 * 0000000140401E08: lea     rcx, [rbp+0D8h+var_158]
 * 0000000140401E0C: call    KiCheckForSListAddress
 * 0000000140401E11: movzx   eax, byte ptr [rbp+0E0h]
 * 0000000140401E18: mov     rsi, gs:20h
 * 0000000140401E21: mov     rsi, [rsi+rax*8+3140h]
 * 0000000140401E29: inc     dword ptr gs:8000h
 * 0000000140401E31: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140401E38: jz      short loc_140401E3D
 * 0000000140401E3A: clac
 * 0000000140401E3D: test    rsi, rsi
 * 0000000140401E40: jz      short loc_140401E4B
 * 0000000140401E42: mov     rax, [rsi+50h]
 * 0000000140401E46: jmp     _guard_dispatch_icall
 * 0000000140401E4B: mov     ecx, eax
 * 0000000140401E4D: shr     ecx, 4
 * 0000000140401E50: cmp     cs:KiIrqlFlags, 0
 * 0000000140401E57: jz      short loc_140401E60
 * 0000000140401E59: call    KzSetIrqlUnsafe
 * 0000000140401E5E: jmp     short loc_140401E68
 * 0000000140401E60: mov     rax, cr8
 * 0000000140401E64: mov     cr8, rcx
 * 0000000140401E68: mov     [rbp+0D8h+var_12F], al
 * 0000000140401E6B: mov     rcx, gs:20h
 * 0000000140401E74: inc     byte ptr [rcx+20h]
 * 0000000140401E77: cmp     byte ptr [rcx+20h], 1
 * 0000000140401E7B: jnz     short loc_140401ECD
 * 0000000140401E7D: rdtsc
 * 0000000140401E7F: shl     rdx, 20h
 * 0000000140401E83: or      rax, rdx
 * 0000000140401E86: mov     r8, [rcx+8]
 * 0000000140401E8A: sub     rax, [rcx+7EC0h]
 * 0000000140401E91: add     [r8+48h], rax
 * 0000000140401E95: mov     edx, [r8+50h]
 * 0000000140401E99: add     [rcx+7EC0h], rax
 * 0000000140401EA0: add     rdx, rax
 * 0000000140401EA3: mov     ecx, edx
 * 0000000140401EA5: shr     rdx, 20h
 * 0000000140401EA9: jz      short loc_140401EAE
 * 0000000140401EAB: or      ecx, 0FFFFFFFFh
 * 0000000140401EAE: mov     [r8+50h], ecx
 * 0000000140401EB2: test    byte ptr [r8+2], 3Eh
 * 0000000140401EB7: jz      short loc_140401ECD
 * 0000000140401EB9: mov     rdx, r8
 * 0000000140401EBC: mov     r8, rax
 * 0000000140401EBF: mov     rcx, gs:20h
 * 0000000140401EC8: call    KiEndThreadAccountingPeriod
 * 0000000140401ECD: sti
 * 0000000140401ECE: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 0000000140401ED8: jz      short loc_140401EE6
 * 0000000140401EDA: movzx   ecx, byte ptr [rbp+0E0h]
 * 0000000140401EE1: call    PerfInfoLogUnexpectedInterrupt
 * 0000000140401EE6: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 0000000140401EED: jz      short loc_140401F0E
 * 0000000140401EEF: and     [rbp+0D8h+var_138], 0
 * 0000000140401EF4: xor     r9, r9
 * 0000000140401EF7: movzx   r8d, byte ptr [rbp+0E0h]
 * 0000000140401EFF: mov     edx, 1
 * 0000000140401F04: mov     ecx, 12h
 * 0000000140401F09: call    KiBugCheckDispatch
 * 0000000140401F0E: cli
 * 0000000140401F0F: mov     rcx, rsi
 * 0000000140401F12: call    HalPerformEndOfInterrupt
 * 0000000140401F17: mov     rcx, gs:20h
 * 0000000140401F20: cmp     byte ptr [rcx+20h], 1
 * 0000000140401F24: ja      short loc_140401FA0
 * 0000000140401F26: rdtsc
 * 0000000140401F28: shl     rdx, 20h
 * 0000000140401F2C: or      rax, rdx
 * 0000000140401F2F: sub     rax, [rcx+7EC0h]
 * 0000000140401F36: add     [rcx+7F38h], rax
 * 0000000140401F3D: add     [rcx+7EC0h], rax
 * 0000000140401F44: mov     r8, rax
 * 0000000140401F47: mov     rax, [rcx+8]
 * 0000000140401F4B: test    byte ptr [rax+2], 72h
 * 0000000140401F4F: jz      short loc_140401F64
 * 0000000140401F51: xor     edx, edx
 * 0000000140401F53: call    KiBeginThreadAccountingPeriod
 * 0000000140401F58: mov     rcx, gs:20h
 * 0000000140401F61: inc     byte ptr [rcx+20h]
 * 0000000140401F64: mov     dl, [rcx+6]
 * 0000000140401F67: and     byte ptr [rcx+6], 0
 * 0000000140401F6B: cmp     byte ptr [rcx+7], 0
 * 0000000140401F6F: jnz     short loc_140401FA0
 * 0000000140401F71: test    dl, dl
 * 0000000140401F73: jz      short loc_140401FA0
 * 0000000140401F75: cmp     [rbp+0D8h+var_12F], 2
 * 0000000140401F79: jnb     short loc_140401F86
 * 0000000140401F7B: and     byte ptr [rcx+20h], 0
 * 0000000140401F7F: call    KiDpcInterruptBypass
 * 0000000140401F84: jmp     short loc_140401FA3
 * 0000000140401F86: mov     ecx, 2
 * 0000000140401F8B: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140401F92: nop     dword ptr [rax+rax+00h]
 * 0000000140401F97: mov     rcx, gs:20h
 * 0000000140401FA0: dec     byte ptr [rcx+20h]
 * 0000000140401FA3: movzx   ecx, [rbp+0D8h+var_12F]
 * 0000000140401FA7: cmp     cs:KiIrqlFlags, 0
 * 0000000140401FAE: jz      short loc_140401FB7
 * 0000000140401FB0: call    KzSetIrqlUnsafe
 * 0000000140401FB5: jmp     short loc_140401FBB
 * 0000000140401FB7: mov     cr8, rcx
 * 0000000140401FBB: mov     rsi, [rbp+0D8h+var_8]
 * 0000000140401FC2: cli
 * 0000000140401FC3: test    [rbp+0D8h+arg_8], 1
 * 0000000140401FCA: jz      loc_14040226C
 * 0000000140401FD0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140401FD7: jz      short loc_140401FDC
 * 0000000140401FD9: stac
 * 0000000140401FDC: mov     rcx, gs:188h
 * 0000000140401FE5: test    byte ptr [rcx+0C2h], 3
 * 0000000140401FEC: jz      short loc_140402009
 * 0000000140401FEE: mov     ecx, 1
 * 0000000140401FF3: mov     cr8, rcx
 * 0000000140401FF7: sti
 * 0000000140401FF8: call    KiInitiateUserApc
 * 0000000140401FFD: cli
 * 0000000140401FFE: mov     ecx, 0
 * 0000000140402003: mov     cr8, rcx
 * 0000000140402007: jmp     short loc_140401FDC
 * 0000000140402009: test    byte ptr gs:86Ch, 2
 * 0000000140402012: jz      short loc_14040201B
 * 0000000140402014: xor     ecx, ecx
 * 0000000140402016: call    KiUpdateStibpPairing
 * 000000014040201B: mov     rcx, gs:188h
 * 0000000140402024: test    dword ptr [rcx], 8000000h
 * 000000014040202A: jz      short loc_140402031
 * 000000014040202C: call    KiRestoreSetContextState
 * 0000000140402031: mov     rcx, gs:188h
 * 000000014040203A: test    dword ptr [rcx], 40010000h
 * 0000000140402040: jz      short loc_140402056
 * 0000000140402042: test    byte ptr [rcx+2], 1
 * 0000000140402046: jz      short loc_140402056
 * 0000000140402048: call    KiCopyCounters
 * 000000014040204D: mov     rcx, gs:188h
 * 0000000140402056: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014040205A: cmp     [rbp+0D8h+var_58], 0
 * 0000000140402062: jz      short loc_140402069
 * 0000000140402064: call    KiRestoreDebugRegisterState
 * 0000000140402069: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014040206D: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140402071: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140402075: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140402079: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014040207D: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140402081: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140402085: mov     r10, [rbp+0D8h+var_100]
 * 0000000140402089: mov     r9, [rbp+0D8h+var_108]
 * 000000014040208D: mov     r8, [rbp+0D8h+var_110]
 * 0000000140402091: mov     byte ptr gs:856h, 0
 * 000000014040209A: movzx   eax, word ptr gs:86Ah
 * 00000001404020A3: cmp     gs:864h, ax
 * 00000001404020AC: jz      short loc_1404020C0
 * 00000001404020AE: mov     gs:864h, ax
 * 00000001404020B7: mov     ecx, 48h ; 'H'
 * 00000001404020BC: xor     edx, edx
 * 00000001404020BE: wrmsr
 * 00000001404020C0: btr     word ptr gs:860h, 2
 * 00000001404020CB: jnb     short loc_1404020DB
 * 00000001404020CD: mov     eax, 1
 * 00000001404020D2: xor     edx, edx
 * 00000001404020D4: mov     ecx, 49h ; 'I'
 * 00000001404020D9: wrmsr
 * 00000001404020DB: btr     word ptr gs:860h, 5
 * 00000001404020E6: jnb     loc_140402211
 * 00000001404020EC: call    loc_1404021FF
 * 00000001404020F1: add     rsp, 8
 * 00000001404020F5: call    loc_140402208
 * 00000001404020FA: add     rsp, 8
 * 00000001404020FE: call    loc_1404020F1
 * 0000000140402103: add     rsp, 8
 * 0000000140402107: call    loc_1404020FA
 * 000000014040210C: add     rsp, 8
 * 0000000140402110: call    loc_140402103
 * 0000000140402115: add     rsp, 8
 * 0000000140402119: call    loc_14040210C
 * 000000014040211E: add     rsp, 8
 * 0000000140402122: call    loc_140402115
 * 0000000140402127: add     rsp, 8
 * 000000014040212B: call    loc_14040211E
 * 0000000140402130: add     rsp, 8
 * 0000000140402134: call    loc_140402127
 * 0000000140402139: add     rsp, 8
 * 000000014040213D: call    loc_140402130
 * 0000000140402142: add     rsp, 8
 * 0000000140402146: call    loc_140402139
 * 000000014040214B: add     rsp, 8
 * 000000014040214F: call    loc_140402142
 * 0000000140402154: add     rsp, 8
 * 0000000140402158: call    loc_14040214B
 * 000000014040215D: add     rsp, 8
 * 0000000140402161: call    loc_140402154
 * 0000000140402166: add     rsp, 8
 * 000000014040216A: call    loc_14040215D
 * 000000014040216F: add     rsp, 8
 * 0000000140402173: call    loc_140402166
 * 0000000140402178: add     rsp, 8
 * 000000014040217C: call    loc_14040216F
 * 0000000140402181: add     rsp, 8
 * 0000000140402185: call    loc_140402178
 * 000000014040218A: add     rsp, 8
 * 000000014040218E: call    loc_140402181
 * 0000000140402193: add     rsp, 8
 * 0000000140402197: call    loc_14040218A
 * 000000014040219C: add     rsp, 8
 * 00000001404021A0: call    loc_140402193
 * 00000001404021A5: add     rsp, 8
 * 00000001404021A9: call    loc_14040219C
 * 00000001404021AE: add     rsp, 8
 * 00000001404021B2: call    loc_1404021A5
 * 00000001404021B7: add     rsp, 8
 * 00000001404021BB: call    loc_1404021AE
 * 00000001404021C0: add     rsp, 8
 * 00000001404021C4: call    loc_1404021B7
 * 00000001404021C9: add     rsp, 8
 * 00000001404021CD: call    loc_1404021C0
 * 00000001404021D2: add     rsp, 8
 * 00000001404021D6: call    loc_1404021C9
 * 00000001404021DB: add     rsp, 8
 * 00000001404021DF: call    loc_1404021D2
 * 00000001404021E4: add     rsp, 8
 * 00000001404021E8: call    loc_1404021DB
 * 00000001404021ED: add     rsp, 8
 * 00000001404021F1: call    loc_1404021E4
 * 00000001404021F6: add     rsp, 8
 * 00000001404021FA: call    loc_1404021ED
 * 00000001404021FF: add     rsp, 8
 * 0000000140402203: call    loc_1404021F6
 * 0000000140402208: add     rsp, 8
 * 000000014040220C: mov     eax, 0DADAh
 * 0000000140402211: test    word ptr gs:860h, 80h
 * 000000014040221C: jz      short loc_14040222A
 * 000000014040221E: xor     eax, eax
 * 0000000140402220: xor     edx, edx
 * 0000000140402222: mov     ecx, 1
 * 0000000140402227: div     rcx
 * 000000014040222A: mov     rdx, [rbp+0D8h+var_118]
 * 000000014040222E: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140402232: mov     rax, [rbp+0D8h+var_128]
 * 0000000140402236: mov     rsp, rbp
 * 0000000140402239: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140402240: add     rsp, 0E8h
 * 0000000140402247: test    cs:KiKvaShadow, 1
 * 000000014040224E: jz      short loc_140402255
 * 0000000140402250: jmp     KiKernelExit
 * 0000000140402255: test    word ptr gs:860h, 100h
 * 0000000140402260: jz      short loc_140402267
 * 0000000140402262: verw    [rsp-10h+arg_20]
 * 0000000140402267: swapgs
 * 000000014040226A: iretq
 * 000000014040226C: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140402270: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140402274: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140402278: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014040227C: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140402280: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140402284: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140402288: mov     r11, [rbp+0D8h+var_F8]
 * 000000014040228C: mov     r10, [rbp+0D8h+var_100]
 * 0000000140402290: mov     r9, [rbp+0D8h+var_108]
 * 0000000140402294: mov     r8, [rbp+0D8h+var_110]
 * 0000000140402298: mov     rdx, [rbp+0D8h+var_118]
 * 000000014040229C: mov     rcx, [rbp+0D8h+var_120]
 * 00000001404022A0: mov     rax, [rbp+0D8h+var_128]
 * 00000001404022A4: mov     rsp, rbp
 * 00000001404022A7: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001404022AE: add     rsp, 0E8h
 * 00000001404022B5: iretq
 */
