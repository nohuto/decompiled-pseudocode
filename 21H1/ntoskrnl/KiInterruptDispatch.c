/*
 * XREFs of KiInterruptDispatch @ 0x1403F7900
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DDF20 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x1402EC5B0 (HalPerformEndOfInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140357AA0 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140359A80 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403F6310 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F6DA0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatch @ 0x1403F7550 (KiInterruptSubDispatch.c)
 *     KiInitiateUserApc @ 0x1403FA370 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1403FC500 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14050D180 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140516360 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x1403F7900
 * Reason: Hex-Rays returned no pseudocode for 0x1403F7900
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403F7900: mov     rdx, rsp
 * 00000001403F7903: mov     rcx, gs:8758h
 * 00000001403F790C: lea     rax, [rcx-6000h]
 * 00000001403F7913: cmp     rax, rsp
 * 00000001403F7916: ja      short loc_1403F791D
 * 00000001403F7918: cmp     rsp, rcx
 * 00000001403F791B: jb      short loc_1403F7929
 * 00000001403F791D: cmp     cs:KiBugCheckActive, 0
 * 00000001403F7924: jnz     short loc_1403F7929
 * 00000001403F7926: mov     rsp, rcx
 * 00000001403F7929: sub     rsp, 20h
 * 00000001403F792D: mov     [rsp+20h+var_10], rdx
 * 00000001403F7932: call    KiInterruptSubDispatch
 * 00000001403F7937: mov     rsp, [rsp+20h+var_10]
 * 00000001403F793C: mov     rcx, rsi
 * 00000001403F793F: call    HalPerformEndOfInterrupt
 * 00000001403F7944: mov     rcx, gs:20h
 * 00000001403F794D: cmp     byte ptr [rcx+20h], 1
 * 00000001403F7951: ja      short loc_1403F79CD
 * 00000001403F7953: rdtsc
 * 00000001403F7955: shl     rdx, 20h
 * 00000001403F7959: or      rax, rdx
 * 00000001403F795C: sub     rax, [rcx+7EC0h]
 * 00000001403F7963: add     [rcx+7F38h], rax
 * 00000001403F796A: add     [rcx+7EC0h], rax
 * 00000001403F7971: mov     r8, rax
 * 00000001403F7974: mov     rax, [rcx+8]
 * 00000001403F7978: test    byte ptr [rax+2], 72h
 * 00000001403F797C: jz      short loc_1403F7991
 * 00000001403F797E: xor     edx, edx
 * 00000001403F7980: call    KiBeginThreadAccountingPeriod
 * 00000001403F7985: mov     rcx, gs:20h
 * 00000001403F798E: inc     byte ptr [rcx+20h]
 * 00000001403F7991: mov     dl, [rcx+6]
 * 00000001403F7994: and     byte ptr [rcx+6], 0
 * 00000001403F7998: cmp     byte ptr [rcx+7], 0
 * 00000001403F799C: jnz     short loc_1403F79CD
 * 00000001403F799E: test    dl, dl
 * 00000001403F79A0: jz      short loc_1403F79CD
 * 00000001403F79A2: cmp     byte ptr [rbp-57h], 2
 * 00000001403F79A6: jnb     short loc_1403F79B3
 * 00000001403F79A8: and     byte ptr [rcx+20h], 0
 * 00000001403F79AC: call    KiDpcInterruptBypass
 * 00000001403F79B1: jmp     short loc_1403F79D0
 * 00000001403F79B3: mov     ecx, 2
 * 00000001403F79B8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403F79BF: nop     dword ptr [rax+rax+00h]
 * 00000001403F79C4: mov     rcx, gs:20h
 * 00000001403F79CD: dec     byte ptr [rcx+20h]
 * 00000001403F79D0: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403F79D4: cmp     cs:KiIrqlFlags, 0
 * 00000001403F79DB: jz      short loc_1403F79E4
 * 00000001403F79DD: call    KzSetIrqlUnsafe
 * 00000001403F79E2: jmp     short loc_1403F79E8
 * 00000001403F79E4: mov     cr8, rcx
 * 00000001403F79E8: mov     rsi, [rbp+0D0h]
 * 00000001403F79EF: test    byte ptr [rbp+0F0h], 1
 * 00000001403F79F6: jz      loc_1403F7B35
 * 00000001403F79FC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403F7A03: jz      short loc_1403F7A08
 * 00000001403F7A05: stac
 * 00000001403F7A08: mov     rcx, gs:188h
 * 00000001403F7A11: test    byte ptr [rcx+0C2h], 3
 * 00000001403F7A18: jz      short loc_1403F7A35
 * 00000001403F7A1A: mov     ecx, 1
 * 00000001403F7A1F: mov     cr8, rcx
 * 00000001403F7A23: sti
 * 00000001403F7A24: call    KiInitiateUserApc
 * 00000001403F7A29: cli
 * 00000001403F7A2A: mov     ecx, 0
 * 00000001403F7A2F: mov     cr8, rcx
 * 00000001403F7A33: jmp     short loc_1403F7A08
 * 00000001403F7A35: test    byte ptr gs:27Eh, 2
 * 00000001403F7A3E: jz      short loc_1403F7A47
 * 00000001403F7A40: xor     ecx, ecx
 * 00000001403F7A42: call    KiUpdateStibpPairing
 * 00000001403F7A47: mov     rcx, gs:188h
 * 00000001403F7A50: test    dword ptr [rcx], 8000000h
 * 00000001403F7A56: jz      short loc_1403F7A5D
 * 00000001403F7A58: call    KiRestoreSetContextState
 * 00000001403F7A5D: mov     rcx, gs:188h
 * 00000001403F7A66: test    dword ptr [rcx], 40010000h
 * 00000001403F7A6C: jz      short loc_1403F7A82
 * 00000001403F7A6E: test    byte ptr [rcx+2], 1
 * 00000001403F7A72: jz      short loc_1403F7A82
 * 00000001403F7A74: call    KiCopyCounters
 * 00000001403F7A79: mov     rcx, gs:188h
 * 00000001403F7A82: ldmxcsr dword ptr [rbp-54h]
 * 00000001403F7A86: cmp     word ptr [rbp+80h], 0
 * 00000001403F7A8E: jz      short loc_1403F7A95
 * 00000001403F7A90: call    KiRestoreDebugRegisterState
 * 00000001403F7A95: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403F7A99: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403F7A9D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403F7AA1: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403F7AA5: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403F7AA9: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403F7AAD: mov     r11, [rbp-20h]
 * 00000001403F7AB1: mov     r10, [rbp-28h]
 * 00000001403F7AB5: mov     r9, [rbp-30h]
 * 00000001403F7AB9: mov     r8, [rbp-38h]
 * 00000001403F7ABD: mov     byte ptr gs:853h, 0
 * 00000001403F7AC6: movzx   eax, byte ptr gs:27Dh
 * 00000001403F7ACF: cmp     gs:27Ah, al
 * 00000001403F7AD7: jz      short loc_1403F7AEA
 * 00000001403F7AD9: mov     gs:27Ah, al
 * 00000001403F7AE1: mov     ecx, 48h ; 'H'
 * 00000001403F7AE6: xor     edx, edx
 * 00000001403F7AE8: wrmsr
 * 00000001403F7AEA: btr     word ptr gs:278h, 2
 * 00000001403F7AF5: jnb     short loc_1403F7B05
 * 00000001403F7AF7: mov     eax, 1
 * 00000001403F7AFC: xor     edx, edx
 * 00000001403F7AFE: mov     ecx, 49h ; 'I'
 * 00000001403F7B03: wrmsr
 * 00000001403F7B05: mov     rdx, [rbp-40h]
 * 00000001403F7B09: mov     rcx, [rbp-48h]
 * 00000001403F7B0D: mov     rax, [rbp-50h]
 * 00000001403F7B11: mov     rsp, rbp
 * 00000001403F7B14: mov     rbp, [rbp+0D8h]
 * 00000001403F7B1B: add     rsp, 0E8h
 * 00000001403F7B22: test    cs:KiKvaShadow, 1
 * 00000001403F7B29: jz      short loc_1403F7B30
 * 00000001403F7B2B: jmp     KiKernelExit
 * 00000001403F7B30: swapgs
 * 00000001403F7B33: iretq
 * 00000001403F7B35: ldmxcsr dword ptr [rbp-54h]
 * 00000001403F7B39: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403F7B3D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403F7B41: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403F7B45: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403F7B49: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403F7B4D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403F7B51: mov     r11, [rbp-20h]
 * 00000001403F7B55: mov     r10, [rbp-28h]
 * 00000001403F7B59: mov     r9, [rbp-30h]
 * 00000001403F7B5D: mov     r8, [rbp-38h]
 * 00000001403F7B61: mov     rdx, [rbp-40h]
 * 00000001403F7B65: mov     rcx, [rbp-48h]
 * 00000001403F7B69: mov     rax, [rbp-50h]
 * 00000001403F7B6D: mov     rsp, rbp
 * 00000001403F7B70: mov     rbp, [rbp+0D8h]
 * 00000001403F7B77: add     rsp, 0E8h
 * 00000001403F7B7E: iretq
 */
