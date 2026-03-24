/*
 * XREFs of KiRestoreSetContextState @ 0x1403FCE80
 * Callers:
 *     NtContinueEx @ 0x1403FC3E0 (NtContinueEx.c)
 *     NtRaiseException @ 0x1403FC7E0 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x1403FD300 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403FDC50 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1403FE010 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403FE3D0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1403FE790 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1403FEB50 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1403FF760 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140400A90 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140401FC0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140402390 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140402A10 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140403100 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140403720 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x140404BB0 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x140406010 (NtCallEnclave.c)
 *     KiBoundFault @ 0x140409240 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x140409880 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14040B480 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14040C940 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x14040D300 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x14040D940 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x14040F000 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1404101C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140410600 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KeContextToKframes @ 0x1403FBDD0 (KeContextToKframes.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiUmsExit @ 0x140410EC0 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiRestoreSetContextState @ 0x1403FCE80
 * Reason: Hex-Rays returned no pseudocode for 0x1403FCE80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FCE80: sub     rsp, 138h
 * 00000001403FCE87: lea     rax, [rsp+138h+var_38]
 * 00000001403FCE8F: movaps  [rsp+138h+var_108], xmm6
 * 00000001403FCE94: movaps  [rsp+138h+var_F8], xmm7
 * 00000001403FCE99: movaps  [rsp+138h+var_E8], xmm8
 * 00000001403FCE9F: movaps  [rsp+138h+var_D8], xmm9
 * 00000001403FCEA5: movaps  [rsp+138h+var_C8], xmm10
 * 00000001403FCEAB: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001403FCEB0: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001403FCEB5: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001403FCEBA: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001403FCEBF: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001403FCEC4: mov     [rax], rbx
 * 00000001403FCEC7: mov     [rax+8], rdi
 * 00000001403FCECB: mov     [rax+10h], rsi
 * 00000001403FCECF: mov     [rax+18h], r12
 * 00000001403FCED3: mov     [rax+20h], r13
 * 00000001403FCED7: mov     [rax+28h], r14
 * 00000001403FCEDB: mov     [rax+30h], r15
 * 00000001403FCEDF: mov     ecx, 1
 * 00000001403FCEE4: mov     cr8, rcx
 * 00000001403FCEE8: sti
 * 00000001403FCEE9: mov     rcx, gs:188h
 * 00000001403FCEF2: mov     rcx, [rcx+618h]
 * 00000001403FCEF9: mov     [rsp+138h+var_118], 1
 * 00000001403FCF02: mov     r9d, [rcx+30h]
 * 00000001403FCF06: mov     r8, rcx
 * 00000001403FCF09: mov     rdx, rsp
 * 00000001403FCF0C: lea     rcx, [rbp-80h]
 * 00000001403FCF10: call    KeContextToKframes
 * 00000001403FCF15: cli
 * 00000001403FCF16: mov     ecx, 0
 * 00000001403FCF1B: mov     cr8, rcx
 * 00000001403FCF1F: mov     rcx, gs:188h
 * 00000001403FCF28: lock btr dword ptr [rcx], 1Bh
 * 00000001403FCF2D: lea     rcx, [rsp+138h+var_38]
 * 00000001403FCF35: movaps  xmm6, [rsp+138h+var_108]
 * 00000001403FCF3A: movaps  xmm7, [rsp+138h+var_F8]
 * 00000001403FCF3F: movaps  xmm8, [rsp+138h+var_E8]
 * 00000001403FCF45: movaps  xmm9, [rsp+138h+var_D8]
 * 00000001403FCF4B: movaps  xmm10, [rsp+138h+var_C8]
 * 00000001403FCF51: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001403FCF56: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001403FCF5B: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001403FCF60: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001403FCF65: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001403FCF6A: mov     rbx, [rcx]
 * 00000001403FCF6D: mov     rdi, [rcx+8]
 * 00000001403FCF71: mov     rsi, [rcx+10h]
 * 00000001403FCF75: mov     r12, [rcx+18h]
 * 00000001403FCF79: mov     r13, [rcx+20h]
 * 00000001403FCF7D: mov     r14, [rcx+28h]
 * 00000001403FCF81: mov     r15, [rcx+30h]
 * 00000001403FCF85: test    byte ptr gs:27Eh, 2
 * 00000001403FCF8E: jz      short loc_1403FCF97
 * 00000001403FCF90: xor     ecx, ecx
 * 00000001403FCF92: call    KiUpdateStibpPairing
 * 00000001403FCF97: test    byte ptr [rbp+0F0h], 1
 * 00000001403FCF9E: jz      loc_1403FD1CF
 * 00000001403FCFA4: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FCFAB: jz      short loc_1403FCFB0
 * 00000001403FCFAD: stac
 * 00000001403FCFB0: mov     rcx, gs:188h
 * 00000001403FCFB9: test    dword ptr [rcx], 40010000h
 * 00000001403FCFBF: jz      short loc_1403FCFE6
 * 00000001403FCFC1: test    byte ptr [rcx+2], 1
 * 00000001403FCFC5: jz      short loc_1403FCFD5
 * 00000001403FCFC7: call    KiCopyCounters
 * 00000001403FCFCC: mov     rcx, gs:188h
 * 00000001403FCFD5: test    byte ptr [rcx+3], 40h
 * 00000001403FCFD9: jz      short loc_1403FCFE6
 * 00000001403FCFDB: lea     rsp, [rbp-80h]
 * 00000001403FCFDF: mov     cl, 1
 * 00000001403FCFE1: call    KiUmsExit
 * 00000001403FCFE6: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FCFEA: cmp     word ptr [rbp+80h], 0
 * 00000001403FCFF2: jz      short loc_1403FCFF9
 * 00000001403FCFF4: call    KiRestoreDebugRegisterState
 * 00000001403FCFF9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FCFFD: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FD001: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FD005: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FD009: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FD00D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FD011: mov     r11, [rbp-20h]
 * 00000001403FD015: mov     r10, [rbp-28h]
 * 00000001403FD019: mov     r9, [rbp-30h]
 * 00000001403FD01D: mov     r8, [rbp-38h]
 * 00000001403FD021: mov     byte ptr gs:853h, 0
 * 00000001403FD02A: movzx   eax, byte ptr gs:27Dh
 * 00000001403FD033: cmp     gs:27Ah, al
 * 00000001403FD03B: jz      short loc_1403FD04E
 * 00000001403FD03D: mov     gs:27Ah, al
 * 00000001403FD045: mov     ecx, 48h ; 'H'
 * 00000001403FD04A: xor     edx, edx
 * 00000001403FD04C: wrmsr
 * 00000001403FD04E: btr     word ptr gs:278h, 2
 * 00000001403FD059: jnb     short loc_1403FD069
 * 00000001403FD05B: mov     eax, 1
 * 00000001403FD060: xor     edx, edx
 * 00000001403FD062: mov     ecx, 49h ; 'I'
 * 00000001403FD067: wrmsr
 * 00000001403FD069: btr     word ptr gs:278h, 5
 * 00000001403FD074: jnb     loc_1403FD19F
 * 00000001403FD07A: call    loc_1403FD18D
 * 00000001403FD07F: add     rsp, 8
 * 00000001403FD083: call    loc_1403FD196
 * 00000001403FD088: add     rsp, 8
 * 00000001403FD08C: call    loc_1403FD07F
 * 00000001403FD091: add     rsp, 8
 * 00000001403FD095: call    loc_1403FD088
 * 00000001403FD09A: add     rsp, 8
 * 00000001403FD09E: call    loc_1403FD091
 * 00000001403FD0A3: add     rsp, 8
 * 00000001403FD0A7: call    loc_1403FD09A
 * 00000001403FD0AC: add     rsp, 8
 * 00000001403FD0B0: call    loc_1403FD0A3
 * 00000001403FD0B5: add     rsp, 8
 * 00000001403FD0B9: call    loc_1403FD0AC
 * 00000001403FD0BE: add     rsp, 8
 * 00000001403FD0C2: call    loc_1403FD0B5
 * 00000001403FD0C7: add     rsp, 8
 * 00000001403FD0CB: call    loc_1403FD0BE
 * 00000001403FD0D0: add     rsp, 8
 * 00000001403FD0D4: call    loc_1403FD0C7
 * 00000001403FD0D9: add     rsp, 8
 * 00000001403FD0DD: call    loc_1403FD0D0
 * 00000001403FD0E2: add     rsp, 8
 * 00000001403FD0E6: call    loc_1403FD0D9
 * 00000001403FD0EB: add     rsp, 8
 * 00000001403FD0EF: call    loc_1403FD0E2
 * 00000001403FD0F4: add     rsp, 8
 * 00000001403FD0F8: call    loc_1403FD0EB
 * 00000001403FD0FD: add     rsp, 8
 * 00000001403FD101: call    loc_1403FD0F4
 * 00000001403FD106: add     rsp, 8
 * 00000001403FD10A: call    loc_1403FD0FD
 * 00000001403FD10F: add     rsp, 8
 * 00000001403FD113: call    loc_1403FD106
 * 00000001403FD118: add     rsp, 8
 * 00000001403FD11C: call    loc_1403FD10F
 * 00000001403FD121: add     rsp, 8
 * 00000001403FD125: call    loc_1403FD118
 * 00000001403FD12A: add     rsp, 8
 * 00000001403FD12E: call    loc_1403FD121
 * 00000001403FD133: add     rsp, 8
 * 00000001403FD137: call    loc_1403FD12A
 * 00000001403FD13C: add     rsp, 8
 * 00000001403FD140: call    loc_1403FD133
 * 00000001403FD145: add     rsp, 8
 * 00000001403FD149: call    loc_1403FD13C
 * 00000001403FD14E: add     rsp, 8
 * 00000001403FD152: call    loc_1403FD145
 * 00000001403FD157: add     rsp, 8
 * 00000001403FD15B: call    loc_1403FD14E
 * 00000001403FD160: add     rsp, 8
 * 00000001403FD164: call    loc_1403FD157
 * 00000001403FD169: add     rsp, 8
 * 00000001403FD16D: call    loc_1403FD160
 * 00000001403FD172: add     rsp, 8
 * 00000001403FD176: call    loc_1403FD169
 * 00000001403FD17B: add     rsp, 8
 * 00000001403FD17F: call    loc_1403FD172
 * 00000001403FD184: add     rsp, 8
 * 00000001403FD188: call    loc_1403FD17B
 * 00000001403FD18D: add     rsp, 8
 * 00000001403FD191: call    loc_1403FD184
 * 00000001403FD196: add     rsp, 8
 * 00000001403FD19A: mov     eax, 0DADAh
 * 00000001403FD19F: mov     rdx, [rbp-40h]
 * 00000001403FD1A3: mov     rcx, [rbp-48h]
 * 00000001403FD1A7: mov     rax, [rbp-50h]
 * 00000001403FD1AB: mov     rsp, rbp
 * 00000001403FD1AE: mov     rbp, [rbp+0D8h]
 * 00000001403FD1B5: add     rsp, 0E8h
 * 00000001403FD1BC: test    cs:KiKvaShadow, 1
 * 00000001403FD1C3: jz      short loc_1403FD1CA
 * 00000001403FD1C5: jmp     KiKernelExit
 * 00000001403FD1CA: swapgs
 * 00000001403FD1CD: iretq
 * 00000001403FD1CF: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FD1D3: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FD1D7: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FD1DB: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FD1DF: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FD1E3: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FD1E7: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FD1EB: mov     r11, [rbp-20h]
 * 00000001403FD1EF: mov     r10, [rbp-28h]
 * 00000001403FD1F3: mov     r9, [rbp-30h]
 * 00000001403FD1F7: mov     r8, [rbp-38h]
 * 00000001403FD1FB: mov     rdx, [rbp-40h]
 * 00000001403FD1FF: mov     rcx, [rbp-48h]
 * 00000001403FD203: mov     rax, [rbp-50h]
 * 00000001403FD207: mov     rsp, rbp
 * 00000001403FD20A: mov     rbp, [rbp+0D8h]
 * 00000001403FD211: add     rsp, 0E8h
 * 00000001403FD218: iretq
 * 00000001403FD21A: retn
 */
