/*
 * XREFs of KiInterruptDispatchNoLock @ 0x1403FE010
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402EBA40 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402F5F40 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403FD9F0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoLock @ 0x1403FE010 (KiInterruptDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1404036E0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140511100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x1403FE010
 * Reason: Hex-Rays returned no pseudocode for 0x1403FE010
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FE010: mov     rdx, rsp
 * 00000001403FE013: mov     rcx, gs:8758h
 * 00000001403FE01C: lea     rax, [rcx-6000h]
 * 00000001403FE023: cmp     rax, rsp
 * 00000001403FE026: ja      short loc_1403FE02D
 * 00000001403FE028: cmp     rsp, rcx
 * 00000001403FE02B: jb      short loc_1403FE039
 * 00000001403FE02D: cmp     cs:KiBugCheckActive, 0
 * 00000001403FE034: jnz     short loc_1403FE039
 * 00000001403FE036: mov     rsp, rcx
 * 00000001403FE039: sub     rsp, 20h
 * 00000001403FE03D: mov     [rsp+20h+var_10], rdx
 * 00000001403FE042: call    KiInterruptSubDispatchNoLock
 * 00000001403FE047: mov     rsp, [rsp+20h+var_10]
 * 00000001403FE04C: mov     rcx, rsi
 * 00000001403FE04F: call    HalPerformEndOfInterrupt
 * 00000001403FE054: mov     rcx, gs:20h
 * 00000001403FE05D: cmp     byte ptr [rcx+20h], 1
 * 00000001403FE061: ja      short loc_1403FE0DD
 * 00000001403FE063: rdtsc
 * 00000001403FE065: shl     rdx, 20h
 * 00000001403FE069: or      rax, rdx
 * 00000001403FE06C: sub     rax, [rcx+7EC0h]
 * 00000001403FE073: add     [rcx+7F38h], rax
 * 00000001403FE07A: add     [rcx+7EC0h], rax
 * 00000001403FE081: mov     r8, rax
 * 00000001403FE084: mov     rax, [rcx+8]
 * 00000001403FE088: test    byte ptr [rax+2], 72h
 * 00000001403FE08C: jz      short loc_1403FE0A1
 * 00000001403FE08E: xor     edx, edx
 * 00000001403FE090: call    KiBeginThreadAccountingPeriod
 * 00000001403FE095: mov     rcx, gs:20h
 * 00000001403FE09E: inc     byte ptr [rcx+20h]
 * 00000001403FE0A1: mov     dl, [rcx+6]
 * 00000001403FE0A4: and     byte ptr [rcx+6], 0
 * 00000001403FE0A8: cmp     byte ptr [rcx+7], 0
 * 00000001403FE0AC: jnz     short loc_1403FE0DD
 * 00000001403FE0AE: test    dl, dl
 * 00000001403FE0B0: jz      short loc_1403FE0DD
 * 00000001403FE0B2: cmp     byte ptr [rbp-57h], 2
 * 00000001403FE0B6: jnb     short loc_1403FE0C3
 * 00000001403FE0B8: and     byte ptr [rcx+20h], 0
 * 00000001403FE0BC: call    KiDpcInterruptBypass
 * 00000001403FE0C1: jmp     short loc_1403FE0E0
 * 00000001403FE0C3: mov     ecx, 2
 * 00000001403FE0C8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FE0CF: nop     dword ptr [rax+rax+00h]
 * 00000001403FE0D4: mov     rcx, gs:20h
 * 00000001403FE0DD: dec     byte ptr [rcx+20h]
 * 00000001403FE0E0: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403FE0E4: cmp     cs:KiIrqlFlags, 0
 * 00000001403FE0EB: jz      short loc_1403FE0F4
 * 00000001403FE0ED: call    KzSetIrqlUnsafe
 * 00000001403FE0F2: jmp     short loc_1403FE0F8
 * 00000001403FE0F4: mov     cr8, rcx
 * 00000001403FE0F8: mov     rsi, [rbp+0D0h]
 * 00000001403FE0FF: test    byte ptr [rbp+0F0h], 1
 * 00000001403FE106: jz      loc_1403FE37B
 * 00000001403FE10C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FE113: jz      short loc_1403FE118
 * 00000001403FE115: stac
 * 00000001403FE118: mov     rcx, gs:188h
 * 00000001403FE121: test    byte ptr [rcx+0C2h], 3
 * 00000001403FE128: jz      short loc_1403FE145
 * 00000001403FE12A: mov     ecx, 1
 * 00000001403FE12F: mov     cr8, rcx
 * 00000001403FE133: sti
 * 00000001403FE134: call    KiInitiateUserApc
 * 00000001403FE139: cli
 * 00000001403FE13A: mov     ecx, 0
 * 00000001403FE13F: mov     cr8, rcx
 * 00000001403FE143: jmp     short loc_1403FE118
 * 00000001403FE145: test    byte ptr gs:27Eh, 2
 * 00000001403FE14E: jz      short loc_1403FE157
 * 00000001403FE150: xor     ecx, ecx
 * 00000001403FE152: call    KiUpdateStibpPairing
 * 00000001403FE157: mov     rcx, gs:188h
 * 00000001403FE160: test    dword ptr [rcx], 8000000h
 * 00000001403FE166: jz      short loc_1403FE16D
 * 00000001403FE168: call    KiRestoreSetContextState
 * 00000001403FE16D: mov     rcx, gs:188h
 * 00000001403FE176: test    dword ptr [rcx], 40010000h
 * 00000001403FE17C: jz      short loc_1403FE192
 * 00000001403FE17E: test    byte ptr [rcx+2], 1
 * 00000001403FE182: jz      short loc_1403FE192
 * 00000001403FE184: call    KiCopyCounters
 * 00000001403FE189: mov     rcx, gs:188h
 * 00000001403FE192: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FE196: cmp     word ptr [rbp+80h], 0
 * 00000001403FE19E: jz      short loc_1403FE1A5
 * 00000001403FE1A0: call    KiRestoreDebugRegisterState
 * 00000001403FE1A5: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FE1A9: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FE1AD: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FE1B1: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FE1B5: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FE1B9: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FE1BD: mov     r11, [rbp-20h]
 * 00000001403FE1C1: mov     r10, [rbp-28h]
 * 00000001403FE1C5: mov     r9, [rbp-30h]
 * 00000001403FE1C9: mov     r8, [rbp-38h]
 * 00000001403FE1CD: mov     byte ptr gs:853h, 0
 * 00000001403FE1D6: movzx   eax, byte ptr gs:27Dh
 * 00000001403FE1DF: cmp     gs:27Ah, al
 * 00000001403FE1E7: jz      short loc_1403FE1FA
 * 00000001403FE1E9: mov     gs:27Ah, al
 * 00000001403FE1F1: mov     ecx, 48h ; 'H'
 * 00000001403FE1F6: xor     edx, edx
 * 00000001403FE1F8: wrmsr
 * 00000001403FE1FA: btr     word ptr gs:278h, 2
 * 00000001403FE205: jnb     short loc_1403FE215
 * 00000001403FE207: mov     eax, 1
 * 00000001403FE20C: xor     edx, edx
 * 00000001403FE20E: mov     ecx, 49h ; 'I'
 * 00000001403FE213: wrmsr
 * 00000001403FE215: btr     word ptr gs:278h, 5
 * 00000001403FE220: jnb     loc_1403FE34B
 * 00000001403FE226: call    loc_1403FE339
 * 00000001403FE22B: add     rsp, 8
 * 00000001403FE22F: call    loc_1403FE342
 * 00000001403FE234: add     rsp, 8
 * 00000001403FE238: call    loc_1403FE22B
 * 00000001403FE23D: add     rsp, 8
 * 00000001403FE241: call    loc_1403FE234
 * 00000001403FE246: add     rsp, 8
 * 00000001403FE24A: call    loc_1403FE23D
 * 00000001403FE24F: add     rsp, 8
 * 00000001403FE253: call    loc_1403FE246
 * 00000001403FE258: add     rsp, 8
 * 00000001403FE25C: call    loc_1403FE24F
 * 00000001403FE261: add     rsp, 8
 * 00000001403FE265: call    loc_1403FE258
 * 00000001403FE26A: add     rsp, 8
 * 00000001403FE26E: call    loc_1403FE261
 * 00000001403FE273: add     rsp, 8
 * 00000001403FE277: call    loc_1403FE26A
 * 00000001403FE27C: add     rsp, 8
 * 00000001403FE280: call    loc_1403FE273
 * 00000001403FE285: add     rsp, 8
 * 00000001403FE289: call    loc_1403FE27C
 * 00000001403FE28E: add     rsp, 8
 * 00000001403FE292: call    loc_1403FE285
 * 00000001403FE297: add     rsp, 8
 * 00000001403FE29B: call    loc_1403FE28E
 * 00000001403FE2A0: add     rsp, 8
 * 00000001403FE2A4: call    loc_1403FE297
 * 00000001403FE2A9: add     rsp, 8
 * 00000001403FE2AD: call    loc_1403FE2A0
 * 00000001403FE2B2: add     rsp, 8
 * 00000001403FE2B6: call    loc_1403FE2A9
 * 00000001403FE2BB: add     rsp, 8
 * 00000001403FE2BF: call    loc_1403FE2B2
 * 00000001403FE2C4: add     rsp, 8
 * 00000001403FE2C8: call    loc_1403FE2BB
 * 00000001403FE2CD: add     rsp, 8
 * 00000001403FE2D1: call    loc_1403FE2C4
 * 00000001403FE2D6: add     rsp, 8
 * 00000001403FE2DA: call    loc_1403FE2CD
 * 00000001403FE2DF: add     rsp, 8
 * 00000001403FE2E3: call    loc_1403FE2D6
 * 00000001403FE2E8: add     rsp, 8
 * 00000001403FE2EC: call    loc_1403FE2DF
 * 00000001403FE2F1: add     rsp, 8
 * 00000001403FE2F5: call    loc_1403FE2E8
 * 00000001403FE2FA: add     rsp, 8
 * 00000001403FE2FE: call    loc_1403FE2F1
 * 00000001403FE303: add     rsp, 8
 * 00000001403FE307: call    loc_1403FE2FA
 * 00000001403FE30C: add     rsp, 8
 * 00000001403FE310: call    loc_1403FE303
 * 00000001403FE315: add     rsp, 8
 * 00000001403FE319: call    loc_1403FE30C
 * 00000001403FE31E: add     rsp, 8
 * 00000001403FE322: call    loc_1403FE315
 * 00000001403FE327: add     rsp, 8
 * 00000001403FE32B: call    loc_1403FE31E
 * 00000001403FE330: add     rsp, 8
 * 00000001403FE334: call    loc_1403FE327
 * 00000001403FE339: add     rsp, 8
 * 00000001403FE33D: call    loc_1403FE330
 * 00000001403FE342: add     rsp, 8
 * 00000001403FE346: mov     eax, 0DADAh
 * 00000001403FE34B: mov     rdx, [rbp-40h]
 * 00000001403FE34F: mov     rcx, [rbp-48h]
 * 00000001403FE353: mov     rax, [rbp-50h]
 * 00000001403FE357: mov     rsp, rbp
 * 00000001403FE35A: mov     rbp, [rbp+0D8h]
 * 00000001403FE361: add     rsp, 0E8h
 * 00000001403FE368: test    cs:KiKvaShadow, 1
 * 00000001403FE36F: jz      short loc_1403FE376
 * 00000001403FE371: jmp     KiKernelExit
 * 00000001403FE376: swapgs
 * 00000001403FE379: iretq
 * 00000001403FE37B: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FE37F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FE383: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FE387: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FE38B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FE38F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FE393: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FE397: mov     r11, [rbp-20h]
 * 00000001403FE39B: mov     r10, [rbp-28h]
 * 00000001403FE39F: mov     r9, [rbp-30h]
 * 00000001403FE3A3: mov     r8, [rbp-38h]
 * 00000001403FE3A7: mov     rdx, [rbp-40h]
 * 00000001403FE3AB: mov     rcx, [rbp-48h]
 * 00000001403FE3AF: mov     rax, [rbp-50h]
 * 00000001403FE3B3: mov     rsp, rbp
 * 00000001403FE3B6: mov     rbp, [rbp+0D8h]
 * 00000001403FE3BD: add     rsp, 0E8h
 * 00000001403FE3C4: iretq
 */
