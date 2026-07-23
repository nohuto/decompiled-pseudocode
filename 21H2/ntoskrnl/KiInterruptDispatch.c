/*
 * XREFs of KiInterruptDispatch @ 0x140400120
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x140205BE0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x14020F440 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x140211E00 (HalRequestSoftwareInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatch @ 0x1403FFD70 (KiInterruptSubDispatch.c)
 *     KiInterruptDispatch @ 0x140400120 (KiInterruptDispatch.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405E90 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512E80 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x140400120
 * Reason: Hex-Rays returned no pseudocode for 0x140400120
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140400120: mov     rdx, rsp
 * 0000000140400123: mov     rcx, gs:8758h
 * 000000014040012C: lea     rax, [rcx-6000h]
 * 0000000140400133: cmp     rax, rsp
 * 0000000140400136: ja      short loc_14040013D
 * 0000000140400138: cmp     rsp, rcx
 * 000000014040013B: jb      short loc_140400149
 * 000000014040013D: cmp     cs:KiBugCheckActive, 0
 * 0000000140400144: jnz     short loc_140400149
 * 0000000140400146: mov     rsp, rcx
 * 0000000140400149: sub     rsp, 20h
 * 000000014040014D: mov     [rsp+20h+var_10], rdx
 * 0000000140400152: call    KiInterruptSubDispatch
 * 0000000140400157: mov     rsp, [rsp+20h+var_10]
 * 000000014040015C: mov     rcx, rsi
 * 000000014040015F: call    HalPerformEndOfInterrupt
 * 0000000140400164: mov     rcx, gs:20h
 * 000000014040016D: cmp     byte ptr [rcx+20h], 1
 * 0000000140400171: ja      short loc_1404001ED
 * 0000000140400173: rdtsc
 * 0000000140400175: shl     rdx, 20h
 * 0000000140400179: or      rax, rdx
 * 000000014040017C: sub     rax, [rcx+7EC0h]
 * 0000000140400183: add     [rcx+7F38h], rax
 * 000000014040018A: add     [rcx+7EC0h], rax
 * 0000000140400191: mov     r8, rax
 * 0000000140400194: mov     rax, [rcx+8]
 * 0000000140400198: test    byte ptr [rax+2], 72h
 * 000000014040019C: jz      short loc_1404001B1
 * 000000014040019E: xor     edx, edx
 * 00000001404001A0: call    KiBeginThreadAccountingPeriod
 * 00000001404001A5: mov     rcx, gs:20h
 * 00000001404001AE: inc     byte ptr [rcx+20h]
 * 00000001404001B1: mov     dl, [rcx+6]
 * 00000001404001B4: and     byte ptr [rcx+6], 0
 * 00000001404001B8: cmp     byte ptr [rcx+7], 0
 * 00000001404001BC: jnz     short loc_1404001ED
 * 00000001404001BE: test    dl, dl
 * 00000001404001C0: jz      short loc_1404001ED
 * 00000001404001C2: cmp     byte ptr [rbp-57h], 2
 * 00000001404001C6: jnb     short loc_1404001D3
 * 00000001404001C8: and     byte ptr [rcx+20h], 0
 * 00000001404001CC: call    KiDpcInterruptBypass
 * 00000001404001D1: jmp     short loc_1404001F0
 * 00000001404001D3: mov     ecx, 2
 * 00000001404001D8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404001DF: nop     dword ptr [rax+rax+00h]
 * 00000001404001E4: mov     rcx, gs:20h
 * 00000001404001ED: dec     byte ptr [rcx+20h]
 * 00000001404001F0: movzx   ecx, byte ptr [rbp-57h]
 * 00000001404001F4: cmp     cs:KiIrqlFlags, 0
 * 00000001404001FB: jz      short loc_140400204
 * 00000001404001FD: call    KzSetIrqlUnsafe
 * 0000000140400202: jmp     short loc_140400208
 * 0000000140400204: mov     cr8, rcx
 * 0000000140400208: mov     rsi, [rbp+0D0h]
 * 000000014040020F: test    byte ptr [rbp+0F0h], 1
 * 0000000140400216: jz      loc_1404004B8
 * 000000014040021C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140400223: jz      short loc_140400228
 * 0000000140400225: stac
 * 0000000140400228: mov     rcx, gs:188h
 * 0000000140400231: test    byte ptr [rcx+0C2h], 3
 * 0000000140400238: jz      short loc_140400255
 * 000000014040023A: mov     ecx, 1
 * 000000014040023F: mov     cr8, rcx
 * 0000000140400243: sti
 * 0000000140400244: call    KiInitiateUserApc
 * 0000000140400249: cli
 * 000000014040024A: mov     ecx, 0
 * 000000014040024F: mov     cr8, rcx
 * 0000000140400253: jmp     short loc_140400228
 * 0000000140400255: test    byte ptr gs:86Ch, 2
 * 000000014040025E: jz      short loc_140400267
 * 0000000140400260: xor     ecx, ecx
 * 0000000140400262: call    KiUpdateStibpPairing
 * 0000000140400267: mov     rcx, gs:188h
 * 0000000140400270: test    dword ptr [rcx], 8000000h
 * 0000000140400276: jz      short loc_14040027D
 * 0000000140400278: call    KiRestoreSetContextState
 * 000000014040027D: mov     rcx, gs:188h
 * 0000000140400286: test    dword ptr [rcx], 40010000h
 * 000000014040028C: jz      short loc_1404002A2
 * 000000014040028E: test    byte ptr [rcx+2], 1
 * 0000000140400292: jz      short loc_1404002A2
 * 0000000140400294: call    KiCopyCounters
 * 0000000140400299: mov     rcx, gs:188h
 * 00000001404002A2: ldmxcsr dword ptr [rbp-54h]
 * 00000001404002A6: cmp     word ptr [rbp+80h], 0
 * 00000001404002AE: jz      short loc_1404002B5
 * 00000001404002B0: call    KiRestoreDebugRegisterState
 * 00000001404002B5: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404002B9: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404002BD: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404002C1: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404002C5: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404002C9: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404002CD: mov     r11, [rbp-20h]
 * 00000001404002D1: mov     r10, [rbp-28h]
 * 00000001404002D5: mov     r9, [rbp-30h]
 * 00000001404002D9: mov     r8, [rbp-38h]
 * 00000001404002DD: mov     byte ptr gs:856h, 0
 * 00000001404002E6: movzx   eax, word ptr gs:86Ah
 * 00000001404002EF: cmp     gs:864h, ax
 * 00000001404002F8: jz      short loc_14040030C
 * 00000001404002FA: mov     gs:864h, ax
 * 0000000140400303: mov     ecx, 48h ; 'H'
 * 0000000140400308: xor     edx, edx
 * 000000014040030A: wrmsr
 * 000000014040030C: btr     word ptr gs:860h, 2
 * 0000000140400317: jnb     short loc_140400327
 * 0000000140400319: mov     eax, 1
 * 000000014040031E: xor     edx, edx
 * 0000000140400320: mov     ecx, 49h ; 'I'
 * 0000000140400325: wrmsr
 * 0000000140400327: btr     word ptr gs:860h, 5
 * 0000000140400332: jnb     loc_14040045D
 * 0000000140400338: call    loc_14040044B
 * 000000014040033D: add     rsp, 8
 * 0000000140400341: call    loc_140400454
 * 0000000140400346: add     rsp, 8
 * 000000014040034A: call    loc_14040033D
 * 000000014040034F: add     rsp, 8
 * 0000000140400353: call    loc_140400346
 * 0000000140400358: add     rsp, 8
 * 000000014040035C: call    loc_14040034F
 * 0000000140400361: add     rsp, 8
 * 0000000140400365: call    loc_140400358
 * 000000014040036A: add     rsp, 8
 * 000000014040036E: call    loc_140400361
 * 0000000140400373: add     rsp, 8
 * 0000000140400377: call    loc_14040036A
 * 000000014040037C: add     rsp, 8
 * 0000000140400380: call    loc_140400373
 * 0000000140400385: add     rsp, 8
 * 0000000140400389: call    loc_14040037C
 * 000000014040038E: add     rsp, 8
 * 0000000140400392: call    loc_140400385
 * 0000000140400397: add     rsp, 8
 * 000000014040039B: call    loc_14040038E
 * 00000001404003A0: add     rsp, 8
 * 00000001404003A4: call    loc_140400397
 * 00000001404003A9: add     rsp, 8
 * 00000001404003AD: call    loc_1404003A0
 * 00000001404003B2: add     rsp, 8
 * 00000001404003B6: call    loc_1404003A9
 * 00000001404003BB: add     rsp, 8
 * 00000001404003BF: call    loc_1404003B2
 * 00000001404003C4: add     rsp, 8
 * 00000001404003C8: call    loc_1404003BB
 * 00000001404003CD: add     rsp, 8
 * 00000001404003D1: call    loc_1404003C4
 * 00000001404003D6: add     rsp, 8
 * 00000001404003DA: call    loc_1404003CD
 * 00000001404003DF: add     rsp, 8
 * 00000001404003E3: call    loc_1404003D6
 * 00000001404003E8: add     rsp, 8
 * 00000001404003EC: call    loc_1404003DF
 * 00000001404003F1: add     rsp, 8
 * 00000001404003F5: call    loc_1404003E8
 * 00000001404003FA: add     rsp, 8
 * 00000001404003FE: call    loc_1404003F1
 * 0000000140400403: add     rsp, 8
 * 0000000140400407: call    loc_1404003FA
 * 000000014040040C: add     rsp, 8
 * 0000000140400410: call    loc_140400403
 * 0000000140400415: add     rsp, 8
 * 0000000140400419: call    loc_14040040C
 * 000000014040041E: add     rsp, 8
 * 0000000140400422: call    loc_140400415
 * 0000000140400427: add     rsp, 8
 * 000000014040042B: call    loc_14040041E
 * 0000000140400430: add     rsp, 8
 * 0000000140400434: call    loc_140400427
 * 0000000140400439: add     rsp, 8
 * 000000014040043D: call    loc_140400430
 * 0000000140400442: add     rsp, 8
 * 0000000140400446: call    loc_140400439
 * 000000014040044B: add     rsp, 8
 * 000000014040044F: call    loc_140400442
 * 0000000140400454: add     rsp, 8
 * 0000000140400458: mov     eax, 0DADAh
 * 000000014040045D: test    word ptr gs:860h, 80h
 * 0000000140400468: jz      short loc_140400476
 * 000000014040046A: xor     eax, eax
 * 000000014040046C: xor     edx, edx
 * 000000014040046E: mov     ecx, 1
 * 0000000140400473: div     rcx
 * 0000000140400476: mov     rdx, [rbp-40h]
 * 000000014040047A: mov     rcx, [rbp-48h]
 * 000000014040047E: mov     rax, [rbp-50h]
 * 0000000140400482: mov     rsp, rbp
 * 0000000140400485: mov     rbp, [rbp+0D8h]
 * 000000014040048C: add     rsp, 0E8h
 * 0000000140400493: test    cs:KiKvaShadow, 1
 * 000000014040049A: jz      short loc_1404004A1
 * 000000014040049C: jmp     KiKernelExit
 * 00000001404004A1: test    word ptr gs:860h, 100h
 * 00000001404004AC: jz      short loc_1404004B3
 * 00000001404004AE: verw    [rsp-1C8h+arg_1E0]
 * 00000001404004B3: swapgs
 * 00000001404004B6: iretq
 * 00000001404004B8: ldmxcsr dword ptr [rbp-54h]
 * 00000001404004BC: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404004C0: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404004C4: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404004C8: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404004CC: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404004D0: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404004D4: mov     r11, [rbp-20h]
 * 00000001404004D8: mov     r10, [rbp-28h]
 * 00000001404004DC: mov     r9, [rbp-30h]
 * 00000001404004E0: mov     r8, [rbp-38h]
 * 00000001404004E4: mov     rdx, [rbp-40h]
 * 00000001404004E8: mov     rcx, [rbp-48h]
 * 00000001404004EC: mov     rax, [rbp-50h]
 * 00000001404004F0: mov     rsp, rbp
 * 00000001404004F3: mov     rbp, [rbp+0D8h]
 * 00000001404004FA: add     rsp, 0E8h
 * 0000000140400501: iretq
 */
