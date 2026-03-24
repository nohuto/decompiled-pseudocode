/*
 * XREFs of KiInterruptDispatch @ 0x1403FFF40
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x140288A40 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402914D0 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x140293E90 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatch @ 0x1403FFB90 (KiInterruptSubDispatch.c)
 *     KiInterruptDispatch @ 0x1403FFF40 (KiInterruptDispatch.c)
 *     KiInitiateUserApc @ 0x140403520 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405CB0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512C40 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x1403FFF40
 * Reason: Hex-Rays returned no pseudocode for 0x1403FFF40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FFF40: mov     rdx, rsp
 * 00000001403FFF43: mov     rcx, gs:8758h
 * 00000001403FFF4C: lea     rax, [rcx-6000h]
 * 00000001403FFF53: cmp     rax, rsp
 * 00000001403FFF56: ja      short loc_1403FFF5D
 * 00000001403FFF58: cmp     rsp, rcx
 * 00000001403FFF5B: jb      short loc_1403FFF69
 * 00000001403FFF5D: cmp     cs:KiBugCheckActive, 0
 * 00000001403FFF64: jnz     short loc_1403FFF69
 * 00000001403FFF66: mov     rsp, rcx
 * 00000001403FFF69: sub     rsp, 20h
 * 00000001403FFF6D: mov     [rsp+20h+var_10], rdx
 * 00000001403FFF72: call    KiInterruptSubDispatch
 * 00000001403FFF77: mov     rsp, [rsp+20h+var_10]
 * 00000001403FFF7C: mov     rcx, rsi
 * 00000001403FFF7F: call    HalPerformEndOfInterrupt
 * 00000001403FFF84: mov     rcx, gs:20h
 * 00000001403FFF8D: cmp     byte ptr [rcx+20h], 1
 * 00000001403FFF91: ja      short loc_14040000D
 * 00000001403FFF93: rdtsc
 * 00000001403FFF95: shl     rdx, 20h
 * 00000001403FFF99: or      rax, rdx
 * 00000001403FFF9C: sub     rax, [rcx+7EC0h]
 * 00000001403FFFA3: add     [rcx+7F38h], rax
 * 00000001403FFFAA: add     [rcx+7EC0h], rax
 * 00000001403FFFB1: mov     r8, rax
 * 00000001403FFFB4: mov     rax, [rcx+8]
 * 00000001403FFFB8: test    byte ptr [rax+2], 72h
 * 00000001403FFFBC: jz      short loc_1403FFFD1
 * 00000001403FFFBE: xor     edx, edx
 * 00000001403FFFC0: call    KiBeginThreadAccountingPeriod
 * 00000001403FFFC5: mov     rcx, gs:20h
 * 00000001403FFFCE: inc     byte ptr [rcx+20h]
 * 00000001403FFFD1: mov     dl, [rcx+6]
 * 00000001403FFFD4: and     byte ptr [rcx+6], 0
 * 00000001403FFFD8: cmp     byte ptr [rcx+7], 0
 * 00000001403FFFDC: jnz     short loc_14040000D
 * 00000001403FFFDE: test    dl, dl
 * 00000001403FFFE0: jz      short loc_14040000D
 * 00000001403FFFE2: cmp     byte ptr [rbp-57h], 2
 * 00000001403FFFE6: jnb     short loc_1403FFFF3
 * 00000001403FFFE8: and     byte ptr [rcx+20h], 0
 * 00000001403FFFEC: call    KiDpcInterruptBypass
 * 00000001403FFFF1: jmp     short loc_140400010
 * 00000001403FFFF3: mov     ecx, 2
 * 00000001403FFFF8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FFFFF: nop     dword ptr [rax+rax+00h]
 * 0000000140400004: mov     rcx, gs:20h
 * 000000014040000D: dec     byte ptr [rcx+20h]
 * 0000000140400010: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140400014: cmp     cs:KiIrqlFlags, 0
 * 000000014040001B: jz      short loc_140400024
 * 000000014040001D: call    KzSetIrqlUnsafe
 * 0000000140400022: jmp     short loc_140400028
 * 0000000140400024: mov     cr8, rcx
 * 0000000140400028: mov     rsi, [rbp+0D0h]
 * 000000014040002F: test    byte ptr [rbp+0F0h], 1
 * 0000000140400036: jz      loc_1404002D8
 * 000000014040003C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140400043: jz      short loc_140400048
 * 0000000140400045: stac
 * 0000000140400048: mov     rcx, gs:188h
 * 0000000140400051: test    byte ptr [rcx+0C2h], 3
 * 0000000140400058: jz      short loc_140400075
 * 000000014040005A: mov     ecx, 1
 * 000000014040005F: mov     cr8, rcx
 * 0000000140400063: sti
 * 0000000140400064: call    KiInitiateUserApc
 * 0000000140400069: cli
 * 000000014040006A: mov     ecx, 0
 * 000000014040006F: mov     cr8, rcx
 * 0000000140400073: jmp     short loc_140400048
 * 0000000140400075: test    byte ptr gs:86Ch, 2
 * 000000014040007E: jz      short loc_140400087
 * 0000000140400080: xor     ecx, ecx
 * 0000000140400082: call    KiUpdateStibpPairing
 * 0000000140400087: mov     rcx, gs:188h
 * 0000000140400090: test    dword ptr [rcx], 8000000h
 * 0000000140400096: jz      short loc_14040009D
 * 0000000140400098: call    KiRestoreSetContextState
 * 000000014040009D: mov     rcx, gs:188h
 * 00000001404000A6: test    dword ptr [rcx], 40010000h
 * 00000001404000AC: jz      short loc_1404000C2
 * 00000001404000AE: test    byte ptr [rcx+2], 1
 * 00000001404000B2: jz      short loc_1404000C2
 * 00000001404000B4: call    KiCopyCounters
 * 00000001404000B9: mov     rcx, gs:188h
 * 00000001404000C2: ldmxcsr dword ptr [rbp-54h]
 * 00000001404000C6: cmp     word ptr [rbp+80h], 0
 * 00000001404000CE: jz      short loc_1404000D5
 * 00000001404000D0: call    KiRestoreDebugRegisterState
 * 00000001404000D5: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404000D9: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404000DD: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404000E1: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404000E5: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404000E9: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404000ED: mov     r11, [rbp-20h]
 * 00000001404000F1: mov     r10, [rbp-28h]
 * 00000001404000F5: mov     r9, [rbp-30h]
 * 00000001404000F9: mov     r8, [rbp-38h]
 * 00000001404000FD: mov     byte ptr gs:856h, 0
 * 0000000140400106: movzx   eax, word ptr gs:86Ah
 * 000000014040010F: cmp     gs:864h, ax
 * 0000000140400118: jz      short loc_14040012C
 * 000000014040011A: mov     gs:864h, ax
 * 0000000140400123: mov     ecx, 48h ; 'H'
 * 0000000140400128: xor     edx, edx
 * 000000014040012A: wrmsr
 * 000000014040012C: btr     word ptr gs:860h, 2
 * 0000000140400137: jnb     short loc_140400147
 * 0000000140400139: mov     eax, 1
 * 000000014040013E: xor     edx, edx
 * 0000000140400140: mov     ecx, 49h ; 'I'
 * 0000000140400145: wrmsr
 * 0000000140400147: btr     word ptr gs:860h, 5
 * 0000000140400152: jnb     loc_14040027D
 * 0000000140400158: call    loc_14040026B
 * 000000014040015D: add     rsp, 8
 * 0000000140400161: call    loc_140400274
 * 0000000140400166: add     rsp, 8
 * 000000014040016A: call    loc_14040015D
 * 000000014040016F: add     rsp, 8
 * 0000000140400173: call    loc_140400166
 * 0000000140400178: add     rsp, 8
 * 000000014040017C: call    loc_14040016F
 * 0000000140400181: add     rsp, 8
 * 0000000140400185: call    loc_140400178
 * 000000014040018A: add     rsp, 8
 * 000000014040018E: call    loc_140400181
 * 0000000140400193: add     rsp, 8
 * 0000000140400197: call    loc_14040018A
 * 000000014040019C: add     rsp, 8
 * 00000001404001A0: call    loc_140400193
 * 00000001404001A5: add     rsp, 8
 * 00000001404001A9: call    loc_14040019C
 * 00000001404001AE: add     rsp, 8
 * 00000001404001B2: call    loc_1404001A5
 * 00000001404001B7: add     rsp, 8
 * 00000001404001BB: call    loc_1404001AE
 * 00000001404001C0: add     rsp, 8
 * 00000001404001C4: call    loc_1404001B7
 * 00000001404001C9: add     rsp, 8
 * 00000001404001CD: call    loc_1404001C0
 * 00000001404001D2: add     rsp, 8
 * 00000001404001D6: call    loc_1404001C9
 * 00000001404001DB: add     rsp, 8
 * 00000001404001DF: call    loc_1404001D2
 * 00000001404001E4: add     rsp, 8
 * 00000001404001E8: call    loc_1404001DB
 * 00000001404001ED: add     rsp, 8
 * 00000001404001F1: call    loc_1404001E4
 * 00000001404001F6: add     rsp, 8
 * 00000001404001FA: call    loc_1404001ED
 * 00000001404001FF: add     rsp, 8
 * 0000000140400203: call    loc_1404001F6
 * 0000000140400208: add     rsp, 8
 * 000000014040020C: call    loc_1404001FF
 * 0000000140400211: add     rsp, 8
 * 0000000140400215: call    loc_140400208
 * 000000014040021A: add     rsp, 8
 * 000000014040021E: call    loc_140400211
 * 0000000140400223: add     rsp, 8
 * 0000000140400227: call    loc_14040021A
 * 000000014040022C: add     rsp, 8
 * 0000000140400230: call    loc_140400223
 * 0000000140400235: add     rsp, 8
 * 0000000140400239: call    loc_14040022C
 * 000000014040023E: add     rsp, 8
 * 0000000140400242: call    loc_140400235
 * 0000000140400247: add     rsp, 8
 * 000000014040024B: call    loc_14040023E
 * 0000000140400250: add     rsp, 8
 * 0000000140400254: call    loc_140400247
 * 0000000140400259: add     rsp, 8
 * 000000014040025D: call    loc_140400250
 * 0000000140400262: add     rsp, 8
 * 0000000140400266: call    loc_140400259
 * 000000014040026B: add     rsp, 8
 * 000000014040026F: call    loc_140400262
 * 0000000140400274: add     rsp, 8
 * 0000000140400278: mov     eax, 0DADAh
 * 000000014040027D: test    word ptr gs:860h, 80h
 * 0000000140400288: jz      short loc_140400296
 * 000000014040028A: xor     eax, eax
 * 000000014040028C: xor     edx, edx
 * 000000014040028E: mov     ecx, 1
 * 0000000140400293: div     rcx
 * 0000000140400296: mov     rdx, [rbp-40h]
 * 000000014040029A: mov     rcx, [rbp-48h]
 * 000000014040029E: mov     rax, [rbp-50h]
 * 00000001404002A2: mov     rsp, rbp
 * 00000001404002A5: mov     rbp, [rbp+0D8h]
 * 00000001404002AC: add     rsp, 0E8h
 * 00000001404002B3: test    cs:KiKvaShadow, 1
 * 00000001404002BA: jz      short loc_1404002C1
 * 00000001404002BC: jmp     KiKernelExit
 * 00000001404002C1: test    word ptr gs:860h, 100h
 * 00000001404002CC: jz      short loc_1404002D3
 * 00000001404002CE: verw    [rsp-1C8h+arg_1E0]
 * 00000001404002D3: swapgs
 * 00000001404002D6: iretq
 * 00000001404002D8: ldmxcsr dword ptr [rbp-54h]
 * 00000001404002DC: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404002E0: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404002E4: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404002E8: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404002EC: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404002F0: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404002F4: mov     r11, [rbp-20h]
 * 00000001404002F8: mov     r10, [rbp-28h]
 * 00000001404002FC: mov     r9, [rbp-30h]
 * 0000000140400300: mov     r8, [rbp-38h]
 * 0000000140400304: mov     rdx, [rbp-40h]
 * 0000000140400308: mov     rcx, [rbp-48h]
 * 000000014040030C: mov     rax, [rbp-50h]
 * 0000000140400310: mov     rsp, rbp
 * 0000000140400313: mov     rbp, [rbp+0D8h]
 * 000000014040031A: add     rsp, 0E8h
 * 0000000140400321: iretq
 */
