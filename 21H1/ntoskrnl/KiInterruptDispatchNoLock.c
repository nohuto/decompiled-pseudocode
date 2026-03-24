/*
 * XREFs of KiInterruptDispatchNoLock @ 0x1403F7B90
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DDF20 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x1402EC5B0 (HalPerformEndOfInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140357AA0 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140359A80 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403F6310 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F6DA0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403F76A0 (KiInterruptSubDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x1403FA370 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1403FC500 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14050D180 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140516360 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x1403F7B90
 * Reason: Hex-Rays returned no pseudocode for 0x1403F7B90
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403F7B90: mov     rdx, rsp
 * 00000001403F7B93: mov     rcx, gs:8758h
 * 00000001403F7B9C: lea     rax, [rcx-6000h]
 * 00000001403F7BA3: cmp     rax, rsp
 * 00000001403F7BA6: ja      short loc_1403F7BAD
 * 00000001403F7BA8: cmp     rsp, rcx
 * 00000001403F7BAB: jb      short loc_1403F7BB9
 * 00000001403F7BAD: cmp     cs:KiBugCheckActive, 0
 * 00000001403F7BB4: jnz     short loc_1403F7BB9
 * 00000001403F7BB6: mov     rsp, rcx
 * 00000001403F7BB9: sub     rsp, 20h
 * 00000001403F7BBD: mov     [rsp+20h+var_10], rdx
 * 00000001403F7BC2: call    KiInterruptSubDispatchNoLock
 * 00000001403F7BC7: mov     rsp, [rsp+20h+var_10]
 * 00000001403F7BCC: mov     rcx, rsi
 * 00000001403F7BCF: call    HalPerformEndOfInterrupt
 * 00000001403F7BD4: mov     rcx, gs:20h
 * 00000001403F7BDD: cmp     byte ptr [rcx+20h], 1
 * 00000001403F7BE1: ja      short loc_1403F7C5D
 * 00000001403F7BE3: rdtsc
 * 00000001403F7BE5: shl     rdx, 20h
 * 00000001403F7BE9: or      rax, rdx
 * 00000001403F7BEC: sub     rax, [rcx+7EC0h]
 * 00000001403F7BF3: add     [rcx+7F38h], rax
 * 00000001403F7BFA: add     [rcx+7EC0h], rax
 * 00000001403F7C01: mov     r8, rax
 * 00000001403F7C04: mov     rax, [rcx+8]
 * 00000001403F7C08: test    byte ptr [rax+2], 72h
 * 00000001403F7C0C: jz      short loc_1403F7C21
 * 00000001403F7C0E: xor     edx, edx
 * 00000001403F7C10: call    KiBeginThreadAccountingPeriod
 * 00000001403F7C15: mov     rcx, gs:20h
 * 00000001403F7C1E: inc     byte ptr [rcx+20h]
 * 00000001403F7C21: mov     dl, [rcx+6]
 * 00000001403F7C24: and     byte ptr [rcx+6], 0
 * 00000001403F7C28: cmp     byte ptr [rcx+7], 0
 * 00000001403F7C2C: jnz     short loc_1403F7C5D
 * 00000001403F7C2E: test    dl, dl
 * 00000001403F7C30: jz      short loc_1403F7C5D
 * 00000001403F7C32: cmp     byte ptr [rbp-57h], 2
 * 00000001403F7C36: jnb     short loc_1403F7C43
 * 00000001403F7C38: and     byte ptr [rcx+20h], 0
 * 00000001403F7C3C: call    KiDpcInterruptBypass
 * 00000001403F7C41: jmp     short loc_1403F7C60
 * 00000001403F7C43: mov     ecx, 2
 * 00000001403F7C48: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403F7C4F: nop     dword ptr [rax+rax+00h]
 * 00000001403F7C54: mov     rcx, gs:20h
 * 00000001403F7C5D: dec     byte ptr [rcx+20h]
 * 00000001403F7C60: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403F7C64: cmp     cs:KiIrqlFlags, 0
 * 00000001403F7C6B: jz      short loc_1403F7C74
 * 00000001403F7C6D: call    KzSetIrqlUnsafe
 * 00000001403F7C72: jmp     short loc_1403F7C78
 * 00000001403F7C74: mov     cr8, rcx
 * 00000001403F7C78: mov     rsi, [rbp+0D0h]
 * 00000001403F7C7F: test    byte ptr [rbp+0F0h], 1
 * 00000001403F7C86: jz      loc_1403F7DC5
 * 00000001403F7C8C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403F7C93: jz      short loc_1403F7C98
 * 00000001403F7C95: stac
 * 00000001403F7C98: mov     rcx, gs:188h
 * 00000001403F7CA1: test    byte ptr [rcx+0C2h], 3
 * 00000001403F7CA8: jz      short loc_1403F7CC5
 * 00000001403F7CAA: mov     ecx, 1
 * 00000001403F7CAF: mov     cr8, rcx
 * 00000001403F7CB3: sti
 * 00000001403F7CB4: call    KiInitiateUserApc
 * 00000001403F7CB9: cli
 * 00000001403F7CBA: mov     ecx, 0
 * 00000001403F7CBF: mov     cr8, rcx
 * 00000001403F7CC3: jmp     short loc_1403F7C98
 * 00000001403F7CC5: test    byte ptr gs:27Eh, 2
 * 00000001403F7CCE: jz      short loc_1403F7CD7
 * 00000001403F7CD0: xor     ecx, ecx
 * 00000001403F7CD2: call    KiUpdateStibpPairing
 * 00000001403F7CD7: mov     rcx, gs:188h
 * 00000001403F7CE0: test    dword ptr [rcx], 8000000h
 * 00000001403F7CE6: jz      short loc_1403F7CED
 * 00000001403F7CE8: call    KiRestoreSetContextState
 * 00000001403F7CED: mov     rcx, gs:188h
 * 00000001403F7CF6: test    dword ptr [rcx], 40010000h
 * 00000001403F7CFC: jz      short loc_1403F7D12
 * 00000001403F7CFE: test    byte ptr [rcx+2], 1
 * 00000001403F7D02: jz      short loc_1403F7D12
 * 00000001403F7D04: call    KiCopyCounters
 * 00000001403F7D09: mov     rcx, gs:188h
 * 00000001403F7D12: ldmxcsr dword ptr [rbp-54h]
 * 00000001403F7D16: cmp     word ptr [rbp+80h], 0
 * 00000001403F7D1E: jz      short loc_1403F7D25
 * 00000001403F7D20: call    KiRestoreDebugRegisterState
 * 00000001403F7D25: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403F7D29: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403F7D2D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403F7D31: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403F7D35: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403F7D39: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403F7D3D: mov     r11, [rbp-20h]
 * 00000001403F7D41: mov     r10, [rbp-28h]
 * 00000001403F7D45: mov     r9, [rbp-30h]
 * 00000001403F7D49: mov     r8, [rbp-38h]
 * 00000001403F7D4D: mov     byte ptr gs:853h, 0
 * 00000001403F7D56: movzx   eax, byte ptr gs:27Dh
 * 00000001403F7D5F: cmp     gs:27Ah, al
 * 00000001403F7D67: jz      short loc_1403F7D7A
 * 00000001403F7D69: mov     gs:27Ah, al
 * 00000001403F7D71: mov     ecx, 48h ; 'H'
 * 00000001403F7D76: xor     edx, edx
 * 00000001403F7D78: wrmsr
 * 00000001403F7D7A: btr     word ptr gs:278h, 2
 * 00000001403F7D85: jnb     short loc_1403F7D95
 * 00000001403F7D87: mov     eax, 1
 * 00000001403F7D8C: xor     edx, edx
 * 00000001403F7D8E: mov     ecx, 49h ; 'I'
 * 00000001403F7D93: wrmsr
 * 00000001403F7D95: mov     rdx, [rbp-40h]
 * 00000001403F7D99: mov     rcx, [rbp-48h]
 * 00000001403F7D9D: mov     rax, [rbp-50h]
 * 00000001403F7DA1: mov     rsp, rbp
 * 00000001403F7DA4: mov     rbp, [rbp+0D8h]
 * 00000001403F7DAB: add     rsp, 0E8h
 * 00000001403F7DB2: test    cs:KiKvaShadow, 1
 * 00000001403F7DB9: jz      short loc_1403F7DC0
 * 00000001403F7DBB: jmp     KiKernelExit
 * 00000001403F7DC0: swapgs
 * 00000001403F7DC3: iretq
 * 00000001403F7DC5: ldmxcsr dword ptr [rbp-54h]
 * 00000001403F7DC9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403F7DCD: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403F7DD1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403F7DD5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403F7DD9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403F7DDD: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403F7DE1: mov     r11, [rbp-20h]
 * 00000001403F7DE5: mov     r10, [rbp-28h]
 * 00000001403F7DE9: mov     r9, [rbp-30h]
 * 00000001403F7DED: mov     r8, [rbp-38h]
 * 00000001403F7DF1: mov     rdx, [rbp-40h]
 * 00000001403F7DF5: mov     rcx, [rbp-48h]
 * 00000001403F7DF9: mov     rax, [rbp-50h]
 * 00000001403F7DFD: mov     rsp, rbp
 * 00000001403F7E00: mov     rbp, [rbp+0D8h]
 * 00000001403F7E07: add     rsp, 0E8h
 * 00000001403F7E0E: iretq
 */
