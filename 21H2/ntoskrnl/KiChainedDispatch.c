/*
 * XREFs of KiChainedDispatch @ 0x1403FF7A0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x140205BE0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x14020F440 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x140211E00 (HalRequestSoftwareInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1403FF7A0 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x1403FFB90 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405E90 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512E80 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x1403FF7A0
 * Reason: Hex-Rays returned no pseudocode for 0x1403FF7A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FF7A0: mov     rdx, rsp
 * 00000001403FF7A3: mov     rcx, gs:8758h
 * 00000001403FF7AC: lea     rax, [rcx-6000h]
 * 00000001403FF7B3: cmp     rax, rsp
 * 00000001403FF7B6: ja      short loc_1403FF7BD
 * 00000001403FF7B8: cmp     rsp, rcx
 * 00000001403FF7BB: jb      short loc_1403FF7C9
 * 00000001403FF7BD: cmp     cs:KiBugCheckActive, 0
 * 00000001403FF7C4: jnz     short loc_1403FF7C9
 * 00000001403FF7C6: mov     rsp, rcx
 * 00000001403FF7C9: sub     rsp, 20h
 * 00000001403FF7CD: mov     [rsp+20h+var_10], rdx
 * 00000001403FF7D2: call    KiScanInterruptObjectList
 * 00000001403FF7D7: mov     rsp, [rsp+20h+var_10]
 * 00000001403FF7DC: mov     rcx, rsi
 * 00000001403FF7DF: call    HalPerformEndOfInterrupt
 * 00000001403FF7E4: mov     rcx, gs:20h
 * 00000001403FF7ED: cmp     byte ptr [rcx+20h], 1
 * 00000001403FF7F1: ja      short loc_1403FF86D
 * 00000001403FF7F3: rdtsc
 * 00000001403FF7F5: shl     rdx, 20h
 * 00000001403FF7F9: or      rax, rdx
 * 00000001403FF7FC: sub     rax, [rcx+7EC0h]
 * 00000001403FF803: add     [rcx+7F38h], rax
 * 00000001403FF80A: add     [rcx+7EC0h], rax
 * 00000001403FF811: mov     r8, rax
 * 00000001403FF814: mov     rax, [rcx+8]
 * 00000001403FF818: test    byte ptr [rax+2], 72h
 * 00000001403FF81C: jz      short loc_1403FF831
 * 00000001403FF81E: xor     edx, edx
 * 00000001403FF820: call    KiBeginThreadAccountingPeriod
 * 00000001403FF825: mov     rcx, gs:20h
 * 00000001403FF82E: inc     byte ptr [rcx+20h]
 * 00000001403FF831: mov     dl, [rcx+6]
 * 00000001403FF834: and     byte ptr [rcx+6], 0
 * 00000001403FF838: cmp     byte ptr [rcx+7], 0
 * 00000001403FF83C: jnz     short loc_1403FF86D
 * 00000001403FF83E: test    dl, dl
 * 00000001403FF840: jz      short loc_1403FF86D
 * 00000001403FF842: cmp     byte ptr [rbp-57h], 2
 * 00000001403FF846: jnb     short loc_1403FF853
 * 00000001403FF848: and     byte ptr [rcx+20h], 0
 * 00000001403FF84C: call    KiDpcInterruptBypass
 * 00000001403FF851: jmp     short loc_1403FF870
 * 00000001403FF853: mov     ecx, 2
 * 00000001403FF858: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FF85F: nop     dword ptr [rax+rax+00h]
 * 00000001403FF864: mov     rcx, gs:20h
 * 00000001403FF86D: dec     byte ptr [rcx+20h]
 * 00000001403FF870: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403FF874: cmp     cs:KiIrqlFlags, 0
 * 00000001403FF87B: jz      short loc_1403FF884
 * 00000001403FF87D: call    KzSetIrqlUnsafe
 * 00000001403FF882: jmp     short loc_1403FF888
 * 00000001403FF884: mov     cr8, rcx
 * 00000001403FF888: mov     rsi, [rbp+0D0h]
 * 00000001403FF88F: test    byte ptr [rbp+0F0h], 1
 * 00000001403FF896: jz      loc_1403FFB38
 * 00000001403FF89C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FF8A3: jz      short loc_1403FF8A8
 * 00000001403FF8A5: stac
 * 00000001403FF8A8: mov     rcx, gs:188h
 * 00000001403FF8B1: test    byte ptr [rcx+0C2h], 3
 * 00000001403FF8B8: jz      short loc_1403FF8D5
 * 00000001403FF8BA: mov     ecx, 1
 * 00000001403FF8BF: mov     cr8, rcx
 * 00000001403FF8C3: sti
 * 00000001403FF8C4: call    KiInitiateUserApc
 * 00000001403FF8C9: cli
 * 00000001403FF8CA: mov     ecx, 0
 * 00000001403FF8CF: mov     cr8, rcx
 * 00000001403FF8D3: jmp     short loc_1403FF8A8
 * 00000001403FF8D5: test    byte ptr gs:86Ch, 2
 * 00000001403FF8DE: jz      short loc_1403FF8E7
 * 00000001403FF8E0: xor     ecx, ecx
 * 00000001403FF8E2: call    KiUpdateStibpPairing
 * 00000001403FF8E7: mov     rcx, gs:188h
 * 00000001403FF8F0: test    dword ptr [rcx], 8000000h
 * 00000001403FF8F6: jz      short loc_1403FF8FD
 * 00000001403FF8F8: call    KiRestoreSetContextState
 * 00000001403FF8FD: mov     rcx, gs:188h
 * 00000001403FF906: test    dword ptr [rcx], 40010000h
 * 00000001403FF90C: jz      short loc_1403FF922
 * 00000001403FF90E: test    byte ptr [rcx+2], 1
 * 00000001403FF912: jz      short loc_1403FF922
 * 00000001403FF914: call    KiCopyCounters
 * 00000001403FF919: mov     rcx, gs:188h
 * 00000001403FF922: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FF926: cmp     word ptr [rbp+80h], 0
 * 00000001403FF92E: jz      short loc_1403FF935
 * 00000001403FF930: call    KiRestoreDebugRegisterState
 * 00000001403FF935: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FF939: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FF93D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FF941: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FF945: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FF949: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FF94D: mov     r11, [rbp-20h]
 * 00000001403FF951: mov     r10, [rbp-28h]
 * 00000001403FF955: mov     r9, [rbp-30h]
 * 00000001403FF959: mov     r8, [rbp-38h]
 * 00000001403FF95D: mov     byte ptr gs:856h, 0
 * 00000001403FF966: movzx   eax, word ptr gs:86Ah
 * 00000001403FF96F: cmp     gs:864h, ax
 * 00000001403FF978: jz      short loc_1403FF98C
 * 00000001403FF97A: mov     gs:864h, ax
 * 00000001403FF983: mov     ecx, 48h ; 'H'
 * 00000001403FF988: xor     edx, edx
 * 00000001403FF98A: wrmsr
 * 00000001403FF98C: btr     word ptr gs:860h, 2
 * 00000001403FF997: jnb     short loc_1403FF9A7
 * 00000001403FF999: mov     eax, 1
 * 00000001403FF99E: xor     edx, edx
 * 00000001403FF9A0: mov     ecx, 49h ; 'I'
 * 00000001403FF9A5: wrmsr
 * 00000001403FF9A7: btr     word ptr gs:860h, 5
 * 00000001403FF9B2: jnb     loc_1403FFADD
 * 00000001403FF9B8: call    loc_1403FFACB
 * 00000001403FF9BD: add     rsp, 8
 * 00000001403FF9C1: call    loc_1403FFAD4
 * 00000001403FF9C6: add     rsp, 8
 * 00000001403FF9CA: call    loc_1403FF9BD
 * 00000001403FF9CF: add     rsp, 8
 * 00000001403FF9D3: call    loc_1403FF9C6
 * 00000001403FF9D8: add     rsp, 8
 * 00000001403FF9DC: call    loc_1403FF9CF
 * 00000001403FF9E1: add     rsp, 8
 * 00000001403FF9E5: call    loc_1403FF9D8
 * 00000001403FF9EA: add     rsp, 8
 * 00000001403FF9EE: call    loc_1403FF9E1
 * 00000001403FF9F3: add     rsp, 8
 * 00000001403FF9F7: call    loc_1403FF9EA
 * 00000001403FF9FC: add     rsp, 8
 * 00000001403FFA00: call    loc_1403FF9F3
 * 00000001403FFA05: add     rsp, 8
 * 00000001403FFA09: call    loc_1403FF9FC
 * 00000001403FFA0E: add     rsp, 8
 * 00000001403FFA12: call    loc_1403FFA05
 * 00000001403FFA17: add     rsp, 8
 * 00000001403FFA1B: call    loc_1403FFA0E
 * 00000001403FFA20: add     rsp, 8
 * 00000001403FFA24: call    loc_1403FFA17
 * 00000001403FFA29: add     rsp, 8
 * 00000001403FFA2D: call    loc_1403FFA20
 * 00000001403FFA32: add     rsp, 8
 * 00000001403FFA36: call    loc_1403FFA29
 * 00000001403FFA3B: add     rsp, 8
 * 00000001403FFA3F: call    loc_1403FFA32
 * 00000001403FFA44: add     rsp, 8
 * 00000001403FFA48: call    loc_1403FFA3B
 * 00000001403FFA4D: add     rsp, 8
 * 00000001403FFA51: call    loc_1403FFA44
 * 00000001403FFA56: add     rsp, 8
 * 00000001403FFA5A: call    loc_1403FFA4D
 * 00000001403FFA5F: add     rsp, 8
 * 00000001403FFA63: call    loc_1403FFA56
 * 00000001403FFA68: add     rsp, 8
 * 00000001403FFA6C: call    loc_1403FFA5F
 * 00000001403FFA71: add     rsp, 8
 * 00000001403FFA75: call    loc_1403FFA68
 * 00000001403FFA7A: add     rsp, 8
 * 00000001403FFA7E: call    loc_1403FFA71
 * 00000001403FFA83: add     rsp, 8
 * 00000001403FFA87: call    loc_1403FFA7A
 * 00000001403FFA8C: add     rsp, 8
 * 00000001403FFA90: call    loc_1403FFA83
 * 00000001403FFA95: add     rsp, 8
 * 00000001403FFA99: call    loc_1403FFA8C
 * 00000001403FFA9E: add     rsp, 8
 * 00000001403FFAA2: call    loc_1403FFA95
 * 00000001403FFAA7: add     rsp, 8
 * 00000001403FFAAB: call    loc_1403FFA9E
 * 00000001403FFAB0: add     rsp, 8
 * 00000001403FFAB4: call    loc_1403FFAA7
 * 00000001403FFAB9: add     rsp, 8
 * 00000001403FFABD: call    loc_1403FFAB0
 * 00000001403FFAC2: add     rsp, 8
 * 00000001403FFAC6: call    loc_1403FFAB9
 * 00000001403FFACB: add     rsp, 8
 * 00000001403FFACF: call    loc_1403FFAC2
 * 00000001403FFAD4: add     rsp, 8
 * 00000001403FFAD8: mov     eax, 0DADAh
 * 00000001403FFADD: test    word ptr gs:860h, 80h
 * 00000001403FFAE8: jz      short loc_1403FFAF6
 * 00000001403FFAEA: xor     eax, eax
 * 00000001403FFAEC: xor     edx, edx
 * 00000001403FFAEE: mov     ecx, 1
 * 00000001403FFAF3: div     rcx
 * 00000001403FFAF6: mov     rdx, [rbp-40h]
 * 00000001403FFAFA: mov     rcx, [rbp-48h]
 * 00000001403FFAFE: mov     rax, [rbp-50h]
 * 00000001403FFB02: mov     rsp, rbp
 * 00000001403FFB05: mov     rbp, [rbp+0D8h]
 * 00000001403FFB0C: add     rsp, 0E8h
 * 00000001403FFB13: test    cs:KiKvaShadow, 1
 * 00000001403FFB1A: jz      short loc_1403FFB21
 * 00000001403FFB1C: jmp     KiKernelExit
 * 00000001403FFB21: test    word ptr gs:860h, 100h
 * 00000001403FFB2C: jz      short loc_1403FFB33
 * 00000001403FFB2E: verw    [rsp-1C8h+arg_1E0]
 * 00000001403FFB33: swapgs
 * 00000001403FFB36: iretq
 * 00000001403FFB38: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FFB3C: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FFB40: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FFB44: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FFB48: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FFB4C: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FFB50: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FFB54: mov     r11, [rbp-20h]
 * 00000001403FFB58: mov     r10, [rbp-28h]
 * 00000001403FFB5C: mov     r9, [rbp-30h]
 * 00000001403FFB60: mov     r8, [rbp-38h]
 * 00000001403FFB64: mov     rdx, [rbp-40h]
 * 00000001403FFB68: mov     rcx, [rbp-48h]
 * 00000001403FFB6C: mov     rax, [rbp-50h]
 * 00000001403FFB70: mov     rsp, rbp
 * 00000001403FFB73: mov     rbp, [rbp+0D8h]
 * 00000001403FFB7A: add     rsp, 0E8h
 * 00000001403FFB81: iretq
 */
