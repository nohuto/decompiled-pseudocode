/*
 * XREFs of KiHvInterruptDispatch @ 0x140401FC0
 * Callers:
 *     KiHvInterrupt @ 0x140401160 (KiHvInterrupt.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402EBA40 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402F5F40 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiHvInterruptDispatch @ 0x140401FC0 (KiHvInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x140402750 (KiHvInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1404036E0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140511100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterruptDispatch @ 0x140401FC0
 * Reason: Hex-Rays returned no pseudocode for 0x140401FC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140401FC0: mov     rdx, rsp
 * 0000000140401FC3: mov     rcx, gs:8758h
 * 0000000140401FCC: lea     rax, [rcx-6000h]
 * 0000000140401FD3: cmp     rax, rsp
 * 0000000140401FD6: ja      short loc_140401FDD
 * 0000000140401FD8: cmp     rsp, rcx
 * 0000000140401FDB: jb      short loc_140401FE9
 * 0000000140401FDD: cmp     cs:KiBugCheckActive, 0
 * 0000000140401FE4: jnz     short loc_140401FE9
 * 0000000140401FE6: mov     rsp, rcx
 * 0000000140401FE9: sub     rsp, 20h
 * 0000000140401FED: mov     [rsp+20h+var_10], rdx
 * 0000000140401FF2: call    KiHvInterruptSubDispatch
 * 0000000140401FF7: mov     rsp, [rsp+20h+var_10]
 * 0000000140401FFC: test    cs:HvlEnlightenments, 1000h
 * 0000000140402006: jz      short loc_140402010
 * 0000000140402008: mov     rcx, rsi
 * 000000014040200B: call    HalPerformEndOfInterrupt
 * 0000000140402010: cli
 * 0000000140402011: mov     rcx, gs:20h
 * 000000014040201A: cmp     byte ptr [rcx+20h], 1
 * 000000014040201E: ja      short loc_14040209A
 * 0000000140402020: rdtsc
 * 0000000140402022: shl     rdx, 20h
 * 0000000140402026: or      rax, rdx
 * 0000000140402029: sub     rax, [rcx+7EC0h]
 * 0000000140402030: add     [rcx+7F38h], rax
 * 0000000140402037: add     [rcx+7EC0h], rax
 * 000000014040203E: mov     r8, rax
 * 0000000140402041: mov     rax, [rcx+8]
 * 0000000140402045: test    byte ptr [rax+2], 72h
 * 0000000140402049: jz      short loc_14040205E
 * 000000014040204B: xor     edx, edx
 * 000000014040204D: call    KiBeginThreadAccountingPeriod
 * 0000000140402052: mov     rcx, gs:20h
 * 000000014040205B: inc     byte ptr [rcx+20h]
 * 000000014040205E: mov     dl, [rcx+6]
 * 0000000140402061: and     byte ptr [rcx+6], 0
 * 0000000140402065: cmp     byte ptr [rcx+7], 0
 * 0000000140402069: jnz     short loc_14040209A
 * 000000014040206B: test    dl, dl
 * 000000014040206D: jz      short loc_14040209A
 * 000000014040206F: cmp     byte ptr [rbp-57h], 2
 * 0000000140402073: jnb     short loc_140402080
 * 0000000140402075: and     byte ptr [rcx+20h], 0
 * 0000000140402079: call    KiDpcInterruptBypass
 * 000000014040207E: jmp     short loc_14040209D
 * 0000000140402080: mov     ecx, 2
 * 0000000140402085: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014040208C: nop     dword ptr [rax+rax+00h]
 * 0000000140402091: mov     rcx, gs:20h
 * 000000014040209A: dec     byte ptr [rcx+20h]
 * 000000014040209D: movzx   ecx, byte ptr [rbp-57h]
 * 00000001404020A1: cmp     cs:KiIrqlFlags, 0
 * 00000001404020A8: jz      short loc_1404020B1
 * 00000001404020AA: call    KzSetIrqlUnsafe
 * 00000001404020AF: jmp     short loc_1404020B5
 * 00000001404020B1: mov     cr8, rcx
 * 00000001404020B5: mov     rsi, [rbp+0D0h]
 * 00000001404020BC: cli
 * 00000001404020BD: test    byte ptr [rbp+0F0h], 1
 * 00000001404020C4: jz      loc_140402339
 * 00000001404020CA: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404020D1: jz      short loc_1404020D6
 * 00000001404020D3: stac
 * 00000001404020D6: mov     rcx, gs:188h
 * 00000001404020DF: test    byte ptr [rcx+0C2h], 3
 * 00000001404020E6: jz      short loc_140402103
 * 00000001404020E8: mov     ecx, 1
 * 00000001404020ED: mov     cr8, rcx
 * 00000001404020F1: sti
 * 00000001404020F2: call    KiInitiateUserApc
 * 00000001404020F7: cli
 * 00000001404020F8: mov     ecx, 0
 * 00000001404020FD: mov     cr8, rcx
 * 0000000140402101: jmp     short loc_1404020D6
 * 0000000140402103: test    byte ptr gs:27Eh, 2
 * 000000014040210C: jz      short loc_140402115
 * 000000014040210E: xor     ecx, ecx
 * 0000000140402110: call    KiUpdateStibpPairing
 * 0000000140402115: mov     rcx, gs:188h
 * 000000014040211E: test    dword ptr [rcx], 8000000h
 * 0000000140402124: jz      short loc_14040212B
 * 0000000140402126: call    KiRestoreSetContextState
 * 000000014040212B: mov     rcx, gs:188h
 * 0000000140402134: test    dword ptr [rcx], 40010000h
 * 000000014040213A: jz      short loc_140402150
 * 000000014040213C: test    byte ptr [rcx+2], 1
 * 0000000140402140: jz      short loc_140402150
 * 0000000140402142: call    KiCopyCounters
 * 0000000140402147: mov     rcx, gs:188h
 * 0000000140402150: ldmxcsr dword ptr [rbp-54h]
 * 0000000140402154: cmp     word ptr [rbp+80h], 0
 * 000000014040215C: jz      short loc_140402163
 * 000000014040215E: call    KiRestoreDebugRegisterState
 * 0000000140402163: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140402167: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014040216B: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014040216F: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140402173: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140402177: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014040217B: mov     r11, [rbp-20h]
 * 000000014040217F: mov     r10, [rbp-28h]
 * 0000000140402183: mov     r9, [rbp-30h]
 * 0000000140402187: mov     r8, [rbp-38h]
 * 000000014040218B: mov     byte ptr gs:853h, 0
 * 0000000140402194: movzx   eax, byte ptr gs:27Dh
 * 000000014040219D: cmp     gs:27Ah, al
 * 00000001404021A5: jz      short loc_1404021B8
 * 00000001404021A7: mov     gs:27Ah, al
 * 00000001404021AF: mov     ecx, 48h ; 'H'
 * 00000001404021B4: xor     edx, edx
 * 00000001404021B6: wrmsr
 * 00000001404021B8: btr     word ptr gs:278h, 2
 * 00000001404021C3: jnb     short loc_1404021D3
 * 00000001404021C5: mov     eax, 1
 * 00000001404021CA: xor     edx, edx
 * 00000001404021CC: mov     ecx, 49h ; 'I'
 * 00000001404021D1: wrmsr
 * 00000001404021D3: btr     word ptr gs:278h, 5
 * 00000001404021DE: jnb     loc_140402309
 * 00000001404021E4: call    loc_1404022F7
 * 00000001404021E9: add     rsp, 8
 * 00000001404021ED: call    loc_140402300
 * 00000001404021F2: add     rsp, 8
 * 00000001404021F6: call    loc_1404021E9
 * 00000001404021FB: add     rsp, 8
 * 00000001404021FF: call    loc_1404021F2
 * 0000000140402204: add     rsp, 8
 * 0000000140402208: call    loc_1404021FB
 * 000000014040220D: add     rsp, 8
 * 0000000140402211: call    loc_140402204
 * 0000000140402216: add     rsp, 8
 * 000000014040221A: call    loc_14040220D
 * 000000014040221F: add     rsp, 8
 * 0000000140402223: call    loc_140402216
 * 0000000140402228: add     rsp, 8
 * 000000014040222C: call    loc_14040221F
 * 0000000140402231: add     rsp, 8
 * 0000000140402235: call    loc_140402228
 * 000000014040223A: add     rsp, 8
 * 000000014040223E: call    loc_140402231
 * 0000000140402243: add     rsp, 8
 * 0000000140402247: call    loc_14040223A
 * 000000014040224C: add     rsp, 8
 * 0000000140402250: call    loc_140402243
 * 0000000140402255: add     rsp, 8
 * 0000000140402259: call    loc_14040224C
 * 000000014040225E: add     rsp, 8
 * 0000000140402262: call    loc_140402255
 * 0000000140402267: add     rsp, 8
 * 000000014040226B: call    loc_14040225E
 * 0000000140402270: add     rsp, 8
 * 0000000140402274: call    loc_140402267
 * 0000000140402279: add     rsp, 8
 * 000000014040227D: call    loc_140402270
 * 0000000140402282: add     rsp, 8
 * 0000000140402286: call    loc_140402279
 * 000000014040228B: add     rsp, 8
 * 000000014040228F: call    loc_140402282
 * 0000000140402294: add     rsp, 8
 * 0000000140402298: call    loc_14040228B
 * 000000014040229D: add     rsp, 8
 * 00000001404022A1: call    loc_140402294
 * 00000001404022A6: add     rsp, 8
 * 00000001404022AA: call    loc_14040229D
 * 00000001404022AF: add     rsp, 8
 * 00000001404022B3: call    loc_1404022A6
 * 00000001404022B8: add     rsp, 8
 * 00000001404022BC: call    loc_1404022AF
 * 00000001404022C1: add     rsp, 8
 * 00000001404022C5: call    loc_1404022B8
 * 00000001404022CA: add     rsp, 8
 * 00000001404022CE: call    loc_1404022C1
 * 00000001404022D3: add     rsp, 8
 * 00000001404022D7: call    loc_1404022CA
 * 00000001404022DC: add     rsp, 8
 * 00000001404022E0: call    loc_1404022D3
 * 00000001404022E5: add     rsp, 8
 * 00000001404022E9: call    loc_1404022DC
 * 00000001404022EE: add     rsp, 8
 * 00000001404022F2: call    loc_1404022E5
 * 00000001404022F7: add     rsp, 8
 * 00000001404022FB: call    loc_1404022EE
 * 0000000140402300: add     rsp, 8
 * 0000000140402304: mov     eax, 0DADAh
 * 0000000140402309: mov     rdx, [rbp-40h]
 * 000000014040230D: mov     rcx, [rbp-48h]
 * 0000000140402311: mov     rax, [rbp-50h]
 * 0000000140402315: mov     rsp, rbp
 * 0000000140402318: mov     rbp, [rbp+0D8h]
 * 000000014040231F: add     rsp, 0E8h
 * 0000000140402326: test    cs:KiKvaShadow, 1
 * 000000014040232D: jz      short loc_140402334
 * 000000014040232F: jmp     KiKernelExit
 * 0000000140402334: swapgs
 * 0000000140402337: iretq
 * 0000000140402339: ldmxcsr dword ptr [rbp-54h]
 * 000000014040233D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140402341: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140402345: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140402349: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014040234D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140402351: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140402355: mov     r11, [rbp-20h]
 * 0000000140402359: mov     r10, [rbp-28h]
 * 000000014040235D: mov     r9, [rbp-30h]
 * 0000000140402361: mov     r8, [rbp-38h]
 * 0000000140402365: mov     rdx, [rbp-40h]
 * 0000000140402369: mov     rcx, [rbp-48h]
 * 000000014040236D: mov     rax, [rbp-50h]
 * 0000000140402371: mov     rsp, rbp
 * 0000000140402374: mov     rbp, [rbp+0D8h]
 * 000000014040237B: add     rsp, 0E8h
 * 0000000140402382: iretq
 */
