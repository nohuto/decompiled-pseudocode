/*
 * XREFs of KiVmbusInterruptDispatch @ 0x1404048B0
 * Callers:
 *     KiVmbusInterrupt0 @ 0x1404038F0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140403BE0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140403ED0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1404041C0 (KiVmbusInterrupt3.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x140288A40 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140293E90 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403520 (KiInitiateUserApc.c)
 *     KiVmbusInterruptDispatch @ 0x1404048B0 (KiVmbusInterruptDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140404E00 (KiVmbusInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x140405CB0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512C40 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterruptDispatch @ 0x1404048B0
 * Reason: Hex-Rays returned no pseudocode for 0x1404048B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404048B0: mov     rdx, rsp
 * 00000001404048B3: mov     rcx, gs:8758h
 * 00000001404048BC: lea     rax, [rcx-6000h]
 * 00000001404048C3: cmp     rax, rsp
 * 00000001404048C6: ja      short loc_1404048CD
 * 00000001404048C8: cmp     rsp, rcx
 * 00000001404048CB: jb      short loc_1404048D9
 * 00000001404048CD: cmp     cs:KiBugCheckActive, 0
 * 00000001404048D4: jnz     short loc_1404048D9
 * 00000001404048D6: mov     rsp, rcx
 * 00000001404048D9: sub     rsp, 20h
 * 00000001404048DD: mov     [rsp+20h+var_10], rdx
 * 00000001404048E2: call    KiVmbusInterruptSubDispatch
 * 00000001404048E7: mov     rsp, [rsp+20h+var_10]
 * 00000001404048EC: cli
 * 00000001404048ED: mov     rcx, gs:20h
 * 00000001404048F6: cmp     byte ptr [rcx+20h], 1
 * 00000001404048FA: ja      short loc_140404976
 * 00000001404048FC: rdtsc
 * 00000001404048FE: shl     rdx, 20h
 * 0000000140404902: or      rax, rdx
 * 0000000140404905: sub     rax, [rcx+7EC0h]
 * 000000014040490C: add     [rcx+7F38h], rax
 * 0000000140404913: add     [rcx+7EC0h], rax
 * 000000014040491A: mov     r8, rax
 * 000000014040491D: mov     rax, [rcx+8]
 * 0000000140404921: test    byte ptr [rax+2], 72h
 * 0000000140404925: jz      short loc_14040493A
 * 0000000140404927: xor     edx, edx
 * 0000000140404929: call    KiBeginThreadAccountingPeriod
 * 000000014040492E: mov     rcx, gs:20h
 * 0000000140404937: inc     byte ptr [rcx+20h]
 * 000000014040493A: mov     dl, [rcx+6]
 * 000000014040493D: and     byte ptr [rcx+6], 0
 * 0000000140404941: cmp     byte ptr [rcx+7], 0
 * 0000000140404945: jnz     short loc_140404976
 * 0000000140404947: test    dl, dl
 * 0000000140404949: jz      short loc_140404976
 * 000000014040494B: cmp     byte ptr [rbp-57h], 2
 * 000000014040494F: jnb     short loc_14040495C
 * 0000000140404951: and     byte ptr [rcx+20h], 0
 * 0000000140404955: call    KiDpcInterruptBypass
 * 000000014040495A: jmp     short loc_140404979
 * 000000014040495C: mov     ecx, 2
 * 0000000140404961: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140404968: nop     dword ptr [rax+rax+00h]
 * 000000014040496D: mov     rcx, gs:20h
 * 0000000140404976: dec     byte ptr [rcx+20h]
 * 0000000140404979: movzx   ecx, byte ptr [rbp-57h]
 * 000000014040497D: cmp     cs:KiIrqlFlags, 0
 * 0000000140404984: jz      short loc_14040498D
 * 0000000140404986: call    KzSetIrqlUnsafe
 * 000000014040498B: jmp     short loc_140404991
 * 000000014040498D: mov     cr8, rcx
 * 0000000140404991: mov     rsi, [rbp+0D0h]
 * 0000000140404998: cli
 * 0000000140404999: test    byte ptr [rbp+0F0h], 1
 * 00000001404049A0: jz      loc_140404C42
 * 00000001404049A6: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404049AD: jz      short loc_1404049B2
 * 00000001404049AF: stac
 * 00000001404049B2: mov     rcx, gs:188h
 * 00000001404049BB: test    byte ptr [rcx+0C2h], 3
 * 00000001404049C2: jz      short loc_1404049DF
 * 00000001404049C4: mov     ecx, 1
 * 00000001404049C9: mov     cr8, rcx
 * 00000001404049CD: sti
 * 00000001404049CE: call    KiInitiateUserApc
 * 00000001404049D3: cli
 * 00000001404049D4: mov     ecx, 0
 * 00000001404049D9: mov     cr8, rcx
 * 00000001404049DD: jmp     short loc_1404049B2
 * 00000001404049DF: test    byte ptr gs:86Ch, 2
 * 00000001404049E8: jz      short loc_1404049F1
 * 00000001404049EA: xor     ecx, ecx
 * 00000001404049EC: call    KiUpdateStibpPairing
 * 00000001404049F1: mov     rcx, gs:188h
 * 00000001404049FA: test    dword ptr [rcx], 8000000h
 * 0000000140404A00: jz      short loc_140404A07
 * 0000000140404A02: call    KiRestoreSetContextState
 * 0000000140404A07: mov     rcx, gs:188h
 * 0000000140404A10: test    dword ptr [rcx], 40010000h
 * 0000000140404A16: jz      short loc_140404A2C
 * 0000000140404A18: test    byte ptr [rcx+2], 1
 * 0000000140404A1C: jz      short loc_140404A2C
 * 0000000140404A1E: call    KiCopyCounters
 * 0000000140404A23: mov     rcx, gs:188h
 * 0000000140404A2C: ldmxcsr dword ptr [rbp-54h]
 * 0000000140404A30: cmp     word ptr [rbp+80h], 0
 * 0000000140404A38: jz      short loc_140404A3F
 * 0000000140404A3A: call    KiRestoreDebugRegisterState
 * 0000000140404A3F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140404A43: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140404A47: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140404A4B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140404A4F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140404A53: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140404A57: mov     r11, [rbp-20h]
 * 0000000140404A5B: mov     r10, [rbp-28h]
 * 0000000140404A5F: mov     r9, [rbp-30h]
 * 0000000140404A63: mov     r8, [rbp-38h]
 * 0000000140404A67: mov     byte ptr gs:856h, 0
 * 0000000140404A70: movzx   eax, word ptr gs:86Ah
 * 0000000140404A79: cmp     gs:864h, ax
 * 0000000140404A82: jz      short loc_140404A96
 * 0000000140404A84: mov     gs:864h, ax
 * 0000000140404A8D: mov     ecx, 48h ; 'H'
 * 0000000140404A92: xor     edx, edx
 * 0000000140404A94: wrmsr
 * 0000000140404A96: btr     word ptr gs:860h, 2
 * 0000000140404AA1: jnb     short loc_140404AB1
 * 0000000140404AA3: mov     eax, 1
 * 0000000140404AA8: xor     edx, edx
 * 0000000140404AAA: mov     ecx, 49h ; 'I'
 * 0000000140404AAF: wrmsr
 * 0000000140404AB1: btr     word ptr gs:860h, 5
 * 0000000140404ABC: jnb     loc_140404BE7
 * 0000000140404AC2: call    loc_140404BD5
 * 0000000140404AC7: add     rsp, 8
 * 0000000140404ACB: call    loc_140404BDE
 * 0000000140404AD0: add     rsp, 8
 * 0000000140404AD4: call    loc_140404AC7
 * 0000000140404AD9: add     rsp, 8
 * 0000000140404ADD: call    loc_140404AD0
 * 0000000140404AE2: add     rsp, 8
 * 0000000140404AE6: call    loc_140404AD9
 * 0000000140404AEB: add     rsp, 8
 * 0000000140404AEF: call    loc_140404AE2
 * 0000000140404AF4: add     rsp, 8
 * 0000000140404AF8: call    loc_140404AEB
 * 0000000140404AFD: add     rsp, 8
 * 0000000140404B01: call    loc_140404AF4
 * 0000000140404B06: add     rsp, 8
 * 0000000140404B0A: call    loc_140404AFD
 * 0000000140404B0F: add     rsp, 8
 * 0000000140404B13: call    loc_140404B06
 * 0000000140404B18: add     rsp, 8
 * 0000000140404B1C: call    loc_140404B0F
 * 0000000140404B21: add     rsp, 8
 * 0000000140404B25: call    loc_140404B18
 * 0000000140404B2A: add     rsp, 8
 * 0000000140404B2E: call    loc_140404B21
 * 0000000140404B33: add     rsp, 8
 * 0000000140404B37: call    loc_140404B2A
 * 0000000140404B3C: add     rsp, 8
 * 0000000140404B40: call    loc_140404B33
 * 0000000140404B45: add     rsp, 8
 * 0000000140404B49: call    loc_140404B3C
 * 0000000140404B4E: add     rsp, 8
 * 0000000140404B52: call    loc_140404B45
 * 0000000140404B57: add     rsp, 8
 * 0000000140404B5B: call    loc_140404B4E
 * 0000000140404B60: add     rsp, 8
 * 0000000140404B64: call    loc_140404B57
 * 0000000140404B69: add     rsp, 8
 * 0000000140404B6D: call    loc_140404B60
 * 0000000140404B72: add     rsp, 8
 * 0000000140404B76: call    loc_140404B69
 * 0000000140404B7B: add     rsp, 8
 * 0000000140404B7F: call    loc_140404B72
 * 0000000140404B84: add     rsp, 8
 * 0000000140404B88: call    loc_140404B7B
 * 0000000140404B8D: add     rsp, 8
 * 0000000140404B91: call    loc_140404B84
 * 0000000140404B96: add     rsp, 8
 * 0000000140404B9A: call    loc_140404B8D
 * 0000000140404B9F: add     rsp, 8
 * 0000000140404BA3: call    loc_140404B96
 * 0000000140404BA8: add     rsp, 8
 * 0000000140404BAC: call    loc_140404B9F
 * 0000000140404BB1: add     rsp, 8
 * 0000000140404BB5: call    loc_140404BA8
 * 0000000140404BBA: add     rsp, 8
 * 0000000140404BBE: call    loc_140404BB1
 * 0000000140404BC3: add     rsp, 8
 * 0000000140404BC7: call    loc_140404BBA
 * 0000000140404BCC: add     rsp, 8
 * 0000000140404BD0: call    loc_140404BC3
 * 0000000140404BD5: add     rsp, 8
 * 0000000140404BD9: call    loc_140404BCC
 * 0000000140404BDE: add     rsp, 8
 * 0000000140404BE2: mov     eax, 0DADAh
 * 0000000140404BE7: test    word ptr gs:860h, 80h
 * 0000000140404BF2: jz      short loc_140404C00
 * 0000000140404BF4: xor     eax, eax
 * 0000000140404BF6: xor     edx, edx
 * 0000000140404BF8: mov     ecx, 1
 * 0000000140404BFD: div     rcx
 * 0000000140404C00: mov     rdx, [rbp-40h]
 * 0000000140404C04: mov     rcx, [rbp-48h]
 * 0000000140404C08: mov     rax, [rbp-50h]
 * 0000000140404C0C: mov     rsp, rbp
 * 0000000140404C0F: mov     rbp, [rbp+0D8h]
 * 0000000140404C16: add     rsp, 0E8h
 * 0000000140404C1D: test    cs:KiKvaShadow, 1
 * 0000000140404C24: jz      short loc_140404C2B
 * 0000000140404C26: jmp     KiKernelExit
 * 0000000140404C2B: test    word ptr gs:860h, 100h
 * 0000000140404C36: jz      short loc_140404C3D
 * 0000000140404C38: verw    [rsp-1C8h+arg_1E0]
 * 0000000140404C3D: swapgs
 * 0000000140404C40: iretq
 * 0000000140404C42: ldmxcsr dword ptr [rbp-54h]
 * 0000000140404C46: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140404C4A: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140404C4E: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140404C52: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140404C56: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140404C5A: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140404C5E: mov     r11, [rbp-20h]
 * 0000000140404C62: mov     r10, [rbp-28h]
 * 0000000140404C66: mov     r9, [rbp-30h]
 * 0000000140404C6A: mov     r8, [rbp-38h]
 * 0000000140404C6E: mov     rdx, [rbp-40h]
 * 0000000140404C72: mov     rcx, [rbp-48h]
 * 0000000140404C76: mov     rax, [rbp-50h]
 * 0000000140404C7A: mov     rsp, rbp
 * 0000000140404C7D: mov     rbp, [rbp+0D8h]
 * 0000000140404C84: add     rsp, 0E8h
 * 0000000140404C8B: iretq
 */
