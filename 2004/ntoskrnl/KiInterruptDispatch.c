/*
 * XREFs of KiInterruptDispatch @ 0x1403F8B90
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140273DE0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402FBAC0 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x140301350 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x140325EE0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403F75A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F8030 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatch @ 0x1403F87E0 (KiInterruptSubDispatch.c)
 *     KiInitiateUserApc @ 0x1403FB600 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1403FD790 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14050D7D0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405169B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x1403F8B90
 * Reason: Hex-Rays returned no pseudocode for 0x1403F8B90
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403F8B90: mov     rdx, rsp
 * 00000001403F8B93: mov     rcx, gs:8758h
 * 00000001403F8B9C: lea     rax, [rcx-6000h]
 * 00000001403F8BA3: cmp     rax, rsp
 * 00000001403F8BA6: ja      short loc_1403F8BAD
 * 00000001403F8BA8: cmp     rsp, rcx
 * 00000001403F8BAB: jb      short loc_1403F8BB9
 * 00000001403F8BAD: cmp     cs:KiBugCheckActive, 0
 * 00000001403F8BB4: jnz     short loc_1403F8BB9
 * 00000001403F8BB6: mov     rsp, rcx
 * 00000001403F8BB9: sub     rsp, 20h
 * 00000001403F8BBD: mov     [rsp+20h+var_10], rdx
 * 00000001403F8BC2: call    KiInterruptSubDispatch
 * 00000001403F8BC7: mov     rsp, [rsp+20h+var_10]
 * 00000001403F8BCC: mov     rcx, rsi
 * 00000001403F8BCF: call    HalPerformEndOfInterrupt
 * 00000001403F8BD4: mov     rcx, gs:20h
 * 00000001403F8BDD: cmp     byte ptr [rcx+20h], 1
 * 00000001403F8BE1: ja      short loc_1403F8C5D
 * 00000001403F8BE3: rdtsc
 * 00000001403F8BE5: shl     rdx, 20h
 * 00000001403F8BE9: or      rax, rdx
 * 00000001403F8BEC: sub     rax, [rcx+7EC0h]
 * 00000001403F8BF3: add     [rcx+7F38h], rax
 * 00000001403F8BFA: add     [rcx+7EC0h], rax
 * 00000001403F8C01: mov     r8, rax
 * 00000001403F8C04: mov     rax, [rcx+8]
 * 00000001403F8C08: test    byte ptr [rax+2], 72h
 * 00000001403F8C0C: jz      short loc_1403F8C21
 * 00000001403F8C0E: xor     edx, edx
 * 00000001403F8C10: call    KiBeginThreadAccountingPeriod
 * 00000001403F8C15: mov     rcx, gs:20h
 * 00000001403F8C1E: inc     byte ptr [rcx+20h]
 * 00000001403F8C21: mov     dl, [rcx+6]
 * 00000001403F8C24: and     byte ptr [rcx+6], 0
 * 00000001403F8C28: cmp     byte ptr [rcx+7], 0
 * 00000001403F8C2C: jnz     short loc_1403F8C5D
 * 00000001403F8C2E: test    dl, dl
 * 00000001403F8C30: jz      short loc_1403F8C5D
 * 00000001403F8C32: cmp     byte ptr [rbp-57h], 2
 * 00000001403F8C36: jnb     short loc_1403F8C43
 * 00000001403F8C38: and     byte ptr [rcx+20h], 0
 * 00000001403F8C3C: call    KiDpcInterruptBypass
 * 00000001403F8C41: jmp     short loc_1403F8C60
 * 00000001403F8C43: mov     ecx, 2
 * 00000001403F8C48: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403F8C4F: nop     dword ptr [rax+rax+00h]
 * 00000001403F8C54: mov     rcx, gs:20h
 * 00000001403F8C5D: dec     byte ptr [rcx+20h]
 * 00000001403F8C60: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403F8C64: cmp     cs:KiIrqlFlags, 0
 * 00000001403F8C6B: jz      short loc_1403F8C74
 * 00000001403F8C6D: call    KzSetIrqlUnsafe
 * 00000001403F8C72: jmp     short loc_1403F8C78
 * 00000001403F8C74: mov     cr8, rcx
 * 00000001403F8C78: mov     rsi, [rbp+0D0h]
 * 00000001403F8C7F: test    byte ptr [rbp+0F0h], 1
 * 00000001403F8C86: jz      loc_1403F8DC5
 * 00000001403F8C8C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403F8C93: jz      short loc_1403F8C98
 * 00000001403F8C95: stac
 * 00000001403F8C98: mov     rcx, gs:188h
 * 00000001403F8CA1: test    byte ptr [rcx+0C2h], 3
 * 00000001403F8CA8: jz      short loc_1403F8CC5
 * 00000001403F8CAA: mov     ecx, 1
 * 00000001403F8CAF: mov     cr8, rcx
 * 00000001403F8CB3: sti
 * 00000001403F8CB4: call    KiInitiateUserApc
 * 00000001403F8CB9: cli
 * 00000001403F8CBA: mov     ecx, 0
 * 00000001403F8CBF: mov     cr8, rcx
 * 00000001403F8CC3: jmp     short loc_1403F8C98
 * 00000001403F8CC5: test    byte ptr gs:27Eh, 2
 * 00000001403F8CCE: jz      short loc_1403F8CD7
 * 00000001403F8CD0: xor     ecx, ecx
 * 00000001403F8CD2: call    KiUpdateStibpPairing
 * 00000001403F8CD7: mov     rcx, gs:188h
 * 00000001403F8CE0: test    dword ptr [rcx], 8000000h
 * 00000001403F8CE6: jz      short loc_1403F8CED
 * 00000001403F8CE8: call    KiRestoreSetContextState
 * 00000001403F8CED: mov     rcx, gs:188h
 * 00000001403F8CF6: test    dword ptr [rcx], 40010000h
 * 00000001403F8CFC: jz      short loc_1403F8D12
 * 00000001403F8CFE: test    byte ptr [rcx+2], 1
 * 00000001403F8D02: jz      short loc_1403F8D12
 * 00000001403F8D04: call    KiCopyCounters
 * 00000001403F8D09: mov     rcx, gs:188h
 * 00000001403F8D12: ldmxcsr dword ptr [rbp-54h]
 * 00000001403F8D16: cmp     word ptr [rbp+80h], 0
 * 00000001403F8D1E: jz      short loc_1403F8D25
 * 00000001403F8D20: call    KiRestoreDebugRegisterState
 * 00000001403F8D25: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403F8D29: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403F8D2D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403F8D31: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403F8D35: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403F8D39: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403F8D3D: mov     r11, [rbp-20h]
 * 00000001403F8D41: mov     r10, [rbp-28h]
 * 00000001403F8D45: mov     r9, [rbp-30h]
 * 00000001403F8D49: mov     r8, [rbp-38h]
 * 00000001403F8D4D: mov     byte ptr gs:853h, 0
 * 00000001403F8D56: movzx   eax, byte ptr gs:27Dh
 * 00000001403F8D5F: cmp     gs:27Ah, al
 * 00000001403F8D67: jz      short loc_1403F8D7A
 * 00000001403F8D69: mov     gs:27Ah, al
 * 00000001403F8D71: mov     ecx, 48h ; 'H'
 * 00000001403F8D76: xor     edx, edx
 * 00000001403F8D78: wrmsr
 * 00000001403F8D7A: btr     word ptr gs:278h, 2
 * 00000001403F8D85: jnb     short loc_1403F8D95
 * 00000001403F8D87: mov     eax, 1
 * 00000001403F8D8C: xor     edx, edx
 * 00000001403F8D8E: mov     ecx, 49h ; 'I'
 * 00000001403F8D93: wrmsr
 * 00000001403F8D95: mov     rdx, [rbp-40h]
 * 00000001403F8D99: mov     rcx, [rbp-48h]
 * 00000001403F8D9D: mov     rax, [rbp-50h]
 * 00000001403F8DA1: mov     rsp, rbp
 * 00000001403F8DA4: mov     rbp, [rbp+0D8h]
 * 00000001403F8DAB: add     rsp, 0E8h
 * 00000001403F8DB2: test    cs:KiKvaShadow, 1
 * 00000001403F8DB9: jz      short loc_1403F8DC0
 * 00000001403F8DBB: jmp     KiKernelExit
 * 00000001403F8DC0: swapgs
 * 00000001403F8DC3: iretq
 * 00000001403F8DC5: ldmxcsr dword ptr [rbp-54h]
 * 00000001403F8DC9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403F8DCD: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403F8DD1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403F8DD5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403F8DD9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403F8DDD: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403F8DE1: mov     r11, [rbp-20h]
 * 00000001403F8DE5: mov     r10, [rbp-28h]
 * 00000001403F8DE9: mov     r9, [rbp-30h]
 * 00000001403F8DED: mov     r8, [rbp-38h]
 * 00000001403F8DF1: mov     rdx, [rbp-40h]
 * 00000001403F8DF5: mov     rcx, [rbp-48h]
 * 00000001403F8DF9: mov     rax, [rbp-50h]
 * 00000001403F8DFD: mov     rsp, rbp
 * 00000001403F8E00: mov     rbp, [rbp+0D8h]
 * 00000001403F8E07: add     rsp, 0E8h
 * 00000001403F8E0E: iretq
 */
