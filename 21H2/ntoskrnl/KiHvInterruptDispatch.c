/*
 * XREFs of KiHvInterruptDispatch @ 0x1404044B0
 * Callers:
 *     KiHvInterrupt @ 0x140403600 (KiHvInterrupt.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x140288A40 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402914D0 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x140293E90 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403520 (KiInitiateUserApc.c)
 *     KiHvInterruptDispatch @ 0x1404044B0 (KiHvInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x140404CA0 (KiHvInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x140405CB0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512C40 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterruptDispatch @ 0x1404044B0
 * Reason: Hex-Rays returned no pseudocode for 0x1404044B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404044B0: mov     rdx, rsp
 * 00000001404044B3: mov     rcx, gs:8758h
 * 00000001404044BC: lea     rax, [rcx-6000h]
 * 00000001404044C3: cmp     rax, rsp
 * 00000001404044C6: ja      short loc_1404044CD
 * 00000001404044C8: cmp     rsp, rcx
 * 00000001404044CB: jb      short loc_1404044D9
 * 00000001404044CD: cmp     cs:KiBugCheckActive, 0
 * 00000001404044D4: jnz     short loc_1404044D9
 * 00000001404044D6: mov     rsp, rcx
 * 00000001404044D9: sub     rsp, 20h
 * 00000001404044DD: mov     [rsp+20h+var_10], rdx
 * 00000001404044E2: call    KiHvInterruptSubDispatch
 * 00000001404044E7: mov     rsp, [rsp+20h+var_10]
 * 00000001404044EC: test    cs:HvlEnlightenments, 1000h
 * 00000001404044F6: jz      short loc_140404500
 * 00000001404044F8: mov     rcx, rsi
 * 00000001404044FB: call    HalPerformEndOfInterrupt
 * 0000000140404500: cli
 * 0000000140404501: mov     rcx, gs:20h
 * 000000014040450A: cmp     byte ptr [rcx+20h], 1
 * 000000014040450E: ja      short loc_14040458A
 * 0000000140404510: rdtsc
 * 0000000140404512: shl     rdx, 20h
 * 0000000140404516: or      rax, rdx
 * 0000000140404519: sub     rax, [rcx+7EC0h]
 * 0000000140404520: add     [rcx+7F38h], rax
 * 0000000140404527: add     [rcx+7EC0h], rax
 * 000000014040452E: mov     r8, rax
 * 0000000140404531: mov     rax, [rcx+8]
 * 0000000140404535: test    byte ptr [rax+2], 72h
 * 0000000140404539: jz      short loc_14040454E
 * 000000014040453B: xor     edx, edx
 * 000000014040453D: call    KiBeginThreadAccountingPeriod
 * 0000000140404542: mov     rcx, gs:20h
 * 000000014040454B: inc     byte ptr [rcx+20h]
 * 000000014040454E: mov     dl, [rcx+6]
 * 0000000140404551: and     byte ptr [rcx+6], 0
 * 0000000140404555: cmp     byte ptr [rcx+7], 0
 * 0000000140404559: jnz     short loc_14040458A
 * 000000014040455B: test    dl, dl
 * 000000014040455D: jz      short loc_14040458A
 * 000000014040455F: cmp     byte ptr [rbp-57h], 2
 * 0000000140404563: jnb     short loc_140404570
 * 0000000140404565: and     byte ptr [rcx+20h], 0
 * 0000000140404569: call    KiDpcInterruptBypass
 * 000000014040456E: jmp     short loc_14040458D
 * 0000000140404570: mov     ecx, 2
 * 0000000140404575: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014040457C: nop     dword ptr [rax+rax+00h]
 * 0000000140404581: mov     rcx, gs:20h
 * 000000014040458A: dec     byte ptr [rcx+20h]
 * 000000014040458D: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140404591: cmp     cs:KiIrqlFlags, 0
 * 0000000140404598: jz      short loc_1404045A1
 * 000000014040459A: call    KzSetIrqlUnsafe
 * 000000014040459F: jmp     short loc_1404045A5
 * 00000001404045A1: mov     cr8, rcx
 * 00000001404045A5: mov     rsi, [rbp+0D0h]
 * 00000001404045AC: cli
 * 00000001404045AD: test    byte ptr [rbp+0F0h], 1
 * 00000001404045B4: jz      loc_140404856
 * 00000001404045BA: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404045C1: jz      short loc_1404045C6
 * 00000001404045C3: stac
 * 00000001404045C6: mov     rcx, gs:188h
 * 00000001404045CF: test    byte ptr [rcx+0C2h], 3
 * 00000001404045D6: jz      short loc_1404045F3
 * 00000001404045D8: mov     ecx, 1
 * 00000001404045DD: mov     cr8, rcx
 * 00000001404045E1: sti
 * 00000001404045E2: call    KiInitiateUserApc
 * 00000001404045E7: cli
 * 00000001404045E8: mov     ecx, 0
 * 00000001404045ED: mov     cr8, rcx
 * 00000001404045F1: jmp     short loc_1404045C6
 * 00000001404045F3: test    byte ptr gs:86Ch, 2
 * 00000001404045FC: jz      short loc_140404605
 * 00000001404045FE: xor     ecx, ecx
 * 0000000140404600: call    KiUpdateStibpPairing
 * 0000000140404605: mov     rcx, gs:188h
 * 000000014040460E: test    dword ptr [rcx], 8000000h
 * 0000000140404614: jz      short loc_14040461B
 * 0000000140404616: call    KiRestoreSetContextState
 * 000000014040461B: mov     rcx, gs:188h
 * 0000000140404624: test    dword ptr [rcx], 40010000h
 * 000000014040462A: jz      short loc_140404640
 * 000000014040462C: test    byte ptr [rcx+2], 1
 * 0000000140404630: jz      short loc_140404640
 * 0000000140404632: call    KiCopyCounters
 * 0000000140404637: mov     rcx, gs:188h
 * 0000000140404640: ldmxcsr dword ptr [rbp-54h]
 * 0000000140404644: cmp     word ptr [rbp+80h], 0
 * 000000014040464C: jz      short loc_140404653
 * 000000014040464E: call    KiRestoreDebugRegisterState
 * 0000000140404653: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140404657: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014040465B: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014040465F: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140404663: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140404667: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014040466B: mov     r11, [rbp-20h]
 * 000000014040466F: mov     r10, [rbp-28h]
 * 0000000140404673: mov     r9, [rbp-30h]
 * 0000000140404677: mov     r8, [rbp-38h]
 * 000000014040467B: mov     byte ptr gs:856h, 0
 * 0000000140404684: movzx   eax, word ptr gs:86Ah
 * 000000014040468D: cmp     gs:864h, ax
 * 0000000140404696: jz      short loc_1404046AA
 * 0000000140404698: mov     gs:864h, ax
 * 00000001404046A1: mov     ecx, 48h ; 'H'
 * 00000001404046A6: xor     edx, edx
 * 00000001404046A8: wrmsr
 * 00000001404046AA: btr     word ptr gs:860h, 2
 * 00000001404046B5: jnb     short loc_1404046C5
 * 00000001404046B7: mov     eax, 1
 * 00000001404046BC: xor     edx, edx
 * 00000001404046BE: mov     ecx, 49h ; 'I'
 * 00000001404046C3: wrmsr
 * 00000001404046C5: btr     word ptr gs:860h, 5
 * 00000001404046D0: jnb     loc_1404047FB
 * 00000001404046D6: call    loc_1404047E9
 * 00000001404046DB: add     rsp, 8
 * 00000001404046DF: call    loc_1404047F2
 * 00000001404046E4: add     rsp, 8
 * 00000001404046E8: call    loc_1404046DB
 * 00000001404046ED: add     rsp, 8
 * 00000001404046F1: call    loc_1404046E4
 * 00000001404046F6: add     rsp, 8
 * 00000001404046FA: call    loc_1404046ED
 * 00000001404046FF: add     rsp, 8
 * 0000000140404703: call    loc_1404046F6
 * 0000000140404708: add     rsp, 8
 * 000000014040470C: call    loc_1404046FF
 * 0000000140404711: add     rsp, 8
 * 0000000140404715: call    loc_140404708
 * 000000014040471A: add     rsp, 8
 * 000000014040471E: call    loc_140404711
 * 0000000140404723: add     rsp, 8
 * 0000000140404727: call    loc_14040471A
 * 000000014040472C: add     rsp, 8
 * 0000000140404730: call    loc_140404723
 * 0000000140404735: add     rsp, 8
 * 0000000140404739: call    loc_14040472C
 * 000000014040473E: add     rsp, 8
 * 0000000140404742: call    loc_140404735
 * 0000000140404747: add     rsp, 8
 * 000000014040474B: call    loc_14040473E
 * 0000000140404750: add     rsp, 8
 * 0000000140404754: call    loc_140404747
 * 0000000140404759: add     rsp, 8
 * 000000014040475D: call    loc_140404750
 * 0000000140404762: add     rsp, 8
 * 0000000140404766: call    loc_140404759
 * 000000014040476B: add     rsp, 8
 * 000000014040476F: call    loc_140404762
 * 0000000140404774: add     rsp, 8
 * 0000000140404778: call    loc_14040476B
 * 000000014040477D: add     rsp, 8
 * 0000000140404781: call    loc_140404774
 * 0000000140404786: add     rsp, 8
 * 000000014040478A: call    loc_14040477D
 * 000000014040478F: add     rsp, 8
 * 0000000140404793: call    loc_140404786
 * 0000000140404798: add     rsp, 8
 * 000000014040479C: call    loc_14040478F
 * 00000001404047A1: add     rsp, 8
 * 00000001404047A5: call    loc_140404798
 * 00000001404047AA: add     rsp, 8
 * 00000001404047AE: call    loc_1404047A1
 * 00000001404047B3: add     rsp, 8
 * 00000001404047B7: call    loc_1404047AA
 * 00000001404047BC: add     rsp, 8
 * 00000001404047C0: call    loc_1404047B3
 * 00000001404047C5: add     rsp, 8
 * 00000001404047C9: call    loc_1404047BC
 * 00000001404047CE: add     rsp, 8
 * 00000001404047D2: call    loc_1404047C5
 * 00000001404047D7: add     rsp, 8
 * 00000001404047DB: call    loc_1404047CE
 * 00000001404047E0: add     rsp, 8
 * 00000001404047E4: call    loc_1404047D7
 * 00000001404047E9: add     rsp, 8
 * 00000001404047ED: call    loc_1404047E0
 * 00000001404047F2: add     rsp, 8
 * 00000001404047F6: mov     eax, 0DADAh
 * 00000001404047FB: test    word ptr gs:860h, 80h
 * 0000000140404806: jz      short loc_140404814
 * 0000000140404808: xor     eax, eax
 * 000000014040480A: xor     edx, edx
 * 000000014040480C: mov     ecx, 1
 * 0000000140404811: div     rcx
 * 0000000140404814: mov     rdx, [rbp-40h]
 * 0000000140404818: mov     rcx, [rbp-48h]
 * 000000014040481C: mov     rax, [rbp-50h]
 * 0000000140404820: mov     rsp, rbp
 * 0000000140404823: mov     rbp, [rbp+0D8h]
 * 000000014040482A: add     rsp, 0E8h
 * 0000000140404831: test    cs:KiKvaShadow, 1
 * 0000000140404838: jz      short loc_14040483F
 * 000000014040483A: jmp     KiKernelExit
 * 000000014040483F: test    word ptr gs:860h, 100h
 * 000000014040484A: jz      short loc_140404851
 * 000000014040484C: verw    [rsp-1C8h+arg_1E0]
 * 0000000140404851: swapgs
 * 0000000140404854: iretq
 * 0000000140404856: ldmxcsr dword ptr [rbp-54h]
 * 000000014040485A: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014040485E: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140404862: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140404866: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014040486A: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014040486E: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140404872: mov     r11, [rbp-20h]
 * 0000000140404876: mov     r10, [rbp-28h]
 * 000000014040487A: mov     r9, [rbp-30h]
 * 000000014040487E: mov     r8, [rbp-38h]
 * 0000000140404882: mov     rdx, [rbp-40h]
 * 0000000140404886: mov     rcx, [rbp-48h]
 * 000000014040488A: mov     rax, [rbp-50h]
 * 000000014040488E: mov     rsp, rbp
 * 0000000140404891: mov     rbp, [rbp+0D8h]
 * 0000000140404898: add     rsp, 0E8h
 * 000000014040489F: iretq
 */
