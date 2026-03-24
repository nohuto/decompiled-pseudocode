/*
 * XREFs of KiVmbusInterruptDispatch @ 0x140402390
 * Callers:
 *     KiVmbusInterrupt0 @ 0x140401440 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140401720 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140401A00 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140401CE0 (KiVmbusInterrupt3.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402EBA40 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiVmbusInterruptDispatch @ 0x140402390 (KiVmbusInterruptDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1404028B0 (KiVmbusInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1404036E0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140511100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterruptDispatch @ 0x140402390
 * Reason: Hex-Rays returned no pseudocode for 0x140402390
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140402390: mov     rdx, rsp
 * 0000000140402393: mov     rcx, gs:8758h
 * 000000014040239C: lea     rax, [rcx-6000h]
 * 00000001404023A3: cmp     rax, rsp
 * 00000001404023A6: ja      short loc_1404023AD
 * 00000001404023A8: cmp     rsp, rcx
 * 00000001404023AB: jb      short loc_1404023B9
 * 00000001404023AD: cmp     cs:KiBugCheckActive, 0
 * 00000001404023B4: jnz     short loc_1404023B9
 * 00000001404023B6: mov     rsp, rcx
 * 00000001404023B9: sub     rsp, 20h
 * 00000001404023BD: mov     [rsp+20h+var_10], rdx
 * 00000001404023C2: call    KiVmbusInterruptSubDispatch
 * 00000001404023C7: mov     rsp, [rsp+20h+var_10]
 * 00000001404023CC: cli
 * 00000001404023CD: mov     rcx, gs:20h
 * 00000001404023D6: cmp     byte ptr [rcx+20h], 1
 * 00000001404023DA: ja      short loc_140402456
 * 00000001404023DC: rdtsc
 * 00000001404023DE: shl     rdx, 20h
 * 00000001404023E2: or      rax, rdx
 * 00000001404023E5: sub     rax, [rcx+7EC0h]
 * 00000001404023EC: add     [rcx+7F38h], rax
 * 00000001404023F3: add     [rcx+7EC0h], rax
 * 00000001404023FA: mov     r8, rax
 * 00000001404023FD: mov     rax, [rcx+8]
 * 0000000140402401: test    byte ptr [rax+2], 72h
 * 0000000140402405: jz      short loc_14040241A
 * 0000000140402407: xor     edx, edx
 * 0000000140402409: call    KiBeginThreadAccountingPeriod
 * 000000014040240E: mov     rcx, gs:20h
 * 0000000140402417: inc     byte ptr [rcx+20h]
 * 000000014040241A: mov     dl, [rcx+6]
 * 000000014040241D: and     byte ptr [rcx+6], 0
 * 0000000140402421: cmp     byte ptr [rcx+7], 0
 * 0000000140402425: jnz     short loc_140402456
 * 0000000140402427: test    dl, dl
 * 0000000140402429: jz      short loc_140402456
 * 000000014040242B: cmp     byte ptr [rbp-57h], 2
 * 000000014040242F: jnb     short loc_14040243C
 * 0000000140402431: and     byte ptr [rcx+20h], 0
 * 0000000140402435: call    KiDpcInterruptBypass
 * 000000014040243A: jmp     short loc_140402459
 * 000000014040243C: mov     ecx, 2
 * 0000000140402441: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140402448: nop     dword ptr [rax+rax+00h]
 * 000000014040244D: mov     rcx, gs:20h
 * 0000000140402456: dec     byte ptr [rcx+20h]
 * 0000000140402459: movzx   ecx, byte ptr [rbp-57h]
 * 000000014040245D: cmp     cs:KiIrqlFlags, 0
 * 0000000140402464: jz      short loc_14040246D
 * 0000000140402466: call    KzSetIrqlUnsafe
 * 000000014040246B: jmp     short loc_140402471
 * 000000014040246D: mov     cr8, rcx
 * 0000000140402471: mov     rsi, [rbp+0D0h]
 * 0000000140402478: cli
 * 0000000140402479: test    byte ptr [rbp+0F0h], 1
 * 0000000140402480: jz      loc_1404026F5
 * 0000000140402486: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040248D: jz      short loc_140402492
 * 000000014040248F: stac
 * 0000000140402492: mov     rcx, gs:188h
 * 000000014040249B: test    byte ptr [rcx+0C2h], 3
 * 00000001404024A2: jz      short loc_1404024BF
 * 00000001404024A4: mov     ecx, 1
 * 00000001404024A9: mov     cr8, rcx
 * 00000001404024AD: sti
 * 00000001404024AE: call    KiInitiateUserApc
 * 00000001404024B3: cli
 * 00000001404024B4: mov     ecx, 0
 * 00000001404024B9: mov     cr8, rcx
 * 00000001404024BD: jmp     short loc_140402492
 * 00000001404024BF: test    byte ptr gs:27Eh, 2
 * 00000001404024C8: jz      short loc_1404024D1
 * 00000001404024CA: xor     ecx, ecx
 * 00000001404024CC: call    KiUpdateStibpPairing
 * 00000001404024D1: mov     rcx, gs:188h
 * 00000001404024DA: test    dword ptr [rcx], 8000000h
 * 00000001404024E0: jz      short loc_1404024E7
 * 00000001404024E2: call    KiRestoreSetContextState
 * 00000001404024E7: mov     rcx, gs:188h
 * 00000001404024F0: test    dword ptr [rcx], 40010000h
 * 00000001404024F6: jz      short loc_14040250C
 * 00000001404024F8: test    byte ptr [rcx+2], 1
 * 00000001404024FC: jz      short loc_14040250C
 * 00000001404024FE: call    KiCopyCounters
 * 0000000140402503: mov     rcx, gs:188h
 * 000000014040250C: ldmxcsr dword ptr [rbp-54h]
 * 0000000140402510: cmp     word ptr [rbp+80h], 0
 * 0000000140402518: jz      short loc_14040251F
 * 000000014040251A: call    KiRestoreDebugRegisterState
 * 000000014040251F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140402523: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140402527: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014040252B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014040252F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140402533: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140402537: mov     r11, [rbp-20h]
 * 000000014040253B: mov     r10, [rbp-28h]
 * 000000014040253F: mov     r9, [rbp-30h]
 * 0000000140402543: mov     r8, [rbp-38h]
 * 0000000140402547: mov     byte ptr gs:853h, 0
 * 0000000140402550: movzx   eax, byte ptr gs:27Dh
 * 0000000140402559: cmp     gs:27Ah, al
 * 0000000140402561: jz      short loc_140402574
 * 0000000140402563: mov     gs:27Ah, al
 * 000000014040256B: mov     ecx, 48h ; 'H'
 * 0000000140402570: xor     edx, edx
 * 0000000140402572: wrmsr
 * 0000000140402574: btr     word ptr gs:278h, 2
 * 000000014040257F: jnb     short loc_14040258F
 * 0000000140402581: mov     eax, 1
 * 0000000140402586: xor     edx, edx
 * 0000000140402588: mov     ecx, 49h ; 'I'
 * 000000014040258D: wrmsr
 * 000000014040258F: btr     word ptr gs:278h, 5
 * 000000014040259A: jnb     loc_1404026C5
 * 00000001404025A0: call    loc_1404026B3
 * 00000001404025A5: add     rsp, 8
 * 00000001404025A9: call    loc_1404026BC
 * 00000001404025AE: add     rsp, 8
 * 00000001404025B2: call    loc_1404025A5
 * 00000001404025B7: add     rsp, 8
 * 00000001404025BB: call    loc_1404025AE
 * 00000001404025C0: add     rsp, 8
 * 00000001404025C4: call    loc_1404025B7
 * 00000001404025C9: add     rsp, 8
 * 00000001404025CD: call    loc_1404025C0
 * 00000001404025D2: add     rsp, 8
 * 00000001404025D6: call    loc_1404025C9
 * 00000001404025DB: add     rsp, 8
 * 00000001404025DF: call    loc_1404025D2
 * 00000001404025E4: add     rsp, 8
 * 00000001404025E8: call    loc_1404025DB
 * 00000001404025ED: add     rsp, 8
 * 00000001404025F1: call    loc_1404025E4
 * 00000001404025F6: add     rsp, 8
 * 00000001404025FA: call    loc_1404025ED
 * 00000001404025FF: add     rsp, 8
 * 0000000140402603: call    loc_1404025F6
 * 0000000140402608: add     rsp, 8
 * 000000014040260C: call    loc_1404025FF
 * 0000000140402611: add     rsp, 8
 * 0000000140402615: call    loc_140402608
 * 000000014040261A: add     rsp, 8
 * 000000014040261E: call    loc_140402611
 * 0000000140402623: add     rsp, 8
 * 0000000140402627: call    loc_14040261A
 * 000000014040262C: add     rsp, 8
 * 0000000140402630: call    loc_140402623
 * 0000000140402635: add     rsp, 8
 * 0000000140402639: call    loc_14040262C
 * 000000014040263E: add     rsp, 8
 * 0000000140402642: call    loc_140402635
 * 0000000140402647: add     rsp, 8
 * 000000014040264B: call    loc_14040263E
 * 0000000140402650: add     rsp, 8
 * 0000000140402654: call    loc_140402647
 * 0000000140402659: add     rsp, 8
 * 000000014040265D: call    loc_140402650
 * 0000000140402662: add     rsp, 8
 * 0000000140402666: call    loc_140402659
 * 000000014040266B: add     rsp, 8
 * 000000014040266F: call    loc_140402662
 * 0000000140402674: add     rsp, 8
 * 0000000140402678: call    loc_14040266B
 * 000000014040267D: add     rsp, 8
 * 0000000140402681: call    loc_140402674
 * 0000000140402686: add     rsp, 8
 * 000000014040268A: call    loc_14040267D
 * 000000014040268F: add     rsp, 8
 * 0000000140402693: call    loc_140402686
 * 0000000140402698: add     rsp, 8
 * 000000014040269C: call    loc_14040268F
 * 00000001404026A1: add     rsp, 8
 * 00000001404026A5: call    loc_140402698
 * 00000001404026AA: add     rsp, 8
 * 00000001404026AE: call    loc_1404026A1
 * 00000001404026B3: add     rsp, 8
 * 00000001404026B7: call    loc_1404026AA
 * 00000001404026BC: add     rsp, 8
 * 00000001404026C0: mov     eax, 0DADAh
 * 00000001404026C5: mov     rdx, [rbp-40h]
 * 00000001404026C9: mov     rcx, [rbp-48h]
 * 00000001404026CD: mov     rax, [rbp-50h]
 * 00000001404026D1: mov     rsp, rbp
 * 00000001404026D4: mov     rbp, [rbp+0D8h]
 * 00000001404026DB: add     rsp, 0E8h
 * 00000001404026E2: test    cs:KiKvaShadow, 1
 * 00000001404026E9: jz      short loc_1404026F0
 * 00000001404026EB: jmp     KiKernelExit
 * 00000001404026F0: swapgs
 * 00000001404026F3: iretq
 * 00000001404026F5: ldmxcsr dword ptr [rbp-54h]
 * 00000001404026F9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404026FD: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140402701: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140402705: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140402709: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014040270D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140402711: mov     r11, [rbp-20h]
 * 0000000140402715: mov     r10, [rbp-28h]
 * 0000000140402719: mov     r9, [rbp-30h]
 * 000000014040271D: mov     r8, [rbp-38h]
 * 0000000140402721: mov     rdx, [rbp-40h]
 * 0000000140402725: mov     rcx, [rbp-48h]
 * 0000000140402729: mov     rax, [rbp-50h]
 * 000000014040272D: mov     rsp, rbp
 * 0000000140402730: mov     rbp, [rbp+0D8h]
 * 0000000140402737: add     rsp, 0E8h
 * 000000014040273E: iretq
 */
