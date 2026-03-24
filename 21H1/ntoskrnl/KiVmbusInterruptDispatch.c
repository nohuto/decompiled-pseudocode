/*
 * XREFs of KiVmbusInterruptDispatch @ 0x1403FB550
 * Callers:
 *     KiVmbusInterrupt0 @ 0x1403FA730 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1403FAA10 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1403FACF0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1403FAFD0 (KiVmbusInterrupt3.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DDF20 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x140357AA0 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140359A80 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403F6310 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F6DA0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1403FA370 (KiInitiateUserApc.c)
 *     KiVmbusInterruptSubDispatch @ 0x1403FB930 (KiVmbusInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1403FC500 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14050D180 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140516360 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterruptDispatch @ 0x1403FB550
 * Reason: Hex-Rays returned no pseudocode for 0x1403FB550
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FB550: mov     rdx, rsp
 * 00000001403FB553: mov     rcx, gs:8758h
 * 00000001403FB55C: lea     rax, [rcx-6000h]
 * 00000001403FB563: cmp     rax, rsp
 * 00000001403FB566: ja      short loc_1403FB56D
 * 00000001403FB568: cmp     rsp, rcx
 * 00000001403FB56B: jb      short loc_1403FB579
 * 00000001403FB56D: cmp     cs:KiBugCheckActive, 0
 * 00000001403FB574: jnz     short loc_1403FB579
 * 00000001403FB576: mov     rsp, rcx
 * 00000001403FB579: sub     rsp, 20h
 * 00000001403FB57D: mov     [rsp+20h+var_10], rdx
 * 00000001403FB582: call    KiVmbusInterruptSubDispatch
 * 00000001403FB587: mov     rsp, [rsp+20h+var_10]
 * 00000001403FB58C: cli
 * 00000001403FB58D: mov     rcx, gs:20h
 * 00000001403FB596: cmp     byte ptr [rcx+20h], 1
 * 00000001403FB59A: ja      short loc_1403FB616
 * 00000001403FB59C: rdtsc
 * 00000001403FB59E: shl     rdx, 20h
 * 00000001403FB5A2: or      rax, rdx
 * 00000001403FB5A5: sub     rax, [rcx+7EC0h]
 * 00000001403FB5AC: add     [rcx+7F38h], rax
 * 00000001403FB5B3: add     [rcx+7EC0h], rax
 * 00000001403FB5BA: mov     r8, rax
 * 00000001403FB5BD: mov     rax, [rcx+8]
 * 00000001403FB5C1: test    byte ptr [rax+2], 72h
 * 00000001403FB5C5: jz      short loc_1403FB5DA
 * 00000001403FB5C7: xor     edx, edx
 * 00000001403FB5C9: call    KiBeginThreadAccountingPeriod
 * 00000001403FB5CE: mov     rcx, gs:20h
 * 00000001403FB5D7: inc     byte ptr [rcx+20h]
 * 00000001403FB5DA: mov     dl, [rcx+6]
 * 00000001403FB5DD: and     byte ptr [rcx+6], 0
 * 00000001403FB5E1: cmp     byte ptr [rcx+7], 0
 * 00000001403FB5E5: jnz     short loc_1403FB616
 * 00000001403FB5E7: test    dl, dl
 * 00000001403FB5E9: jz      short loc_1403FB616
 * 00000001403FB5EB: cmp     byte ptr [rbp-57h], 2
 * 00000001403FB5EF: jnb     short loc_1403FB5FC
 * 00000001403FB5F1: and     byte ptr [rcx+20h], 0
 * 00000001403FB5F5: call    KiDpcInterruptBypass
 * 00000001403FB5FA: jmp     short loc_1403FB619
 * 00000001403FB5FC: mov     ecx, 2
 * 00000001403FB601: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FB608: nop     dword ptr [rax+rax+00h]
 * 00000001403FB60D: mov     rcx, gs:20h
 * 00000001403FB616: dec     byte ptr [rcx+20h]
 * 00000001403FB619: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403FB61D: cmp     cs:KiIrqlFlags, 0
 * 00000001403FB624: jz      short loc_1403FB62D
 * 00000001403FB626: call    KzSetIrqlUnsafe
 * 00000001403FB62B: jmp     short loc_1403FB631
 * 00000001403FB62D: mov     cr8, rcx
 * 00000001403FB631: mov     rsi, [rbp+0D0h]
 * 00000001403FB638: cli
 * 00000001403FB639: test    byte ptr [rbp+0F0h], 1
 * 00000001403FB640: jz      loc_1403FB77F
 * 00000001403FB646: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FB64D: jz      short loc_1403FB652
 * 00000001403FB64F: stac
 * 00000001403FB652: mov     rcx, gs:188h
 * 00000001403FB65B: test    byte ptr [rcx+0C2h], 3
 * 00000001403FB662: jz      short loc_1403FB67F
 * 00000001403FB664: mov     ecx, 1
 * 00000001403FB669: mov     cr8, rcx
 * 00000001403FB66D: sti
 * 00000001403FB66E: call    KiInitiateUserApc
 * 00000001403FB673: cli
 * 00000001403FB674: mov     ecx, 0
 * 00000001403FB679: mov     cr8, rcx
 * 00000001403FB67D: jmp     short loc_1403FB652
 * 00000001403FB67F: test    byte ptr gs:27Eh, 2
 * 00000001403FB688: jz      short loc_1403FB691
 * 00000001403FB68A: xor     ecx, ecx
 * 00000001403FB68C: call    KiUpdateStibpPairing
 * 00000001403FB691: mov     rcx, gs:188h
 * 00000001403FB69A: test    dword ptr [rcx], 8000000h
 * 00000001403FB6A0: jz      short loc_1403FB6A7
 * 00000001403FB6A2: call    KiRestoreSetContextState
 * 00000001403FB6A7: mov     rcx, gs:188h
 * 00000001403FB6B0: test    dword ptr [rcx], 40010000h
 * 00000001403FB6B6: jz      short loc_1403FB6CC
 * 00000001403FB6B8: test    byte ptr [rcx+2], 1
 * 00000001403FB6BC: jz      short loc_1403FB6CC
 * 00000001403FB6BE: call    KiCopyCounters
 * 00000001403FB6C3: mov     rcx, gs:188h
 * 00000001403FB6CC: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FB6D0: cmp     word ptr [rbp+80h], 0
 * 00000001403FB6D8: jz      short loc_1403FB6DF
 * 00000001403FB6DA: call    KiRestoreDebugRegisterState
 * 00000001403FB6DF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FB6E3: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FB6E7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FB6EB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FB6EF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FB6F3: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FB6F7: mov     r11, [rbp-20h]
 * 00000001403FB6FB: mov     r10, [rbp-28h]
 * 00000001403FB6FF: mov     r9, [rbp-30h]
 * 00000001403FB703: mov     r8, [rbp-38h]
 * 00000001403FB707: mov     byte ptr gs:853h, 0
 * 00000001403FB710: movzx   eax, byte ptr gs:27Dh
 * 00000001403FB719: cmp     gs:27Ah, al
 * 00000001403FB721: jz      short loc_1403FB734
 * 00000001403FB723: mov     gs:27Ah, al
 * 00000001403FB72B: mov     ecx, 48h ; 'H'
 * 00000001403FB730: xor     edx, edx
 * 00000001403FB732: wrmsr
 * 00000001403FB734: btr     word ptr gs:278h, 2
 * 00000001403FB73F: jnb     short loc_1403FB74F
 * 00000001403FB741: mov     eax, 1
 * 00000001403FB746: xor     edx, edx
 * 00000001403FB748: mov     ecx, 49h ; 'I'
 * 00000001403FB74D: wrmsr
 * 00000001403FB74F: mov     rdx, [rbp-40h]
 * 00000001403FB753: mov     rcx, [rbp-48h]
 * 00000001403FB757: mov     rax, [rbp-50h]
 * 00000001403FB75B: mov     rsp, rbp
 * 00000001403FB75E: mov     rbp, [rbp+0D8h]
 * 00000001403FB765: add     rsp, 0E8h
 * 00000001403FB76C: test    cs:KiKvaShadow, 1
 * 00000001403FB773: jz      short loc_1403FB77A
 * 00000001403FB775: jmp     KiKernelExit
 * 00000001403FB77A: swapgs
 * 00000001403FB77D: iretq
 * 00000001403FB77F: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FB783: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FB787: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FB78B: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FB78F: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FB793: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FB797: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FB79B: mov     r11, [rbp-20h]
 * 00000001403FB79F: mov     r10, [rbp-28h]
 * 00000001403FB7A3: mov     r9, [rbp-30h]
 * 00000001403FB7A7: mov     r8, [rbp-38h]
 * 00000001403FB7AB: mov     rdx, [rbp-40h]
 * 00000001403FB7AF: mov     rcx, [rbp-48h]
 * 00000001403FB7B3: mov     rax, [rbp-50h]
 * 00000001403FB7B7: mov     rsp, rbp
 * 00000001403FB7BA: mov     rbp, [rbp+0D8h]
 * 00000001403FB7C1: add     rsp, 0E8h
 * 00000001403FB7C8: iretq
 */
