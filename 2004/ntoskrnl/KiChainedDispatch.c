/*
 * XREFs of KiChainedDispatch @ 0x1403F8370
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140273DE0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402FBAC0 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x140301350 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x140325EE0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403F75A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F8030 (KiRestoreSetContextState.c)
 *     KiScanInterruptObjectList @ 0x1403F8600 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x1403FB600 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1403FD790 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14050D7D0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405169B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x1403F8370
 * Reason: Hex-Rays returned no pseudocode for 0x1403F8370
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403F8370: mov     rdx, rsp
 * 00000001403F8373: mov     rcx, gs:8758h
 * 00000001403F837C: lea     rax, [rcx-6000h]
 * 00000001403F8383: cmp     rax, rsp
 * 00000001403F8386: ja      short loc_1403F838D
 * 00000001403F8388: cmp     rsp, rcx
 * 00000001403F838B: jb      short loc_1403F8399
 * 00000001403F838D: cmp     cs:KiBugCheckActive, 0
 * 00000001403F8394: jnz     short loc_1403F8399
 * 00000001403F8396: mov     rsp, rcx
 * 00000001403F8399: sub     rsp, 20h
 * 00000001403F839D: mov     [rsp+20h+var_10], rdx
 * 00000001403F83A2: call    KiScanInterruptObjectList
 * 00000001403F83A7: mov     rsp, [rsp+20h+var_10]
 * 00000001403F83AC: mov     rcx, rsi
 * 00000001403F83AF: call    HalPerformEndOfInterrupt
 * 00000001403F83B4: mov     rcx, gs:20h
 * 00000001403F83BD: cmp     byte ptr [rcx+20h], 1
 * 00000001403F83C1: ja      short loc_1403F843D
 * 00000001403F83C3: rdtsc
 * 00000001403F83C5: shl     rdx, 20h
 * 00000001403F83C9: or      rax, rdx
 * 00000001403F83CC: sub     rax, [rcx+7EC0h]
 * 00000001403F83D3: add     [rcx+7F38h], rax
 * 00000001403F83DA: add     [rcx+7EC0h], rax
 * 00000001403F83E1: mov     r8, rax
 * 00000001403F83E4: mov     rax, [rcx+8]
 * 00000001403F83E8: test    byte ptr [rax+2], 72h
 * 00000001403F83EC: jz      short loc_1403F8401
 * 00000001403F83EE: xor     edx, edx
 * 00000001403F83F0: call    KiBeginThreadAccountingPeriod
 * 00000001403F83F5: mov     rcx, gs:20h
 * 00000001403F83FE: inc     byte ptr [rcx+20h]
 * 00000001403F8401: mov     dl, [rcx+6]
 * 00000001403F8404: and     byte ptr [rcx+6], 0
 * 00000001403F8408: cmp     byte ptr [rcx+7], 0
 * 00000001403F840C: jnz     short loc_1403F843D
 * 00000001403F840E: test    dl, dl
 * 00000001403F8410: jz      short loc_1403F843D
 * 00000001403F8412: cmp     byte ptr [rbp-57h], 2
 * 00000001403F8416: jnb     short loc_1403F8423
 * 00000001403F8418: and     byte ptr [rcx+20h], 0
 * 00000001403F841C: call    KiDpcInterruptBypass
 * 00000001403F8421: jmp     short loc_1403F8440
 * 00000001403F8423: mov     ecx, 2
 * 00000001403F8428: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403F842F: nop     dword ptr [rax+rax+00h]
 * 00000001403F8434: mov     rcx, gs:20h
 * 00000001403F843D: dec     byte ptr [rcx+20h]
 * 00000001403F8440: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403F8444: cmp     cs:KiIrqlFlags, 0
 * 00000001403F844B: jz      short loc_1403F8454
 * 00000001403F844D: call    KzSetIrqlUnsafe
 * 00000001403F8452: jmp     short loc_1403F8458
 * 00000001403F8454: mov     cr8, rcx
 * 00000001403F8458: mov     rsi, [rbp+0D0h]
 * 00000001403F845F: test    byte ptr [rbp+0F0h], 1
 * 00000001403F8466: jz      loc_1403F85A5
 * 00000001403F846C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403F8473: jz      short loc_1403F8478
 * 00000001403F8475: stac
 * 00000001403F8478: mov     rcx, gs:188h
 * 00000001403F8481: test    byte ptr [rcx+0C2h], 3
 * 00000001403F8488: jz      short loc_1403F84A5
 * 00000001403F848A: mov     ecx, 1
 * 00000001403F848F: mov     cr8, rcx
 * 00000001403F8493: sti
 * 00000001403F8494: call    KiInitiateUserApc
 * 00000001403F8499: cli
 * 00000001403F849A: mov     ecx, 0
 * 00000001403F849F: mov     cr8, rcx
 * 00000001403F84A3: jmp     short loc_1403F8478
 * 00000001403F84A5: test    byte ptr gs:27Eh, 2
 * 00000001403F84AE: jz      short loc_1403F84B7
 * 00000001403F84B0: xor     ecx, ecx
 * 00000001403F84B2: call    KiUpdateStibpPairing
 * 00000001403F84B7: mov     rcx, gs:188h
 * 00000001403F84C0: test    dword ptr [rcx], 8000000h
 * 00000001403F84C6: jz      short loc_1403F84CD
 * 00000001403F84C8: call    KiRestoreSetContextState
 * 00000001403F84CD: mov     rcx, gs:188h
 * 00000001403F84D6: test    dword ptr [rcx], 40010000h
 * 00000001403F84DC: jz      short loc_1403F84F2
 * 00000001403F84DE: test    byte ptr [rcx+2], 1
 * 00000001403F84E2: jz      short loc_1403F84F2
 * 00000001403F84E4: call    KiCopyCounters
 * 00000001403F84E9: mov     rcx, gs:188h
 * 00000001403F84F2: ldmxcsr dword ptr [rbp-54h]
 * 00000001403F84F6: cmp     word ptr [rbp+80h], 0
 * 00000001403F84FE: jz      short loc_1403F8505
 * 00000001403F8500: call    KiRestoreDebugRegisterState
 * 00000001403F8505: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403F8509: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403F850D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403F8511: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403F8515: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403F8519: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403F851D: mov     r11, [rbp-20h]
 * 00000001403F8521: mov     r10, [rbp-28h]
 * 00000001403F8525: mov     r9, [rbp-30h]
 * 00000001403F8529: mov     r8, [rbp-38h]
 * 00000001403F852D: mov     byte ptr gs:853h, 0
 * 00000001403F8536: movzx   eax, byte ptr gs:27Dh
 * 00000001403F853F: cmp     gs:27Ah, al
 * 00000001403F8547: jz      short loc_1403F855A
 * 00000001403F8549: mov     gs:27Ah, al
 * 00000001403F8551: mov     ecx, 48h ; 'H'
 * 00000001403F8556: xor     edx, edx
 * 00000001403F8558: wrmsr
 * 00000001403F855A: btr     word ptr gs:278h, 2
 * 00000001403F8565: jnb     short loc_1403F8575
 * 00000001403F8567: mov     eax, 1
 * 00000001403F856C: xor     edx, edx
 * 00000001403F856E: mov     ecx, 49h ; 'I'
 * 00000001403F8573: wrmsr
 * 00000001403F8575: mov     rdx, [rbp-40h]
 * 00000001403F8579: mov     rcx, [rbp-48h]
 * 00000001403F857D: mov     rax, [rbp-50h]
 * 00000001403F8581: mov     rsp, rbp
 * 00000001403F8584: mov     rbp, [rbp+0D8h]
 * 00000001403F858B: add     rsp, 0E8h
 * 00000001403F8592: test    cs:KiKvaShadow, 1
 * 00000001403F8599: jz      short loc_1403F85A0
 * 00000001403F859B: jmp     KiKernelExit
 * 00000001403F85A0: swapgs
 * 00000001403F85A3: iretq
 * 00000001403F85A5: ldmxcsr dword ptr [rbp-54h]
 * 00000001403F85A9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403F85AD: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403F85B1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403F85B5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403F85B9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403F85BD: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403F85C1: mov     r11, [rbp-20h]
 * 00000001403F85C5: mov     r10, [rbp-28h]
 * 00000001403F85C9: mov     r9, [rbp-30h]
 * 00000001403F85CD: mov     r8, [rbp-38h]
 * 00000001403F85D1: mov     rdx, [rbp-40h]
 * 00000001403F85D5: mov     rcx, [rbp-48h]
 * 00000001403F85D9: mov     rax, [rbp-50h]
 * 00000001403F85DD: mov     rsp, rbp
 * 00000001403F85E0: mov     rbp, [rbp+0D8h]
 * 00000001403F85E7: add     rsp, 0E8h
 * 00000001403F85EE: iretq
 */
