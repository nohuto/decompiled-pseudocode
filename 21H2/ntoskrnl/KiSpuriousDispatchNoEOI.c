/*
 * XREFs of KiSpuriousDispatchNoEOI @ 0x140400F00
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiEndThreadAccountingPeriod @ 0x140231380 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x140288A40 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140293E90 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiSpuriousDispatchNoEOI @ 0x140400F00 (KiSpuriousDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x140403520 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405CB0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512C40 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSpuriousDispatchNoEOI @ 0x140400F00
 * Reason: Hex-Rays returned no pseudocode for 0x140400F00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140400F00: mov     ecx, 0Fh
 * 0000000140400F05: cmp     cs:KiIrqlFlags, 0
 * 0000000140400F0C: jz      short loc_140400F15
 * 0000000140400F0E: call    KzSetIrqlUnsafe
 * 0000000140400F13: jmp     short loc_140400F1D
 * 0000000140400F15: mov     rax, cr8
 * 0000000140400F19: mov     cr8, rcx
 * 0000000140400F1D: mov     [rbp-57h], al
 * 0000000140400F20: mov     rcx, gs:20h
 * 0000000140400F29: inc     byte ptr [rcx+20h]
 * 0000000140400F2C: cmp     byte ptr [rcx+20h], 1
 * 0000000140400F30: jnz     short loc_140400F82
 * 0000000140400F32: rdtsc
 * 0000000140400F34: shl     rdx, 20h
 * 0000000140400F38: or      rax, rdx
 * 0000000140400F3B: mov     r8, [rcx+8]
 * 0000000140400F3F: sub     rax, [rcx+7EC0h]
 * 0000000140400F46: add     [r8+48h], rax
 * 0000000140400F4A: mov     edx, [r8+50h]
 * 0000000140400F4E: add     [rcx+7EC0h], rax
 * 0000000140400F55: add     rdx, rax
 * 0000000140400F58: mov     ecx, edx
 * 0000000140400F5A: shr     rdx, 20h
 * 0000000140400F5E: jz      short loc_140400F63
 * 0000000140400F60: or      ecx, 0FFFFFFFFh
 * 0000000140400F63: mov     [r8+50h], ecx
 * 0000000140400F67: test    byte ptr [r8+2], 3Eh
 * 0000000140400F6C: jz      short loc_140400F82
 * 0000000140400F6E: mov     rdx, r8
 * 0000000140400F71: mov     r8, rax
 * 0000000140400F74: mov     rcx, gs:20h
 * 0000000140400F7D: call    KiEndThreadAccountingPeriod
 * 0000000140400F82: sti
 * 0000000140400F83: inc     dword ptr [rsi+74h]
 * 0000000140400F86: cli
 * 0000000140400F87: mov     rcx, gs:20h
 * 0000000140400F90: cmp     byte ptr [rcx+20h], 1
 * 0000000140400F94: ja      short loc_140401010
 * 0000000140400F96: rdtsc
 * 0000000140400F98: shl     rdx, 20h
 * 0000000140400F9C: or      rax, rdx
 * 0000000140400F9F: sub     rax, [rcx+7EC0h]
 * 0000000140400FA6: add     [rcx+7F38h], rax
 * 0000000140400FAD: add     [rcx+7EC0h], rax
 * 0000000140400FB4: mov     r8, rax
 * 0000000140400FB7: mov     rax, [rcx+8]
 * 0000000140400FBB: test    byte ptr [rax+2], 72h
 * 0000000140400FBF: jz      short loc_140400FD4
 * 0000000140400FC1: xor     edx, edx
 * 0000000140400FC3: call    KiBeginThreadAccountingPeriod
 * 0000000140400FC8: mov     rcx, gs:20h
 * 0000000140400FD1: inc     byte ptr [rcx+20h]
 * 0000000140400FD4: mov     dl, [rcx+6]
 * 0000000140400FD7: and     byte ptr [rcx+6], 0
 * 0000000140400FDB: cmp     byte ptr [rcx+7], 0
 * 0000000140400FDF: jnz     short loc_140401010
 * 0000000140400FE1: test    dl, dl
 * 0000000140400FE3: jz      short loc_140401010
 * 0000000140400FE5: cmp     byte ptr [rbp-57h], 2
 * 0000000140400FE9: jnb     short loc_140400FF6
 * 0000000140400FEB: and     byte ptr [rcx+20h], 0
 * 0000000140400FEF: call    KiDpcInterruptBypass
 * 0000000140400FF4: jmp     short loc_140401013
 * 0000000140400FF6: mov     ecx, 2
 * 0000000140400FFB: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140401002: nop     dword ptr [rax+rax+00h]
 * 0000000140401007: mov     rcx, gs:20h
 * 0000000140401010: dec     byte ptr [rcx+20h]
 * 0000000140401013: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140401017: cmp     cs:KiIrqlFlags, 0
 * 000000014040101E: jz      short loc_140401027
 * 0000000140401020: call    KzSetIrqlUnsafe
 * 0000000140401025: jmp     short loc_14040102B
 * 0000000140401027: mov     cr8, rcx
 * 000000014040102B: mov     rsi, [rbp+0D0h]
 * 0000000140401032: cli
 * 0000000140401033: test    byte ptr [rbp+0F0h], 1
 * 000000014040103A: jz      loc_1404012DC
 * 0000000140401040: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140401047: jz      short loc_14040104C
 * 0000000140401049: stac
 * 000000014040104C: mov     rcx, gs:188h
 * 0000000140401055: test    byte ptr [rcx+0C2h], 3
 * 000000014040105C: jz      short loc_140401079
 * 000000014040105E: mov     ecx, 1
 * 0000000140401063: mov     cr8, rcx
 * 0000000140401067: sti
 * 0000000140401068: call    KiInitiateUserApc
 * 000000014040106D: cli
 * 000000014040106E: mov     ecx, 0
 * 0000000140401073: mov     cr8, rcx
 * 0000000140401077: jmp     short loc_14040104C
 * 0000000140401079: test    byte ptr gs:86Ch, 2
 * 0000000140401082: jz      short loc_14040108B
 * 0000000140401084: xor     ecx, ecx
 * 0000000140401086: call    KiUpdateStibpPairing
 * 000000014040108B: mov     rcx, gs:188h
 * 0000000140401094: test    dword ptr [rcx], 8000000h
 * 000000014040109A: jz      short loc_1404010A1
 * 000000014040109C: call    KiRestoreSetContextState
 * 00000001404010A1: mov     rcx, gs:188h
 * 00000001404010AA: test    dword ptr [rcx], 40010000h
 * 00000001404010B0: jz      short loc_1404010C6
 * 00000001404010B2: test    byte ptr [rcx+2], 1
 * 00000001404010B6: jz      short loc_1404010C6
 * 00000001404010B8: call    KiCopyCounters
 * 00000001404010BD: mov     rcx, gs:188h
 * 00000001404010C6: ldmxcsr dword ptr [rbp-54h]
 * 00000001404010CA: cmp     word ptr [rbp+80h], 0
 * 00000001404010D2: jz      short loc_1404010D9
 * 00000001404010D4: call    KiRestoreDebugRegisterState
 * 00000001404010D9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404010DD: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404010E1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404010E5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404010E9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404010ED: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404010F1: mov     r11, [rbp-20h]
 * 00000001404010F5: mov     r10, [rbp-28h]
 * 00000001404010F9: mov     r9, [rbp-30h]
 * 00000001404010FD: mov     r8, [rbp-38h]
 * 0000000140401101: mov     byte ptr gs:856h, 0
 * 000000014040110A: movzx   eax, word ptr gs:86Ah
 * 0000000140401113: cmp     gs:864h, ax
 * 000000014040111C: jz      short loc_140401130
 * 000000014040111E: mov     gs:864h, ax
 * 0000000140401127: mov     ecx, 48h ; 'H'
 * 000000014040112C: xor     edx, edx
 * 000000014040112E: wrmsr
 * 0000000140401130: btr     word ptr gs:860h, 2
 * 000000014040113B: jnb     short loc_14040114B
 * 000000014040113D: mov     eax, 1
 * 0000000140401142: xor     edx, edx
 * 0000000140401144: mov     ecx, 49h ; 'I'
 * 0000000140401149: wrmsr
 * 000000014040114B: btr     word ptr gs:860h, 5
 * 0000000140401156: jnb     loc_140401281
 * 000000014040115C: call    loc_14040126F
 * 0000000140401161: add     rsp, 8
 * 0000000140401165: call    loc_140401278
 * 000000014040116A: add     rsp, 8
 * 000000014040116E: call    loc_140401161
 * 0000000140401173: add     rsp, 8
 * 0000000140401177: call    loc_14040116A
 * 000000014040117C: add     rsp, 8
 * 0000000140401180: call    loc_140401173
 * 0000000140401185: add     rsp, 8
 * 0000000140401189: call    loc_14040117C
 * 000000014040118E: add     rsp, 8
 * 0000000140401192: call    loc_140401185
 * 0000000140401197: add     rsp, 8
 * 000000014040119B: call    loc_14040118E
 * 00000001404011A0: add     rsp, 8
 * 00000001404011A4: call    loc_140401197
 * 00000001404011A9: add     rsp, 8
 * 00000001404011AD: call    loc_1404011A0
 * 00000001404011B2: add     rsp, 8
 * 00000001404011B6: call    loc_1404011A9
 * 00000001404011BB: add     rsp, 8
 * 00000001404011BF: call    loc_1404011B2
 * 00000001404011C4: add     rsp, 8
 * 00000001404011C8: call    loc_1404011BB
 * 00000001404011CD: add     rsp, 8
 * 00000001404011D1: call    loc_1404011C4
 * 00000001404011D6: add     rsp, 8
 * 00000001404011DA: call    loc_1404011CD
 * 00000001404011DF: add     rsp, 8
 * 00000001404011E3: call    loc_1404011D6
 * 00000001404011E8: add     rsp, 8
 * 00000001404011EC: call    loc_1404011DF
 * 00000001404011F1: add     rsp, 8
 * 00000001404011F5: call    loc_1404011E8
 * 00000001404011FA: add     rsp, 8
 * 00000001404011FE: call    loc_1404011F1
 * 0000000140401203: add     rsp, 8
 * 0000000140401207: call    loc_1404011FA
 * 000000014040120C: add     rsp, 8
 * 0000000140401210: call    loc_140401203
 * 0000000140401215: add     rsp, 8
 * 0000000140401219: call    loc_14040120C
 * 000000014040121E: add     rsp, 8
 * 0000000140401222: call    loc_140401215
 * 0000000140401227: add     rsp, 8
 * 000000014040122B: call    loc_14040121E
 * 0000000140401230: add     rsp, 8
 * 0000000140401234: call    loc_140401227
 * 0000000140401239: add     rsp, 8
 * 000000014040123D: call    loc_140401230
 * 0000000140401242: add     rsp, 8
 * 0000000140401246: call    loc_140401239
 * 000000014040124B: add     rsp, 8
 * 000000014040124F: call    loc_140401242
 * 0000000140401254: add     rsp, 8
 * 0000000140401258: call    loc_14040124B
 * 000000014040125D: add     rsp, 8
 * 0000000140401261: call    loc_140401254
 * 0000000140401266: add     rsp, 8
 * 000000014040126A: call    loc_14040125D
 * 000000014040126F: add     rsp, 8
 * 0000000140401273: call    loc_140401266
 * 0000000140401278: add     rsp, 8
 * 000000014040127C: mov     eax, 0DADAh
 * 0000000140401281: test    word ptr gs:860h, 80h
 * 000000014040128C: jz      short loc_14040129A
 * 000000014040128E: xor     eax, eax
 * 0000000140401290: xor     edx, edx
 * 0000000140401292: mov     ecx, 1
 * 0000000140401297: div     rcx
 * 000000014040129A: mov     rdx, [rbp-40h]
 * 000000014040129E: mov     rcx, [rbp-48h]
 * 00000001404012A2: mov     rax, [rbp-50h]
 * 00000001404012A6: mov     rsp, rbp
 * 00000001404012A9: mov     rbp, [rbp+0D8h]
 * 00000001404012B0: add     rsp, 0E8h
 * 00000001404012B7: test    cs:KiKvaShadow, 1
 * 00000001404012BE: jz      short loc_1404012C5
 * 00000001404012C0: jmp     KiKernelExit
 * 00000001404012C5: test    word ptr gs:860h, 100h
 * 00000001404012D0: jz      short loc_1404012D7
 * 00000001404012D2: verw    [rsp-1E8h+arg_200]
 * 00000001404012D7: swapgs
 * 00000001404012DA: iretq
 * 00000001404012DC: ldmxcsr dword ptr [rbp-54h]
 * 00000001404012E0: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404012E4: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404012E8: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404012EC: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404012F0: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404012F4: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404012F8: mov     r11, [rbp-20h]
 * 00000001404012FC: mov     r10, [rbp-28h]
 * 0000000140401300: mov     r9, [rbp-30h]
 * 0000000140401304: mov     r8, [rbp-38h]
 * 0000000140401308: mov     rdx, [rbp-40h]
 * 000000014040130C: mov     rcx, [rbp-48h]
 * 0000000140401310: mov     rax, [rbp-50h]
 * 0000000140401314: mov     rsp, rbp
 * 0000000140401317: mov     rbp, [rbp+0D8h]
 * 000000014040131E: add     rsp, 0E8h
 * 0000000140401325: iretq
 */
