/*
 * XREFs of KiInterruptDispatchNoLock @ 0x140400330
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x140288A40 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402914D0 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x140293E90 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403FFCE0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoLock @ 0x140400330 (KiInterruptDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x140403520 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405CB0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512C40 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x140400330
 * Reason: Hex-Rays returned no pseudocode for 0x140400330
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140400330: mov     rdx, rsp
 * 0000000140400333: mov     rcx, gs:8758h
 * 000000014040033C: lea     rax, [rcx-6000h]
 * 0000000140400343: cmp     rax, rsp
 * 0000000140400346: ja      short loc_14040034D
 * 0000000140400348: cmp     rsp, rcx
 * 000000014040034B: jb      short loc_140400359
 * 000000014040034D: cmp     cs:KiBugCheckActive, 0
 * 0000000140400354: jnz     short loc_140400359
 * 0000000140400356: mov     rsp, rcx
 * 0000000140400359: sub     rsp, 20h
 * 000000014040035D: mov     [rsp+20h+var_10], rdx
 * 0000000140400362: call    KiInterruptSubDispatchNoLock
 * 0000000140400367: mov     rsp, [rsp+20h+var_10]
 * 000000014040036C: mov     rcx, rsi
 * 000000014040036F: call    HalPerformEndOfInterrupt
 * 0000000140400374: mov     rcx, gs:20h
 * 000000014040037D: cmp     byte ptr [rcx+20h], 1
 * 0000000140400381: ja      short loc_1404003FD
 * 0000000140400383: rdtsc
 * 0000000140400385: shl     rdx, 20h
 * 0000000140400389: or      rax, rdx
 * 000000014040038C: sub     rax, [rcx+7EC0h]
 * 0000000140400393: add     [rcx+7F38h], rax
 * 000000014040039A: add     [rcx+7EC0h], rax
 * 00000001404003A1: mov     r8, rax
 * 00000001404003A4: mov     rax, [rcx+8]
 * 00000001404003A8: test    byte ptr [rax+2], 72h
 * 00000001404003AC: jz      short loc_1404003C1
 * 00000001404003AE: xor     edx, edx
 * 00000001404003B0: call    KiBeginThreadAccountingPeriod
 * 00000001404003B5: mov     rcx, gs:20h
 * 00000001404003BE: inc     byte ptr [rcx+20h]
 * 00000001404003C1: mov     dl, [rcx+6]
 * 00000001404003C4: and     byte ptr [rcx+6], 0
 * 00000001404003C8: cmp     byte ptr [rcx+7], 0
 * 00000001404003CC: jnz     short loc_1404003FD
 * 00000001404003CE: test    dl, dl
 * 00000001404003D0: jz      short loc_1404003FD
 * 00000001404003D2: cmp     byte ptr [rbp-57h], 2
 * 00000001404003D6: jnb     short loc_1404003E3
 * 00000001404003D8: and     byte ptr [rcx+20h], 0
 * 00000001404003DC: call    KiDpcInterruptBypass
 * 00000001404003E1: jmp     short loc_140400400
 * 00000001404003E3: mov     ecx, 2
 * 00000001404003E8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404003EF: nop     dword ptr [rax+rax+00h]
 * 00000001404003F4: mov     rcx, gs:20h
 * 00000001404003FD: dec     byte ptr [rcx+20h]
 * 0000000140400400: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140400404: cmp     cs:KiIrqlFlags, 0
 * 000000014040040B: jz      short loc_140400414
 * 000000014040040D: call    KzSetIrqlUnsafe
 * 0000000140400412: jmp     short loc_140400418
 * 0000000140400414: mov     cr8, rcx
 * 0000000140400418: mov     rsi, [rbp+0D0h]
 * 000000014040041F: test    byte ptr [rbp+0F0h], 1
 * 0000000140400426: jz      loc_1404006C8
 * 000000014040042C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140400433: jz      short loc_140400438
 * 0000000140400435: stac
 * 0000000140400438: mov     rcx, gs:188h
 * 0000000140400441: test    byte ptr [rcx+0C2h], 3
 * 0000000140400448: jz      short loc_140400465
 * 000000014040044A: mov     ecx, 1
 * 000000014040044F: mov     cr8, rcx
 * 0000000140400453: sti
 * 0000000140400454: call    KiInitiateUserApc
 * 0000000140400459: cli
 * 000000014040045A: mov     ecx, 0
 * 000000014040045F: mov     cr8, rcx
 * 0000000140400463: jmp     short loc_140400438
 * 0000000140400465: test    byte ptr gs:86Ch, 2
 * 000000014040046E: jz      short loc_140400477
 * 0000000140400470: xor     ecx, ecx
 * 0000000140400472: call    KiUpdateStibpPairing
 * 0000000140400477: mov     rcx, gs:188h
 * 0000000140400480: test    dword ptr [rcx], 8000000h
 * 0000000140400486: jz      short loc_14040048D
 * 0000000140400488: call    KiRestoreSetContextState
 * 000000014040048D: mov     rcx, gs:188h
 * 0000000140400496: test    dword ptr [rcx], 40010000h
 * 000000014040049C: jz      short loc_1404004B2
 * 000000014040049E: test    byte ptr [rcx+2], 1
 * 00000001404004A2: jz      short loc_1404004B2
 * 00000001404004A4: call    KiCopyCounters
 * 00000001404004A9: mov     rcx, gs:188h
 * 00000001404004B2: ldmxcsr dword ptr [rbp-54h]
 * 00000001404004B6: cmp     word ptr [rbp+80h], 0
 * 00000001404004BE: jz      short loc_1404004C5
 * 00000001404004C0: call    KiRestoreDebugRegisterState
 * 00000001404004C5: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404004C9: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404004CD: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404004D1: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404004D5: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404004D9: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404004DD: mov     r11, [rbp-20h]
 * 00000001404004E1: mov     r10, [rbp-28h]
 * 00000001404004E5: mov     r9, [rbp-30h]
 * 00000001404004E9: mov     r8, [rbp-38h]
 * 00000001404004ED: mov     byte ptr gs:856h, 0
 * 00000001404004F6: movzx   eax, word ptr gs:86Ah
 * 00000001404004FF: cmp     gs:864h, ax
 * 0000000140400508: jz      short loc_14040051C
 * 000000014040050A: mov     gs:864h, ax
 * 0000000140400513: mov     ecx, 48h ; 'H'
 * 0000000140400518: xor     edx, edx
 * 000000014040051A: wrmsr
 * 000000014040051C: btr     word ptr gs:860h, 2
 * 0000000140400527: jnb     short loc_140400537
 * 0000000140400529: mov     eax, 1
 * 000000014040052E: xor     edx, edx
 * 0000000140400530: mov     ecx, 49h ; 'I'
 * 0000000140400535: wrmsr
 * 0000000140400537: btr     word ptr gs:860h, 5
 * 0000000140400542: jnb     loc_14040066D
 * 0000000140400548: call    loc_14040065B
 * 000000014040054D: add     rsp, 8
 * 0000000140400551: call    loc_140400664
 * 0000000140400556: add     rsp, 8
 * 000000014040055A: call    loc_14040054D
 * 000000014040055F: add     rsp, 8
 * 0000000140400563: call    loc_140400556
 * 0000000140400568: add     rsp, 8
 * 000000014040056C: call    loc_14040055F
 * 0000000140400571: add     rsp, 8
 * 0000000140400575: call    loc_140400568
 * 000000014040057A: add     rsp, 8
 * 000000014040057E: call    loc_140400571
 * 0000000140400583: add     rsp, 8
 * 0000000140400587: call    loc_14040057A
 * 000000014040058C: add     rsp, 8
 * 0000000140400590: call    loc_140400583
 * 0000000140400595: add     rsp, 8
 * 0000000140400599: call    loc_14040058C
 * 000000014040059E: add     rsp, 8
 * 00000001404005A2: call    loc_140400595
 * 00000001404005A7: add     rsp, 8
 * 00000001404005AB: call    loc_14040059E
 * 00000001404005B0: add     rsp, 8
 * 00000001404005B4: call    loc_1404005A7
 * 00000001404005B9: add     rsp, 8
 * 00000001404005BD: call    loc_1404005B0
 * 00000001404005C2: add     rsp, 8
 * 00000001404005C6: call    loc_1404005B9
 * 00000001404005CB: add     rsp, 8
 * 00000001404005CF: call    loc_1404005C2
 * 00000001404005D4: add     rsp, 8
 * 00000001404005D8: call    loc_1404005CB
 * 00000001404005DD: add     rsp, 8
 * 00000001404005E1: call    loc_1404005D4
 * 00000001404005E6: add     rsp, 8
 * 00000001404005EA: call    loc_1404005DD
 * 00000001404005EF: add     rsp, 8
 * 00000001404005F3: call    loc_1404005E6
 * 00000001404005F8: add     rsp, 8
 * 00000001404005FC: call    loc_1404005EF
 * 0000000140400601: add     rsp, 8
 * 0000000140400605: call    loc_1404005F8
 * 000000014040060A: add     rsp, 8
 * 000000014040060E: call    loc_140400601
 * 0000000140400613: add     rsp, 8
 * 0000000140400617: call    loc_14040060A
 * 000000014040061C: add     rsp, 8
 * 0000000140400620: call    loc_140400613
 * 0000000140400625: add     rsp, 8
 * 0000000140400629: call    loc_14040061C
 * 000000014040062E: add     rsp, 8
 * 0000000140400632: call    loc_140400625
 * 0000000140400637: add     rsp, 8
 * 000000014040063B: call    loc_14040062E
 * 0000000140400640: add     rsp, 8
 * 0000000140400644: call    loc_140400637
 * 0000000140400649: add     rsp, 8
 * 000000014040064D: call    loc_140400640
 * 0000000140400652: add     rsp, 8
 * 0000000140400656: call    loc_140400649
 * 000000014040065B: add     rsp, 8
 * 000000014040065F: call    loc_140400652
 * 0000000140400664: add     rsp, 8
 * 0000000140400668: mov     eax, 0DADAh
 * 000000014040066D: test    word ptr gs:860h, 80h
 * 0000000140400678: jz      short loc_140400686
 * 000000014040067A: xor     eax, eax
 * 000000014040067C: xor     edx, edx
 * 000000014040067E: mov     ecx, 1
 * 0000000140400683: div     rcx
 * 0000000140400686: mov     rdx, [rbp-40h]
 * 000000014040068A: mov     rcx, [rbp-48h]
 * 000000014040068E: mov     rax, [rbp-50h]
 * 0000000140400692: mov     rsp, rbp
 * 0000000140400695: mov     rbp, [rbp+0D8h]
 * 000000014040069C: add     rsp, 0E8h
 * 00000001404006A3: test    cs:KiKvaShadow, 1
 * 00000001404006AA: jz      short loc_1404006B1
 * 00000001404006AC: jmp     KiKernelExit
 * 00000001404006B1: test    word ptr gs:860h, 100h
 * 00000001404006BC: jz      short loc_1404006C3
 * 00000001404006BE: verw    [rsp-1C8h+arg_1E0]
 * 00000001404006C3: swapgs
 * 00000001404006C6: iretq
 * 00000001404006C8: ldmxcsr dword ptr [rbp-54h]
 * 00000001404006CC: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404006D0: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404006D4: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404006D8: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404006DC: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404006E0: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404006E4: mov     r11, [rbp-20h]
 * 00000001404006E8: mov     r10, [rbp-28h]
 * 00000001404006EC: mov     r9, [rbp-30h]
 * 00000001404006F0: mov     r8, [rbp-38h]
 * 00000001404006F4: mov     rdx, [rbp-40h]
 * 00000001404006F8: mov     rcx, [rbp-48h]
 * 00000001404006FC: mov     rax, [rbp-50h]
 * 0000000140400700: mov     rsp, rbp
 * 0000000140400703: mov     rbp, [rbp+0D8h]
 * 000000014040070A: add     rsp, 0E8h
 * 0000000140400711: iretq
 */
