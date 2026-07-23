/*
 * XREFs of KiInterruptDispatchNoLock @ 0x140400510
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x140205BE0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x14020F440 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x140211E00 (HalRequestSoftwareInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403FFEC0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoLock @ 0x140400510 (KiInterruptDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405E90 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512E80 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x140400510
 * Reason: Hex-Rays returned no pseudocode for 0x140400510
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140400510: mov     rdx, rsp
 * 0000000140400513: mov     rcx, gs:8758h
 * 000000014040051C: lea     rax, [rcx-6000h]
 * 0000000140400523: cmp     rax, rsp
 * 0000000140400526: ja      short loc_14040052D
 * 0000000140400528: cmp     rsp, rcx
 * 000000014040052B: jb      short loc_140400539
 * 000000014040052D: cmp     cs:KiBugCheckActive, 0
 * 0000000140400534: jnz     short loc_140400539
 * 0000000140400536: mov     rsp, rcx
 * 0000000140400539: sub     rsp, 20h
 * 000000014040053D: mov     [rsp+20h+var_10], rdx
 * 0000000140400542: call    KiInterruptSubDispatchNoLock
 * 0000000140400547: mov     rsp, [rsp+20h+var_10]
 * 000000014040054C: mov     rcx, rsi
 * 000000014040054F: call    HalPerformEndOfInterrupt
 * 0000000140400554: mov     rcx, gs:20h
 * 000000014040055D: cmp     byte ptr [rcx+20h], 1
 * 0000000140400561: ja      short loc_1404005DD
 * 0000000140400563: rdtsc
 * 0000000140400565: shl     rdx, 20h
 * 0000000140400569: or      rax, rdx
 * 000000014040056C: sub     rax, [rcx+7EC0h]
 * 0000000140400573: add     [rcx+7F38h], rax
 * 000000014040057A: add     [rcx+7EC0h], rax
 * 0000000140400581: mov     r8, rax
 * 0000000140400584: mov     rax, [rcx+8]
 * 0000000140400588: test    byte ptr [rax+2], 72h
 * 000000014040058C: jz      short loc_1404005A1
 * 000000014040058E: xor     edx, edx
 * 0000000140400590: call    KiBeginThreadAccountingPeriod
 * 0000000140400595: mov     rcx, gs:20h
 * 000000014040059E: inc     byte ptr [rcx+20h]
 * 00000001404005A1: mov     dl, [rcx+6]
 * 00000001404005A4: and     byte ptr [rcx+6], 0
 * 00000001404005A8: cmp     byte ptr [rcx+7], 0
 * 00000001404005AC: jnz     short loc_1404005DD
 * 00000001404005AE: test    dl, dl
 * 00000001404005B0: jz      short loc_1404005DD
 * 00000001404005B2: cmp     byte ptr [rbp-57h], 2
 * 00000001404005B6: jnb     short loc_1404005C3
 * 00000001404005B8: and     byte ptr [rcx+20h], 0
 * 00000001404005BC: call    KiDpcInterruptBypass
 * 00000001404005C1: jmp     short loc_1404005E0
 * 00000001404005C3: mov     ecx, 2
 * 00000001404005C8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404005CF: nop     dword ptr [rax+rax+00h]
 * 00000001404005D4: mov     rcx, gs:20h
 * 00000001404005DD: dec     byte ptr [rcx+20h]
 * 00000001404005E0: movzx   ecx, byte ptr [rbp-57h]
 * 00000001404005E4: cmp     cs:KiIrqlFlags, 0
 * 00000001404005EB: jz      short loc_1404005F4
 * 00000001404005ED: call    KzSetIrqlUnsafe
 * 00000001404005F2: jmp     short loc_1404005F8
 * 00000001404005F4: mov     cr8, rcx
 * 00000001404005F8: mov     rsi, [rbp+0D0h]
 * 00000001404005FF: test    byte ptr [rbp+0F0h], 1
 * 0000000140400606: jz      loc_1404008A8
 * 000000014040060C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140400613: jz      short loc_140400618
 * 0000000140400615: stac
 * 0000000140400618: mov     rcx, gs:188h
 * 0000000140400621: test    byte ptr [rcx+0C2h], 3
 * 0000000140400628: jz      short loc_140400645
 * 000000014040062A: mov     ecx, 1
 * 000000014040062F: mov     cr8, rcx
 * 0000000140400633: sti
 * 0000000140400634: call    KiInitiateUserApc
 * 0000000140400639: cli
 * 000000014040063A: mov     ecx, 0
 * 000000014040063F: mov     cr8, rcx
 * 0000000140400643: jmp     short loc_140400618
 * 0000000140400645: test    byte ptr gs:86Ch, 2
 * 000000014040064E: jz      short loc_140400657
 * 0000000140400650: xor     ecx, ecx
 * 0000000140400652: call    KiUpdateStibpPairing
 * 0000000140400657: mov     rcx, gs:188h
 * 0000000140400660: test    dword ptr [rcx], 8000000h
 * 0000000140400666: jz      short loc_14040066D
 * 0000000140400668: call    KiRestoreSetContextState
 * 000000014040066D: mov     rcx, gs:188h
 * 0000000140400676: test    dword ptr [rcx], 40010000h
 * 000000014040067C: jz      short loc_140400692
 * 000000014040067E: test    byte ptr [rcx+2], 1
 * 0000000140400682: jz      short loc_140400692
 * 0000000140400684: call    KiCopyCounters
 * 0000000140400689: mov     rcx, gs:188h
 * 0000000140400692: ldmxcsr dword ptr [rbp-54h]
 * 0000000140400696: cmp     word ptr [rbp+80h], 0
 * 000000014040069E: jz      short loc_1404006A5
 * 00000001404006A0: call    KiRestoreDebugRegisterState
 * 00000001404006A5: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404006A9: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404006AD: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404006B1: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404006B5: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404006B9: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404006BD: mov     r11, [rbp-20h]
 * 00000001404006C1: mov     r10, [rbp-28h]
 * 00000001404006C5: mov     r9, [rbp-30h]
 * 00000001404006C9: mov     r8, [rbp-38h]
 * 00000001404006CD: mov     byte ptr gs:856h, 0
 * 00000001404006D6: movzx   eax, word ptr gs:86Ah
 * 00000001404006DF: cmp     gs:864h, ax
 * 00000001404006E8: jz      short loc_1404006FC
 * 00000001404006EA: mov     gs:864h, ax
 * 00000001404006F3: mov     ecx, 48h ; 'H'
 * 00000001404006F8: xor     edx, edx
 * 00000001404006FA: wrmsr
 * 00000001404006FC: btr     word ptr gs:860h, 2
 * 0000000140400707: jnb     short loc_140400717
 * 0000000140400709: mov     eax, 1
 * 000000014040070E: xor     edx, edx
 * 0000000140400710: mov     ecx, 49h ; 'I'
 * 0000000140400715: wrmsr
 * 0000000140400717: btr     word ptr gs:860h, 5
 * 0000000140400722: jnb     loc_14040084D
 * 0000000140400728: call    loc_14040083B
 * 000000014040072D: add     rsp, 8
 * 0000000140400731: call    loc_140400844
 * 0000000140400736: add     rsp, 8
 * 000000014040073A: call    loc_14040072D
 * 000000014040073F: add     rsp, 8
 * 0000000140400743: call    loc_140400736
 * 0000000140400748: add     rsp, 8
 * 000000014040074C: call    loc_14040073F
 * 0000000140400751: add     rsp, 8
 * 0000000140400755: call    loc_140400748
 * 000000014040075A: add     rsp, 8
 * 000000014040075E: call    loc_140400751
 * 0000000140400763: add     rsp, 8
 * 0000000140400767: call    loc_14040075A
 * 000000014040076C: add     rsp, 8
 * 0000000140400770: call    loc_140400763
 * 0000000140400775: add     rsp, 8
 * 0000000140400779: call    loc_14040076C
 * 000000014040077E: add     rsp, 8
 * 0000000140400782: call    loc_140400775
 * 0000000140400787: add     rsp, 8
 * 000000014040078B: call    loc_14040077E
 * 0000000140400790: add     rsp, 8
 * 0000000140400794: call    loc_140400787
 * 0000000140400799: add     rsp, 8
 * 000000014040079D: call    loc_140400790
 * 00000001404007A2: add     rsp, 8
 * 00000001404007A6: call    loc_140400799
 * 00000001404007AB: add     rsp, 8
 * 00000001404007AF: call    loc_1404007A2
 * 00000001404007B4: add     rsp, 8
 * 00000001404007B8: call    loc_1404007AB
 * 00000001404007BD: add     rsp, 8
 * 00000001404007C1: call    loc_1404007B4
 * 00000001404007C6: add     rsp, 8
 * 00000001404007CA: call    loc_1404007BD
 * 00000001404007CF: add     rsp, 8
 * 00000001404007D3: call    loc_1404007C6
 * 00000001404007D8: add     rsp, 8
 * 00000001404007DC: call    loc_1404007CF
 * 00000001404007E1: add     rsp, 8
 * 00000001404007E5: call    loc_1404007D8
 * 00000001404007EA: add     rsp, 8
 * 00000001404007EE: call    loc_1404007E1
 * 00000001404007F3: add     rsp, 8
 * 00000001404007F7: call    loc_1404007EA
 * 00000001404007FC: add     rsp, 8
 * 0000000140400800: call    loc_1404007F3
 * 0000000140400805: add     rsp, 8
 * 0000000140400809: call    loc_1404007FC
 * 000000014040080E: add     rsp, 8
 * 0000000140400812: call    loc_140400805
 * 0000000140400817: add     rsp, 8
 * 000000014040081B: call    loc_14040080E
 * 0000000140400820: add     rsp, 8
 * 0000000140400824: call    loc_140400817
 * 0000000140400829: add     rsp, 8
 * 000000014040082D: call    loc_140400820
 * 0000000140400832: add     rsp, 8
 * 0000000140400836: call    loc_140400829
 * 000000014040083B: add     rsp, 8
 * 000000014040083F: call    loc_140400832
 * 0000000140400844: add     rsp, 8
 * 0000000140400848: mov     eax, 0DADAh
 * 000000014040084D: test    word ptr gs:860h, 80h
 * 0000000140400858: jz      short loc_140400866
 * 000000014040085A: xor     eax, eax
 * 000000014040085C: xor     edx, edx
 * 000000014040085E: mov     ecx, 1
 * 0000000140400863: div     rcx
 * 0000000140400866: mov     rdx, [rbp-40h]
 * 000000014040086A: mov     rcx, [rbp-48h]
 * 000000014040086E: mov     rax, [rbp-50h]
 * 0000000140400872: mov     rsp, rbp
 * 0000000140400875: mov     rbp, [rbp+0D8h]
 * 000000014040087C: add     rsp, 0E8h
 * 0000000140400883: test    cs:KiKvaShadow, 1
 * 000000014040088A: jz      short loc_140400891
 * 000000014040088C: jmp     KiKernelExit
 * 0000000140400891: test    word ptr gs:860h, 100h
 * 000000014040089C: jz      short loc_1404008A3
 * 000000014040089E: verw    [rsp-1C8h+arg_1E0]
 * 00000001404008A3: swapgs
 * 00000001404008A6: iretq
 * 00000001404008A8: ldmxcsr dword ptr [rbp-54h]
 * 00000001404008AC: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404008B0: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404008B4: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404008B8: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404008BC: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404008C0: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404008C4: mov     r11, [rbp-20h]
 * 00000001404008C8: mov     r10, [rbp-28h]
 * 00000001404008CC: mov     r9, [rbp-30h]
 * 00000001404008D0: mov     r8, [rbp-38h]
 * 00000001404008D4: mov     rdx, [rbp-40h]
 * 00000001404008D8: mov     rcx, [rbp-48h]
 * 00000001404008DC: mov     rax, [rbp-50h]
 * 00000001404008E0: mov     rsp, rbp
 * 00000001404008E3: mov     rbp, [rbp+0D8h]
 * 00000001404008EA: add     rsp, 0E8h
 * 00000001404008F1: iretq
 */
