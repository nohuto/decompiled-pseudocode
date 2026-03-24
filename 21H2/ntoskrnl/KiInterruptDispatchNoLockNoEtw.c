/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x140400720
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x140288A40 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402914D0 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x140293E90 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1403FFE30 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140400720 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x140403520 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405CB0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512C40 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x140400720
 * Reason: Hex-Rays returned no pseudocode for 0x140400720
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140400720: mov     rdx, rsp
 * 0000000140400723: mov     rcx, gs:8758h
 * 000000014040072C: lea     rax, [rcx-6000h]
 * 0000000140400733: cmp     rax, rsp
 * 0000000140400736: ja      short loc_14040073D
 * 0000000140400738: cmp     rsp, rcx
 * 000000014040073B: jb      short loc_140400749
 * 000000014040073D: cmp     cs:KiBugCheckActive, 0
 * 0000000140400744: jnz     short loc_140400749
 * 0000000140400746: mov     rsp, rcx
 * 0000000140400749: sub     rsp, 20h
 * 000000014040074D: mov     [rsp+20h+var_10], rdx
 * 0000000140400752: call    KiInterruptSubDispatchNoLockNoEtw
 * 0000000140400757: mov     rsp, [rsp+20h+var_10]
 * 000000014040075C: mov     rcx, rsi
 * 000000014040075F: call    HalPerformEndOfInterrupt
 * 0000000140400764: mov     rcx, gs:20h
 * 000000014040076D: cmp     byte ptr [rcx+20h], 1
 * 0000000140400771: ja      short loc_1404007ED
 * 0000000140400773: rdtsc
 * 0000000140400775: shl     rdx, 20h
 * 0000000140400779: or      rax, rdx
 * 000000014040077C: sub     rax, [rcx+7EC0h]
 * 0000000140400783: add     [rcx+7F38h], rax
 * 000000014040078A: add     [rcx+7EC0h], rax
 * 0000000140400791: mov     r8, rax
 * 0000000140400794: mov     rax, [rcx+8]
 * 0000000140400798: test    byte ptr [rax+2], 72h
 * 000000014040079C: jz      short loc_1404007B1
 * 000000014040079E: xor     edx, edx
 * 00000001404007A0: call    KiBeginThreadAccountingPeriod
 * 00000001404007A5: mov     rcx, gs:20h
 * 00000001404007AE: inc     byte ptr [rcx+20h]
 * 00000001404007B1: mov     dl, [rcx+6]
 * 00000001404007B4: and     byte ptr [rcx+6], 0
 * 00000001404007B8: cmp     byte ptr [rcx+7], 0
 * 00000001404007BC: jnz     short loc_1404007ED
 * 00000001404007BE: test    dl, dl
 * 00000001404007C0: jz      short loc_1404007ED
 * 00000001404007C2: cmp     byte ptr [rbp-57h], 2
 * 00000001404007C6: jnb     short loc_1404007D3
 * 00000001404007C8: and     byte ptr [rcx+20h], 0
 * 00000001404007CC: call    KiDpcInterruptBypass
 * 00000001404007D1: jmp     short loc_1404007F0
 * 00000001404007D3: mov     ecx, 2
 * 00000001404007D8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404007DF: nop     dword ptr [rax+rax+00h]
 * 00000001404007E4: mov     rcx, gs:20h
 * 00000001404007ED: dec     byte ptr [rcx+20h]
 * 00000001404007F0: movzx   ecx, byte ptr [rbp-57h]
 * 00000001404007F4: cmp     cs:KiIrqlFlags, 0
 * 00000001404007FB: jz      short loc_140400804
 * 00000001404007FD: call    KzSetIrqlUnsafe
 * 0000000140400802: jmp     short loc_140400808
 * 0000000140400804: mov     cr8, rcx
 * 0000000140400808: mov     rsi, [rbp+0D0h]
 * 000000014040080F: test    byte ptr [rbp+0F0h], 1
 * 0000000140400816: jz      loc_140400AB8
 * 000000014040081C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140400823: jz      short loc_140400828
 * 0000000140400825: stac
 * 0000000140400828: mov     rcx, gs:188h
 * 0000000140400831: test    byte ptr [rcx+0C2h], 3
 * 0000000140400838: jz      short loc_140400855
 * 000000014040083A: mov     ecx, 1
 * 000000014040083F: mov     cr8, rcx
 * 0000000140400843: sti
 * 0000000140400844: call    KiInitiateUserApc
 * 0000000140400849: cli
 * 000000014040084A: mov     ecx, 0
 * 000000014040084F: mov     cr8, rcx
 * 0000000140400853: jmp     short loc_140400828
 * 0000000140400855: test    byte ptr gs:86Ch, 2
 * 000000014040085E: jz      short loc_140400867
 * 0000000140400860: xor     ecx, ecx
 * 0000000140400862: call    KiUpdateStibpPairing
 * 0000000140400867: mov     rcx, gs:188h
 * 0000000140400870: test    dword ptr [rcx], 8000000h
 * 0000000140400876: jz      short loc_14040087D
 * 0000000140400878: call    KiRestoreSetContextState
 * 000000014040087D: mov     rcx, gs:188h
 * 0000000140400886: test    dword ptr [rcx], 40010000h
 * 000000014040088C: jz      short loc_1404008A2
 * 000000014040088E: test    byte ptr [rcx+2], 1
 * 0000000140400892: jz      short loc_1404008A2
 * 0000000140400894: call    KiCopyCounters
 * 0000000140400899: mov     rcx, gs:188h
 * 00000001404008A2: ldmxcsr dword ptr [rbp-54h]
 * 00000001404008A6: cmp     word ptr [rbp+80h], 0
 * 00000001404008AE: jz      short loc_1404008B5
 * 00000001404008B0: call    KiRestoreDebugRegisterState
 * 00000001404008B5: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404008B9: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404008BD: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404008C1: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404008C5: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404008C9: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404008CD: mov     r11, [rbp-20h]
 * 00000001404008D1: mov     r10, [rbp-28h]
 * 00000001404008D5: mov     r9, [rbp-30h]
 * 00000001404008D9: mov     r8, [rbp-38h]
 * 00000001404008DD: mov     byte ptr gs:856h, 0
 * 00000001404008E6: movzx   eax, word ptr gs:86Ah
 * 00000001404008EF: cmp     gs:864h, ax
 * 00000001404008F8: jz      short loc_14040090C
 * 00000001404008FA: mov     gs:864h, ax
 * 0000000140400903: mov     ecx, 48h ; 'H'
 * 0000000140400908: xor     edx, edx
 * 000000014040090A: wrmsr
 * 000000014040090C: btr     word ptr gs:860h, 2
 * 0000000140400917: jnb     short loc_140400927
 * 0000000140400919: mov     eax, 1
 * 000000014040091E: xor     edx, edx
 * 0000000140400920: mov     ecx, 49h ; 'I'
 * 0000000140400925: wrmsr
 * 0000000140400927: btr     word ptr gs:860h, 5
 * 0000000140400932: jnb     loc_140400A5D
 * 0000000140400938: call    loc_140400A4B
 * 000000014040093D: add     rsp, 8
 * 0000000140400941: call    loc_140400A54
 * 0000000140400946: add     rsp, 8
 * 000000014040094A: call    loc_14040093D
 * 000000014040094F: add     rsp, 8
 * 0000000140400953: call    loc_140400946
 * 0000000140400958: add     rsp, 8
 * 000000014040095C: call    loc_14040094F
 * 0000000140400961: add     rsp, 8
 * 0000000140400965: call    loc_140400958
 * 000000014040096A: add     rsp, 8
 * 000000014040096E: call    loc_140400961
 * 0000000140400973: add     rsp, 8
 * 0000000140400977: call    loc_14040096A
 * 000000014040097C: add     rsp, 8
 * 0000000140400980: call    loc_140400973
 * 0000000140400985: add     rsp, 8
 * 0000000140400989: call    loc_14040097C
 * 000000014040098E: add     rsp, 8
 * 0000000140400992: call    loc_140400985
 * 0000000140400997: add     rsp, 8
 * 000000014040099B: call    loc_14040098E
 * 00000001404009A0: add     rsp, 8
 * 00000001404009A4: call    loc_140400997
 * 00000001404009A9: add     rsp, 8
 * 00000001404009AD: call    loc_1404009A0
 * 00000001404009B2: add     rsp, 8
 * 00000001404009B6: call    loc_1404009A9
 * 00000001404009BB: add     rsp, 8
 * 00000001404009BF: call    loc_1404009B2
 * 00000001404009C4: add     rsp, 8
 * 00000001404009C8: call    loc_1404009BB
 * 00000001404009CD: add     rsp, 8
 * 00000001404009D1: call    loc_1404009C4
 * 00000001404009D6: add     rsp, 8
 * 00000001404009DA: call    loc_1404009CD
 * 00000001404009DF: add     rsp, 8
 * 00000001404009E3: call    loc_1404009D6
 * 00000001404009E8: add     rsp, 8
 * 00000001404009EC: call    loc_1404009DF
 * 00000001404009F1: add     rsp, 8
 * 00000001404009F5: call    loc_1404009E8
 * 00000001404009FA: add     rsp, 8
 * 00000001404009FE: call    loc_1404009F1
 * 0000000140400A03: add     rsp, 8
 * 0000000140400A07: call    loc_1404009FA
 * 0000000140400A0C: add     rsp, 8
 * 0000000140400A10: call    loc_140400A03
 * 0000000140400A15: add     rsp, 8
 * 0000000140400A19: call    loc_140400A0C
 * 0000000140400A1E: add     rsp, 8
 * 0000000140400A22: call    loc_140400A15
 * 0000000140400A27: add     rsp, 8
 * 0000000140400A2B: call    loc_140400A1E
 * 0000000140400A30: add     rsp, 8
 * 0000000140400A34: call    loc_140400A27
 * 0000000140400A39: add     rsp, 8
 * 0000000140400A3D: call    loc_140400A30
 * 0000000140400A42: add     rsp, 8
 * 0000000140400A46: call    loc_140400A39
 * 0000000140400A4B: add     rsp, 8
 * 0000000140400A4F: call    loc_140400A42
 * 0000000140400A54: add     rsp, 8
 * 0000000140400A58: mov     eax, 0DADAh
 * 0000000140400A5D: test    word ptr gs:860h, 80h
 * 0000000140400A68: jz      short loc_140400A76
 * 0000000140400A6A: xor     eax, eax
 * 0000000140400A6C: xor     edx, edx
 * 0000000140400A6E: mov     ecx, 1
 * 0000000140400A73: div     rcx
 * 0000000140400A76: mov     rdx, [rbp-40h]
 * 0000000140400A7A: mov     rcx, [rbp-48h]
 * 0000000140400A7E: mov     rax, [rbp-50h]
 * 0000000140400A82: mov     rsp, rbp
 * 0000000140400A85: mov     rbp, [rbp+0D8h]
 * 0000000140400A8C: add     rsp, 0E8h
 * 0000000140400A93: test    cs:KiKvaShadow, 1
 * 0000000140400A9A: jz      short loc_140400AA1
 * 0000000140400A9C: jmp     KiKernelExit
 * 0000000140400AA1: test    word ptr gs:860h, 100h
 * 0000000140400AAC: jz      short loc_140400AB3
 * 0000000140400AAE: verw    [rsp-1C8h+arg_1E0]
 * 0000000140400AB3: swapgs
 * 0000000140400AB6: iretq
 * 0000000140400AB8: ldmxcsr dword ptr [rbp-54h]
 * 0000000140400ABC: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140400AC0: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140400AC4: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140400AC8: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140400ACC: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140400AD0: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140400AD4: mov     r11, [rbp-20h]
 * 0000000140400AD8: mov     r10, [rbp-28h]
 * 0000000140400ADC: mov     r9, [rbp-30h]
 * 0000000140400AE0: mov     r8, [rbp-38h]
 * 0000000140400AE4: mov     rdx, [rbp-40h]
 * 0000000140400AE8: mov     rcx, [rbp-48h]
 * 0000000140400AEC: mov     rax, [rbp-50h]
 * 0000000140400AF0: mov     rsp, rbp
 * 0000000140400AF3: mov     rbp, [rbp+0D8h]
 * 0000000140400AFA: add     rsp, 0E8h
 * 0000000140400B01: iretq
 */
