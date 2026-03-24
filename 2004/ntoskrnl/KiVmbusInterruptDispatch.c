/*
 * XREFs of KiVmbusInterruptDispatch @ 0x1403FC7E0
 * Callers:
 *     KiVmbusInterrupt0 @ 0x1403FB9C0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1403FBCA0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1403FBF80 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1403FC260 (KiVmbusInterrupt3.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140273DE0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402FBAC0 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x140301350 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403F75A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F8030 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1403FB600 (KiInitiateUserApc.c)
 *     KiVmbusInterruptSubDispatch @ 0x1403FCBC0 (KiVmbusInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1403FD790 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14050D7D0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405169B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterruptDispatch @ 0x1403FC7E0
 * Reason: Hex-Rays returned no pseudocode for 0x1403FC7E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FC7E0: mov     rdx, rsp
 * 00000001403FC7E3: mov     rcx, gs:8758h
 * 00000001403FC7EC: lea     rax, [rcx-6000h]
 * 00000001403FC7F3: cmp     rax, rsp
 * 00000001403FC7F6: ja      short loc_1403FC7FD
 * 00000001403FC7F8: cmp     rsp, rcx
 * 00000001403FC7FB: jb      short loc_1403FC809
 * 00000001403FC7FD: cmp     cs:KiBugCheckActive, 0
 * 00000001403FC804: jnz     short loc_1403FC809
 * 00000001403FC806: mov     rsp, rcx
 * 00000001403FC809: sub     rsp, 20h
 * 00000001403FC80D: mov     [rsp+20h+var_10], rdx
 * 00000001403FC812: call    KiVmbusInterruptSubDispatch
 * 00000001403FC817: mov     rsp, [rsp+20h+var_10]
 * 00000001403FC81C: cli
 * 00000001403FC81D: mov     rcx, gs:20h
 * 00000001403FC826: cmp     byte ptr [rcx+20h], 1
 * 00000001403FC82A: ja      short loc_1403FC8A6
 * 00000001403FC82C: rdtsc
 * 00000001403FC82E: shl     rdx, 20h
 * 00000001403FC832: or      rax, rdx
 * 00000001403FC835: sub     rax, [rcx+7EC0h]
 * 00000001403FC83C: add     [rcx+7F38h], rax
 * 00000001403FC843: add     [rcx+7EC0h], rax
 * 00000001403FC84A: mov     r8, rax
 * 00000001403FC84D: mov     rax, [rcx+8]
 * 00000001403FC851: test    byte ptr [rax+2], 72h
 * 00000001403FC855: jz      short loc_1403FC86A
 * 00000001403FC857: xor     edx, edx
 * 00000001403FC859: call    KiBeginThreadAccountingPeriod
 * 00000001403FC85E: mov     rcx, gs:20h
 * 00000001403FC867: inc     byte ptr [rcx+20h]
 * 00000001403FC86A: mov     dl, [rcx+6]
 * 00000001403FC86D: and     byte ptr [rcx+6], 0
 * 00000001403FC871: cmp     byte ptr [rcx+7], 0
 * 00000001403FC875: jnz     short loc_1403FC8A6
 * 00000001403FC877: test    dl, dl
 * 00000001403FC879: jz      short loc_1403FC8A6
 * 00000001403FC87B: cmp     byte ptr [rbp-57h], 2
 * 00000001403FC87F: jnb     short loc_1403FC88C
 * 00000001403FC881: and     byte ptr [rcx+20h], 0
 * 00000001403FC885: call    KiDpcInterruptBypass
 * 00000001403FC88A: jmp     short loc_1403FC8A9
 * 00000001403FC88C: mov     ecx, 2
 * 00000001403FC891: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FC898: nop     dword ptr [rax+rax+00h]
 * 00000001403FC89D: mov     rcx, gs:20h
 * 00000001403FC8A6: dec     byte ptr [rcx+20h]
 * 00000001403FC8A9: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403FC8AD: cmp     cs:KiIrqlFlags, 0
 * 00000001403FC8B4: jz      short loc_1403FC8BD
 * 00000001403FC8B6: call    KzSetIrqlUnsafe
 * 00000001403FC8BB: jmp     short loc_1403FC8C1
 * 00000001403FC8BD: mov     cr8, rcx
 * 00000001403FC8C1: mov     rsi, [rbp+0D0h]
 * 00000001403FC8C8: cli
 * 00000001403FC8C9: test    byte ptr [rbp+0F0h], 1
 * 00000001403FC8D0: jz      loc_1403FCA0F
 * 00000001403FC8D6: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FC8DD: jz      short loc_1403FC8E2
 * 00000001403FC8DF: stac
 * 00000001403FC8E2: mov     rcx, gs:188h
 * 00000001403FC8EB: test    byte ptr [rcx+0C2h], 3
 * 00000001403FC8F2: jz      short loc_1403FC90F
 * 00000001403FC8F4: mov     ecx, 1
 * 00000001403FC8F9: mov     cr8, rcx
 * 00000001403FC8FD: sti
 * 00000001403FC8FE: call    KiInitiateUserApc
 * 00000001403FC903: cli
 * 00000001403FC904: mov     ecx, 0
 * 00000001403FC909: mov     cr8, rcx
 * 00000001403FC90D: jmp     short loc_1403FC8E2
 * 00000001403FC90F: test    byte ptr gs:27Eh, 2
 * 00000001403FC918: jz      short loc_1403FC921
 * 00000001403FC91A: xor     ecx, ecx
 * 00000001403FC91C: call    KiUpdateStibpPairing
 * 00000001403FC921: mov     rcx, gs:188h
 * 00000001403FC92A: test    dword ptr [rcx], 8000000h
 * 00000001403FC930: jz      short loc_1403FC937
 * 00000001403FC932: call    KiRestoreSetContextState
 * 00000001403FC937: mov     rcx, gs:188h
 * 00000001403FC940: test    dword ptr [rcx], 40010000h
 * 00000001403FC946: jz      short loc_1403FC95C
 * 00000001403FC948: test    byte ptr [rcx+2], 1
 * 00000001403FC94C: jz      short loc_1403FC95C
 * 00000001403FC94E: call    KiCopyCounters
 * 00000001403FC953: mov     rcx, gs:188h
 * 00000001403FC95C: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FC960: cmp     word ptr [rbp+80h], 0
 * 00000001403FC968: jz      short loc_1403FC96F
 * 00000001403FC96A: call    KiRestoreDebugRegisterState
 * 00000001403FC96F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FC973: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FC977: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FC97B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FC97F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FC983: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FC987: mov     r11, [rbp-20h]
 * 00000001403FC98B: mov     r10, [rbp-28h]
 * 00000001403FC98F: mov     r9, [rbp-30h]
 * 00000001403FC993: mov     r8, [rbp-38h]
 * 00000001403FC997: mov     byte ptr gs:853h, 0
 * 00000001403FC9A0: movzx   eax, byte ptr gs:27Dh
 * 00000001403FC9A9: cmp     gs:27Ah, al
 * 00000001403FC9B1: jz      short loc_1403FC9C4
 * 00000001403FC9B3: mov     gs:27Ah, al
 * 00000001403FC9BB: mov     ecx, 48h ; 'H'
 * 00000001403FC9C0: xor     edx, edx
 * 00000001403FC9C2: wrmsr
 * 00000001403FC9C4: btr     word ptr gs:278h, 2
 * 00000001403FC9CF: jnb     short loc_1403FC9DF
 * 00000001403FC9D1: mov     eax, 1
 * 00000001403FC9D6: xor     edx, edx
 * 00000001403FC9D8: mov     ecx, 49h ; 'I'
 * 00000001403FC9DD: wrmsr
 * 00000001403FC9DF: mov     rdx, [rbp-40h]
 * 00000001403FC9E3: mov     rcx, [rbp-48h]
 * 00000001403FC9E7: mov     rax, [rbp-50h]
 * 00000001403FC9EB: mov     rsp, rbp
 * 00000001403FC9EE: mov     rbp, [rbp+0D8h]
 * 00000001403FC9F5: add     rsp, 0E8h
 * 00000001403FC9FC: test    cs:KiKvaShadow, 1
 * 00000001403FCA03: jz      short loc_1403FCA0A
 * 00000001403FCA05: jmp     KiKernelExit
 * 00000001403FCA0A: swapgs
 * 00000001403FCA0D: iretq
 * 00000001403FCA0F: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FCA13: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FCA17: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FCA1B: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FCA1F: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FCA23: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FCA27: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FCA2B: mov     r11, [rbp-20h]
 * 00000001403FCA2F: mov     r10, [rbp-28h]
 * 00000001403FCA33: mov     r9, [rbp-30h]
 * 00000001403FCA37: mov     r8, [rbp-38h]
 * 00000001403FCA3B: mov     rdx, [rbp-40h]
 * 00000001403FCA3F: mov     rcx, [rbp-48h]
 * 00000001403FCA43: mov     rax, [rbp-50h]
 * 00000001403FCA47: mov     rsp, rbp
 * 00000001403FCA4A: mov     rbp, [rbp+0D8h]
 * 00000001403FCA51: add     rsp, 0E8h
 * 00000001403FCA58: iretq
 */
