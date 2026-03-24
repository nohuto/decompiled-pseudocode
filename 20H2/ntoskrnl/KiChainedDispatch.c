/*
 * XREFs of KiChainedDispatch @ 0x1403FD300
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402EBA40 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402F5F40 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1403FD300 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x1403FD6C0 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1404036E0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140511100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x1403FD300
 * Reason: Hex-Rays returned no pseudocode for 0x1403FD300
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FD300: mov     rdx, rsp
 * 00000001403FD303: mov     rcx, gs:8758h
 * 00000001403FD30C: lea     rax, [rcx-6000h]
 * 00000001403FD313: cmp     rax, rsp
 * 00000001403FD316: ja      short loc_1403FD31D
 * 00000001403FD318: cmp     rsp, rcx
 * 00000001403FD31B: jb      short loc_1403FD329
 * 00000001403FD31D: cmp     cs:KiBugCheckActive, 0
 * 00000001403FD324: jnz     short loc_1403FD329
 * 00000001403FD326: mov     rsp, rcx
 * 00000001403FD329: sub     rsp, 20h
 * 00000001403FD32D: mov     [rsp+20h+var_10], rdx
 * 00000001403FD332: call    KiScanInterruptObjectList
 * 00000001403FD337: mov     rsp, [rsp+20h+var_10]
 * 00000001403FD33C: mov     rcx, rsi
 * 00000001403FD33F: call    HalPerformEndOfInterrupt
 * 00000001403FD344: mov     rcx, gs:20h
 * 00000001403FD34D: cmp     byte ptr [rcx+20h], 1
 * 00000001403FD351: ja      short loc_1403FD3CD
 * 00000001403FD353: rdtsc
 * 00000001403FD355: shl     rdx, 20h
 * 00000001403FD359: or      rax, rdx
 * 00000001403FD35C: sub     rax, [rcx+7EC0h]
 * 00000001403FD363: add     [rcx+7F38h], rax
 * 00000001403FD36A: add     [rcx+7EC0h], rax
 * 00000001403FD371: mov     r8, rax
 * 00000001403FD374: mov     rax, [rcx+8]
 * 00000001403FD378: test    byte ptr [rax+2], 72h
 * 00000001403FD37C: jz      short loc_1403FD391
 * 00000001403FD37E: xor     edx, edx
 * 00000001403FD380: call    KiBeginThreadAccountingPeriod
 * 00000001403FD385: mov     rcx, gs:20h
 * 00000001403FD38E: inc     byte ptr [rcx+20h]
 * 00000001403FD391: mov     dl, [rcx+6]
 * 00000001403FD394: and     byte ptr [rcx+6], 0
 * 00000001403FD398: cmp     byte ptr [rcx+7], 0
 * 00000001403FD39C: jnz     short loc_1403FD3CD
 * 00000001403FD39E: test    dl, dl
 * 00000001403FD3A0: jz      short loc_1403FD3CD
 * 00000001403FD3A2: cmp     byte ptr [rbp-57h], 2
 * 00000001403FD3A6: jnb     short loc_1403FD3B3
 * 00000001403FD3A8: and     byte ptr [rcx+20h], 0
 * 00000001403FD3AC: call    KiDpcInterruptBypass
 * 00000001403FD3B1: jmp     short loc_1403FD3D0
 * 00000001403FD3B3: mov     ecx, 2
 * 00000001403FD3B8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FD3BF: nop     dword ptr [rax+rax+00h]
 * 00000001403FD3C4: mov     rcx, gs:20h
 * 00000001403FD3CD: dec     byte ptr [rcx+20h]
 * 00000001403FD3D0: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403FD3D4: cmp     cs:KiIrqlFlags, 0
 * 00000001403FD3DB: jz      short loc_1403FD3E4
 * 00000001403FD3DD: call    KzSetIrqlUnsafe
 * 00000001403FD3E2: jmp     short loc_1403FD3E8
 * 00000001403FD3E4: mov     cr8, rcx
 * 00000001403FD3E8: mov     rsi, [rbp+0D0h]
 * 00000001403FD3EF: test    byte ptr [rbp+0F0h], 1
 * 00000001403FD3F6: jz      loc_1403FD66B
 * 00000001403FD3FC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FD403: jz      short loc_1403FD408
 * 00000001403FD405: stac
 * 00000001403FD408: mov     rcx, gs:188h
 * 00000001403FD411: test    byte ptr [rcx+0C2h], 3
 * 00000001403FD418: jz      short loc_1403FD435
 * 00000001403FD41A: mov     ecx, 1
 * 00000001403FD41F: mov     cr8, rcx
 * 00000001403FD423: sti
 * 00000001403FD424: call    KiInitiateUserApc
 * 00000001403FD429: cli
 * 00000001403FD42A: mov     ecx, 0
 * 00000001403FD42F: mov     cr8, rcx
 * 00000001403FD433: jmp     short loc_1403FD408
 * 00000001403FD435: test    byte ptr gs:27Eh, 2
 * 00000001403FD43E: jz      short loc_1403FD447
 * 00000001403FD440: xor     ecx, ecx
 * 00000001403FD442: call    KiUpdateStibpPairing
 * 00000001403FD447: mov     rcx, gs:188h
 * 00000001403FD450: test    dword ptr [rcx], 8000000h
 * 00000001403FD456: jz      short loc_1403FD45D
 * 00000001403FD458: call    KiRestoreSetContextState
 * 00000001403FD45D: mov     rcx, gs:188h
 * 00000001403FD466: test    dword ptr [rcx], 40010000h
 * 00000001403FD46C: jz      short loc_1403FD482
 * 00000001403FD46E: test    byte ptr [rcx+2], 1
 * 00000001403FD472: jz      short loc_1403FD482
 * 00000001403FD474: call    KiCopyCounters
 * 00000001403FD479: mov     rcx, gs:188h
 * 00000001403FD482: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FD486: cmp     word ptr [rbp+80h], 0
 * 00000001403FD48E: jz      short loc_1403FD495
 * 00000001403FD490: call    KiRestoreDebugRegisterState
 * 00000001403FD495: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FD499: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FD49D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FD4A1: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FD4A5: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FD4A9: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FD4AD: mov     r11, [rbp-20h]
 * 00000001403FD4B1: mov     r10, [rbp-28h]
 * 00000001403FD4B5: mov     r9, [rbp-30h]
 * 00000001403FD4B9: mov     r8, [rbp-38h]
 * 00000001403FD4BD: mov     byte ptr gs:853h, 0
 * 00000001403FD4C6: movzx   eax, byte ptr gs:27Dh
 * 00000001403FD4CF: cmp     gs:27Ah, al
 * 00000001403FD4D7: jz      short loc_1403FD4EA
 * 00000001403FD4D9: mov     gs:27Ah, al
 * 00000001403FD4E1: mov     ecx, 48h ; 'H'
 * 00000001403FD4E6: xor     edx, edx
 * 00000001403FD4E8: wrmsr
 * 00000001403FD4EA: btr     word ptr gs:278h, 2
 * 00000001403FD4F5: jnb     short loc_1403FD505
 * 00000001403FD4F7: mov     eax, 1
 * 00000001403FD4FC: xor     edx, edx
 * 00000001403FD4FE: mov     ecx, 49h ; 'I'
 * 00000001403FD503: wrmsr
 * 00000001403FD505: btr     word ptr gs:278h, 5
 * 00000001403FD510: jnb     loc_1403FD63B
 * 00000001403FD516: call    loc_1403FD629
 * 00000001403FD51B: add     rsp, 8
 * 00000001403FD51F: call    loc_1403FD632
 * 00000001403FD524: add     rsp, 8
 * 00000001403FD528: call    loc_1403FD51B
 * 00000001403FD52D: add     rsp, 8
 * 00000001403FD531: call    loc_1403FD524
 * 00000001403FD536: add     rsp, 8
 * 00000001403FD53A: call    loc_1403FD52D
 * 00000001403FD53F: add     rsp, 8
 * 00000001403FD543: call    loc_1403FD536
 * 00000001403FD548: add     rsp, 8
 * 00000001403FD54C: call    loc_1403FD53F
 * 00000001403FD551: add     rsp, 8
 * 00000001403FD555: call    loc_1403FD548
 * 00000001403FD55A: add     rsp, 8
 * 00000001403FD55E: call    loc_1403FD551
 * 00000001403FD563: add     rsp, 8
 * 00000001403FD567: call    loc_1403FD55A
 * 00000001403FD56C: add     rsp, 8
 * 00000001403FD570: call    loc_1403FD563
 * 00000001403FD575: add     rsp, 8
 * 00000001403FD579: call    loc_1403FD56C
 * 00000001403FD57E: add     rsp, 8
 * 00000001403FD582: call    loc_1403FD575
 * 00000001403FD587: add     rsp, 8
 * 00000001403FD58B: call    loc_1403FD57E
 * 00000001403FD590: add     rsp, 8
 * 00000001403FD594: call    loc_1403FD587
 * 00000001403FD599: add     rsp, 8
 * 00000001403FD59D: call    loc_1403FD590
 * 00000001403FD5A2: add     rsp, 8
 * 00000001403FD5A6: call    loc_1403FD599
 * 00000001403FD5AB: add     rsp, 8
 * 00000001403FD5AF: call    loc_1403FD5A2
 * 00000001403FD5B4: add     rsp, 8
 * 00000001403FD5B8: call    loc_1403FD5AB
 * 00000001403FD5BD: add     rsp, 8
 * 00000001403FD5C1: call    loc_1403FD5B4
 * 00000001403FD5C6: add     rsp, 8
 * 00000001403FD5CA: call    loc_1403FD5BD
 * 00000001403FD5CF: add     rsp, 8
 * 00000001403FD5D3: call    loc_1403FD5C6
 * 00000001403FD5D8: add     rsp, 8
 * 00000001403FD5DC: call    loc_1403FD5CF
 * 00000001403FD5E1: add     rsp, 8
 * 00000001403FD5E5: call    loc_1403FD5D8
 * 00000001403FD5EA: add     rsp, 8
 * 00000001403FD5EE: call    loc_1403FD5E1
 * 00000001403FD5F3: add     rsp, 8
 * 00000001403FD5F7: call    loc_1403FD5EA
 * 00000001403FD5FC: add     rsp, 8
 * 00000001403FD600: call    loc_1403FD5F3
 * 00000001403FD605: add     rsp, 8
 * 00000001403FD609: call    loc_1403FD5FC
 * 00000001403FD60E: add     rsp, 8
 * 00000001403FD612: call    loc_1403FD605
 * 00000001403FD617: add     rsp, 8
 * 00000001403FD61B: call    loc_1403FD60E
 * 00000001403FD620: add     rsp, 8
 * 00000001403FD624: call    loc_1403FD617
 * 00000001403FD629: add     rsp, 8
 * 00000001403FD62D: call    loc_1403FD620
 * 00000001403FD632: add     rsp, 8
 * 00000001403FD636: mov     eax, 0DADAh
 * 00000001403FD63B: mov     rdx, [rbp-40h]
 * 00000001403FD63F: mov     rcx, [rbp-48h]
 * 00000001403FD643: mov     rax, [rbp-50h]
 * 00000001403FD647: mov     rsp, rbp
 * 00000001403FD64A: mov     rbp, [rbp+0D8h]
 * 00000001403FD651: add     rsp, 0E8h
 * 00000001403FD658: test    cs:KiKvaShadow, 1
 * 00000001403FD65F: jz      short loc_1403FD666
 * 00000001403FD661: jmp     KiKernelExit
 * 00000001403FD666: swapgs
 * 00000001403FD669: iretq
 * 00000001403FD66B: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FD66F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FD673: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FD677: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FD67B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FD67F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FD683: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FD687: mov     r11, [rbp-20h]
 * 00000001403FD68B: mov     r10, [rbp-28h]
 * 00000001403FD68F: mov     r9, [rbp-30h]
 * 00000001403FD693: mov     r8, [rbp-38h]
 * 00000001403FD697: mov     rdx, [rbp-40h]
 * 00000001403FD69B: mov     rcx, [rbp-48h]
 * 00000001403FD69F: mov     rax, [rbp-50h]
 * 00000001403FD6A3: mov     rsp, rbp
 * 00000001403FD6A6: mov     rbp, [rbp+0D8h]
 * 00000001403FD6AD: add     rsp, 0E8h
 * 00000001403FD6B4: iretq
 */
