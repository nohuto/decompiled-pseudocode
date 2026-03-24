/*
 * XREFs of KiHvInterruptDispatch @ 0x1403FC540
 * Callers:
 *     KiHvInterrupt @ 0x1403FB6E0 (KiHvInterrupt.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140273DE0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402FBAC0 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x140301350 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x140325EE0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403F75A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F8030 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1403FB600 (KiInitiateUserApc.c)
 *     KiHvInterruptSubDispatch @ 0x1403FCA60 (KiHvInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1403FD790 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14050D7D0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405169B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterruptDispatch @ 0x1403FC540
 * Reason: Hex-Rays returned no pseudocode for 0x1403FC540
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FC540: mov     rdx, rsp
 * 00000001403FC543: mov     rcx, gs:8758h
 * 00000001403FC54C: lea     rax, [rcx-6000h]
 * 00000001403FC553: cmp     rax, rsp
 * 00000001403FC556: ja      short loc_1403FC55D
 * 00000001403FC558: cmp     rsp, rcx
 * 00000001403FC55B: jb      short loc_1403FC569
 * 00000001403FC55D: cmp     cs:KiBugCheckActive, 0
 * 00000001403FC564: jnz     short loc_1403FC569
 * 00000001403FC566: mov     rsp, rcx
 * 00000001403FC569: sub     rsp, 20h
 * 00000001403FC56D: mov     [rsp+20h+var_10], rdx
 * 00000001403FC572: call    KiHvInterruptSubDispatch
 * 00000001403FC577: mov     rsp, [rsp+20h+var_10]
 * 00000001403FC57C: test    cs:HvlEnlightenments, 1000h
 * 00000001403FC586: jz      short loc_1403FC590
 * 00000001403FC588: mov     rcx, rsi
 * 00000001403FC58B: call    HalPerformEndOfInterrupt
 * 00000001403FC590: cli
 * 00000001403FC591: mov     rcx, gs:20h
 * 00000001403FC59A: cmp     byte ptr [rcx+20h], 1
 * 00000001403FC59E: ja      short loc_1403FC61A
 * 00000001403FC5A0: rdtsc
 * 00000001403FC5A2: shl     rdx, 20h
 * 00000001403FC5A6: or      rax, rdx
 * 00000001403FC5A9: sub     rax, [rcx+7EC0h]
 * 00000001403FC5B0: add     [rcx+7F38h], rax
 * 00000001403FC5B7: add     [rcx+7EC0h], rax
 * 00000001403FC5BE: mov     r8, rax
 * 00000001403FC5C1: mov     rax, [rcx+8]
 * 00000001403FC5C5: test    byte ptr [rax+2], 72h
 * 00000001403FC5C9: jz      short loc_1403FC5DE
 * 00000001403FC5CB: xor     edx, edx
 * 00000001403FC5CD: call    KiBeginThreadAccountingPeriod
 * 00000001403FC5D2: mov     rcx, gs:20h
 * 00000001403FC5DB: inc     byte ptr [rcx+20h]
 * 00000001403FC5DE: mov     dl, [rcx+6]
 * 00000001403FC5E1: and     byte ptr [rcx+6], 0
 * 00000001403FC5E5: cmp     byte ptr [rcx+7], 0
 * 00000001403FC5E9: jnz     short loc_1403FC61A
 * 00000001403FC5EB: test    dl, dl
 * 00000001403FC5ED: jz      short loc_1403FC61A
 * 00000001403FC5EF: cmp     byte ptr [rbp-57h], 2
 * 00000001403FC5F3: jnb     short loc_1403FC600
 * 00000001403FC5F5: and     byte ptr [rcx+20h], 0
 * 00000001403FC5F9: call    KiDpcInterruptBypass
 * 00000001403FC5FE: jmp     short loc_1403FC61D
 * 00000001403FC600: mov     ecx, 2
 * 00000001403FC605: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FC60C: nop     dword ptr [rax+rax+00h]
 * 00000001403FC611: mov     rcx, gs:20h
 * 00000001403FC61A: dec     byte ptr [rcx+20h]
 * 00000001403FC61D: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403FC621: cmp     cs:KiIrqlFlags, 0
 * 00000001403FC628: jz      short loc_1403FC631
 * 00000001403FC62A: call    KzSetIrqlUnsafe
 * 00000001403FC62F: jmp     short loc_1403FC635
 * 00000001403FC631: mov     cr8, rcx
 * 00000001403FC635: mov     rsi, [rbp+0D0h]
 * 00000001403FC63C: cli
 * 00000001403FC63D: test    byte ptr [rbp+0F0h], 1
 * 00000001403FC644: jz      loc_1403FC783
 * 00000001403FC64A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FC651: jz      short loc_1403FC656
 * 00000001403FC653: stac
 * 00000001403FC656: mov     rcx, gs:188h
 * 00000001403FC65F: test    byte ptr [rcx+0C2h], 3
 * 00000001403FC666: jz      short loc_1403FC683
 * 00000001403FC668: mov     ecx, 1
 * 00000001403FC66D: mov     cr8, rcx
 * 00000001403FC671: sti
 * 00000001403FC672: call    KiInitiateUserApc
 * 00000001403FC677: cli
 * 00000001403FC678: mov     ecx, 0
 * 00000001403FC67D: mov     cr8, rcx
 * 00000001403FC681: jmp     short loc_1403FC656
 * 00000001403FC683: test    byte ptr gs:27Eh, 2
 * 00000001403FC68C: jz      short loc_1403FC695
 * 00000001403FC68E: xor     ecx, ecx
 * 00000001403FC690: call    KiUpdateStibpPairing
 * 00000001403FC695: mov     rcx, gs:188h
 * 00000001403FC69E: test    dword ptr [rcx], 8000000h
 * 00000001403FC6A4: jz      short loc_1403FC6AB
 * 00000001403FC6A6: call    KiRestoreSetContextState
 * 00000001403FC6AB: mov     rcx, gs:188h
 * 00000001403FC6B4: test    dword ptr [rcx], 40010000h
 * 00000001403FC6BA: jz      short loc_1403FC6D0
 * 00000001403FC6BC: test    byte ptr [rcx+2], 1
 * 00000001403FC6C0: jz      short loc_1403FC6D0
 * 00000001403FC6C2: call    KiCopyCounters
 * 00000001403FC6C7: mov     rcx, gs:188h
 * 00000001403FC6D0: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FC6D4: cmp     word ptr [rbp+80h], 0
 * 00000001403FC6DC: jz      short loc_1403FC6E3
 * 00000001403FC6DE: call    KiRestoreDebugRegisterState
 * 00000001403FC6E3: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FC6E7: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FC6EB: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FC6EF: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FC6F3: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FC6F7: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FC6FB: mov     r11, [rbp-20h]
 * 00000001403FC6FF: mov     r10, [rbp-28h]
 * 00000001403FC703: mov     r9, [rbp-30h]
 * 00000001403FC707: mov     r8, [rbp-38h]
 * 00000001403FC70B: mov     byte ptr gs:853h, 0
 * 00000001403FC714: movzx   eax, byte ptr gs:27Dh
 * 00000001403FC71D: cmp     gs:27Ah, al
 * 00000001403FC725: jz      short loc_1403FC738
 * 00000001403FC727: mov     gs:27Ah, al
 * 00000001403FC72F: mov     ecx, 48h ; 'H'
 * 00000001403FC734: xor     edx, edx
 * 00000001403FC736: wrmsr
 * 00000001403FC738: btr     word ptr gs:278h, 2
 * 00000001403FC743: jnb     short loc_1403FC753
 * 00000001403FC745: mov     eax, 1
 * 00000001403FC74A: xor     edx, edx
 * 00000001403FC74C: mov     ecx, 49h ; 'I'
 * 00000001403FC751: wrmsr
 * 00000001403FC753: mov     rdx, [rbp-40h]
 * 00000001403FC757: mov     rcx, [rbp-48h]
 * 00000001403FC75B: mov     rax, [rbp-50h]
 * 00000001403FC75F: mov     rsp, rbp
 * 00000001403FC762: mov     rbp, [rbp+0D8h]
 * 00000001403FC769: add     rsp, 0E8h
 * 00000001403FC770: test    cs:KiKvaShadow, 1
 * 00000001403FC777: jz      short loc_1403FC77E
 * 00000001403FC779: jmp     KiKernelExit
 * 00000001403FC77E: swapgs
 * 00000001403FC781: iretq
 * 00000001403FC783: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FC787: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FC78B: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FC78F: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FC793: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FC797: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FC79B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FC79F: mov     r11, [rbp-20h]
 * 00000001403FC7A3: mov     r10, [rbp-28h]
 * 00000001403FC7A7: mov     r9, [rbp-30h]
 * 00000001403FC7AB: mov     r8, [rbp-38h]
 * 00000001403FC7AF: mov     rdx, [rbp-40h]
 * 00000001403FC7B3: mov     rcx, [rbp-48h]
 * 00000001403FC7B7: mov     rax, [rbp-50h]
 * 00000001403FC7BB: mov     rsp, rbp
 * 00000001403FC7BE: mov     rbp, [rbp+0D8h]
 * 00000001403FC7C5: add     rsp, 0E8h
 * 00000001403FC7CC: iretq
 */
