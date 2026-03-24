/*
 * XREFs of KiDpcInterrupt @ 0x1403FD2E0
 * Callers:
 *     KiDpcInterruptShadow @ 0x140A11F40 (KiDpcInterruptShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x140301350 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x140325EE0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403F75A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F8030 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1403FB600 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x1403FD2E0 (KiDpcInterrupt.c)
 *     KiDispatchInterrupt @ 0x1403FDEC0 (KiDispatchInterrupt.c)
 *     KzSetIrqlUnsafe @ 0x14050D7D0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405169B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x1403FD2E0
 * Reason: Hex-Rays returned no pseudocode for 0x1403FD2E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FD2E0: sub     rsp, 8
 * 00000001403FD2E4: push    rbp
 * 00000001403FD2E5: push    rsi
 * 00000001403FD2E6: sub     rsp, 150h
 * 00000001403FD2ED: lea     rbp, [rsp+80h]
 * 00000001403FD2F5: mov     [rbp+0E8h+var_13D], 0
 * 00000001403FD2F9: mov     [rbp+0E8h+var_138], rax
 * 00000001403FD2FD: mov     [rbp+0E8h+var_130], rcx
 * 00000001403FD301: mov     [rbp+0E8h+var_128], rdx
 * 00000001403FD305: mov     [rbp+0E8h+var_120], r8
 * 00000001403FD309: mov     [rbp+0E8h+var_118], r9
 * 00000001403FD30D: mov     [rbp+0E8h+var_110], r10
 * 00000001403FD311: mov     [rbp+0E8h+var_108], r11
 * 00000001403FD315: test    [rbp+0E8h+arg_0], 1
 * 00000001403FD31C: jnz     short loc_1403FD34B
 * 00000001403FD31E: lfence
 * 00000001403FD321: test    byte ptr gs:278h, 1
 * 00000001403FD32A: jnz     short loc_1403FD334
 * 00000001403FD32C: lfence
 * 00000001403FD32F: jmp     loc_1403FD547
 * 00000001403FD334: movzx   eax, byte ptr gs:27Ah
 * 00000001403FD33D: mov     ecx, 48h ; 'H'
 * 00000001403FD342: xor     edx, edx
 * 00000001403FD344: wrmsr
 * 00000001403FD346: jmp     loc_1403FD547
 * 00000001403FD34B: test    cs:KiKvaShadow, 1
 * 00000001403FD352: jnz     short loc_1403FD357
 * 00000001403FD354: swapgs
 * 00000001403FD357: lfence
 * 00000001403FD35A: mov     r10, gs:188h
 * 00000001403FD363: mov     rcx, gs:188h
 * 00000001403FD36C: mov     rcx, [rcx+220h]
 * 00000001403FD373: mov     rcx, [rcx+9E0h]
 * 00000001403FD37A: mov     gs:270h, rcx
 * 00000001403FD383: mov     cl, gs:850h
 * 00000001403FD38B: mov     gs:851h, cl
 * 00000001403FD393: mov     cl, gs:278h
 * 00000001403FD39B: mov     gs:852h, cl
 * 00000001403FD3A3: movzx   eax, byte ptr gs:27Bh
 * 00000001403FD3AC: cmp     gs:27Ah, al
 * 00000001403FD3B4: jz      short loc_1403FD3C7
 * 00000001403FD3B6: mov     gs:27Ah, al
 * 00000001403FD3BE: mov     ecx, 48h ; 'H'
 * 00000001403FD3C3: xor     edx, edx
 * 00000001403FD3C5: wrmsr
 * 00000001403FD3C7: movzx   edx, byte ptr gs:278h
 * 00000001403FD3D0: test    edx, 8
 * 00000001403FD3D6: jz      short loc_1403FD3EB
 * 00000001403FD3D8: mov     eax, 1
 * 00000001403FD3DD: xor     edx, edx
 * 00000001403FD3DF: mov     ecx, 49h ; 'I'
 * 00000001403FD3E4: wrmsr
 * 00000001403FD3E6: jmp     loc_1403FD529
 * 00000001403FD3EB: test    edx, 2
 * 00000001403FD3F1: jz      loc_1403FD526
 * 00000001403FD3F7: test    byte ptr gs:279h, 4
 * 00000001403FD400: jnz     loc_1403FD526
 * 00000001403FD406: call    loc_1403FD519
 * 00000001403FD40B: add     rsp, 8
 * 00000001403FD40F: call    loc_1403FD522
 * 00000001403FD414: add     rsp, 8
 * 00000001403FD418: call    loc_1403FD40B
 * 00000001403FD41D: add     rsp, 8
 * 00000001403FD421: call    loc_1403FD414
 * 00000001403FD426: add     rsp, 8
 * 00000001403FD42A: call    loc_1403FD41D
 * 00000001403FD42F: add     rsp, 8
 * 00000001403FD433: call    loc_1403FD426
 * 00000001403FD438: add     rsp, 8
 * 00000001403FD43C: call    loc_1403FD42F
 * 00000001403FD441: add     rsp, 8
 * 00000001403FD445: call    loc_1403FD438
 * 00000001403FD44A: add     rsp, 8
 * 00000001403FD44E: call    loc_1403FD441
 * 00000001403FD453: add     rsp, 8
 * 00000001403FD457: call    loc_1403FD44A
 * 00000001403FD45C: add     rsp, 8
 * 00000001403FD460: call    loc_1403FD453
 * 00000001403FD465: add     rsp, 8
 * 00000001403FD469: call    loc_1403FD45C
 * 00000001403FD46E: add     rsp, 8
 * 00000001403FD472: call    loc_1403FD465
 * 00000001403FD477: add     rsp, 8
 * 00000001403FD47B: call    loc_1403FD46E
 * 00000001403FD480: add     rsp, 8
 * 00000001403FD484: call    loc_1403FD477
 * 00000001403FD489: add     rsp, 8
 * 00000001403FD48D: call    loc_1403FD480
 * 00000001403FD492: add     rsp, 8
 * 00000001403FD496: call    loc_1403FD489
 * 00000001403FD49B: add     rsp, 8
 * 00000001403FD49F: call    loc_1403FD492
 * 00000001403FD4A4: add     rsp, 8
 * 00000001403FD4A8: call    loc_1403FD49B
 * 00000001403FD4AD: add     rsp, 8
 * 00000001403FD4B1: call    loc_1403FD4A4
 * 00000001403FD4B6: add     rsp, 8
 * 00000001403FD4BA: call    loc_1403FD4AD
 * 00000001403FD4BF: add     rsp, 8
 * 00000001403FD4C3: call    loc_1403FD4B6
 * 00000001403FD4C8: add     rsp, 8
 * 00000001403FD4CC: call    loc_1403FD4BF
 * 00000001403FD4D1: add     rsp, 8
 * 00000001403FD4D5: call    loc_1403FD4C8
 * 00000001403FD4DA: add     rsp, 8
 * 00000001403FD4DE: call    loc_1403FD4D1
 * 00000001403FD4E3: add     rsp, 8
 * 00000001403FD4E7: call    loc_1403FD4DA
 * 00000001403FD4EC: add     rsp, 8
 * 00000001403FD4F0: call    loc_1403FD4E3
 * 00000001403FD4F5: add     rsp, 8
 * 00000001403FD4F9: call    loc_1403FD4EC
 * 00000001403FD4FE: add     rsp, 8
 * 00000001403FD502: call    loc_1403FD4F5
 * 00000001403FD507: add     rsp, 8
 * 00000001403FD50B: call    loc_1403FD4FE
 * 00000001403FD510: add     rsp, 8
 * 00000001403FD514: call    loc_1403FD507
 * 00000001403FD519: add     rsp, 8
 * 00000001403FD51D: call    loc_1403FD510
 * 00000001403FD522: add     rsp, 8
 * 00000001403FD526: lfence
 * 00000001403FD529: mov     byte ptr gs:853h, 0
 * 00000001403FD532: test    byte ptr [r10+3], 3
 * 00000001403FD537: mov     [rbp+0E8h+var_68], 0
 * 00000001403FD540: jz      short loc_1403FD547
 * 00000001403FD542: call    KiSaveDebugRegisterState
 * 00000001403FD547: cld
 * 00000001403FD548: stmxcsr [rbp+0E8h+var_13C]
 * 00000001403FD54C: ldmxcsr dword ptr gs:180h
 * 00000001403FD555: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001403FD559: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001403FD55D: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001403FD561: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001403FD565: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001403FD569: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001403FD56D: xor     esi, esi
 * 00000001403FD56F: inc     dword ptr gs:8000h
 * 00000001403FD577: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FD57E: jz      short loc_1403FD583
 * 00000001403FD580: clac
 * 00000001403FD583: mov     ecx, 2
 * 00000001403FD588: cmp     cs:KiIrqlFlags, 0
 * 00000001403FD58F: jz      short loc_1403FD598
 * 00000001403FD591: call    KzSetIrqlUnsafe
 * 00000001403FD596: jmp     short loc_1403FD5A0
 * 00000001403FD598: mov     rax, cr8
 * 00000001403FD59C: mov     cr8, rcx
 * 00000001403FD5A0: mov     [rbp+0E8h+var_13F], al
 * 00000001403FD5A3: mov     rcx, rsi
 * 00000001403FD5A6: call    HalPerformEndOfInterrupt
 * 00000001403FD5AB: sti
 * 00000001403FD5AC: cmp     byte ptr gs:187h, 0
 * 00000001403FD5B5: jnz     short loc_1403FD5CE
 * 00000001403FD5B7: mov     al, [rbp+0E8h+var_13F]
 * 00000001403FD5BA: mov     rcx, gs:188h
 * 00000001403FD5C3: mov     [rcx+186h], al
 * 00000001403FD5C9: call    KiDispatchInterrupt
 * 00000001403FD5CE: cli
 * 00000001403FD5CF: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001403FD5D3: cmp     cs:KiIrqlFlags, 0
 * 00000001403FD5DA: jz      short loc_1403FD5E3
 * 00000001403FD5DC: call    KzSetIrqlUnsafe
 * 00000001403FD5E1: jmp     short loc_1403FD5E7
 * 00000001403FD5E3: mov     cr8, rcx
 * 00000001403FD5E7: mov     rsi, [rbp+0E8h+var_18]
 * 00000001403FD5EE: cli
 * 00000001403FD5EF: test    [rbp+0E8h+arg_0], 1
 * 00000001403FD5F6: jz      loc_1403FD735
 * 00000001403FD5FC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FD603: jz      short loc_1403FD608
 * 00000001403FD605: stac
 * 00000001403FD608: mov     rcx, gs:188h
 * 00000001403FD611: test    byte ptr [rcx+0C2h], 3
 * 00000001403FD618: jz      short loc_1403FD635
 * 00000001403FD61A: mov     ecx, 1
 * 00000001403FD61F: mov     cr8, rcx
 * 00000001403FD623: sti
 * 00000001403FD624: call    KiInitiateUserApc
 * 00000001403FD629: cli
 * 00000001403FD62A: mov     ecx, 0
 * 00000001403FD62F: mov     cr8, rcx
 * 00000001403FD633: jmp     short loc_1403FD608
 * 00000001403FD635: test    byte ptr gs:27Eh, 2
 * 00000001403FD63E: jz      short loc_1403FD647
 * 00000001403FD640: xor     ecx, ecx
 * 00000001403FD642: call    KiUpdateStibpPairing
 * 00000001403FD647: mov     rcx, gs:188h
 * 00000001403FD650: test    dword ptr [rcx], 8000000h
 * 00000001403FD656: jz      short loc_1403FD65D
 * 00000001403FD658: call    KiRestoreSetContextState
 * 00000001403FD65D: mov     rcx, gs:188h
 * 00000001403FD666: test    dword ptr [rcx], 40010000h
 * 00000001403FD66C: jz      short loc_1403FD682
 * 00000001403FD66E: test    byte ptr [rcx+2], 1
 * 00000001403FD672: jz      short loc_1403FD682
 * 00000001403FD674: call    KiCopyCounters
 * 00000001403FD679: mov     rcx, gs:188h
 * 00000001403FD682: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001403FD686: cmp     [rbp+0E8h+var_68], 0
 * 00000001403FD68E: jz      short loc_1403FD695
 * 00000001403FD690: call    KiRestoreDebugRegisterState
 * 00000001403FD695: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001403FD699: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001403FD69D: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001403FD6A1: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001403FD6A5: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001403FD6A9: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001403FD6AD: mov     r11, [rbp+0E8h+var_108]
 * 00000001403FD6B1: mov     r10, [rbp+0E8h+var_110]
 * 00000001403FD6B5: mov     r9, [rbp+0E8h+var_118]
 * 00000001403FD6B9: mov     r8, [rbp+0E8h+var_120]
 * 00000001403FD6BD: mov     byte ptr gs:853h, 0
 * 00000001403FD6C6: movzx   eax, byte ptr gs:27Dh
 * 00000001403FD6CF: cmp     gs:27Ah, al
 * 00000001403FD6D7: jz      short loc_1403FD6EA
 * 00000001403FD6D9: mov     gs:27Ah, al
 * 00000001403FD6E1: mov     ecx, 48h ; 'H'
 * 00000001403FD6E6: xor     edx, edx
 * 00000001403FD6E8: wrmsr
 * 00000001403FD6EA: btr     word ptr gs:278h, 2
 * 00000001403FD6F5: jnb     short loc_1403FD705
 * 00000001403FD6F7: mov     eax, 1
 * 00000001403FD6FC: xor     edx, edx
 * 00000001403FD6FE: mov     ecx, 49h ; 'I'
 * 00000001403FD703: wrmsr
 * 00000001403FD705: mov     rdx, [rbp+0E8h+var_128]
 * 00000001403FD709: mov     rcx, [rbp+0E8h+var_130]
 * 00000001403FD70D: mov     rax, [rbp+0E8h+var_138]
 * 00000001403FD711: mov     rsp, rbp
 * 00000001403FD714: mov     rbp, [rbp+0E8h+var_10]
 * 00000001403FD71B: add     rsp, 0E8h
 * 00000001403FD722: test    cs:KiKvaShadow, 1
 * 00000001403FD729: jz      short loc_1403FD730
 * 00000001403FD72B: jmp     KiKernelExit
 * 00000001403FD730: swapgs
 * 00000001403FD733: iretq
 * 00000001403FD735: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001403FD739: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001403FD73D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001403FD741: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001403FD745: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001403FD749: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001403FD74D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001403FD751: mov     r11, [rbp+0E8h+var_108]
 * 00000001403FD755: mov     r10, [rbp+0E8h+var_110]
 * 00000001403FD759: mov     r9, [rbp+0E8h+var_118]
 * 00000001403FD75D: mov     r8, [rbp+0E8h+var_120]
 * 00000001403FD761: mov     rdx, [rbp+0E8h+var_128]
 * 00000001403FD765: mov     rcx, [rbp+0E8h+var_130]
 * 00000001403FD769: mov     rax, [rbp+0E8h+var_138]
 * 00000001403FD76D: mov     rsp, rbp
 * 00000001403FD770: mov     rbp, [rbp+0E8h+var_10]
 * 00000001403FD777: add     rsp, 0E8h
 * 00000001403FD77E: iretq
 */
