/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x140400B10
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x140288A40 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140293E90 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403FFCE0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x140400B10 (KiInterruptDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x140403520 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405CB0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512C40 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x140400B10
 * Reason: Hex-Rays returned no pseudocode for 0x140400B10
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140400B10: mov     rdx, rsp
 * 0000000140400B13: mov     rcx, gs:8758h
 * 0000000140400B1C: lea     rax, [rcx-6000h]
 * 0000000140400B23: cmp     rax, rsp
 * 0000000140400B26: ja      short loc_140400B2D
 * 0000000140400B28: cmp     rsp, rcx
 * 0000000140400B2B: jb      short loc_140400B39
 * 0000000140400B2D: cmp     cs:KiBugCheckActive, 0
 * 0000000140400B34: jnz     short loc_140400B39
 * 0000000140400B36: mov     rsp, rcx
 * 0000000140400B39: sub     rsp, 20h
 * 0000000140400B3D: mov     [rsp+20h+var_10], rdx
 * 0000000140400B42: call    KiInterruptSubDispatchNoLock
 * 0000000140400B47: mov     rsp, [rsp+20h+var_10]
 * 0000000140400B4C: mov     rcx, gs:20h
 * 0000000140400B55: cmp     byte ptr [rcx+20h], 1
 * 0000000140400B59: ja      short loc_140400BD5
 * 0000000140400B5B: rdtsc
 * 0000000140400B5D: shl     rdx, 20h
 * 0000000140400B61: or      rax, rdx
 * 0000000140400B64: sub     rax, [rcx+7EC0h]
 * 0000000140400B6B: add     [rcx+7F38h], rax
 * 0000000140400B72: add     [rcx+7EC0h], rax
 * 0000000140400B79: mov     r8, rax
 * 0000000140400B7C: mov     rax, [rcx+8]
 * 0000000140400B80: test    byte ptr [rax+2], 72h
 * 0000000140400B84: jz      short loc_140400B99
 * 0000000140400B86: xor     edx, edx
 * 0000000140400B88: call    KiBeginThreadAccountingPeriod
 * 0000000140400B8D: mov     rcx, gs:20h
 * 0000000140400B96: inc     byte ptr [rcx+20h]
 * 0000000140400B99: mov     dl, [rcx+6]
 * 0000000140400B9C: and     byte ptr [rcx+6], 0
 * 0000000140400BA0: cmp     byte ptr [rcx+7], 0
 * 0000000140400BA4: jnz     short loc_140400BD5
 * 0000000140400BA6: test    dl, dl
 * 0000000140400BA8: jz      short loc_140400BD5
 * 0000000140400BAA: cmp     byte ptr [rbp-57h], 2
 * 0000000140400BAE: jnb     short loc_140400BBB
 * 0000000140400BB0: and     byte ptr [rcx+20h], 0
 * 0000000140400BB4: call    KiDpcInterruptBypass
 * 0000000140400BB9: jmp     short loc_140400BD8
 * 0000000140400BBB: mov     ecx, 2
 * 0000000140400BC0: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140400BC7: nop     dword ptr [rax+rax+00h]
 * 0000000140400BCC: mov     rcx, gs:20h
 * 0000000140400BD5: dec     byte ptr [rcx+20h]
 * 0000000140400BD8: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140400BDC: cmp     cs:KiIrqlFlags, 0
 * 0000000140400BE3: jz      short loc_140400BEC
 * 0000000140400BE5: call    KzSetIrqlUnsafe
 * 0000000140400BEA: jmp     short loc_140400BF0
 * 0000000140400BEC: mov     cr8, rcx
 * 0000000140400BF0: mov     rsi, [rbp+0D0h]
 * 0000000140400BF7: test    byte ptr [rbp+0F0h], 1
 * 0000000140400BFE: jz      loc_140400EA0
 * 0000000140400C04: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140400C0B: jz      short loc_140400C10
 * 0000000140400C0D: stac
 * 0000000140400C10: mov     rcx, gs:188h
 * 0000000140400C19: test    byte ptr [rcx+0C2h], 3
 * 0000000140400C20: jz      short loc_140400C3D
 * 0000000140400C22: mov     ecx, 1
 * 0000000140400C27: mov     cr8, rcx
 * 0000000140400C2B: sti
 * 0000000140400C2C: call    KiInitiateUserApc
 * 0000000140400C31: cli
 * 0000000140400C32: mov     ecx, 0
 * 0000000140400C37: mov     cr8, rcx
 * 0000000140400C3B: jmp     short loc_140400C10
 * 0000000140400C3D: test    byte ptr gs:86Ch, 2
 * 0000000140400C46: jz      short loc_140400C4F
 * 0000000140400C48: xor     ecx, ecx
 * 0000000140400C4A: call    KiUpdateStibpPairing
 * 0000000140400C4F: mov     rcx, gs:188h
 * 0000000140400C58: test    dword ptr [rcx], 8000000h
 * 0000000140400C5E: jz      short loc_140400C65
 * 0000000140400C60: call    KiRestoreSetContextState
 * 0000000140400C65: mov     rcx, gs:188h
 * 0000000140400C6E: test    dword ptr [rcx], 40010000h
 * 0000000140400C74: jz      short loc_140400C8A
 * 0000000140400C76: test    byte ptr [rcx+2], 1
 * 0000000140400C7A: jz      short loc_140400C8A
 * 0000000140400C7C: call    KiCopyCounters
 * 0000000140400C81: mov     rcx, gs:188h
 * 0000000140400C8A: ldmxcsr dword ptr [rbp-54h]
 * 0000000140400C8E: cmp     word ptr [rbp+80h], 0
 * 0000000140400C96: jz      short loc_140400C9D
 * 0000000140400C98: call    KiRestoreDebugRegisterState
 * 0000000140400C9D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140400CA1: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140400CA5: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140400CA9: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140400CAD: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140400CB1: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140400CB5: mov     r11, [rbp-20h]
 * 0000000140400CB9: mov     r10, [rbp-28h]
 * 0000000140400CBD: mov     r9, [rbp-30h]
 * 0000000140400CC1: mov     r8, [rbp-38h]
 * 0000000140400CC5: mov     byte ptr gs:856h, 0
 * 0000000140400CCE: movzx   eax, word ptr gs:86Ah
 * 0000000140400CD7: cmp     gs:864h, ax
 * 0000000140400CE0: jz      short loc_140400CF4
 * 0000000140400CE2: mov     gs:864h, ax
 * 0000000140400CEB: mov     ecx, 48h ; 'H'
 * 0000000140400CF0: xor     edx, edx
 * 0000000140400CF2: wrmsr
 * 0000000140400CF4: btr     word ptr gs:860h, 2
 * 0000000140400CFF: jnb     short loc_140400D0F
 * 0000000140400D01: mov     eax, 1
 * 0000000140400D06: xor     edx, edx
 * 0000000140400D08: mov     ecx, 49h ; 'I'
 * 0000000140400D0D: wrmsr
 * 0000000140400D0F: btr     word ptr gs:860h, 5
 * 0000000140400D1A: jnb     loc_140400E45
 * 0000000140400D20: call    loc_140400E33
 * 0000000140400D25: add     rsp, 8
 * 0000000140400D29: call    loc_140400E3C
 * 0000000140400D2E: add     rsp, 8
 * 0000000140400D32: call    loc_140400D25
 * 0000000140400D37: add     rsp, 8
 * 0000000140400D3B: call    loc_140400D2E
 * 0000000140400D40: add     rsp, 8
 * 0000000140400D44: call    loc_140400D37
 * 0000000140400D49: add     rsp, 8
 * 0000000140400D4D: call    loc_140400D40
 * 0000000140400D52: add     rsp, 8
 * 0000000140400D56: call    loc_140400D49
 * 0000000140400D5B: add     rsp, 8
 * 0000000140400D5F: call    loc_140400D52
 * 0000000140400D64: add     rsp, 8
 * 0000000140400D68: call    loc_140400D5B
 * 0000000140400D6D: add     rsp, 8
 * 0000000140400D71: call    loc_140400D64
 * 0000000140400D76: add     rsp, 8
 * 0000000140400D7A: call    loc_140400D6D
 * 0000000140400D7F: add     rsp, 8
 * 0000000140400D83: call    loc_140400D76
 * 0000000140400D88: add     rsp, 8
 * 0000000140400D8C: call    loc_140400D7F
 * 0000000140400D91: add     rsp, 8
 * 0000000140400D95: call    loc_140400D88
 * 0000000140400D9A: add     rsp, 8
 * 0000000140400D9E: call    loc_140400D91
 * 0000000140400DA3: add     rsp, 8
 * 0000000140400DA7: call    loc_140400D9A
 * 0000000140400DAC: add     rsp, 8
 * 0000000140400DB0: call    loc_140400DA3
 * 0000000140400DB5: add     rsp, 8
 * 0000000140400DB9: call    loc_140400DAC
 * 0000000140400DBE: add     rsp, 8
 * 0000000140400DC2: call    loc_140400DB5
 * 0000000140400DC7: add     rsp, 8
 * 0000000140400DCB: call    loc_140400DBE
 * 0000000140400DD0: add     rsp, 8
 * 0000000140400DD4: call    loc_140400DC7
 * 0000000140400DD9: add     rsp, 8
 * 0000000140400DDD: call    loc_140400DD0
 * 0000000140400DE2: add     rsp, 8
 * 0000000140400DE6: call    loc_140400DD9
 * 0000000140400DEB: add     rsp, 8
 * 0000000140400DEF: call    loc_140400DE2
 * 0000000140400DF4: add     rsp, 8
 * 0000000140400DF8: call    loc_140400DEB
 * 0000000140400DFD: add     rsp, 8
 * 0000000140400E01: call    loc_140400DF4
 * 0000000140400E06: add     rsp, 8
 * 0000000140400E0A: call    loc_140400DFD
 * 0000000140400E0F: add     rsp, 8
 * 0000000140400E13: call    loc_140400E06
 * 0000000140400E18: add     rsp, 8
 * 0000000140400E1C: call    loc_140400E0F
 * 0000000140400E21: add     rsp, 8
 * 0000000140400E25: call    loc_140400E18
 * 0000000140400E2A: add     rsp, 8
 * 0000000140400E2E: call    loc_140400E21
 * 0000000140400E33: add     rsp, 8
 * 0000000140400E37: call    loc_140400E2A
 * 0000000140400E3C: add     rsp, 8
 * 0000000140400E40: mov     eax, 0DADAh
 * 0000000140400E45: test    word ptr gs:860h, 80h
 * 0000000140400E50: jz      short loc_140400E5E
 * 0000000140400E52: xor     eax, eax
 * 0000000140400E54: xor     edx, edx
 * 0000000140400E56: mov     ecx, 1
 * 0000000140400E5B: div     rcx
 * 0000000140400E5E: mov     rdx, [rbp-40h]
 * 0000000140400E62: mov     rcx, [rbp-48h]
 * 0000000140400E66: mov     rax, [rbp-50h]
 * 0000000140400E6A: mov     rsp, rbp
 * 0000000140400E6D: mov     rbp, [rbp+0D8h]
 * 0000000140400E74: add     rsp, 0E8h
 * 0000000140400E7B: test    cs:KiKvaShadow, 1
 * 0000000140400E82: jz      short loc_140400E89
 * 0000000140400E84: jmp     KiKernelExit
 * 0000000140400E89: test    word ptr gs:860h, 100h
 * 0000000140400E94: jz      short loc_140400E9B
 * 0000000140400E96: verw    [rsp-1C8h+arg_1E0]
 * 0000000140400E9B: swapgs
 * 0000000140400E9E: iretq
 * 0000000140400EA0: ldmxcsr dword ptr [rbp-54h]
 * 0000000140400EA4: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140400EA8: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140400EAC: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140400EB0: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140400EB4: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140400EB8: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140400EBC: mov     r11, [rbp-20h]
 * 0000000140400EC0: mov     r10, [rbp-28h]
 * 0000000140400EC4: mov     r9, [rbp-30h]
 * 0000000140400EC8: mov     r8, [rbp-38h]
 * 0000000140400ECC: mov     rdx, [rbp-40h]
 * 0000000140400ED0: mov     rcx, [rbp-48h]
 * 0000000140400ED4: mov     rax, [rbp-50h]
 * 0000000140400ED8: mov     rsp, rbp
 * 0000000140400EDB: mov     rbp, [rbp+0D8h]
 * 0000000140400EE2: add     rsp, 0E8h
 * 0000000140400EE9: iretq
 */
