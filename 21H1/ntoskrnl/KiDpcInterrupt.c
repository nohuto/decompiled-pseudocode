/*
 * XREFs of KiDpcInterrupt @ 0x1403FC050
 * Callers:
 *     KiDpcInterruptShadow @ 0x140A11F40 (KiDpcInterruptShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DDF20 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x1402EC5B0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403F6310 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F6DA0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1403FA370 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x1403FC050 (KiDpcInterrupt.c)
 *     KiDispatchInterrupt @ 0x1403FCC30 (KiDispatchInterrupt.c)
 *     KzSetIrqlUnsafe @ 0x14050D180 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140516360 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x1403FC050
 * Reason: Hex-Rays returned no pseudocode for 0x1403FC050
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FC050: sub     rsp, 8
 * 00000001403FC054: push    rbp
 * 00000001403FC055: push    rsi
 * 00000001403FC056: sub     rsp, 150h
 * 00000001403FC05D: lea     rbp, [rsp+80h]
 * 00000001403FC065: mov     [rbp+0E8h+var_13D], 0
 * 00000001403FC069: mov     [rbp+0E8h+var_138], rax
 * 00000001403FC06D: mov     [rbp+0E8h+var_130], rcx
 * 00000001403FC071: mov     [rbp+0E8h+var_128], rdx
 * 00000001403FC075: mov     [rbp+0E8h+var_120], r8
 * 00000001403FC079: mov     [rbp+0E8h+var_118], r9
 * 00000001403FC07D: mov     [rbp+0E8h+var_110], r10
 * 00000001403FC081: mov     [rbp+0E8h+var_108], r11
 * 00000001403FC085: test    [rbp+0E8h+arg_0], 1
 * 00000001403FC08C: jnz     short loc_1403FC0BB
 * 00000001403FC08E: lfence
 * 00000001403FC091: test    byte ptr gs:278h, 1
 * 00000001403FC09A: jnz     short loc_1403FC0A4
 * 00000001403FC09C: lfence
 * 00000001403FC09F: jmp     loc_1403FC2B7
 * 00000001403FC0A4: movzx   eax, byte ptr gs:27Ah
 * 00000001403FC0AD: mov     ecx, 48h ; 'H'
 * 00000001403FC0B2: xor     edx, edx
 * 00000001403FC0B4: wrmsr
 * 00000001403FC0B6: jmp     loc_1403FC2B7
 * 00000001403FC0BB: test    cs:KiKvaShadow, 1
 * 00000001403FC0C2: jnz     short loc_1403FC0C7
 * 00000001403FC0C4: swapgs
 * 00000001403FC0C7: lfence
 * 00000001403FC0CA: mov     r10, gs:188h
 * 00000001403FC0D3: mov     rcx, gs:188h
 * 00000001403FC0DC: mov     rcx, [rcx+220h]
 * 00000001403FC0E3: mov     rcx, [rcx+9E0h]
 * 00000001403FC0EA: mov     gs:270h, rcx
 * 00000001403FC0F3: mov     cl, gs:850h
 * 00000001403FC0FB: mov     gs:851h, cl
 * 00000001403FC103: mov     cl, gs:278h
 * 00000001403FC10B: mov     gs:852h, cl
 * 00000001403FC113: movzx   eax, byte ptr gs:27Bh
 * 00000001403FC11C: cmp     gs:27Ah, al
 * 00000001403FC124: jz      short loc_1403FC137
 * 00000001403FC126: mov     gs:27Ah, al
 * 00000001403FC12E: mov     ecx, 48h ; 'H'
 * 00000001403FC133: xor     edx, edx
 * 00000001403FC135: wrmsr
 * 00000001403FC137: movzx   edx, byte ptr gs:278h
 * 00000001403FC140: test    edx, 8
 * 00000001403FC146: jz      short loc_1403FC15B
 * 00000001403FC148: mov     eax, 1
 * 00000001403FC14D: xor     edx, edx
 * 00000001403FC14F: mov     ecx, 49h ; 'I'
 * 00000001403FC154: wrmsr
 * 00000001403FC156: jmp     loc_1403FC299
 * 00000001403FC15B: test    edx, 2
 * 00000001403FC161: jz      loc_1403FC296
 * 00000001403FC167: test    byte ptr gs:279h, 4
 * 00000001403FC170: jnz     loc_1403FC296
 * 00000001403FC176: call    loc_1403FC289
 * 00000001403FC17B: add     rsp, 8
 * 00000001403FC17F: call    loc_1403FC292
 * 00000001403FC184: add     rsp, 8
 * 00000001403FC188: call    loc_1403FC17B
 * 00000001403FC18D: add     rsp, 8
 * 00000001403FC191: call    loc_1403FC184
 * 00000001403FC196: add     rsp, 8
 * 00000001403FC19A: call    loc_1403FC18D
 * 00000001403FC19F: add     rsp, 8
 * 00000001403FC1A3: call    loc_1403FC196
 * 00000001403FC1A8: add     rsp, 8
 * 00000001403FC1AC: call    loc_1403FC19F
 * 00000001403FC1B1: add     rsp, 8
 * 00000001403FC1B5: call    loc_1403FC1A8
 * 00000001403FC1BA: add     rsp, 8
 * 00000001403FC1BE: call    loc_1403FC1B1
 * 00000001403FC1C3: add     rsp, 8
 * 00000001403FC1C7: call    loc_1403FC1BA
 * 00000001403FC1CC: add     rsp, 8
 * 00000001403FC1D0: call    loc_1403FC1C3
 * 00000001403FC1D5: add     rsp, 8
 * 00000001403FC1D9: call    loc_1403FC1CC
 * 00000001403FC1DE: add     rsp, 8
 * 00000001403FC1E2: call    loc_1403FC1D5
 * 00000001403FC1E7: add     rsp, 8
 * 00000001403FC1EB: call    loc_1403FC1DE
 * 00000001403FC1F0: add     rsp, 8
 * 00000001403FC1F4: call    loc_1403FC1E7
 * 00000001403FC1F9: add     rsp, 8
 * 00000001403FC1FD: call    loc_1403FC1F0
 * 00000001403FC202: add     rsp, 8
 * 00000001403FC206: call    loc_1403FC1F9
 * 00000001403FC20B: add     rsp, 8
 * 00000001403FC20F: call    loc_1403FC202
 * 00000001403FC214: add     rsp, 8
 * 00000001403FC218: call    loc_1403FC20B
 * 00000001403FC21D: add     rsp, 8
 * 00000001403FC221: call    loc_1403FC214
 * 00000001403FC226: add     rsp, 8
 * 00000001403FC22A: call    loc_1403FC21D
 * 00000001403FC22F: add     rsp, 8
 * 00000001403FC233: call    loc_1403FC226
 * 00000001403FC238: add     rsp, 8
 * 00000001403FC23C: call    loc_1403FC22F
 * 00000001403FC241: add     rsp, 8
 * 00000001403FC245: call    loc_1403FC238
 * 00000001403FC24A: add     rsp, 8
 * 00000001403FC24E: call    loc_1403FC241
 * 00000001403FC253: add     rsp, 8
 * 00000001403FC257: call    loc_1403FC24A
 * 00000001403FC25C: add     rsp, 8
 * 00000001403FC260: call    loc_1403FC253
 * 00000001403FC265: add     rsp, 8
 * 00000001403FC269: call    loc_1403FC25C
 * 00000001403FC26E: add     rsp, 8
 * 00000001403FC272: call    loc_1403FC265
 * 00000001403FC277: add     rsp, 8
 * 00000001403FC27B: call    loc_1403FC26E
 * 00000001403FC280: add     rsp, 8
 * 00000001403FC284: call    loc_1403FC277
 * 00000001403FC289: add     rsp, 8
 * 00000001403FC28D: call    loc_1403FC280
 * 00000001403FC292: add     rsp, 8
 * 00000001403FC296: lfence
 * 00000001403FC299: mov     byte ptr gs:853h, 0
 * 00000001403FC2A2: test    byte ptr [r10+3], 3
 * 00000001403FC2A7: mov     [rbp+0E8h+var_68], 0
 * 00000001403FC2B0: jz      short loc_1403FC2B7
 * 00000001403FC2B2: call    KiSaveDebugRegisterState
 * 00000001403FC2B7: cld
 * 00000001403FC2B8: stmxcsr [rbp+0E8h+var_13C]
 * 00000001403FC2BC: ldmxcsr dword ptr gs:180h
 * 00000001403FC2C5: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001403FC2C9: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001403FC2CD: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001403FC2D1: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001403FC2D5: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001403FC2D9: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001403FC2DD: xor     esi, esi
 * 00000001403FC2DF: inc     dword ptr gs:8000h
 * 00000001403FC2E7: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FC2EE: jz      short loc_1403FC2F3
 * 00000001403FC2F0: clac
 * 00000001403FC2F3: mov     ecx, 2
 * 00000001403FC2F8: cmp     cs:KiIrqlFlags, 0
 * 00000001403FC2FF: jz      short loc_1403FC308
 * 00000001403FC301: call    KzSetIrqlUnsafe
 * 00000001403FC306: jmp     short loc_1403FC310
 * 00000001403FC308: mov     rax, cr8
 * 00000001403FC30C: mov     cr8, rcx
 * 00000001403FC310: mov     [rbp+0E8h+var_13F], al
 * 00000001403FC313: mov     rcx, rsi
 * 00000001403FC316: call    HalPerformEndOfInterrupt
 * 00000001403FC31B: sti
 * 00000001403FC31C: cmp     byte ptr gs:187h, 0
 * 00000001403FC325: jnz     short loc_1403FC33E
 * 00000001403FC327: mov     al, [rbp+0E8h+var_13F]
 * 00000001403FC32A: mov     rcx, gs:188h
 * 00000001403FC333: mov     [rcx+186h], al
 * 00000001403FC339: call    KiDispatchInterrupt
 * 00000001403FC33E: cli
 * 00000001403FC33F: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001403FC343: cmp     cs:KiIrqlFlags, 0
 * 00000001403FC34A: jz      short loc_1403FC353
 * 00000001403FC34C: call    KzSetIrqlUnsafe
 * 00000001403FC351: jmp     short loc_1403FC357
 * 00000001403FC353: mov     cr8, rcx
 * 00000001403FC357: mov     rsi, [rbp+0E8h+var_18]
 * 00000001403FC35E: cli
 * 00000001403FC35F: test    [rbp+0E8h+arg_0], 1
 * 00000001403FC366: jz      loc_1403FC4A5
 * 00000001403FC36C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FC373: jz      short loc_1403FC378
 * 00000001403FC375: stac
 * 00000001403FC378: mov     rcx, gs:188h
 * 00000001403FC381: test    byte ptr [rcx+0C2h], 3
 * 00000001403FC388: jz      short loc_1403FC3A5
 * 00000001403FC38A: mov     ecx, 1
 * 00000001403FC38F: mov     cr8, rcx
 * 00000001403FC393: sti
 * 00000001403FC394: call    KiInitiateUserApc
 * 00000001403FC399: cli
 * 00000001403FC39A: mov     ecx, 0
 * 00000001403FC39F: mov     cr8, rcx
 * 00000001403FC3A3: jmp     short loc_1403FC378
 * 00000001403FC3A5: test    byte ptr gs:27Eh, 2
 * 00000001403FC3AE: jz      short loc_1403FC3B7
 * 00000001403FC3B0: xor     ecx, ecx
 * 00000001403FC3B2: call    KiUpdateStibpPairing
 * 00000001403FC3B7: mov     rcx, gs:188h
 * 00000001403FC3C0: test    dword ptr [rcx], 8000000h
 * 00000001403FC3C6: jz      short loc_1403FC3CD
 * 00000001403FC3C8: call    KiRestoreSetContextState
 * 00000001403FC3CD: mov     rcx, gs:188h
 * 00000001403FC3D6: test    dword ptr [rcx], 40010000h
 * 00000001403FC3DC: jz      short loc_1403FC3F2
 * 00000001403FC3DE: test    byte ptr [rcx+2], 1
 * 00000001403FC3E2: jz      short loc_1403FC3F2
 * 00000001403FC3E4: call    KiCopyCounters
 * 00000001403FC3E9: mov     rcx, gs:188h
 * 00000001403FC3F2: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001403FC3F6: cmp     [rbp+0E8h+var_68], 0
 * 00000001403FC3FE: jz      short loc_1403FC405
 * 00000001403FC400: call    KiRestoreDebugRegisterState
 * 00000001403FC405: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001403FC409: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001403FC40D: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001403FC411: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001403FC415: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001403FC419: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001403FC41D: mov     r11, [rbp+0E8h+var_108]
 * 00000001403FC421: mov     r10, [rbp+0E8h+var_110]
 * 00000001403FC425: mov     r9, [rbp+0E8h+var_118]
 * 00000001403FC429: mov     r8, [rbp+0E8h+var_120]
 * 00000001403FC42D: mov     byte ptr gs:853h, 0
 * 00000001403FC436: movzx   eax, byte ptr gs:27Dh
 * 00000001403FC43F: cmp     gs:27Ah, al
 * 00000001403FC447: jz      short loc_1403FC45A
 * 00000001403FC449: mov     gs:27Ah, al
 * 00000001403FC451: mov     ecx, 48h ; 'H'
 * 00000001403FC456: xor     edx, edx
 * 00000001403FC458: wrmsr
 * 00000001403FC45A: btr     word ptr gs:278h, 2
 * 00000001403FC465: jnb     short loc_1403FC475
 * 00000001403FC467: mov     eax, 1
 * 00000001403FC46C: xor     edx, edx
 * 00000001403FC46E: mov     ecx, 49h ; 'I'
 * 00000001403FC473: wrmsr
 * 00000001403FC475: mov     rdx, [rbp+0E8h+var_128]
 * 00000001403FC479: mov     rcx, [rbp+0E8h+var_130]
 * 00000001403FC47D: mov     rax, [rbp+0E8h+var_138]
 * 00000001403FC481: mov     rsp, rbp
 * 00000001403FC484: mov     rbp, [rbp+0E8h+var_10]
 * 00000001403FC48B: add     rsp, 0E8h
 * 00000001403FC492: test    cs:KiKvaShadow, 1
 * 00000001403FC499: jz      short loc_1403FC4A0
 * 00000001403FC49B: jmp     KiKernelExit
 * 00000001403FC4A0: swapgs
 * 00000001403FC4A3: iretq
 * 00000001403FC4A5: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001403FC4A9: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001403FC4AD: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001403FC4B1: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001403FC4B5: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001403FC4B9: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001403FC4BD: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001403FC4C1: mov     r11, [rbp+0E8h+var_108]
 * 00000001403FC4C5: mov     r10, [rbp+0E8h+var_110]
 * 00000001403FC4C9: mov     r9, [rbp+0E8h+var_118]
 * 00000001403FC4CD: mov     r8, [rbp+0E8h+var_120]
 * 00000001403FC4D1: mov     rdx, [rbp+0E8h+var_128]
 * 00000001403FC4D5: mov     rcx, [rbp+0E8h+var_130]
 * 00000001403FC4D9: mov     rax, [rbp+0E8h+var_138]
 * 00000001403FC4DD: mov     rsp, rbp
 * 00000001403FC4E0: mov     rbp, [rbp+0E8h+var_10]
 * 00000001403FC4E7: add     rsp, 0E8h
 * 00000001403FC4EE: iretq
 */
