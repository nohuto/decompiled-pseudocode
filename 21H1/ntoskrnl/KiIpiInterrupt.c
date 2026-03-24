/*
 * XREFs of KiIpiInterrupt @ 0x1403FC540
 * Callers:
 *     KiIpiInterruptShadow @ 0x140A12240 (KiIpiInterruptShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DDF20 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1402EC460 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x1402EC5B0 (HalPerformEndOfInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140357AA0 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140359A80 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403F6310 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F6DA0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1403FA370 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1403FC500 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x1403FC540 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1403FCAA0 (KiIpiInterruptSubDispatch.c)
 *     KzSetIrqlUnsafe @ 0x14050D180 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140513F60 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140516360 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x1403FC540
 * Reason: Hex-Rays returned no pseudocode for 0x1403FC540
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FC540: sub     rsp, 8
 * 00000001403FC544: push    rbp
 * 00000001403FC545: push    rsi
 * 00000001403FC546: sub     rsp, 150h
 * 00000001403FC54D: lea     rbp, [rsp+80h]
 * 00000001403FC555: mov     [rbp+0E8h+var_13D], 0
 * 00000001403FC559: mov     [rbp+0E8h+var_138], rax
 * 00000001403FC55D: mov     [rbp+0E8h+var_130], rcx
 * 00000001403FC561: mov     [rbp+0E8h+var_128], rdx
 * 00000001403FC565: mov     [rbp+0E8h+var_120], r8
 * 00000001403FC569: mov     [rbp+0E8h+var_118], r9
 * 00000001403FC56D: mov     [rbp+0E8h+var_110], r10
 * 00000001403FC571: mov     [rbp+0E8h+var_108], r11
 * 00000001403FC575: test    [rbp+0E8h+arg_0], 1
 * 00000001403FC57C: jnz     short loc_1403FC5AB
 * 00000001403FC57E: lfence
 * 00000001403FC581: test    byte ptr gs:278h, 1
 * 00000001403FC58A: jnz     short loc_1403FC594
 * 00000001403FC58C: lfence
 * 00000001403FC58F: jmp     loc_1403FC7A7
 * 00000001403FC594: movzx   eax, byte ptr gs:27Ah
 * 00000001403FC59D: mov     ecx, 48h ; 'H'
 * 00000001403FC5A2: xor     edx, edx
 * 00000001403FC5A4: wrmsr
 * 00000001403FC5A6: jmp     loc_1403FC7A7
 * 00000001403FC5AB: test    cs:KiKvaShadow, 1
 * 00000001403FC5B2: jnz     short loc_1403FC5B7
 * 00000001403FC5B4: swapgs
 * 00000001403FC5B7: lfence
 * 00000001403FC5BA: mov     r10, gs:188h
 * 00000001403FC5C3: mov     rcx, gs:188h
 * 00000001403FC5CC: mov     rcx, [rcx+220h]
 * 00000001403FC5D3: mov     rcx, [rcx+9E0h]
 * 00000001403FC5DA: mov     gs:270h, rcx
 * 00000001403FC5E3: mov     cl, gs:850h
 * 00000001403FC5EB: mov     gs:851h, cl
 * 00000001403FC5F3: mov     cl, gs:278h
 * 00000001403FC5FB: mov     gs:852h, cl
 * 00000001403FC603: movzx   eax, byte ptr gs:27Bh
 * 00000001403FC60C: cmp     gs:27Ah, al
 * 00000001403FC614: jz      short loc_1403FC627
 * 00000001403FC616: mov     gs:27Ah, al
 * 00000001403FC61E: mov     ecx, 48h ; 'H'
 * 00000001403FC623: xor     edx, edx
 * 00000001403FC625: wrmsr
 * 00000001403FC627: movzx   edx, byte ptr gs:278h
 * 00000001403FC630: test    edx, 8
 * 00000001403FC636: jz      short loc_1403FC64B
 * 00000001403FC638: mov     eax, 1
 * 00000001403FC63D: xor     edx, edx
 * 00000001403FC63F: mov     ecx, 49h ; 'I'
 * 00000001403FC644: wrmsr
 * 00000001403FC646: jmp     loc_1403FC789
 * 00000001403FC64B: test    edx, 2
 * 00000001403FC651: jz      loc_1403FC786
 * 00000001403FC657: test    byte ptr gs:279h, 4
 * 00000001403FC660: jnz     loc_1403FC786
 * 00000001403FC666: call    loc_1403FC779
 * 00000001403FC66B: add     rsp, 8
 * 00000001403FC66F: call    loc_1403FC782
 * 00000001403FC674: add     rsp, 8
 * 00000001403FC678: call    loc_1403FC66B
 * 00000001403FC67D: add     rsp, 8
 * 00000001403FC681: call    loc_1403FC674
 * 00000001403FC686: add     rsp, 8
 * 00000001403FC68A: call    loc_1403FC67D
 * 00000001403FC68F: add     rsp, 8
 * 00000001403FC693: call    loc_1403FC686
 * 00000001403FC698: add     rsp, 8
 * 00000001403FC69C: call    loc_1403FC68F
 * 00000001403FC6A1: add     rsp, 8
 * 00000001403FC6A5: call    loc_1403FC698
 * 00000001403FC6AA: add     rsp, 8
 * 00000001403FC6AE: call    loc_1403FC6A1
 * 00000001403FC6B3: add     rsp, 8
 * 00000001403FC6B7: call    loc_1403FC6AA
 * 00000001403FC6BC: add     rsp, 8
 * 00000001403FC6C0: call    loc_1403FC6B3
 * 00000001403FC6C5: add     rsp, 8
 * 00000001403FC6C9: call    loc_1403FC6BC
 * 00000001403FC6CE: add     rsp, 8
 * 00000001403FC6D2: call    loc_1403FC6C5
 * 00000001403FC6D7: add     rsp, 8
 * 00000001403FC6DB: call    loc_1403FC6CE
 * 00000001403FC6E0: add     rsp, 8
 * 00000001403FC6E4: call    loc_1403FC6D7
 * 00000001403FC6E9: add     rsp, 8
 * 00000001403FC6ED: call    loc_1403FC6E0
 * 00000001403FC6F2: add     rsp, 8
 * 00000001403FC6F6: call    loc_1403FC6E9
 * 00000001403FC6FB: add     rsp, 8
 * 00000001403FC6FF: call    loc_1403FC6F2
 * 00000001403FC704: add     rsp, 8
 * 00000001403FC708: call    loc_1403FC6FB
 * 00000001403FC70D: add     rsp, 8
 * 00000001403FC711: call    loc_1403FC704
 * 00000001403FC716: add     rsp, 8
 * 00000001403FC71A: call    loc_1403FC70D
 * 00000001403FC71F: add     rsp, 8
 * 00000001403FC723: call    loc_1403FC716
 * 00000001403FC728: add     rsp, 8
 * 00000001403FC72C: call    loc_1403FC71F
 * 00000001403FC731: add     rsp, 8
 * 00000001403FC735: call    loc_1403FC728
 * 00000001403FC73A: add     rsp, 8
 * 00000001403FC73E: call    loc_1403FC731
 * 00000001403FC743: add     rsp, 8
 * 00000001403FC747: call    loc_1403FC73A
 * 00000001403FC74C: add     rsp, 8
 * 00000001403FC750: call    loc_1403FC743
 * 00000001403FC755: add     rsp, 8
 * 00000001403FC759: call    loc_1403FC74C
 * 00000001403FC75E: add     rsp, 8
 * 00000001403FC762: call    loc_1403FC755
 * 00000001403FC767: add     rsp, 8
 * 00000001403FC76B: call    loc_1403FC75E
 * 00000001403FC770: add     rsp, 8
 * 00000001403FC774: call    loc_1403FC767
 * 00000001403FC779: add     rsp, 8
 * 00000001403FC77D: call    loc_1403FC770
 * 00000001403FC782: add     rsp, 8
 * 00000001403FC786: lfence
 * 00000001403FC789: mov     byte ptr gs:853h, 0
 * 00000001403FC792: test    byte ptr [r10+3], 3
 * 00000001403FC797: mov     [rbp+0E8h+var_68], 0
 * 00000001403FC7A0: jz      short loc_1403FC7A7
 * 00000001403FC7A2: call    KiSaveDebugRegisterState
 * 00000001403FC7A7: cld
 * 00000001403FC7A8: stmxcsr [rbp+0E8h+var_13C]
 * 00000001403FC7AC: ldmxcsr dword ptr gs:180h
 * 00000001403FC7B5: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001403FC7B9: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001403FC7BD: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001403FC7C1: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001403FC7C5: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001403FC7C9: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001403FC7CD: cmp     byte ptr gs:801Ah, 0
 * 00000001403FC7D6: jz      short loc_1403FC7DD
 * 00000001403FC7D8: call    KeWakeProcessor
 * 00000001403FC7DD: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001403FC7E4: cmp     rax, [rbp+0E8h]
 * 00000001403FC7EB: jnb     short loc_1403FC806
 * 00000001403FC7ED: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001403FC7F4: cmp     rax, [rbp+0E8h]
 * 00000001403FC7FB: jb      short loc_1403FC806
 * 00000001403FC7FD: lea     rcx, [rbp+0E8h+var_168]
 * 00000001403FC801: call    KiCheckForSListAddress
 * 00000001403FC806: xor     esi, esi
 * 00000001403FC808: inc     dword ptr gs:8000h
 * 00000001403FC810: mov     rdx, rsp
 * 00000001403FC813: mov     rcx, gs:8758h
 * 00000001403FC81C: lea     rax, [rcx-6000h]
 * 00000001403FC823: cmp     rax, rsp
 * 00000001403FC826: ja      short loc_1403FC82D
 * 00000001403FC828: cmp     rsp, rcx
 * 00000001403FC82B: jb      short loc_1403FC839
 * 00000001403FC82D: cmp     cs:KiBugCheckActive, 0
 * 00000001403FC834: jnz     short loc_1403FC839
 * 00000001403FC836: mov     rsp, rcx
 * 00000001403FC839: sub     rsp, 20h
 * 00000001403FC83D: mov     qword ptr [rsp+108h+var_F8], rdx
 * 00000001403FC842: call    KiIpiInterruptSubDispatch
 * 00000001403FC847: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 00000001403FC84C: mov     rcx, rsi
 * 00000001403FC84F: call    HalPerformEndOfInterrupt
 * 00000001403FC854: mov     rcx, gs:20h
 * 00000001403FC85D: cmp     byte ptr [rcx+20h], 1
 * 00000001403FC861: ja      short loc_1403FC8DD
 * 00000001403FC863: rdtsc
 * 00000001403FC865: shl     rdx, 20h
 * 00000001403FC869: or      rax, rdx
 * 00000001403FC86C: sub     rax, [rcx+7EC0h]
 * 00000001403FC873: add     [rcx+7F38h], rax
 * 00000001403FC87A: add     [rcx+7EC0h], rax
 * 00000001403FC881: mov     r8, rax
 * 00000001403FC884: mov     rax, [rcx+8]
 * 00000001403FC888: test    byte ptr [rax+2], 72h
 * 00000001403FC88C: jz      short loc_1403FC8A1
 * 00000001403FC88E: xor     edx, edx
 * 00000001403FC890: call    KiBeginThreadAccountingPeriod
 * 00000001403FC895: mov     rcx, gs:20h
 * 00000001403FC89E: inc     byte ptr [rcx+20h]
 * 00000001403FC8A1: mov     dl, [rcx+6]
 * 00000001403FC8A4: and     byte ptr [rcx+6], 0
 * 00000001403FC8A8: cmp     byte ptr [rcx+7], 0
 * 00000001403FC8AC: jnz     short loc_1403FC8DD
 * 00000001403FC8AE: test    dl, dl
 * 00000001403FC8B0: jz      short loc_1403FC8DD
 * 00000001403FC8B2: cmp     [rbp+0E8h+var_13F], 2
 * 00000001403FC8B6: jnb     short loc_1403FC8C3
 * 00000001403FC8B8: and     byte ptr [rcx+20h], 0
 * 00000001403FC8BC: call    KiDpcInterruptBypass
 * 00000001403FC8C1: jmp     short loc_1403FC8E0
 * 00000001403FC8C3: mov     ecx, 2
 * 00000001403FC8C8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FC8CF: nop     dword ptr [rax+rax+00h]
 * 00000001403FC8D4: mov     rcx, gs:20h
 * 00000001403FC8DD: dec     byte ptr [rcx+20h]
 * 00000001403FC8E0: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001403FC8E4: cmp     cs:KiIrqlFlags, 0
 * 00000001403FC8EB: jz      short loc_1403FC8F4
 * 00000001403FC8ED: call    KzSetIrqlUnsafe
 * 00000001403FC8F2: jmp     short loc_1403FC8F8
 * 00000001403FC8F4: mov     cr8, rcx
 * 00000001403FC8F8: mov     rsi, [rbp+0E8h+var_18]
 * 00000001403FC8FF: test    [rbp+0E8h+arg_0], 1
 * 00000001403FC906: jz      loc_1403FCA45
 * 00000001403FC90C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FC913: jz      short loc_1403FC918
 * 00000001403FC915: stac
 * 00000001403FC918: mov     rcx, gs:188h
 * 00000001403FC921: test    byte ptr [rcx+0C2h], 3
 * 00000001403FC928: jz      short loc_1403FC945
 * 00000001403FC92A: mov     ecx, 1
 * 00000001403FC92F: mov     cr8, rcx
 * 00000001403FC933: sti
 * 00000001403FC934: call    KiInitiateUserApc
 * 00000001403FC939: cli
 * 00000001403FC93A: mov     ecx, 0
 * 00000001403FC93F: mov     cr8, rcx
 * 00000001403FC943: jmp     short loc_1403FC918
 * 00000001403FC945: test    byte ptr gs:27Eh, 2
 * 00000001403FC94E: jz      short loc_1403FC957
 * 00000001403FC950: xor     ecx, ecx
 * 00000001403FC952: call    KiUpdateStibpPairing
 * 00000001403FC957: mov     rcx, gs:188h
 * 00000001403FC960: test    dword ptr [rcx], 8000000h
 * 00000001403FC966: jz      short loc_1403FC96D
 * 00000001403FC968: call    KiRestoreSetContextState
 * 00000001403FC96D: mov     rcx, gs:188h
 * 00000001403FC976: test    dword ptr [rcx], 40010000h
 * 00000001403FC97C: jz      short loc_1403FC992
 * 00000001403FC97E: test    byte ptr [rcx+2], 1
 * 00000001403FC982: jz      short loc_1403FC992
 * 00000001403FC984: call    KiCopyCounters
 * 00000001403FC989: mov     rcx, gs:188h
 * 00000001403FC992: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001403FC996: cmp     [rbp+0E8h+var_68], 0
 * 00000001403FC99E: jz      short loc_1403FC9A5
 * 00000001403FC9A0: call    KiRestoreDebugRegisterState
 * 00000001403FC9A5: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001403FC9A9: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001403FC9AD: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001403FC9B1: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001403FC9B5: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001403FC9B9: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001403FC9BD: mov     r11, [rbp+0E8h+var_108]
 * 00000001403FC9C1: mov     r10, [rbp+0E8h+var_110]
 * 00000001403FC9C5: mov     r9, [rbp+0E8h+var_118]
 * 00000001403FC9C9: mov     r8, [rbp+0E8h+var_120]
 * 00000001403FC9CD: mov     byte ptr gs:853h, 0
 * 00000001403FC9D6: movzx   eax, byte ptr gs:27Dh
 * 00000001403FC9DF: cmp     gs:27Ah, al
 * 00000001403FC9E7: jz      short loc_1403FC9FA
 * 00000001403FC9E9: mov     gs:27Ah, al
 * 00000001403FC9F1: mov     ecx, 48h ; 'H'
 * 00000001403FC9F6: xor     edx, edx
 * 00000001403FC9F8: wrmsr
 * 00000001403FC9FA: btr     word ptr gs:278h, 2
 * 00000001403FCA05: jnb     short loc_1403FCA15
 * 00000001403FCA07: mov     eax, 1
 * 00000001403FCA0C: xor     edx, edx
 * 00000001403FCA0E: mov     ecx, 49h ; 'I'
 * 00000001403FCA13: wrmsr
 * 00000001403FCA15: mov     rdx, [rbp+0E8h+var_128]
 * 00000001403FCA19: mov     rcx, [rbp+0E8h+var_130]
 * 00000001403FCA1D: mov     rax, [rbp+0E8h+var_138]
 * 00000001403FCA21: mov     rsp, rbp
 * 00000001403FCA24: mov     rbp, [rbp+0E8h+var_10]
 * 00000001403FCA2B: add     rsp, 0E8h
 * 00000001403FCA32: test    cs:KiKvaShadow, 1
 * 00000001403FCA39: jz      short loc_1403FCA40
 * 00000001403FCA3B: jmp     KiKernelExit
 * 00000001403FCA40: swapgs
 * 00000001403FCA43: iretq
 * 00000001403FCA45: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001403FCA49: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001403FCA4D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001403FCA51: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001403FCA55: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001403FCA59: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001403FCA5D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001403FCA61: mov     r11, [rbp+0E8h+var_108]
 * 00000001403FCA65: mov     r10, [rbp+0E8h+var_110]
 * 00000001403FCA69: mov     r9, [rbp+0E8h+var_118]
 * 00000001403FCA6D: mov     r8, [rbp+0E8h+var_120]
 * 00000001403FCA71: mov     rdx, [rbp+0E8h+var_128]
 * 00000001403FCA75: mov     rcx, [rbp+0E8h+var_130]
 * 00000001403FCA79: mov     rax, [rbp+0E8h+var_138]
 * 00000001403FCA7D: mov     rsp, rbp
 * 00000001403FCA80: mov     rbp, [rbp+0E8h+var_10]
 * 00000001403FCA87: add     rsp, 0E8h
 * 00000001403FCA8E: iretq
 */
