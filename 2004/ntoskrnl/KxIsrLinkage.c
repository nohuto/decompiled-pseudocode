/*
 * XREFs of KxIsrLinkage @ 0x1403FA0A0
 * Callers:
 *     KxIsrLinkageShadow @ 0x140A12B00 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140214760 (KiEndThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140273DE0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402FBAC0 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x140301350 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x140325D90 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x140325EE0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403F75A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F8030 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x1403FA0A0 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x1403FB600 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1403FD790 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x140409000 (KiBugCheckDispatch.c)
 *     KzSetIrqlUnsafe @ 0x14050D7D0 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1405145B0 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1405169B0 (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x1405A4F70 (PerfInfoLogUnexpectedInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x1403FA0A0
 * Reason: Hex-Rays returned no pseudocode for 0x1403FA0A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FA0A0: push    rbp
 * 00000001403FA0A1: push    rsi
 * 00000001403FA0A2: sub     rsp, 150h
 * 00000001403FA0A9: lea     rbp, [rsp+80h]
 * 00000001403FA0B1: mov     [rbp+0D8h+var_12D], 0
 * 00000001403FA0B5: mov     [rbp+0D8h+var_128], rax
 * 00000001403FA0B9: mov     [rbp+0D8h+var_120], rcx
 * 00000001403FA0BD: mov     [rbp+0D8h+var_118], rdx
 * 00000001403FA0C1: mov     [rbp+0D8h+var_110], r8
 * 00000001403FA0C5: mov     [rbp+0D8h+var_108], r9
 * 00000001403FA0C9: mov     [rbp+0D8h+var_100], r10
 * 00000001403FA0CD: mov     [rbp+0D8h+var_F8], r11
 * 00000001403FA0D1: test    [rbp+0D8h+arg_8], 1
 * 00000001403FA0D8: jnz     short loc_1403FA107
 * 00000001403FA0DA: lfence
 * 00000001403FA0DD: test    byte ptr gs:278h, 1
 * 00000001403FA0E6: jnz     short loc_1403FA0F0
 * 00000001403FA0E8: lfence
 * 00000001403FA0EB: jmp     loc_1403FA303
 * 00000001403FA0F0: movzx   eax, byte ptr gs:27Ah
 * 00000001403FA0F9: mov     ecx, 48h ; 'H'
 * 00000001403FA0FE: xor     edx, edx
 * 00000001403FA100: wrmsr
 * 00000001403FA102: jmp     loc_1403FA303
 * 00000001403FA107: test    cs:KiKvaShadow, 1
 * 00000001403FA10E: jnz     short loc_1403FA113
 * 00000001403FA110: swapgs
 * 00000001403FA113: lfence
 * 00000001403FA116: mov     r10, gs:188h
 * 00000001403FA11F: mov     rcx, gs:188h
 * 00000001403FA128: mov     rcx, [rcx+220h]
 * 00000001403FA12F: mov     rcx, [rcx+9E0h]
 * 00000001403FA136: mov     gs:270h, rcx
 * 00000001403FA13F: mov     cl, gs:850h
 * 00000001403FA147: mov     gs:851h, cl
 * 00000001403FA14F: mov     cl, gs:278h
 * 00000001403FA157: mov     gs:852h, cl
 * 00000001403FA15F: movzx   eax, byte ptr gs:27Bh
 * 00000001403FA168: cmp     gs:27Ah, al
 * 00000001403FA170: jz      short loc_1403FA183
 * 00000001403FA172: mov     gs:27Ah, al
 * 00000001403FA17A: mov     ecx, 48h ; 'H'
 * 00000001403FA17F: xor     edx, edx
 * 00000001403FA181: wrmsr
 * 00000001403FA183: movzx   edx, byte ptr gs:278h
 * 00000001403FA18C: test    edx, 8
 * 00000001403FA192: jz      short loc_1403FA1A7
 * 00000001403FA194: mov     eax, 1
 * 00000001403FA199: xor     edx, edx
 * 00000001403FA19B: mov     ecx, 49h ; 'I'
 * 00000001403FA1A0: wrmsr
 * 00000001403FA1A2: jmp     loc_1403FA2E5
 * 00000001403FA1A7: test    edx, 2
 * 00000001403FA1AD: jz      loc_1403FA2E2
 * 00000001403FA1B3: test    byte ptr gs:279h, 4
 * 00000001403FA1BC: jnz     loc_1403FA2E2
 * 00000001403FA1C2: call    loc_1403FA2D5
 * 00000001403FA1C7: add     rsp, 8
 * 00000001403FA1CB: call    loc_1403FA2DE
 * 00000001403FA1D0: add     rsp, 8
 * 00000001403FA1D4: call    loc_1403FA1C7
 * 00000001403FA1D9: add     rsp, 8
 * 00000001403FA1DD: call    loc_1403FA1D0
 * 00000001403FA1E2: add     rsp, 8
 * 00000001403FA1E6: call    loc_1403FA1D9
 * 00000001403FA1EB: add     rsp, 8
 * 00000001403FA1EF: call    loc_1403FA1E2
 * 00000001403FA1F4: add     rsp, 8
 * 00000001403FA1F8: call    loc_1403FA1EB
 * 00000001403FA1FD: add     rsp, 8
 * 00000001403FA201: call    loc_1403FA1F4
 * 00000001403FA206: add     rsp, 8
 * 00000001403FA20A: call    loc_1403FA1FD
 * 00000001403FA20F: add     rsp, 8
 * 00000001403FA213: call    loc_1403FA206
 * 00000001403FA218: add     rsp, 8
 * 00000001403FA21C: call    loc_1403FA20F
 * 00000001403FA221: add     rsp, 8
 * 00000001403FA225: call    loc_1403FA218
 * 00000001403FA22A: add     rsp, 8
 * 00000001403FA22E: call    loc_1403FA221
 * 00000001403FA233: add     rsp, 8
 * 00000001403FA237: call    loc_1403FA22A
 * 00000001403FA23C: add     rsp, 8
 * 00000001403FA240: call    loc_1403FA233
 * 00000001403FA245: add     rsp, 8
 * 00000001403FA249: call    loc_1403FA23C
 * 00000001403FA24E: add     rsp, 8
 * 00000001403FA252: call    loc_1403FA245
 * 00000001403FA257: add     rsp, 8
 * 00000001403FA25B: call    loc_1403FA24E
 * 00000001403FA260: add     rsp, 8
 * 00000001403FA264: call    loc_1403FA257
 * 00000001403FA269: add     rsp, 8
 * 00000001403FA26D: call    loc_1403FA260
 * 00000001403FA272: add     rsp, 8
 * 00000001403FA276: call    loc_1403FA269
 * 00000001403FA27B: add     rsp, 8
 * 00000001403FA27F: call    loc_1403FA272
 * 00000001403FA284: add     rsp, 8
 * 00000001403FA288: call    loc_1403FA27B
 * 00000001403FA28D: add     rsp, 8
 * 00000001403FA291: call    loc_1403FA284
 * 00000001403FA296: add     rsp, 8
 * 00000001403FA29A: call    loc_1403FA28D
 * 00000001403FA29F: add     rsp, 8
 * 00000001403FA2A3: call    loc_1403FA296
 * 00000001403FA2A8: add     rsp, 8
 * 00000001403FA2AC: call    loc_1403FA29F
 * 00000001403FA2B1: add     rsp, 8
 * 00000001403FA2B5: call    loc_1403FA2A8
 * 00000001403FA2BA: add     rsp, 8
 * 00000001403FA2BE: call    loc_1403FA2B1
 * 00000001403FA2C3: add     rsp, 8
 * 00000001403FA2C7: call    loc_1403FA2BA
 * 00000001403FA2CC: add     rsp, 8
 * 00000001403FA2D0: call    loc_1403FA2C3
 * 00000001403FA2D5: add     rsp, 8
 * 00000001403FA2D9: call    loc_1403FA2CC
 * 00000001403FA2DE: add     rsp, 8
 * 00000001403FA2E2: lfence
 * 00000001403FA2E5: mov     byte ptr gs:853h, 0
 * 00000001403FA2EE: test    byte ptr [r10+3], 3
 * 00000001403FA2F3: mov     [rbp+0D8h+var_58], 0
 * 00000001403FA2FC: jz      short loc_1403FA303
 * 00000001403FA2FE: call    KiSaveDebugRegisterState
 * 00000001403FA303: cld
 * 00000001403FA304: stmxcsr [rbp+0D8h+var_12C]
 * 00000001403FA308: ldmxcsr dword ptr gs:180h
 * 00000001403FA311: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001403FA315: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001403FA319: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001403FA31D: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001403FA321: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001403FA325: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001403FA329: cmp     byte ptr gs:801Ah, 0
 * 00000001403FA332: jz      short loc_1403FA339
 * 00000001403FA334: call    KeWakeProcessor
 * 00000001403FA339: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001403FA340: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001403FA347: jnb     short loc_1403FA362
 * 00000001403FA349: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001403FA350: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001403FA357: jb      short loc_1403FA362
 * 00000001403FA359: lea     rcx, [rbp+0D8h+var_158]
 * 00000001403FA35D: call    KiCheckForSListAddress
 * 00000001403FA362: movzx   eax, byte ptr [rbp+0E0h]
 * 00000001403FA369: mov     rsi, gs:20h
 * 00000001403FA372: mov     rsi, [rsi+rax*8+3140h]
 * 00000001403FA37A: inc     dword ptr gs:8000h
 * 00000001403FA382: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FA389: jz      short loc_1403FA38E
 * 00000001403FA38B: clac
 * 00000001403FA38E: test    rsi, rsi
 * 00000001403FA391: jz      short loc_1403FA39C
 * 00000001403FA393: mov     rax, [rsi+50h]
 * 00000001403FA397: jmp     _guard_dispatch_icall
 * 00000001403FA39C: mov     ecx, eax
 * 00000001403FA39E: shr     ecx, 4
 * 00000001403FA3A1: cmp     cs:KiIrqlFlags, 0
 * 00000001403FA3A8: jz      short loc_1403FA3B1
 * 00000001403FA3AA: call    KzSetIrqlUnsafe
 * 00000001403FA3AF: jmp     short loc_1403FA3B9
 * 00000001403FA3B1: mov     rax, cr8
 * 00000001403FA3B5: mov     cr8, rcx
 * 00000001403FA3B9: mov     [rbp+0D8h+var_12F], al
 * 00000001403FA3BC: mov     rcx, gs:20h
 * 00000001403FA3C5: inc     byte ptr [rcx+20h]
 * 00000001403FA3C8: cmp     byte ptr [rcx+20h], 1
 * 00000001403FA3CC: jnz     short loc_1403FA41E
 * 00000001403FA3CE: rdtsc
 * 00000001403FA3D0: shl     rdx, 20h
 * 00000001403FA3D4: or      rax, rdx
 * 00000001403FA3D7: mov     r8, [rcx+8]
 * 00000001403FA3DB: sub     rax, [rcx+7EC0h]
 * 00000001403FA3E2: add     [r8+48h], rax
 * 00000001403FA3E6: mov     edx, [r8+50h]
 * 00000001403FA3EA: add     [rcx+7EC0h], rax
 * 00000001403FA3F1: add     rdx, rax
 * 00000001403FA3F4: mov     ecx, edx
 * 00000001403FA3F6: shr     rdx, 20h
 * 00000001403FA3FA: jz      short loc_1403FA3FF
 * 00000001403FA3FC: or      ecx, 0FFFFFFFFh
 * 00000001403FA3FF: mov     [r8+50h], ecx
 * 00000001403FA403: test    byte ptr [r8+2], 3Eh
 * 00000001403FA408: jz      short loc_1403FA41E
 * 00000001403FA40A: mov     rdx, r8
 * 00000001403FA40D: mov     r8, rax
 * 00000001403FA410: mov     rcx, gs:20h
 * 00000001403FA419: call    KiEndThreadAccountingPeriod
 * 00000001403FA41E: sti
 * 00000001403FA41F: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 00000001403FA429: jz      short loc_1403FA437
 * 00000001403FA42B: movzx   ecx, byte ptr [rbp+0E0h]
 * 00000001403FA432: call    PerfInfoLogUnexpectedInterrupt
 * 00000001403FA437: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 00000001403FA43E: jz      short loc_1403FA45F
 * 00000001403FA440: and     [rbp+0D8h+var_138], 0
 * 00000001403FA445: xor     r9, r9
 * 00000001403FA448: movzx   r8d, byte ptr [rbp+0E0h]
 * 00000001403FA450: mov     edx, 1
 * 00000001403FA455: mov     ecx, 12h
 * 00000001403FA45A: call    KiBugCheckDispatch
 * 00000001403FA45F: cli
 * 00000001403FA460: mov     rcx, rsi
 * 00000001403FA463: call    HalPerformEndOfInterrupt
 * 00000001403FA468: mov     rcx, gs:20h
 * 00000001403FA471: cmp     byte ptr [rcx+20h], 1
 * 00000001403FA475: ja      short loc_1403FA4F1
 * 00000001403FA477: rdtsc
 * 00000001403FA479: shl     rdx, 20h
 * 00000001403FA47D: or      rax, rdx
 * 00000001403FA480: sub     rax, [rcx+7EC0h]
 * 00000001403FA487: add     [rcx+7F38h], rax
 * 00000001403FA48E: add     [rcx+7EC0h], rax
 * 00000001403FA495: mov     r8, rax
 * 00000001403FA498: mov     rax, [rcx+8]
 * 00000001403FA49C: test    byte ptr [rax+2], 72h
 * 00000001403FA4A0: jz      short loc_1403FA4B5
 * 00000001403FA4A2: xor     edx, edx
 * 00000001403FA4A4: call    KiBeginThreadAccountingPeriod
 * 00000001403FA4A9: mov     rcx, gs:20h
 * 00000001403FA4B2: inc     byte ptr [rcx+20h]
 * 00000001403FA4B5: mov     dl, [rcx+6]
 * 00000001403FA4B8: and     byte ptr [rcx+6], 0
 * 00000001403FA4BC: cmp     byte ptr [rcx+7], 0
 * 00000001403FA4C0: jnz     short loc_1403FA4F1
 * 00000001403FA4C2: test    dl, dl
 * 00000001403FA4C4: jz      short loc_1403FA4F1
 * 00000001403FA4C6: cmp     [rbp+0D8h+var_12F], 2
 * 00000001403FA4CA: jnb     short loc_1403FA4D7
 * 00000001403FA4CC: and     byte ptr [rcx+20h], 0
 * 00000001403FA4D0: call    KiDpcInterruptBypass
 * 00000001403FA4D5: jmp     short loc_1403FA4F4
 * 00000001403FA4D7: mov     ecx, 2
 * 00000001403FA4DC: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FA4E3: nop     dword ptr [rax+rax+00h]
 * 00000001403FA4E8: mov     rcx, gs:20h
 * 00000001403FA4F1: dec     byte ptr [rcx+20h]
 * 00000001403FA4F4: movzx   ecx, [rbp+0D8h+var_12F]
 * 00000001403FA4F8: cmp     cs:KiIrqlFlags, 0
 * 00000001403FA4FF: jz      short loc_1403FA508
 * 00000001403FA501: call    KzSetIrqlUnsafe
 * 00000001403FA506: jmp     short loc_1403FA50C
 * 00000001403FA508: mov     cr8, rcx
 * 00000001403FA50C: mov     rsi, [rbp+0D8h+var_8]
 * 00000001403FA513: cli
 * 00000001403FA514: test    [rbp+0D8h+arg_8], 1
 * 00000001403FA51B: jz      loc_1403FA65A
 * 00000001403FA521: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FA528: jz      short loc_1403FA52D
 * 00000001403FA52A: stac
 * 00000001403FA52D: mov     rcx, gs:188h
 * 00000001403FA536: test    byte ptr [rcx+0C2h], 3
 * 00000001403FA53D: jz      short loc_1403FA55A
 * 00000001403FA53F: mov     ecx, 1
 * 00000001403FA544: mov     cr8, rcx
 * 00000001403FA548: sti
 * 00000001403FA549: call    KiInitiateUserApc
 * 00000001403FA54E: cli
 * 00000001403FA54F: mov     ecx, 0
 * 00000001403FA554: mov     cr8, rcx
 * 00000001403FA558: jmp     short loc_1403FA52D
 * 00000001403FA55A: test    byte ptr gs:27Eh, 2
 * 00000001403FA563: jz      short loc_1403FA56C
 * 00000001403FA565: xor     ecx, ecx
 * 00000001403FA567: call    KiUpdateStibpPairing
 * 00000001403FA56C: mov     rcx, gs:188h
 * 00000001403FA575: test    dword ptr [rcx], 8000000h
 * 00000001403FA57B: jz      short loc_1403FA582
 * 00000001403FA57D: call    KiRestoreSetContextState
 * 00000001403FA582: mov     rcx, gs:188h
 * 00000001403FA58B: test    dword ptr [rcx], 40010000h
 * 00000001403FA591: jz      short loc_1403FA5A7
 * 00000001403FA593: test    byte ptr [rcx+2], 1
 * 00000001403FA597: jz      short loc_1403FA5A7
 * 00000001403FA599: call    KiCopyCounters
 * 00000001403FA59E: mov     rcx, gs:188h
 * 00000001403FA5A7: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001403FA5AB: cmp     [rbp+0D8h+var_58], 0
 * 00000001403FA5B3: jz      short loc_1403FA5BA
 * 00000001403FA5B5: call    KiRestoreDebugRegisterState
 * 00000001403FA5BA: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001403FA5BE: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001403FA5C2: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001403FA5C6: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001403FA5CA: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001403FA5CE: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001403FA5D2: mov     r11, [rbp+0D8h+var_F8]
 * 00000001403FA5D6: mov     r10, [rbp+0D8h+var_100]
 * 00000001403FA5DA: mov     r9, [rbp+0D8h+var_108]
 * 00000001403FA5DE: mov     r8, [rbp+0D8h+var_110]
 * 00000001403FA5E2: mov     byte ptr gs:853h, 0
 * 00000001403FA5EB: movzx   eax, byte ptr gs:27Dh
 * 00000001403FA5F4: cmp     gs:27Ah, al
 * 00000001403FA5FC: jz      short loc_1403FA60F
 * 00000001403FA5FE: mov     gs:27Ah, al
 * 00000001403FA606: mov     ecx, 48h ; 'H'
 * 00000001403FA60B: xor     edx, edx
 * 00000001403FA60D: wrmsr
 * 00000001403FA60F: btr     word ptr gs:278h, 2
 * 00000001403FA61A: jnb     short loc_1403FA62A
 * 00000001403FA61C: mov     eax, 1
 * 00000001403FA621: xor     edx, edx
 * 00000001403FA623: mov     ecx, 49h ; 'I'
 * 00000001403FA628: wrmsr
 * 00000001403FA62A: mov     rdx, [rbp+0D8h+var_118]
 * 00000001403FA62E: mov     rcx, [rbp+0D8h+var_120]
 * 00000001403FA632: mov     rax, [rbp+0D8h+var_128]
 * 00000001403FA636: mov     rsp, rbp
 * 00000001403FA639: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001403FA640: add     rsp, 0E8h
 * 00000001403FA647: test    cs:KiKvaShadow, 1
 * 00000001403FA64E: jz      short loc_1403FA655
 * 00000001403FA650: jmp     KiKernelExit
 * 00000001403FA655: swapgs
 * 00000001403FA658: iretq
 * 00000001403FA65A: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001403FA65E: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001403FA662: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001403FA666: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001403FA66A: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001403FA66E: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001403FA672: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001403FA676: mov     r11, [rbp+0D8h+var_F8]
 * 00000001403FA67A: mov     r10, [rbp+0D8h+var_100]
 * 00000001403FA67E: mov     r9, [rbp+0D8h+var_108]
 * 00000001403FA682: mov     r8, [rbp+0D8h+var_110]
 * 00000001403FA686: mov     rdx, [rbp+0D8h+var_118]
 * 00000001403FA68A: mov     rcx, [rbp+0D8h+var_120]
 * 00000001403FA68E: mov     rax, [rbp+0D8h+var_128]
 * 00000001403FA692: mov     rsp, rbp
 * 00000001403FA695: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001403FA69C: add     rsp, 0E8h
 * 00000001403FA6A3: iretq
 */
