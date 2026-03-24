/*
 * XREFs of KiSpuriousDispatchNoEOI @ 0x1403FEB50
 * Callers:
 *     <none>
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x1402BEDE0 (KiEndThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402EBA40 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiSpuriousDispatchNoEOI @ 0x1403FEB50 (KiSpuriousDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1404036E0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140511100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSpuriousDispatchNoEOI @ 0x1403FEB50
 * Reason: Hex-Rays returned no pseudocode for 0x1403FEB50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FEB50: mov     ecx, 0Fh
 * 00000001403FEB55: cmp     cs:KiIrqlFlags, 0
 * 00000001403FEB5C: jz      short loc_1403FEB65
 * 00000001403FEB5E: call    KzSetIrqlUnsafe
 * 00000001403FEB63: jmp     short loc_1403FEB6D
 * 00000001403FEB65: mov     rax, cr8
 * 00000001403FEB69: mov     cr8, rcx
 * 00000001403FEB6D: mov     [rbp-57h], al
 * 00000001403FEB70: mov     rcx, gs:20h
 * 00000001403FEB79: inc     byte ptr [rcx+20h]
 * 00000001403FEB7C: cmp     byte ptr [rcx+20h], 1
 * 00000001403FEB80: jnz     short loc_1403FEBD2
 * 00000001403FEB82: rdtsc
 * 00000001403FEB84: shl     rdx, 20h
 * 00000001403FEB88: or      rax, rdx
 * 00000001403FEB8B: mov     r8, [rcx+8]
 * 00000001403FEB8F: sub     rax, [rcx+7EC0h]
 * 00000001403FEB96: add     [r8+48h], rax
 * 00000001403FEB9A: mov     edx, [r8+50h]
 * 00000001403FEB9E: add     [rcx+7EC0h], rax
 * 00000001403FEBA5: add     rdx, rax
 * 00000001403FEBA8: mov     ecx, edx
 * 00000001403FEBAA: shr     rdx, 20h
 * 00000001403FEBAE: jz      short loc_1403FEBB3
 * 00000001403FEBB0: or      ecx, 0FFFFFFFFh
 * 00000001403FEBB3: mov     [r8+50h], ecx
 * 00000001403FEBB7: test    byte ptr [r8+2], 3Eh
 * 00000001403FEBBC: jz      short loc_1403FEBD2
 * 00000001403FEBBE: mov     rdx, r8
 * 00000001403FEBC1: mov     r8, rax
 * 00000001403FEBC4: mov     rcx, gs:20h
 * 00000001403FEBCD: call    KiEndThreadAccountingPeriod
 * 00000001403FEBD2: sti
 * 00000001403FEBD3: inc     dword ptr [rsi+74h]
 * 00000001403FEBD6: cli
 * 00000001403FEBD7: mov     rcx, gs:20h
 * 00000001403FEBE0: cmp     byte ptr [rcx+20h], 1
 * 00000001403FEBE4: ja      short loc_1403FEC60
 * 00000001403FEBE6: rdtsc
 * 00000001403FEBE8: shl     rdx, 20h
 * 00000001403FEBEC: or      rax, rdx
 * 00000001403FEBEF: sub     rax, [rcx+7EC0h]
 * 00000001403FEBF6: add     [rcx+7F38h], rax
 * 00000001403FEBFD: add     [rcx+7EC0h], rax
 * 00000001403FEC04: mov     r8, rax
 * 00000001403FEC07: mov     rax, [rcx+8]
 * 00000001403FEC0B: test    byte ptr [rax+2], 72h
 * 00000001403FEC0F: jz      short loc_1403FEC24
 * 00000001403FEC11: xor     edx, edx
 * 00000001403FEC13: call    KiBeginThreadAccountingPeriod
 * 00000001403FEC18: mov     rcx, gs:20h
 * 00000001403FEC21: inc     byte ptr [rcx+20h]
 * 00000001403FEC24: mov     dl, [rcx+6]
 * 00000001403FEC27: and     byte ptr [rcx+6], 0
 * 00000001403FEC2B: cmp     byte ptr [rcx+7], 0
 * 00000001403FEC2F: jnz     short loc_1403FEC60
 * 00000001403FEC31: test    dl, dl
 * 00000001403FEC33: jz      short loc_1403FEC60
 * 00000001403FEC35: cmp     byte ptr [rbp-57h], 2
 * 00000001403FEC39: jnb     short loc_1403FEC46
 * 00000001403FEC3B: and     byte ptr [rcx+20h], 0
 * 00000001403FEC3F: call    KiDpcInterruptBypass
 * 00000001403FEC44: jmp     short loc_1403FEC63
 * 00000001403FEC46: mov     ecx, 2
 * 00000001403FEC4B: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FEC52: nop     dword ptr [rax+rax+00h]
 * 00000001403FEC57: mov     rcx, gs:20h
 * 00000001403FEC60: dec     byte ptr [rcx+20h]
 * 00000001403FEC63: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403FEC67: cmp     cs:KiIrqlFlags, 0
 * 00000001403FEC6E: jz      short loc_1403FEC77
 * 00000001403FEC70: call    KzSetIrqlUnsafe
 * 00000001403FEC75: jmp     short loc_1403FEC7B
 * 00000001403FEC77: mov     cr8, rcx
 * 00000001403FEC7B: mov     rsi, [rbp+0D0h]
 * 00000001403FEC82: cli
 * 00000001403FEC83: test    byte ptr [rbp+0F0h], 1
 * 00000001403FEC8A: jz      loc_1403FEEFF
 * 00000001403FEC90: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FEC97: jz      short loc_1403FEC9C
 * 00000001403FEC99: stac
 * 00000001403FEC9C: mov     rcx, gs:188h
 * 00000001403FECA5: test    byte ptr [rcx+0C2h], 3
 * 00000001403FECAC: jz      short loc_1403FECC9
 * 00000001403FECAE: mov     ecx, 1
 * 00000001403FECB3: mov     cr8, rcx
 * 00000001403FECB7: sti
 * 00000001403FECB8: call    KiInitiateUserApc
 * 00000001403FECBD: cli
 * 00000001403FECBE: mov     ecx, 0
 * 00000001403FECC3: mov     cr8, rcx
 * 00000001403FECC7: jmp     short loc_1403FEC9C
 * 00000001403FECC9: test    byte ptr gs:27Eh, 2
 * 00000001403FECD2: jz      short loc_1403FECDB
 * 00000001403FECD4: xor     ecx, ecx
 * 00000001403FECD6: call    KiUpdateStibpPairing
 * 00000001403FECDB: mov     rcx, gs:188h
 * 00000001403FECE4: test    dword ptr [rcx], 8000000h
 * 00000001403FECEA: jz      short loc_1403FECF1
 * 00000001403FECEC: call    KiRestoreSetContextState
 * 00000001403FECF1: mov     rcx, gs:188h
 * 00000001403FECFA: test    dword ptr [rcx], 40010000h
 * 00000001403FED00: jz      short loc_1403FED16
 * 00000001403FED02: test    byte ptr [rcx+2], 1
 * 00000001403FED06: jz      short loc_1403FED16
 * 00000001403FED08: call    KiCopyCounters
 * 00000001403FED0D: mov     rcx, gs:188h
 * 00000001403FED16: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FED1A: cmp     word ptr [rbp+80h], 0
 * 00000001403FED22: jz      short loc_1403FED29
 * 00000001403FED24: call    KiRestoreDebugRegisterState
 * 00000001403FED29: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FED2D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FED31: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FED35: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FED39: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FED3D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FED41: mov     r11, [rbp-20h]
 * 00000001403FED45: mov     r10, [rbp-28h]
 * 00000001403FED49: mov     r9, [rbp-30h]
 * 00000001403FED4D: mov     r8, [rbp-38h]
 * 00000001403FED51: mov     byte ptr gs:853h, 0
 * 00000001403FED5A: movzx   eax, byte ptr gs:27Dh
 * 00000001403FED63: cmp     gs:27Ah, al
 * 00000001403FED6B: jz      short loc_1403FED7E
 * 00000001403FED6D: mov     gs:27Ah, al
 * 00000001403FED75: mov     ecx, 48h ; 'H'
 * 00000001403FED7A: xor     edx, edx
 * 00000001403FED7C: wrmsr
 * 00000001403FED7E: btr     word ptr gs:278h, 2
 * 00000001403FED89: jnb     short loc_1403FED99
 * 00000001403FED8B: mov     eax, 1
 * 00000001403FED90: xor     edx, edx
 * 00000001403FED92: mov     ecx, 49h ; 'I'
 * 00000001403FED97: wrmsr
 * 00000001403FED99: btr     word ptr gs:278h, 5
 * 00000001403FEDA4: jnb     loc_1403FEECF
 * 00000001403FEDAA: call    loc_1403FEEBD
 * 00000001403FEDAF: add     rsp, 8
 * 00000001403FEDB3: call    loc_1403FEEC6
 * 00000001403FEDB8: add     rsp, 8
 * 00000001403FEDBC: call    loc_1403FEDAF
 * 00000001403FEDC1: add     rsp, 8
 * 00000001403FEDC5: call    loc_1403FEDB8
 * 00000001403FEDCA: add     rsp, 8
 * 00000001403FEDCE: call    loc_1403FEDC1
 * 00000001403FEDD3: add     rsp, 8
 * 00000001403FEDD7: call    loc_1403FEDCA
 * 00000001403FEDDC: add     rsp, 8
 * 00000001403FEDE0: call    loc_1403FEDD3
 * 00000001403FEDE5: add     rsp, 8
 * 00000001403FEDE9: call    loc_1403FEDDC
 * 00000001403FEDEE: add     rsp, 8
 * 00000001403FEDF2: call    loc_1403FEDE5
 * 00000001403FEDF7: add     rsp, 8
 * 00000001403FEDFB: call    loc_1403FEDEE
 * 00000001403FEE00: add     rsp, 8
 * 00000001403FEE04: call    loc_1403FEDF7
 * 00000001403FEE09: add     rsp, 8
 * 00000001403FEE0D: call    loc_1403FEE00
 * 00000001403FEE12: add     rsp, 8
 * 00000001403FEE16: call    loc_1403FEE09
 * 00000001403FEE1B: add     rsp, 8
 * 00000001403FEE1F: call    loc_1403FEE12
 * 00000001403FEE24: add     rsp, 8
 * 00000001403FEE28: call    loc_1403FEE1B
 * 00000001403FEE2D: add     rsp, 8
 * 00000001403FEE31: call    loc_1403FEE24
 * 00000001403FEE36: add     rsp, 8
 * 00000001403FEE3A: call    loc_1403FEE2D
 * 00000001403FEE3F: add     rsp, 8
 * 00000001403FEE43: call    loc_1403FEE36
 * 00000001403FEE48: add     rsp, 8
 * 00000001403FEE4C: call    loc_1403FEE3F
 * 00000001403FEE51: add     rsp, 8
 * 00000001403FEE55: call    loc_1403FEE48
 * 00000001403FEE5A: add     rsp, 8
 * 00000001403FEE5E: call    loc_1403FEE51
 * 00000001403FEE63: add     rsp, 8
 * 00000001403FEE67: call    loc_1403FEE5A
 * 00000001403FEE6C: add     rsp, 8
 * 00000001403FEE70: call    loc_1403FEE63
 * 00000001403FEE75: add     rsp, 8
 * 00000001403FEE79: call    loc_1403FEE6C
 * 00000001403FEE7E: add     rsp, 8
 * 00000001403FEE82: call    loc_1403FEE75
 * 00000001403FEE87: add     rsp, 8
 * 00000001403FEE8B: call    loc_1403FEE7E
 * 00000001403FEE90: add     rsp, 8
 * 00000001403FEE94: call    loc_1403FEE87
 * 00000001403FEE99: add     rsp, 8
 * 00000001403FEE9D: call    loc_1403FEE90
 * 00000001403FEEA2: add     rsp, 8
 * 00000001403FEEA6: call    loc_1403FEE99
 * 00000001403FEEAB: add     rsp, 8
 * 00000001403FEEAF: call    loc_1403FEEA2
 * 00000001403FEEB4: add     rsp, 8
 * 00000001403FEEB8: call    loc_1403FEEAB
 * 00000001403FEEBD: add     rsp, 8
 * 00000001403FEEC1: call    loc_1403FEEB4
 * 00000001403FEEC6: add     rsp, 8
 * 00000001403FEECA: mov     eax, 0DADAh
 * 00000001403FEECF: mov     rdx, [rbp-40h]
 * 00000001403FEED3: mov     rcx, [rbp-48h]
 * 00000001403FEED7: mov     rax, [rbp-50h]
 * 00000001403FEEDB: mov     rsp, rbp
 * 00000001403FEEDE: mov     rbp, [rbp+0D8h]
 * 00000001403FEEE5: add     rsp, 0E8h
 * 00000001403FEEEC: test    cs:KiKvaShadow, 1
 * 00000001403FEEF3: jz      short loc_1403FEEFA
 * 00000001403FEEF5: jmp     KiKernelExit
 * 00000001403FEEFA: swapgs
 * 00000001403FEEFD: iretq
 * 00000001403FEEFF: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FEF03: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FEF07: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FEF0B: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FEF0F: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FEF13: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FEF17: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FEF1B: mov     r11, [rbp-20h]
 * 00000001403FEF1F: mov     r10, [rbp-28h]
 * 00000001403FEF23: mov     r9, [rbp-30h]
 * 00000001403FEF27: mov     r8, [rbp-38h]
 * 00000001403FEF2B: mov     rdx, [rbp-40h]
 * 00000001403FEF2F: mov     rcx, [rbp-48h]
 * 00000001403FEF33: mov     rax, [rbp-50h]
 * 00000001403FEF37: mov     rsp, rbp
 * 00000001403FEF3A: mov     rbp, [rbp+0D8h]
 * 00000001403FEF41: add     rsp, 0E8h
 * 00000001403FEF48: iretq
 */
