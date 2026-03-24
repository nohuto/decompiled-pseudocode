/*
 * XREFs of KxIsrLinkage @ 0x1403FF760
 * Callers:
 *     KxIsrLinkageShadow @ 0x140A18B00 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x1402BEDE0 (KiEndThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1402DF2E0 (KiCheckForSListAddress.c)
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402EBA40 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402F5F40 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x1403FF760 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1404036E0 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x14040FCC0 (KiBugCheckDispatch.c)
 *     KzSetIrqlUnsafe @ 0x140511100 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140517EE0 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x1405A8A10 (PerfInfoLogUnexpectedInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x1403FF760
 * Reason: Hex-Rays returned no pseudocode for 0x1403FF760
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FF760: push    rbp
 * 00000001403FF761: push    rsi
 * 00000001403FF762: sub     rsp, 150h
 * 00000001403FF769: lea     rbp, [rsp+80h]
 * 00000001403FF771: mov     [rbp+0D8h+var_12D], 0
 * 00000001403FF775: mov     [rbp+0D8h+var_128], rax
 * 00000001403FF779: mov     [rbp+0D8h+var_120], rcx
 * 00000001403FF77D: mov     [rbp+0D8h+var_118], rdx
 * 00000001403FF781: mov     [rbp+0D8h+var_110], r8
 * 00000001403FF785: mov     [rbp+0D8h+var_108], r9
 * 00000001403FF789: mov     [rbp+0D8h+var_100], r10
 * 00000001403FF78D: mov     [rbp+0D8h+var_F8], r11
 * 00000001403FF791: test    [rbp+0D8h+arg_8], 1
 * 00000001403FF798: jnz     short loc_1403FF7C7
 * 00000001403FF79A: lfence
 * 00000001403FF79D: test    byte ptr gs:278h, 1
 * 00000001403FF7A6: jnz     short loc_1403FF7B0
 * 00000001403FF7A8: lfence
 * 00000001403FF7AB: jmp     loc_1403FF9BD
 * 00000001403FF7B0: movzx   eax, byte ptr gs:27Ah
 * 00000001403FF7B9: mov     ecx, 48h ; 'H'
 * 00000001403FF7BE: xor     edx, edx
 * 00000001403FF7C0: wrmsr
 * 00000001403FF7C2: jmp     loc_1403FF9BD
 * 00000001403FF7C7: test    cs:KiKvaShadow, 1
 * 00000001403FF7CE: jnz     short loc_1403FF7D3
 * 00000001403FF7D0: swapgs
 * 00000001403FF7D3: lfence
 * 00000001403FF7D6: mov     r10, gs:188h
 * 00000001403FF7DF: mov     rcx, gs:188h
 * 00000001403FF7E8: mov     rcx, [rcx+220h]
 * 00000001403FF7EF: mov     rcx, [rcx+9E0h]
 * 00000001403FF7F6: mov     gs:270h, rcx
 * 00000001403FF7FF: mov     cl, gs:850h
 * 00000001403FF807: mov     gs:851h, cl
 * 00000001403FF80F: mov     cl, gs:278h
 * 00000001403FF817: mov     gs:852h, cl
 * 00000001403FF81F: movzx   eax, byte ptr gs:27Bh
 * 00000001403FF828: cmp     gs:27Ah, al
 * 00000001403FF830: jz      short loc_1403FF843
 * 00000001403FF832: mov     gs:27Ah, al
 * 00000001403FF83A: mov     ecx, 48h ; 'H'
 * 00000001403FF83F: xor     edx, edx
 * 00000001403FF841: wrmsr
 * 00000001403FF843: movzx   edx, byte ptr gs:278h
 * 00000001403FF84C: test    edx, 8
 * 00000001403FF852: jz      short loc_1403FF86B
 * 00000001403FF854: mov     eax, 1
 * 00000001403FF859: xor     edx, edx
 * 00000001403FF85B: mov     ecx, 49h ; 'I'
 * 00000001403FF860: wrmsr
 * 00000001403FF862: movzx   edx, byte ptr gs:278h
 * 00000001403FF86B: test    edx, 2
 * 00000001403FF871: jz      loc_1403FF99C
 * 00000001403FF877: call    loc_1403FF98A
 * 00000001403FF87C: add     rsp, 8
 * 00000001403FF880: call    loc_1403FF993
 * 00000001403FF885: add     rsp, 8
 * 00000001403FF889: call    loc_1403FF87C
 * 00000001403FF88E: add     rsp, 8
 * 00000001403FF892: call    loc_1403FF885
 * 00000001403FF897: add     rsp, 8
 * 00000001403FF89B: call    loc_1403FF88E
 * 00000001403FF8A0: add     rsp, 8
 * 00000001403FF8A4: call    loc_1403FF897
 * 00000001403FF8A9: add     rsp, 8
 * 00000001403FF8AD: call    loc_1403FF8A0
 * 00000001403FF8B2: add     rsp, 8
 * 00000001403FF8B6: call    loc_1403FF8A9
 * 00000001403FF8BB: add     rsp, 8
 * 00000001403FF8BF: call    loc_1403FF8B2
 * 00000001403FF8C4: add     rsp, 8
 * 00000001403FF8C8: call    loc_1403FF8BB
 * 00000001403FF8CD: add     rsp, 8
 * 00000001403FF8D1: call    loc_1403FF8C4
 * 00000001403FF8D6: add     rsp, 8
 * 00000001403FF8DA: call    loc_1403FF8CD
 * 00000001403FF8DF: add     rsp, 8
 * 00000001403FF8E3: call    loc_1403FF8D6
 * 00000001403FF8E8: add     rsp, 8
 * 00000001403FF8EC: call    loc_1403FF8DF
 * 00000001403FF8F1: add     rsp, 8
 * 00000001403FF8F5: call    loc_1403FF8E8
 * 00000001403FF8FA: add     rsp, 8
 * 00000001403FF8FE: call    loc_1403FF8F1
 * 00000001403FF903: add     rsp, 8
 * 00000001403FF907: call    loc_1403FF8FA
 * 00000001403FF90C: add     rsp, 8
 * 00000001403FF910: call    loc_1403FF903
 * 00000001403FF915: add     rsp, 8
 * 00000001403FF919: call    loc_1403FF90C
 * 00000001403FF91E: add     rsp, 8
 * 00000001403FF922: call    loc_1403FF915
 * 00000001403FF927: add     rsp, 8
 * 00000001403FF92B: call    loc_1403FF91E
 * 00000001403FF930: add     rsp, 8
 * 00000001403FF934: call    loc_1403FF927
 * 00000001403FF939: add     rsp, 8
 * 00000001403FF93D: call    loc_1403FF930
 * 00000001403FF942: add     rsp, 8
 * 00000001403FF946: call    loc_1403FF939
 * 00000001403FF94B: add     rsp, 8
 * 00000001403FF94F: call    loc_1403FF942
 * 00000001403FF954: add     rsp, 8
 * 00000001403FF958: call    loc_1403FF94B
 * 00000001403FF95D: add     rsp, 8
 * 00000001403FF961: call    loc_1403FF954
 * 00000001403FF966: add     rsp, 8
 * 00000001403FF96A: call    loc_1403FF95D
 * 00000001403FF96F: add     rsp, 8
 * 00000001403FF973: call    loc_1403FF966
 * 00000001403FF978: add     rsp, 8
 * 00000001403FF97C: call    loc_1403FF96F
 * 00000001403FF981: add     rsp, 8
 * 00000001403FF985: call    loc_1403FF978
 * 00000001403FF98A: add     rsp, 8
 * 00000001403FF98E: call    loc_1403FF981
 * 00000001403FF993: add     rsp, 8
 * 00000001403FF997: mov     eax, 0DADAh
 * 00000001403FF99C: lfence
 * 00000001403FF99F: mov     byte ptr gs:853h, 0
 * 00000001403FF9A8: test    byte ptr [r10+3], 3
 * 00000001403FF9AD: mov     [rbp+0D8h+var_58], 0
 * 00000001403FF9B6: jz      short loc_1403FF9BD
 * 00000001403FF9B8: call    KiSaveDebugRegisterState
 * 00000001403FF9BD: cld
 * 00000001403FF9BE: stmxcsr [rbp+0D8h+var_12C]
 * 00000001403FF9C2: ldmxcsr dword ptr gs:180h
 * 00000001403FF9CB: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001403FF9CF: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001403FF9D3: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001403FF9D7: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001403FF9DB: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001403FF9DF: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001403FF9E3: cmp     byte ptr gs:801Ah, 0
 * 00000001403FF9EC: jz      short loc_1403FF9F3
 * 00000001403FF9EE: call    KeWakeProcessor
 * 00000001403FF9F3: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001403FF9FA: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001403FFA01: jnb     short loc_1403FFA1C
 * 00000001403FFA03: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001403FFA0A: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001403FFA11: jb      short loc_1403FFA1C
 * 00000001403FFA13: lea     rcx, [rbp+0D8h+var_158]
 * 00000001403FFA17: call    KiCheckForSListAddress
 * 00000001403FFA1C: movzx   eax, byte ptr [rbp+0E0h]
 * 00000001403FFA23: mov     rsi, gs:20h
 * 00000001403FFA2C: mov     rsi, [rsi+rax*8+3140h]
 * 00000001403FFA34: inc     dword ptr gs:8000h
 * 00000001403FFA3C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FFA43: jz      short loc_1403FFA48
 * 00000001403FFA45: clac
 * 00000001403FFA48: test    rsi, rsi
 * 00000001403FFA4B: jz      short loc_1403FFA56
 * 00000001403FFA4D: mov     rax, [rsi+50h]
 * 00000001403FFA51: jmp     _guard_dispatch_icall
 * 00000001403FFA56: mov     ecx, eax
 * 00000001403FFA58: shr     ecx, 4
 * 00000001403FFA5B: cmp     cs:KiIrqlFlags, 0
 * 00000001403FFA62: jz      short loc_1403FFA6B
 * 00000001403FFA64: call    KzSetIrqlUnsafe
 * 00000001403FFA69: jmp     short loc_1403FFA73
 * 00000001403FFA6B: mov     rax, cr8
 * 00000001403FFA6F: mov     cr8, rcx
 * 00000001403FFA73: mov     [rbp+0D8h+var_12F], al
 * 00000001403FFA76: mov     rcx, gs:20h
 * 00000001403FFA7F: inc     byte ptr [rcx+20h]
 * 00000001403FFA82: cmp     byte ptr [rcx+20h], 1
 * 00000001403FFA86: jnz     short loc_1403FFAD8
 * 00000001403FFA88: rdtsc
 * 00000001403FFA8A: shl     rdx, 20h
 * 00000001403FFA8E: or      rax, rdx
 * 00000001403FFA91: mov     r8, [rcx+8]
 * 00000001403FFA95: sub     rax, [rcx+7EC0h]
 * 00000001403FFA9C: add     [r8+48h], rax
 * 00000001403FFAA0: mov     edx, [r8+50h]
 * 00000001403FFAA4: add     [rcx+7EC0h], rax
 * 00000001403FFAAB: add     rdx, rax
 * 00000001403FFAAE: mov     ecx, edx
 * 00000001403FFAB0: shr     rdx, 20h
 * 00000001403FFAB4: jz      short loc_1403FFAB9
 * 00000001403FFAB6: or      ecx, 0FFFFFFFFh
 * 00000001403FFAB9: mov     [r8+50h], ecx
 * 00000001403FFABD: test    byte ptr [r8+2], 3Eh
 * 00000001403FFAC2: jz      short loc_1403FFAD8
 * 00000001403FFAC4: mov     rdx, r8
 * 00000001403FFAC7: mov     r8, rax
 * 00000001403FFACA: mov     rcx, gs:20h
 * 00000001403FFAD3: call    KiEndThreadAccountingPeriod
 * 00000001403FFAD8: sti
 * 00000001403FFAD9: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 00000001403FFAE3: jz      short loc_1403FFAF1
 * 00000001403FFAE5: movzx   ecx, byte ptr [rbp+0E0h]
 * 00000001403FFAEC: call    PerfInfoLogUnexpectedInterrupt
 * 00000001403FFAF1: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 00000001403FFAF8: jz      short loc_1403FFB19
 * 00000001403FFAFA: and     [rbp+0D8h+var_138], 0
 * 00000001403FFAFF: xor     r9, r9
 * 00000001403FFB02: movzx   r8d, byte ptr [rbp+0E0h]
 * 00000001403FFB0A: mov     edx, 1
 * 00000001403FFB0F: mov     ecx, 12h
 * 00000001403FFB14: call    KiBugCheckDispatch
 * 00000001403FFB19: cli
 * 00000001403FFB1A: mov     rcx, rsi
 * 00000001403FFB1D: call    HalPerformEndOfInterrupt
 * 00000001403FFB22: mov     rcx, gs:20h
 * 00000001403FFB2B: cmp     byte ptr [rcx+20h], 1
 * 00000001403FFB2F: ja      short loc_1403FFBAB
 * 00000001403FFB31: rdtsc
 * 00000001403FFB33: shl     rdx, 20h
 * 00000001403FFB37: or      rax, rdx
 * 00000001403FFB3A: sub     rax, [rcx+7EC0h]
 * 00000001403FFB41: add     [rcx+7F38h], rax
 * 00000001403FFB48: add     [rcx+7EC0h], rax
 * 00000001403FFB4F: mov     r8, rax
 * 00000001403FFB52: mov     rax, [rcx+8]
 * 00000001403FFB56: test    byte ptr [rax+2], 72h
 * 00000001403FFB5A: jz      short loc_1403FFB6F
 * 00000001403FFB5C: xor     edx, edx
 * 00000001403FFB5E: call    KiBeginThreadAccountingPeriod
 * 00000001403FFB63: mov     rcx, gs:20h
 * 00000001403FFB6C: inc     byte ptr [rcx+20h]
 * 00000001403FFB6F: mov     dl, [rcx+6]
 * 00000001403FFB72: and     byte ptr [rcx+6], 0
 * 00000001403FFB76: cmp     byte ptr [rcx+7], 0
 * 00000001403FFB7A: jnz     short loc_1403FFBAB
 * 00000001403FFB7C: test    dl, dl
 * 00000001403FFB7E: jz      short loc_1403FFBAB
 * 00000001403FFB80: cmp     [rbp+0D8h+var_12F], 2
 * 00000001403FFB84: jnb     short loc_1403FFB91
 * 00000001403FFB86: and     byte ptr [rcx+20h], 0
 * 00000001403FFB8A: call    KiDpcInterruptBypass
 * 00000001403FFB8F: jmp     short loc_1403FFBAE
 * 00000001403FFB91: mov     ecx, 2
 * 00000001403FFB96: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FFB9D: nop     dword ptr [rax+rax+00h]
 * 00000001403FFBA2: mov     rcx, gs:20h
 * 00000001403FFBAB: dec     byte ptr [rcx+20h]
 * 00000001403FFBAE: movzx   ecx, [rbp+0D8h+var_12F]
 * 00000001403FFBB2: cmp     cs:KiIrqlFlags, 0
 * 00000001403FFBB9: jz      short loc_1403FFBC2
 * 00000001403FFBBB: call    KzSetIrqlUnsafe
 * 00000001403FFBC0: jmp     short loc_1403FFBC6
 * 00000001403FFBC2: mov     cr8, rcx
 * 00000001403FFBC6: mov     rsi, [rbp+0D8h+var_8]
 * 00000001403FFBCD: cli
 * 00000001403FFBCE: test    [rbp+0D8h+arg_8], 1
 * 00000001403FFBD5: jz      loc_1403FFE4A
 * 00000001403FFBDB: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FFBE2: jz      short loc_1403FFBE7
 * 00000001403FFBE4: stac
 * 00000001403FFBE7: mov     rcx, gs:188h
 * 00000001403FFBF0: test    byte ptr [rcx+0C2h], 3
 * 00000001403FFBF7: jz      short loc_1403FFC14
 * 00000001403FFBF9: mov     ecx, 1
 * 00000001403FFBFE: mov     cr8, rcx
 * 00000001403FFC02: sti
 * 00000001403FFC03: call    KiInitiateUserApc
 * 00000001403FFC08: cli
 * 00000001403FFC09: mov     ecx, 0
 * 00000001403FFC0E: mov     cr8, rcx
 * 00000001403FFC12: jmp     short loc_1403FFBE7
 * 00000001403FFC14: test    byte ptr gs:27Eh, 2
 * 00000001403FFC1D: jz      short loc_1403FFC26
 * 00000001403FFC1F: xor     ecx, ecx
 * 00000001403FFC21: call    KiUpdateStibpPairing
 * 00000001403FFC26: mov     rcx, gs:188h
 * 00000001403FFC2F: test    dword ptr [rcx], 8000000h
 * 00000001403FFC35: jz      short loc_1403FFC3C
 * 00000001403FFC37: call    KiRestoreSetContextState
 * 00000001403FFC3C: mov     rcx, gs:188h
 * 00000001403FFC45: test    dword ptr [rcx], 40010000h
 * 00000001403FFC4B: jz      short loc_1403FFC61
 * 00000001403FFC4D: test    byte ptr [rcx+2], 1
 * 00000001403FFC51: jz      short loc_1403FFC61
 * 00000001403FFC53: call    KiCopyCounters
 * 00000001403FFC58: mov     rcx, gs:188h
 * 00000001403FFC61: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001403FFC65: cmp     [rbp+0D8h+var_58], 0
 * 00000001403FFC6D: jz      short loc_1403FFC74
 * 00000001403FFC6F: call    KiRestoreDebugRegisterState
 * 00000001403FFC74: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001403FFC78: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001403FFC7C: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001403FFC80: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001403FFC84: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001403FFC88: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001403FFC8C: mov     r11, [rbp+0D8h+var_F8]
 * 00000001403FFC90: mov     r10, [rbp+0D8h+var_100]
 * 00000001403FFC94: mov     r9, [rbp+0D8h+var_108]
 * 00000001403FFC98: mov     r8, [rbp+0D8h+var_110]
 * 00000001403FFC9C: mov     byte ptr gs:853h, 0
 * 00000001403FFCA5: movzx   eax, byte ptr gs:27Dh
 * 00000001403FFCAE: cmp     gs:27Ah, al
 * 00000001403FFCB6: jz      short loc_1403FFCC9
 * 00000001403FFCB8: mov     gs:27Ah, al
 * 00000001403FFCC0: mov     ecx, 48h ; 'H'
 * 00000001403FFCC5: xor     edx, edx
 * 00000001403FFCC7: wrmsr
 * 00000001403FFCC9: btr     word ptr gs:278h, 2
 * 00000001403FFCD4: jnb     short loc_1403FFCE4
 * 00000001403FFCD6: mov     eax, 1
 * 00000001403FFCDB: xor     edx, edx
 * 00000001403FFCDD: mov     ecx, 49h ; 'I'
 * 00000001403FFCE2: wrmsr
 * 00000001403FFCE4: btr     word ptr gs:278h, 5
 * 00000001403FFCEF: jnb     loc_1403FFE1A
 * 00000001403FFCF5: call    loc_1403FFE08
 * 00000001403FFCFA: add     rsp, 8
 * 00000001403FFCFE: call    loc_1403FFE11
 * 00000001403FFD03: add     rsp, 8
 * 00000001403FFD07: call    loc_1403FFCFA
 * 00000001403FFD0C: add     rsp, 8
 * 00000001403FFD10: call    loc_1403FFD03
 * 00000001403FFD15: add     rsp, 8
 * 00000001403FFD19: call    loc_1403FFD0C
 * 00000001403FFD1E: add     rsp, 8
 * 00000001403FFD22: call    loc_1403FFD15
 * 00000001403FFD27: add     rsp, 8
 * 00000001403FFD2B: call    loc_1403FFD1E
 * 00000001403FFD30: add     rsp, 8
 * 00000001403FFD34: call    loc_1403FFD27
 * 00000001403FFD39: add     rsp, 8
 * 00000001403FFD3D: call    loc_1403FFD30
 * 00000001403FFD42: add     rsp, 8
 * 00000001403FFD46: call    loc_1403FFD39
 * 00000001403FFD4B: add     rsp, 8
 * 00000001403FFD4F: call    loc_1403FFD42
 * 00000001403FFD54: add     rsp, 8
 * 00000001403FFD58: call    loc_1403FFD4B
 * 00000001403FFD5D: add     rsp, 8
 * 00000001403FFD61: call    loc_1403FFD54
 * 00000001403FFD66: add     rsp, 8
 * 00000001403FFD6A: call    loc_1403FFD5D
 * 00000001403FFD6F: add     rsp, 8
 * 00000001403FFD73: call    loc_1403FFD66
 * 00000001403FFD78: add     rsp, 8
 * 00000001403FFD7C: call    loc_1403FFD6F
 * 00000001403FFD81: add     rsp, 8
 * 00000001403FFD85: call    loc_1403FFD78
 * 00000001403FFD8A: add     rsp, 8
 * 00000001403FFD8E: call    loc_1403FFD81
 * 00000001403FFD93: add     rsp, 8
 * 00000001403FFD97: call    loc_1403FFD8A
 * 00000001403FFD9C: add     rsp, 8
 * 00000001403FFDA0: call    loc_1403FFD93
 * 00000001403FFDA5: add     rsp, 8
 * 00000001403FFDA9: call    loc_1403FFD9C
 * 00000001403FFDAE: add     rsp, 8
 * 00000001403FFDB2: call    loc_1403FFDA5
 * 00000001403FFDB7: add     rsp, 8
 * 00000001403FFDBB: call    loc_1403FFDAE
 * 00000001403FFDC0: add     rsp, 8
 * 00000001403FFDC4: call    loc_1403FFDB7
 * 00000001403FFDC9: add     rsp, 8
 * 00000001403FFDCD: call    loc_1403FFDC0
 * 00000001403FFDD2: add     rsp, 8
 * 00000001403FFDD6: call    loc_1403FFDC9
 * 00000001403FFDDB: add     rsp, 8
 * 00000001403FFDDF: call    loc_1403FFDD2
 * 00000001403FFDE4: add     rsp, 8
 * 00000001403FFDE8: call    loc_1403FFDDB
 * 00000001403FFDED: add     rsp, 8
 * 00000001403FFDF1: call    loc_1403FFDE4
 * 00000001403FFDF6: add     rsp, 8
 * 00000001403FFDFA: call    loc_1403FFDED
 * 00000001403FFDFF: add     rsp, 8
 * 00000001403FFE03: call    loc_1403FFDF6
 * 00000001403FFE08: add     rsp, 8
 * 00000001403FFE0C: call    loc_1403FFDFF
 * 00000001403FFE11: add     rsp, 8
 * 00000001403FFE15: mov     eax, 0DADAh
 * 00000001403FFE1A: mov     rdx, [rbp+0D8h+var_118]
 * 00000001403FFE1E: mov     rcx, [rbp+0D8h+var_120]
 * 00000001403FFE22: mov     rax, [rbp+0D8h+var_128]
 * 00000001403FFE26: mov     rsp, rbp
 * 00000001403FFE29: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001403FFE30: add     rsp, 0E8h
 * 00000001403FFE37: test    cs:KiKvaShadow, 1
 * 00000001403FFE3E: jz      short loc_1403FFE45
 * 00000001403FFE40: jmp     KiKernelExit
 * 00000001403FFE45: swapgs
 * 00000001403FFE48: iretq
 * 00000001403FFE4A: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001403FFE4E: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001403FFE52: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001403FFE56: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001403FFE5A: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001403FFE5E: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001403FFE62: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001403FFE66: mov     r11, [rbp+0D8h+var_F8]
 * 00000001403FFE6A: mov     r10, [rbp+0D8h+var_100]
 * 00000001403FFE6E: mov     r9, [rbp+0D8h+var_108]
 * 00000001403FFE72: mov     r8, [rbp+0D8h+var_110]
 * 00000001403FFE76: mov     rdx, [rbp+0D8h+var_118]
 * 00000001403FFE7A: mov     rcx, [rbp+0D8h+var_120]
 * 00000001403FFE7E: mov     rax, [rbp+0D8h+var_128]
 * 00000001403FFE82: mov     rsp, rbp
 * 00000001403FFE85: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001403FFE8C: add     rsp, 0E8h
 * 00000001403FFE93: iretq
 */
