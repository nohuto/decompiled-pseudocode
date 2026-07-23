/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x140400CF0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x140205BE0 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140211E00 (HalRequestSoftwareInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403FFEC0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x140400CF0 (KiInterruptDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405E90 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512E80 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x140400CF0
 * Reason: Hex-Rays returned no pseudocode for 0x140400CF0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140400CF0: mov     rdx, rsp
 * 0000000140400CF3: mov     rcx, gs:8758h
 * 0000000140400CFC: lea     rax, [rcx-6000h]
 * 0000000140400D03: cmp     rax, rsp
 * 0000000140400D06: ja      short loc_140400D0D
 * 0000000140400D08: cmp     rsp, rcx
 * 0000000140400D0B: jb      short loc_140400D19
 * 0000000140400D0D: cmp     cs:KiBugCheckActive, 0
 * 0000000140400D14: jnz     short loc_140400D19
 * 0000000140400D16: mov     rsp, rcx
 * 0000000140400D19: sub     rsp, 20h
 * 0000000140400D1D: mov     [rsp+20h+var_10], rdx
 * 0000000140400D22: call    KiInterruptSubDispatchNoLock
 * 0000000140400D27: mov     rsp, [rsp+20h+var_10]
 * 0000000140400D2C: mov     rcx, gs:20h
 * 0000000140400D35: cmp     byte ptr [rcx+20h], 1
 * 0000000140400D39: ja      short loc_140400DB5
 * 0000000140400D3B: rdtsc
 * 0000000140400D3D: shl     rdx, 20h
 * 0000000140400D41: or      rax, rdx
 * 0000000140400D44: sub     rax, [rcx+7EC0h]
 * 0000000140400D4B: add     [rcx+7F38h], rax
 * 0000000140400D52: add     [rcx+7EC0h], rax
 * 0000000140400D59: mov     r8, rax
 * 0000000140400D5C: mov     rax, [rcx+8]
 * 0000000140400D60: test    byte ptr [rax+2], 72h
 * 0000000140400D64: jz      short loc_140400D79
 * 0000000140400D66: xor     edx, edx
 * 0000000140400D68: call    KiBeginThreadAccountingPeriod
 * 0000000140400D6D: mov     rcx, gs:20h
 * 0000000140400D76: inc     byte ptr [rcx+20h]
 * 0000000140400D79: mov     dl, [rcx+6]
 * 0000000140400D7C: and     byte ptr [rcx+6], 0
 * 0000000140400D80: cmp     byte ptr [rcx+7], 0
 * 0000000140400D84: jnz     short loc_140400DB5
 * 0000000140400D86: test    dl, dl
 * 0000000140400D88: jz      short loc_140400DB5
 * 0000000140400D8A: cmp     byte ptr [rbp-57h], 2
 * 0000000140400D8E: jnb     short loc_140400D9B
 * 0000000140400D90: and     byte ptr [rcx+20h], 0
 * 0000000140400D94: call    KiDpcInterruptBypass
 * 0000000140400D99: jmp     short loc_140400DB8
 * 0000000140400D9B: mov     ecx, 2
 * 0000000140400DA0: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140400DA7: nop     dword ptr [rax+rax+00h]
 * 0000000140400DAC: mov     rcx, gs:20h
 * 0000000140400DB5: dec     byte ptr [rcx+20h]
 * 0000000140400DB8: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140400DBC: cmp     cs:KiIrqlFlags, 0
 * 0000000140400DC3: jz      short loc_140400DCC
 * 0000000140400DC5: call    KzSetIrqlUnsafe
 * 0000000140400DCA: jmp     short loc_140400DD0
 * 0000000140400DCC: mov     cr8, rcx
 * 0000000140400DD0: mov     rsi, [rbp+0D0h]
 * 0000000140400DD7: test    byte ptr [rbp+0F0h], 1
 * 0000000140400DDE: jz      loc_140401080
 * 0000000140400DE4: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140400DEB: jz      short loc_140400DF0
 * 0000000140400DED: stac
 * 0000000140400DF0: mov     rcx, gs:188h
 * 0000000140400DF9: test    byte ptr [rcx+0C2h], 3
 * 0000000140400E00: jz      short loc_140400E1D
 * 0000000140400E02: mov     ecx, 1
 * 0000000140400E07: mov     cr8, rcx
 * 0000000140400E0B: sti
 * 0000000140400E0C: call    KiInitiateUserApc
 * 0000000140400E11: cli
 * 0000000140400E12: mov     ecx, 0
 * 0000000140400E17: mov     cr8, rcx
 * 0000000140400E1B: jmp     short loc_140400DF0
 * 0000000140400E1D: test    byte ptr gs:86Ch, 2
 * 0000000140400E26: jz      short loc_140400E2F
 * 0000000140400E28: xor     ecx, ecx
 * 0000000140400E2A: call    KiUpdateStibpPairing
 * 0000000140400E2F: mov     rcx, gs:188h
 * 0000000140400E38: test    dword ptr [rcx], 8000000h
 * 0000000140400E3E: jz      short loc_140400E45
 * 0000000140400E40: call    KiRestoreSetContextState
 * 0000000140400E45: mov     rcx, gs:188h
 * 0000000140400E4E: test    dword ptr [rcx], 40010000h
 * 0000000140400E54: jz      short loc_140400E6A
 * 0000000140400E56: test    byte ptr [rcx+2], 1
 * 0000000140400E5A: jz      short loc_140400E6A
 * 0000000140400E5C: call    KiCopyCounters
 * 0000000140400E61: mov     rcx, gs:188h
 * 0000000140400E6A: ldmxcsr dword ptr [rbp-54h]
 * 0000000140400E6E: cmp     word ptr [rbp+80h], 0
 * 0000000140400E76: jz      short loc_140400E7D
 * 0000000140400E78: call    KiRestoreDebugRegisterState
 * 0000000140400E7D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140400E81: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140400E85: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140400E89: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140400E8D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140400E91: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140400E95: mov     r11, [rbp-20h]
 * 0000000140400E99: mov     r10, [rbp-28h]
 * 0000000140400E9D: mov     r9, [rbp-30h]
 * 0000000140400EA1: mov     r8, [rbp-38h]
 * 0000000140400EA5: mov     byte ptr gs:856h, 0
 * 0000000140400EAE: movzx   eax, word ptr gs:86Ah
 * 0000000140400EB7: cmp     gs:864h, ax
 * 0000000140400EC0: jz      short loc_140400ED4
 * 0000000140400EC2: mov     gs:864h, ax
 * 0000000140400ECB: mov     ecx, 48h ; 'H'
 * 0000000140400ED0: xor     edx, edx
 * 0000000140400ED2: wrmsr
 * 0000000140400ED4: btr     word ptr gs:860h, 2
 * 0000000140400EDF: jnb     short loc_140400EEF
 * 0000000140400EE1: mov     eax, 1
 * 0000000140400EE6: xor     edx, edx
 * 0000000140400EE8: mov     ecx, 49h ; 'I'
 * 0000000140400EED: wrmsr
 * 0000000140400EEF: btr     word ptr gs:860h, 5
 * 0000000140400EFA: jnb     loc_140401025
 * 0000000140400F00: call    loc_140401013
 * 0000000140400F05: add     rsp, 8
 * 0000000140400F09: call    loc_14040101C
 * 0000000140400F0E: add     rsp, 8
 * 0000000140400F12: call    loc_140400F05
 * 0000000140400F17: add     rsp, 8
 * 0000000140400F1B: call    loc_140400F0E
 * 0000000140400F20: add     rsp, 8
 * 0000000140400F24: call    loc_140400F17
 * 0000000140400F29: add     rsp, 8
 * 0000000140400F2D: call    loc_140400F20
 * 0000000140400F32: add     rsp, 8
 * 0000000140400F36: call    loc_140400F29
 * 0000000140400F3B: add     rsp, 8
 * 0000000140400F3F: call    loc_140400F32
 * 0000000140400F44: add     rsp, 8
 * 0000000140400F48: call    loc_140400F3B
 * 0000000140400F4D: add     rsp, 8
 * 0000000140400F51: call    loc_140400F44
 * 0000000140400F56: add     rsp, 8
 * 0000000140400F5A: call    loc_140400F4D
 * 0000000140400F5F: add     rsp, 8
 * 0000000140400F63: call    loc_140400F56
 * 0000000140400F68: add     rsp, 8
 * 0000000140400F6C: call    loc_140400F5F
 * 0000000140400F71: add     rsp, 8
 * 0000000140400F75: call    loc_140400F68
 * 0000000140400F7A: add     rsp, 8
 * 0000000140400F7E: call    loc_140400F71
 * 0000000140400F83: add     rsp, 8
 * 0000000140400F87: call    loc_140400F7A
 * 0000000140400F8C: add     rsp, 8
 * 0000000140400F90: call    loc_140400F83
 * 0000000140400F95: add     rsp, 8
 * 0000000140400F99: call    loc_140400F8C
 * 0000000140400F9E: add     rsp, 8
 * 0000000140400FA2: call    loc_140400F95
 * 0000000140400FA7: add     rsp, 8
 * 0000000140400FAB: call    loc_140400F9E
 * 0000000140400FB0: add     rsp, 8
 * 0000000140400FB4: call    loc_140400FA7
 * 0000000140400FB9: add     rsp, 8
 * 0000000140400FBD: call    loc_140400FB0
 * 0000000140400FC2: add     rsp, 8
 * 0000000140400FC6: call    loc_140400FB9
 * 0000000140400FCB: add     rsp, 8
 * 0000000140400FCF: call    loc_140400FC2
 * 0000000140400FD4: add     rsp, 8
 * 0000000140400FD8: call    loc_140400FCB
 * 0000000140400FDD: add     rsp, 8
 * 0000000140400FE1: call    loc_140400FD4
 * 0000000140400FE6: add     rsp, 8
 * 0000000140400FEA: call    loc_140400FDD
 * 0000000140400FEF: add     rsp, 8
 * 0000000140400FF3: call    loc_140400FE6
 * 0000000140400FF8: add     rsp, 8
 * 0000000140400FFC: call    loc_140400FEF
 * 0000000140401001: add     rsp, 8
 * 0000000140401005: call    loc_140400FF8
 * 000000014040100A: add     rsp, 8
 * 000000014040100E: call    loc_140401001
 * 0000000140401013: add     rsp, 8
 * 0000000140401017: call    loc_14040100A
 * 000000014040101C: add     rsp, 8
 * 0000000140401020: mov     eax, 0DADAh
 * 0000000140401025: test    word ptr gs:860h, 80h
 * 0000000140401030: jz      short loc_14040103E
 * 0000000140401032: xor     eax, eax
 * 0000000140401034: xor     edx, edx
 * 0000000140401036: mov     ecx, 1
 * 000000014040103B: div     rcx
 * 000000014040103E: mov     rdx, [rbp-40h]
 * 0000000140401042: mov     rcx, [rbp-48h]
 * 0000000140401046: mov     rax, [rbp-50h]
 * 000000014040104A: mov     rsp, rbp
 * 000000014040104D: mov     rbp, [rbp+0D8h]
 * 0000000140401054: add     rsp, 0E8h
 * 000000014040105B: test    cs:KiKvaShadow, 1
 * 0000000140401062: jz      short loc_140401069
 * 0000000140401064: jmp     KiKernelExit
 * 0000000140401069: test    word ptr gs:860h, 100h
 * 0000000140401074: jz      short loc_14040107B
 * 0000000140401076: verw    [rsp-1C8h+arg_1E0]
 * 000000014040107B: swapgs
 * 000000014040107E: iretq
 * 0000000140401080: ldmxcsr dword ptr [rbp-54h]
 * 0000000140401084: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140401088: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014040108C: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140401090: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140401094: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140401098: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014040109C: mov     r11, [rbp-20h]
 * 00000001404010A0: mov     r10, [rbp-28h]
 * 00000001404010A4: mov     r9, [rbp-30h]
 * 00000001404010A8: mov     r8, [rbp-38h]
 * 00000001404010AC: mov     rdx, [rbp-40h]
 * 00000001404010B0: mov     rcx, [rbp-48h]
 * 00000001404010B4: mov     rax, [rbp-50h]
 * 00000001404010B8: mov     rsp, rbp
 * 00000001404010BB: mov     rbp, [rbp+0D8h]
 * 00000001404010C2: add     rsp, 0E8h
 * 00000001404010C9: iretq
 */
