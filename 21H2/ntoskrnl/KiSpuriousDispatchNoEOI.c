/*
 * XREFs of KiSpuriousDispatchNoEOI @ 0x1404010E0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x140205BE0 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140211E00 (HalRequestSoftwareInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiEndThreadAccountingPeriod @ 0x1402D5BD0 (KiEndThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404010E0 (KiSpuriousDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405E90 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512E80 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSpuriousDispatchNoEOI @ 0x1404010E0
 * Reason: Hex-Rays returned no pseudocode for 0x1404010E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404010E0: mov     ecx, 0Fh
 * 00000001404010E5: cmp     cs:KiIrqlFlags, 0
 * 00000001404010EC: jz      short loc_1404010F5
 * 00000001404010EE: call    KzSetIrqlUnsafe
 * 00000001404010F3: jmp     short loc_1404010FD
 * 00000001404010F5: mov     rax, cr8
 * 00000001404010F9: mov     cr8, rcx
 * 00000001404010FD: mov     [rbp-57h], al
 * 0000000140401100: mov     rcx, gs:20h
 * 0000000140401109: inc     byte ptr [rcx+20h]
 * 000000014040110C: cmp     byte ptr [rcx+20h], 1
 * 0000000140401110: jnz     short loc_140401162
 * 0000000140401112: rdtsc
 * 0000000140401114: shl     rdx, 20h
 * 0000000140401118: or      rax, rdx
 * 000000014040111B: mov     r8, [rcx+8]
 * 000000014040111F: sub     rax, [rcx+7EC0h]
 * 0000000140401126: add     [r8+48h], rax
 * 000000014040112A: mov     edx, [r8+50h]
 * 000000014040112E: add     [rcx+7EC0h], rax
 * 0000000140401135: add     rdx, rax
 * 0000000140401138: mov     ecx, edx
 * 000000014040113A: shr     rdx, 20h
 * 000000014040113E: jz      short loc_140401143
 * 0000000140401140: or      ecx, 0FFFFFFFFh
 * 0000000140401143: mov     [r8+50h], ecx
 * 0000000140401147: test    byte ptr [r8+2], 3Eh
 * 000000014040114C: jz      short loc_140401162
 * 000000014040114E: mov     rdx, r8
 * 0000000140401151: mov     r8, rax
 * 0000000140401154: mov     rcx, gs:20h
 * 000000014040115D: call    KiEndThreadAccountingPeriod
 * 0000000140401162: sti
 * 0000000140401163: inc     dword ptr [rsi+74h]
 * 0000000140401166: cli
 * 0000000140401167: mov     rcx, gs:20h
 * 0000000140401170: cmp     byte ptr [rcx+20h], 1
 * 0000000140401174: ja      short loc_1404011F0
 * 0000000140401176: rdtsc
 * 0000000140401178: shl     rdx, 20h
 * 000000014040117C: or      rax, rdx
 * 000000014040117F: sub     rax, [rcx+7EC0h]
 * 0000000140401186: add     [rcx+7F38h], rax
 * 000000014040118D: add     [rcx+7EC0h], rax
 * 0000000140401194: mov     r8, rax
 * 0000000140401197: mov     rax, [rcx+8]
 * 000000014040119B: test    byte ptr [rax+2], 72h
 * 000000014040119F: jz      short loc_1404011B4
 * 00000001404011A1: xor     edx, edx
 * 00000001404011A3: call    KiBeginThreadAccountingPeriod
 * 00000001404011A8: mov     rcx, gs:20h
 * 00000001404011B1: inc     byte ptr [rcx+20h]
 * 00000001404011B4: mov     dl, [rcx+6]
 * 00000001404011B7: and     byte ptr [rcx+6], 0
 * 00000001404011BB: cmp     byte ptr [rcx+7], 0
 * 00000001404011BF: jnz     short loc_1404011F0
 * 00000001404011C1: test    dl, dl
 * 00000001404011C3: jz      short loc_1404011F0
 * 00000001404011C5: cmp     byte ptr [rbp-57h], 2
 * 00000001404011C9: jnb     short loc_1404011D6
 * 00000001404011CB: and     byte ptr [rcx+20h], 0
 * 00000001404011CF: call    KiDpcInterruptBypass
 * 00000001404011D4: jmp     short loc_1404011F3
 * 00000001404011D6: mov     ecx, 2
 * 00000001404011DB: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404011E2: nop     dword ptr [rax+rax+00h]
 * 00000001404011E7: mov     rcx, gs:20h
 * 00000001404011F0: dec     byte ptr [rcx+20h]
 * 00000001404011F3: movzx   ecx, byte ptr [rbp-57h]
 * 00000001404011F7: cmp     cs:KiIrqlFlags, 0
 * 00000001404011FE: jz      short loc_140401207
 * 0000000140401200: call    KzSetIrqlUnsafe
 * 0000000140401205: jmp     short loc_14040120B
 * 0000000140401207: mov     cr8, rcx
 * 000000014040120B: mov     rsi, [rbp+0D0h]
 * 0000000140401212: cli
 * 0000000140401213: test    byte ptr [rbp+0F0h], 1
 * 000000014040121A: jz      loc_1404014BC
 * 0000000140401220: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140401227: jz      short loc_14040122C
 * 0000000140401229: stac
 * 000000014040122C: mov     rcx, gs:188h
 * 0000000140401235: test    byte ptr [rcx+0C2h], 3
 * 000000014040123C: jz      short loc_140401259
 * 000000014040123E: mov     ecx, 1
 * 0000000140401243: mov     cr8, rcx
 * 0000000140401247: sti
 * 0000000140401248: call    KiInitiateUserApc
 * 000000014040124D: cli
 * 000000014040124E: mov     ecx, 0
 * 0000000140401253: mov     cr8, rcx
 * 0000000140401257: jmp     short loc_14040122C
 * 0000000140401259: test    byte ptr gs:86Ch, 2
 * 0000000140401262: jz      short loc_14040126B
 * 0000000140401264: xor     ecx, ecx
 * 0000000140401266: call    KiUpdateStibpPairing
 * 000000014040126B: mov     rcx, gs:188h
 * 0000000140401274: test    dword ptr [rcx], 8000000h
 * 000000014040127A: jz      short loc_140401281
 * 000000014040127C: call    KiRestoreSetContextState
 * 0000000140401281: mov     rcx, gs:188h
 * 000000014040128A: test    dword ptr [rcx], 40010000h
 * 0000000140401290: jz      short loc_1404012A6
 * 0000000140401292: test    byte ptr [rcx+2], 1
 * 0000000140401296: jz      short loc_1404012A6
 * 0000000140401298: call    KiCopyCounters
 * 000000014040129D: mov     rcx, gs:188h
 * 00000001404012A6: ldmxcsr dword ptr [rbp-54h]
 * 00000001404012AA: cmp     word ptr [rbp+80h], 0
 * 00000001404012B2: jz      short loc_1404012B9
 * 00000001404012B4: call    KiRestoreDebugRegisterState
 * 00000001404012B9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404012BD: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404012C1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404012C5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404012C9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404012CD: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404012D1: mov     r11, [rbp-20h]
 * 00000001404012D5: mov     r10, [rbp-28h]
 * 00000001404012D9: mov     r9, [rbp-30h]
 * 00000001404012DD: mov     r8, [rbp-38h]
 * 00000001404012E1: mov     byte ptr gs:856h, 0
 * 00000001404012EA: movzx   eax, word ptr gs:86Ah
 * 00000001404012F3: cmp     gs:864h, ax
 * 00000001404012FC: jz      short loc_140401310
 * 00000001404012FE: mov     gs:864h, ax
 * 0000000140401307: mov     ecx, 48h ; 'H'
 * 000000014040130C: xor     edx, edx
 * 000000014040130E: wrmsr
 * 0000000140401310: btr     word ptr gs:860h, 2
 * 000000014040131B: jnb     short loc_14040132B
 * 000000014040131D: mov     eax, 1
 * 0000000140401322: xor     edx, edx
 * 0000000140401324: mov     ecx, 49h ; 'I'
 * 0000000140401329: wrmsr
 * 000000014040132B: btr     word ptr gs:860h, 5
 * 0000000140401336: jnb     loc_140401461
 * 000000014040133C: call    loc_14040144F
 * 0000000140401341: add     rsp, 8
 * 0000000140401345: call    loc_140401458
 * 000000014040134A: add     rsp, 8
 * 000000014040134E: call    loc_140401341
 * 0000000140401353: add     rsp, 8
 * 0000000140401357: call    loc_14040134A
 * 000000014040135C: add     rsp, 8
 * 0000000140401360: call    loc_140401353
 * 0000000140401365: add     rsp, 8
 * 0000000140401369: call    loc_14040135C
 * 000000014040136E: add     rsp, 8
 * 0000000140401372: call    loc_140401365
 * 0000000140401377: add     rsp, 8
 * 000000014040137B: call    loc_14040136E
 * 0000000140401380: add     rsp, 8
 * 0000000140401384: call    loc_140401377
 * 0000000140401389: add     rsp, 8
 * 000000014040138D: call    loc_140401380
 * 0000000140401392: add     rsp, 8
 * 0000000140401396: call    loc_140401389
 * 000000014040139B: add     rsp, 8
 * 000000014040139F: call    loc_140401392
 * 00000001404013A4: add     rsp, 8
 * 00000001404013A8: call    loc_14040139B
 * 00000001404013AD: add     rsp, 8
 * 00000001404013B1: call    loc_1404013A4
 * 00000001404013B6: add     rsp, 8
 * 00000001404013BA: call    loc_1404013AD
 * 00000001404013BF: add     rsp, 8
 * 00000001404013C3: call    loc_1404013B6
 * 00000001404013C8: add     rsp, 8
 * 00000001404013CC: call    loc_1404013BF
 * 00000001404013D1: add     rsp, 8
 * 00000001404013D5: call    loc_1404013C8
 * 00000001404013DA: add     rsp, 8
 * 00000001404013DE: call    loc_1404013D1
 * 00000001404013E3: add     rsp, 8
 * 00000001404013E7: call    loc_1404013DA
 * 00000001404013EC: add     rsp, 8
 * 00000001404013F0: call    loc_1404013E3
 * 00000001404013F5: add     rsp, 8
 * 00000001404013F9: call    loc_1404013EC
 * 00000001404013FE: add     rsp, 8
 * 0000000140401402: call    loc_1404013F5
 * 0000000140401407: add     rsp, 8
 * 000000014040140B: call    loc_1404013FE
 * 0000000140401410: add     rsp, 8
 * 0000000140401414: call    loc_140401407
 * 0000000140401419: add     rsp, 8
 * 000000014040141D: call    loc_140401410
 * 0000000140401422: add     rsp, 8
 * 0000000140401426: call    loc_140401419
 * 000000014040142B: add     rsp, 8
 * 000000014040142F: call    loc_140401422
 * 0000000140401434: add     rsp, 8
 * 0000000140401438: call    loc_14040142B
 * 000000014040143D: add     rsp, 8
 * 0000000140401441: call    loc_140401434
 * 0000000140401446: add     rsp, 8
 * 000000014040144A: call    loc_14040143D
 * 000000014040144F: add     rsp, 8
 * 0000000140401453: call    loc_140401446
 * 0000000140401458: add     rsp, 8
 * 000000014040145C: mov     eax, 0DADAh
 * 0000000140401461: test    word ptr gs:860h, 80h
 * 000000014040146C: jz      short loc_14040147A
 * 000000014040146E: xor     eax, eax
 * 0000000140401470: xor     edx, edx
 * 0000000140401472: mov     ecx, 1
 * 0000000140401477: div     rcx
 * 000000014040147A: mov     rdx, [rbp-40h]
 * 000000014040147E: mov     rcx, [rbp-48h]
 * 0000000140401482: mov     rax, [rbp-50h]
 * 0000000140401486: mov     rsp, rbp
 * 0000000140401489: mov     rbp, [rbp+0D8h]
 * 0000000140401490: add     rsp, 0E8h
 * 0000000140401497: test    cs:KiKvaShadow, 1
 * 000000014040149E: jz      short loc_1404014A5
 * 00000001404014A0: jmp     KiKernelExit
 * 00000001404014A5: test    word ptr gs:860h, 100h
 * 00000001404014B0: jz      short loc_1404014B7
 * 00000001404014B2: verw    [rsp-1E8h+arg_200]
 * 00000001404014B7: swapgs
 * 00000001404014BA: iretq
 * 00000001404014BC: ldmxcsr dword ptr [rbp-54h]
 * 00000001404014C0: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404014C4: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404014C8: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404014CC: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404014D0: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404014D4: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404014D8: mov     r11, [rbp-20h]
 * 00000001404014DC: mov     r10, [rbp-28h]
 * 00000001404014E0: mov     r9, [rbp-30h]
 * 00000001404014E4: mov     r8, [rbp-38h]
 * 00000001404014E8: mov     rdx, [rbp-40h]
 * 00000001404014EC: mov     rcx, [rbp-48h]
 * 00000001404014F0: mov     rax, [rbp-50h]
 * 00000001404014F4: mov     rsp, rbp
 * 00000001404014F7: mov     rbp, [rbp+0D8h]
 * 00000001404014FE: add     rsp, 0E8h
 * 0000000140401505: iretq
 */
