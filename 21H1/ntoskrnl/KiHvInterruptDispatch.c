/*
 * XREFs of KiHvInterruptDispatch @ 0x1403FB2B0
 * Callers:
 *     KiHvInterrupt @ 0x1403FA450 (KiHvInterrupt.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DDF20 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x1402EC5B0 (HalPerformEndOfInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140357AA0 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140359A80 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403F6310 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F6DA0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1403FA370 (KiInitiateUserApc.c)
 *     KiHvInterruptSubDispatch @ 0x1403FB7D0 (KiHvInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1403FC500 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14050D180 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140516360 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterruptDispatch @ 0x1403FB2B0
 * Reason: Hex-Rays returned no pseudocode for 0x1403FB2B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FB2B0: mov     rdx, rsp
 * 00000001403FB2B3: mov     rcx, gs:8758h
 * 00000001403FB2BC: lea     rax, [rcx-6000h]
 * 00000001403FB2C3: cmp     rax, rsp
 * 00000001403FB2C6: ja      short loc_1403FB2CD
 * 00000001403FB2C8: cmp     rsp, rcx
 * 00000001403FB2CB: jb      short loc_1403FB2D9
 * 00000001403FB2CD: cmp     cs:KiBugCheckActive, 0
 * 00000001403FB2D4: jnz     short loc_1403FB2D9
 * 00000001403FB2D6: mov     rsp, rcx
 * 00000001403FB2D9: sub     rsp, 20h
 * 00000001403FB2DD: mov     [rsp+20h+var_10], rdx
 * 00000001403FB2E2: call    KiHvInterruptSubDispatch
 * 00000001403FB2E7: mov     rsp, [rsp+20h+var_10]
 * 00000001403FB2EC: test    cs:HvlEnlightenments, 1000h
 * 00000001403FB2F6: jz      short loc_1403FB300
 * 00000001403FB2F8: mov     rcx, rsi
 * 00000001403FB2FB: call    HalPerformEndOfInterrupt
 * 00000001403FB300: cli
 * 00000001403FB301: mov     rcx, gs:20h
 * 00000001403FB30A: cmp     byte ptr [rcx+20h], 1
 * 00000001403FB30E: ja      short loc_1403FB38A
 * 00000001403FB310: rdtsc
 * 00000001403FB312: shl     rdx, 20h
 * 00000001403FB316: or      rax, rdx
 * 00000001403FB319: sub     rax, [rcx+7EC0h]
 * 00000001403FB320: add     [rcx+7F38h], rax
 * 00000001403FB327: add     [rcx+7EC0h], rax
 * 00000001403FB32E: mov     r8, rax
 * 00000001403FB331: mov     rax, [rcx+8]
 * 00000001403FB335: test    byte ptr [rax+2], 72h
 * 00000001403FB339: jz      short loc_1403FB34E
 * 00000001403FB33B: xor     edx, edx
 * 00000001403FB33D: call    KiBeginThreadAccountingPeriod
 * 00000001403FB342: mov     rcx, gs:20h
 * 00000001403FB34B: inc     byte ptr [rcx+20h]
 * 00000001403FB34E: mov     dl, [rcx+6]
 * 00000001403FB351: and     byte ptr [rcx+6], 0
 * 00000001403FB355: cmp     byte ptr [rcx+7], 0
 * 00000001403FB359: jnz     short loc_1403FB38A
 * 00000001403FB35B: test    dl, dl
 * 00000001403FB35D: jz      short loc_1403FB38A
 * 00000001403FB35F: cmp     byte ptr [rbp-57h], 2
 * 00000001403FB363: jnb     short loc_1403FB370
 * 00000001403FB365: and     byte ptr [rcx+20h], 0
 * 00000001403FB369: call    KiDpcInterruptBypass
 * 00000001403FB36E: jmp     short loc_1403FB38D
 * 00000001403FB370: mov     ecx, 2
 * 00000001403FB375: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FB37C: nop     dword ptr [rax+rax+00h]
 * 00000001403FB381: mov     rcx, gs:20h
 * 00000001403FB38A: dec     byte ptr [rcx+20h]
 * 00000001403FB38D: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403FB391: cmp     cs:KiIrqlFlags, 0
 * 00000001403FB398: jz      short loc_1403FB3A1
 * 00000001403FB39A: call    KzSetIrqlUnsafe
 * 00000001403FB39F: jmp     short loc_1403FB3A5
 * 00000001403FB3A1: mov     cr8, rcx
 * 00000001403FB3A5: mov     rsi, [rbp+0D0h]
 * 00000001403FB3AC: cli
 * 00000001403FB3AD: test    byte ptr [rbp+0F0h], 1
 * 00000001403FB3B4: jz      loc_1403FB4F3
 * 00000001403FB3BA: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FB3C1: jz      short loc_1403FB3C6
 * 00000001403FB3C3: stac
 * 00000001403FB3C6: mov     rcx, gs:188h
 * 00000001403FB3CF: test    byte ptr [rcx+0C2h], 3
 * 00000001403FB3D6: jz      short loc_1403FB3F3
 * 00000001403FB3D8: mov     ecx, 1
 * 00000001403FB3DD: mov     cr8, rcx
 * 00000001403FB3E1: sti
 * 00000001403FB3E2: call    KiInitiateUserApc
 * 00000001403FB3E7: cli
 * 00000001403FB3E8: mov     ecx, 0
 * 00000001403FB3ED: mov     cr8, rcx
 * 00000001403FB3F1: jmp     short loc_1403FB3C6
 * 00000001403FB3F3: test    byte ptr gs:27Eh, 2
 * 00000001403FB3FC: jz      short loc_1403FB405
 * 00000001403FB3FE: xor     ecx, ecx
 * 00000001403FB400: call    KiUpdateStibpPairing
 * 00000001403FB405: mov     rcx, gs:188h
 * 00000001403FB40E: test    dword ptr [rcx], 8000000h
 * 00000001403FB414: jz      short loc_1403FB41B
 * 00000001403FB416: call    KiRestoreSetContextState
 * 00000001403FB41B: mov     rcx, gs:188h
 * 00000001403FB424: test    dword ptr [rcx], 40010000h
 * 00000001403FB42A: jz      short loc_1403FB440
 * 00000001403FB42C: test    byte ptr [rcx+2], 1
 * 00000001403FB430: jz      short loc_1403FB440
 * 00000001403FB432: call    KiCopyCounters
 * 00000001403FB437: mov     rcx, gs:188h
 * 00000001403FB440: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FB444: cmp     word ptr [rbp+80h], 0
 * 00000001403FB44C: jz      short loc_1403FB453
 * 00000001403FB44E: call    KiRestoreDebugRegisterState
 * 00000001403FB453: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FB457: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FB45B: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FB45F: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FB463: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FB467: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FB46B: mov     r11, [rbp-20h]
 * 00000001403FB46F: mov     r10, [rbp-28h]
 * 00000001403FB473: mov     r9, [rbp-30h]
 * 00000001403FB477: mov     r8, [rbp-38h]
 * 00000001403FB47B: mov     byte ptr gs:853h, 0
 * 00000001403FB484: movzx   eax, byte ptr gs:27Dh
 * 00000001403FB48D: cmp     gs:27Ah, al
 * 00000001403FB495: jz      short loc_1403FB4A8
 * 00000001403FB497: mov     gs:27Ah, al
 * 00000001403FB49F: mov     ecx, 48h ; 'H'
 * 00000001403FB4A4: xor     edx, edx
 * 00000001403FB4A6: wrmsr
 * 00000001403FB4A8: btr     word ptr gs:278h, 2
 * 00000001403FB4B3: jnb     short loc_1403FB4C3
 * 00000001403FB4B5: mov     eax, 1
 * 00000001403FB4BA: xor     edx, edx
 * 00000001403FB4BC: mov     ecx, 49h ; 'I'
 * 00000001403FB4C1: wrmsr
 * 00000001403FB4C3: mov     rdx, [rbp-40h]
 * 00000001403FB4C7: mov     rcx, [rbp-48h]
 * 00000001403FB4CB: mov     rax, [rbp-50h]
 * 00000001403FB4CF: mov     rsp, rbp
 * 00000001403FB4D2: mov     rbp, [rbp+0D8h]
 * 00000001403FB4D9: add     rsp, 0E8h
 * 00000001403FB4E0: test    cs:KiKvaShadow, 1
 * 00000001403FB4E7: jz      short loc_1403FB4EE
 * 00000001403FB4E9: jmp     KiKernelExit
 * 00000001403FB4EE: swapgs
 * 00000001403FB4F1: iretq
 * 00000001403FB4F3: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FB4F7: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FB4FB: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FB4FF: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FB503: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FB507: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FB50B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FB50F: mov     r11, [rbp-20h]
 * 00000001403FB513: mov     r10, [rbp-28h]
 * 00000001403FB517: mov     r9, [rbp-30h]
 * 00000001403FB51B: mov     r8, [rbp-38h]
 * 00000001403FB51F: mov     rdx, [rbp-40h]
 * 00000001403FB523: mov     rcx, [rbp-48h]
 * 00000001403FB527: mov     rax, [rbp-50h]
 * 00000001403FB52B: mov     rsp, rbp
 * 00000001403FB52E: mov     rbp, [rbp+0D8h]
 * 00000001403FB535: add     rsp, 0E8h
 * 00000001403FB53C: iretq
 */
