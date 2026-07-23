/*
 * XREFs of KiVmbusInterruptDispatch @ 0x140404A90
 * Callers:
 *     KiVmbusInterrupt0 @ 0x140403AD0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140403DC0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1404040B0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1404043A0 (KiVmbusInterrupt3.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x140205BE0 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140211E00 (HalRequestSoftwareInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiVmbusInterruptDispatch @ 0x140404A90 (KiVmbusInterruptDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140404FE0 (KiVmbusInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x140405E90 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512E80 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterruptDispatch @ 0x140404A90
 * Reason: Hex-Rays returned no pseudocode for 0x140404A90
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140404A90: mov     rdx, rsp
 * 0000000140404A93: mov     rcx, gs:8758h
 * 0000000140404A9C: lea     rax, [rcx-6000h]
 * 0000000140404AA3: cmp     rax, rsp
 * 0000000140404AA6: ja      short loc_140404AAD
 * 0000000140404AA8: cmp     rsp, rcx
 * 0000000140404AAB: jb      short loc_140404AB9
 * 0000000140404AAD: cmp     cs:KiBugCheckActive, 0
 * 0000000140404AB4: jnz     short loc_140404AB9
 * 0000000140404AB6: mov     rsp, rcx
 * 0000000140404AB9: sub     rsp, 20h
 * 0000000140404ABD: mov     [rsp+20h+var_10], rdx
 * 0000000140404AC2: call    KiVmbusInterruptSubDispatch
 * 0000000140404AC7: mov     rsp, [rsp+20h+var_10]
 * 0000000140404ACC: cli
 * 0000000140404ACD: mov     rcx, gs:20h
 * 0000000140404AD6: cmp     byte ptr [rcx+20h], 1
 * 0000000140404ADA: ja      short loc_140404B56
 * 0000000140404ADC: rdtsc
 * 0000000140404ADE: shl     rdx, 20h
 * 0000000140404AE2: or      rax, rdx
 * 0000000140404AE5: sub     rax, [rcx+7EC0h]
 * 0000000140404AEC: add     [rcx+7F38h], rax
 * 0000000140404AF3: add     [rcx+7EC0h], rax
 * 0000000140404AFA: mov     r8, rax
 * 0000000140404AFD: mov     rax, [rcx+8]
 * 0000000140404B01: test    byte ptr [rax+2], 72h
 * 0000000140404B05: jz      short loc_140404B1A
 * 0000000140404B07: xor     edx, edx
 * 0000000140404B09: call    KiBeginThreadAccountingPeriod
 * 0000000140404B0E: mov     rcx, gs:20h
 * 0000000140404B17: inc     byte ptr [rcx+20h]
 * 0000000140404B1A: mov     dl, [rcx+6]
 * 0000000140404B1D: and     byte ptr [rcx+6], 0
 * 0000000140404B21: cmp     byte ptr [rcx+7], 0
 * 0000000140404B25: jnz     short loc_140404B56
 * 0000000140404B27: test    dl, dl
 * 0000000140404B29: jz      short loc_140404B56
 * 0000000140404B2B: cmp     byte ptr [rbp-57h], 2
 * 0000000140404B2F: jnb     short loc_140404B3C
 * 0000000140404B31: and     byte ptr [rcx+20h], 0
 * 0000000140404B35: call    KiDpcInterruptBypass
 * 0000000140404B3A: jmp     short loc_140404B59
 * 0000000140404B3C: mov     ecx, 2
 * 0000000140404B41: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140404B48: nop     dword ptr [rax+rax+00h]
 * 0000000140404B4D: mov     rcx, gs:20h
 * 0000000140404B56: dec     byte ptr [rcx+20h]
 * 0000000140404B59: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140404B5D: cmp     cs:KiIrqlFlags, 0
 * 0000000140404B64: jz      short loc_140404B6D
 * 0000000140404B66: call    KzSetIrqlUnsafe
 * 0000000140404B6B: jmp     short loc_140404B71
 * 0000000140404B6D: mov     cr8, rcx
 * 0000000140404B71: mov     rsi, [rbp+0D0h]
 * 0000000140404B78: cli
 * 0000000140404B79: test    byte ptr [rbp+0F0h], 1
 * 0000000140404B80: jz      loc_140404E22
 * 0000000140404B86: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140404B8D: jz      short loc_140404B92
 * 0000000140404B8F: stac
 * 0000000140404B92: mov     rcx, gs:188h
 * 0000000140404B9B: test    byte ptr [rcx+0C2h], 3
 * 0000000140404BA2: jz      short loc_140404BBF
 * 0000000140404BA4: mov     ecx, 1
 * 0000000140404BA9: mov     cr8, rcx
 * 0000000140404BAD: sti
 * 0000000140404BAE: call    KiInitiateUserApc
 * 0000000140404BB3: cli
 * 0000000140404BB4: mov     ecx, 0
 * 0000000140404BB9: mov     cr8, rcx
 * 0000000140404BBD: jmp     short loc_140404B92
 * 0000000140404BBF: test    byte ptr gs:86Ch, 2
 * 0000000140404BC8: jz      short loc_140404BD1
 * 0000000140404BCA: xor     ecx, ecx
 * 0000000140404BCC: call    KiUpdateStibpPairing
 * 0000000140404BD1: mov     rcx, gs:188h
 * 0000000140404BDA: test    dword ptr [rcx], 8000000h
 * 0000000140404BE0: jz      short loc_140404BE7
 * 0000000140404BE2: call    KiRestoreSetContextState
 * 0000000140404BE7: mov     rcx, gs:188h
 * 0000000140404BF0: test    dword ptr [rcx], 40010000h
 * 0000000140404BF6: jz      short loc_140404C0C
 * 0000000140404BF8: test    byte ptr [rcx+2], 1
 * 0000000140404BFC: jz      short loc_140404C0C
 * 0000000140404BFE: call    KiCopyCounters
 * 0000000140404C03: mov     rcx, gs:188h
 * 0000000140404C0C: ldmxcsr dword ptr [rbp-54h]
 * 0000000140404C10: cmp     word ptr [rbp+80h], 0
 * 0000000140404C18: jz      short loc_140404C1F
 * 0000000140404C1A: call    KiRestoreDebugRegisterState
 * 0000000140404C1F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140404C23: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140404C27: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140404C2B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140404C2F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140404C33: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140404C37: mov     r11, [rbp-20h]
 * 0000000140404C3B: mov     r10, [rbp-28h]
 * 0000000140404C3F: mov     r9, [rbp-30h]
 * 0000000140404C43: mov     r8, [rbp-38h]
 * 0000000140404C47: mov     byte ptr gs:856h, 0
 * 0000000140404C50: movzx   eax, word ptr gs:86Ah
 * 0000000140404C59: cmp     gs:864h, ax
 * 0000000140404C62: jz      short loc_140404C76
 * 0000000140404C64: mov     gs:864h, ax
 * 0000000140404C6D: mov     ecx, 48h ; 'H'
 * 0000000140404C72: xor     edx, edx
 * 0000000140404C74: wrmsr
 * 0000000140404C76: btr     word ptr gs:860h, 2
 * 0000000140404C81: jnb     short loc_140404C91
 * 0000000140404C83: mov     eax, 1
 * 0000000140404C88: xor     edx, edx
 * 0000000140404C8A: mov     ecx, 49h ; 'I'
 * 0000000140404C8F: wrmsr
 * 0000000140404C91: btr     word ptr gs:860h, 5
 * 0000000140404C9C: jnb     loc_140404DC7
 * 0000000140404CA2: call    loc_140404DB5
 * 0000000140404CA7: add     rsp, 8
 * 0000000140404CAB: call    loc_140404DBE
 * 0000000140404CB0: add     rsp, 8
 * 0000000140404CB4: call    loc_140404CA7
 * 0000000140404CB9: add     rsp, 8
 * 0000000140404CBD: call    loc_140404CB0
 * 0000000140404CC2: add     rsp, 8
 * 0000000140404CC6: call    loc_140404CB9
 * 0000000140404CCB: add     rsp, 8
 * 0000000140404CCF: call    loc_140404CC2
 * 0000000140404CD4: add     rsp, 8
 * 0000000140404CD8: call    loc_140404CCB
 * 0000000140404CDD: add     rsp, 8
 * 0000000140404CE1: call    loc_140404CD4
 * 0000000140404CE6: add     rsp, 8
 * 0000000140404CEA: call    loc_140404CDD
 * 0000000140404CEF: add     rsp, 8
 * 0000000140404CF3: call    loc_140404CE6
 * 0000000140404CF8: add     rsp, 8
 * 0000000140404CFC: call    loc_140404CEF
 * 0000000140404D01: add     rsp, 8
 * 0000000140404D05: call    loc_140404CF8
 * 0000000140404D0A: add     rsp, 8
 * 0000000140404D0E: call    loc_140404D01
 * 0000000140404D13: add     rsp, 8
 * 0000000140404D17: call    loc_140404D0A
 * 0000000140404D1C: add     rsp, 8
 * 0000000140404D20: call    loc_140404D13
 * 0000000140404D25: add     rsp, 8
 * 0000000140404D29: call    loc_140404D1C
 * 0000000140404D2E: add     rsp, 8
 * 0000000140404D32: call    loc_140404D25
 * 0000000140404D37: add     rsp, 8
 * 0000000140404D3B: call    loc_140404D2E
 * 0000000140404D40: add     rsp, 8
 * 0000000140404D44: call    loc_140404D37
 * 0000000140404D49: add     rsp, 8
 * 0000000140404D4D: call    loc_140404D40
 * 0000000140404D52: add     rsp, 8
 * 0000000140404D56: call    loc_140404D49
 * 0000000140404D5B: add     rsp, 8
 * 0000000140404D5F: call    loc_140404D52
 * 0000000140404D64: add     rsp, 8
 * 0000000140404D68: call    loc_140404D5B
 * 0000000140404D6D: add     rsp, 8
 * 0000000140404D71: call    loc_140404D64
 * 0000000140404D76: add     rsp, 8
 * 0000000140404D7A: call    loc_140404D6D
 * 0000000140404D7F: add     rsp, 8
 * 0000000140404D83: call    loc_140404D76
 * 0000000140404D88: add     rsp, 8
 * 0000000140404D8C: call    loc_140404D7F
 * 0000000140404D91: add     rsp, 8
 * 0000000140404D95: call    loc_140404D88
 * 0000000140404D9A: add     rsp, 8
 * 0000000140404D9E: call    loc_140404D91
 * 0000000140404DA3: add     rsp, 8
 * 0000000140404DA7: call    loc_140404D9A
 * 0000000140404DAC: add     rsp, 8
 * 0000000140404DB0: call    loc_140404DA3
 * 0000000140404DB5: add     rsp, 8
 * 0000000140404DB9: call    loc_140404DAC
 * 0000000140404DBE: add     rsp, 8
 * 0000000140404DC2: mov     eax, 0DADAh
 * 0000000140404DC7: test    word ptr gs:860h, 80h
 * 0000000140404DD2: jz      short loc_140404DE0
 * 0000000140404DD4: xor     eax, eax
 * 0000000140404DD6: xor     edx, edx
 * 0000000140404DD8: mov     ecx, 1
 * 0000000140404DDD: div     rcx
 * 0000000140404DE0: mov     rdx, [rbp-40h]
 * 0000000140404DE4: mov     rcx, [rbp-48h]
 * 0000000140404DE8: mov     rax, [rbp-50h]
 * 0000000140404DEC: mov     rsp, rbp
 * 0000000140404DEF: mov     rbp, [rbp+0D8h]
 * 0000000140404DF6: add     rsp, 0E8h
 * 0000000140404DFD: test    cs:KiKvaShadow, 1
 * 0000000140404E04: jz      short loc_140404E0B
 * 0000000140404E06: jmp     KiKernelExit
 * 0000000140404E0B: test    word ptr gs:860h, 100h
 * 0000000140404E16: jz      short loc_140404E1D
 * 0000000140404E18: verw    [rsp-1C8h+arg_1E0]
 * 0000000140404E1D: swapgs
 * 0000000140404E20: iretq
 * 0000000140404E22: ldmxcsr dword ptr [rbp-54h]
 * 0000000140404E26: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140404E2A: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140404E2E: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140404E32: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140404E36: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140404E3A: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140404E3E: mov     r11, [rbp-20h]
 * 0000000140404E42: mov     r10, [rbp-28h]
 * 0000000140404E46: mov     r9, [rbp-30h]
 * 0000000140404E4A: mov     r8, [rbp-38h]
 * 0000000140404E4E: mov     rdx, [rbp-40h]
 * 0000000140404E52: mov     rcx, [rbp-48h]
 * 0000000140404E56: mov     rax, [rbp-50h]
 * 0000000140404E5A: mov     rsp, rbp
 * 0000000140404E5D: mov     rbp, [rbp+0D8h]
 * 0000000140404E64: add     rsp, 0E8h
 * 0000000140404E6B: iretq
 */
