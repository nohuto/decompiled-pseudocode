/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x140400900
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x140205BE0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x14020F440 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x140211E00 (HalRequestSoftwareInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140400010 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140400900 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405E90 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512E80 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x140400900
 * Reason: Hex-Rays returned no pseudocode for 0x140400900
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140400900: mov     rdx, rsp
 * 0000000140400903: mov     rcx, gs:8758h
 * 000000014040090C: lea     rax, [rcx-6000h]
 * 0000000140400913: cmp     rax, rsp
 * 0000000140400916: ja      short loc_14040091D
 * 0000000140400918: cmp     rsp, rcx
 * 000000014040091B: jb      short loc_140400929
 * 000000014040091D: cmp     cs:KiBugCheckActive, 0
 * 0000000140400924: jnz     short loc_140400929
 * 0000000140400926: mov     rsp, rcx
 * 0000000140400929: sub     rsp, 20h
 * 000000014040092D: mov     [rsp+20h+var_10], rdx
 * 0000000140400932: call    KiInterruptSubDispatchNoLockNoEtw
 * 0000000140400937: mov     rsp, [rsp+20h+var_10]
 * 000000014040093C: mov     rcx, rsi
 * 000000014040093F: call    HalPerformEndOfInterrupt
 * 0000000140400944: mov     rcx, gs:20h
 * 000000014040094D: cmp     byte ptr [rcx+20h], 1
 * 0000000140400951: ja      short loc_1404009CD
 * 0000000140400953: rdtsc
 * 0000000140400955: shl     rdx, 20h
 * 0000000140400959: or      rax, rdx
 * 000000014040095C: sub     rax, [rcx+7EC0h]
 * 0000000140400963: add     [rcx+7F38h], rax
 * 000000014040096A: add     [rcx+7EC0h], rax
 * 0000000140400971: mov     r8, rax
 * 0000000140400974: mov     rax, [rcx+8]
 * 0000000140400978: test    byte ptr [rax+2], 72h
 * 000000014040097C: jz      short loc_140400991
 * 000000014040097E: xor     edx, edx
 * 0000000140400980: call    KiBeginThreadAccountingPeriod
 * 0000000140400985: mov     rcx, gs:20h
 * 000000014040098E: inc     byte ptr [rcx+20h]
 * 0000000140400991: mov     dl, [rcx+6]
 * 0000000140400994: and     byte ptr [rcx+6], 0
 * 0000000140400998: cmp     byte ptr [rcx+7], 0
 * 000000014040099C: jnz     short loc_1404009CD
 * 000000014040099E: test    dl, dl
 * 00000001404009A0: jz      short loc_1404009CD
 * 00000001404009A2: cmp     byte ptr [rbp-57h], 2
 * 00000001404009A6: jnb     short loc_1404009B3
 * 00000001404009A8: and     byte ptr [rcx+20h], 0
 * 00000001404009AC: call    KiDpcInterruptBypass
 * 00000001404009B1: jmp     short loc_1404009D0
 * 00000001404009B3: mov     ecx, 2
 * 00000001404009B8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404009BF: nop     dword ptr [rax+rax+00h]
 * 00000001404009C4: mov     rcx, gs:20h
 * 00000001404009CD: dec     byte ptr [rcx+20h]
 * 00000001404009D0: movzx   ecx, byte ptr [rbp-57h]
 * 00000001404009D4: cmp     cs:KiIrqlFlags, 0
 * 00000001404009DB: jz      short loc_1404009E4
 * 00000001404009DD: call    KzSetIrqlUnsafe
 * 00000001404009E2: jmp     short loc_1404009E8
 * 00000001404009E4: mov     cr8, rcx
 * 00000001404009E8: mov     rsi, [rbp+0D0h]
 * 00000001404009EF: test    byte ptr [rbp+0F0h], 1
 * 00000001404009F6: jz      loc_140400C98
 * 00000001404009FC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140400A03: jz      short loc_140400A08
 * 0000000140400A05: stac
 * 0000000140400A08: mov     rcx, gs:188h
 * 0000000140400A11: test    byte ptr [rcx+0C2h], 3
 * 0000000140400A18: jz      short loc_140400A35
 * 0000000140400A1A: mov     ecx, 1
 * 0000000140400A1F: mov     cr8, rcx
 * 0000000140400A23: sti
 * 0000000140400A24: call    KiInitiateUserApc
 * 0000000140400A29: cli
 * 0000000140400A2A: mov     ecx, 0
 * 0000000140400A2F: mov     cr8, rcx
 * 0000000140400A33: jmp     short loc_140400A08
 * 0000000140400A35: test    byte ptr gs:86Ch, 2
 * 0000000140400A3E: jz      short loc_140400A47
 * 0000000140400A40: xor     ecx, ecx
 * 0000000140400A42: call    KiUpdateStibpPairing
 * 0000000140400A47: mov     rcx, gs:188h
 * 0000000140400A50: test    dword ptr [rcx], 8000000h
 * 0000000140400A56: jz      short loc_140400A5D
 * 0000000140400A58: call    KiRestoreSetContextState
 * 0000000140400A5D: mov     rcx, gs:188h
 * 0000000140400A66: test    dword ptr [rcx], 40010000h
 * 0000000140400A6C: jz      short loc_140400A82
 * 0000000140400A6E: test    byte ptr [rcx+2], 1
 * 0000000140400A72: jz      short loc_140400A82
 * 0000000140400A74: call    KiCopyCounters
 * 0000000140400A79: mov     rcx, gs:188h
 * 0000000140400A82: ldmxcsr dword ptr [rbp-54h]
 * 0000000140400A86: cmp     word ptr [rbp+80h], 0
 * 0000000140400A8E: jz      short loc_140400A95
 * 0000000140400A90: call    KiRestoreDebugRegisterState
 * 0000000140400A95: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140400A99: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140400A9D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140400AA1: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140400AA5: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140400AA9: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140400AAD: mov     r11, [rbp-20h]
 * 0000000140400AB1: mov     r10, [rbp-28h]
 * 0000000140400AB5: mov     r9, [rbp-30h]
 * 0000000140400AB9: mov     r8, [rbp-38h]
 * 0000000140400ABD: mov     byte ptr gs:856h, 0
 * 0000000140400AC6: movzx   eax, word ptr gs:86Ah
 * 0000000140400ACF: cmp     gs:864h, ax
 * 0000000140400AD8: jz      short loc_140400AEC
 * 0000000140400ADA: mov     gs:864h, ax
 * 0000000140400AE3: mov     ecx, 48h ; 'H'
 * 0000000140400AE8: xor     edx, edx
 * 0000000140400AEA: wrmsr
 * 0000000140400AEC: btr     word ptr gs:860h, 2
 * 0000000140400AF7: jnb     short loc_140400B07
 * 0000000140400AF9: mov     eax, 1
 * 0000000140400AFE: xor     edx, edx
 * 0000000140400B00: mov     ecx, 49h ; 'I'
 * 0000000140400B05: wrmsr
 * 0000000140400B07: btr     word ptr gs:860h, 5
 * 0000000140400B12: jnb     loc_140400C3D
 * 0000000140400B18: call    loc_140400C2B
 * 0000000140400B1D: add     rsp, 8
 * 0000000140400B21: call    loc_140400C34
 * 0000000140400B26: add     rsp, 8
 * 0000000140400B2A: call    loc_140400B1D
 * 0000000140400B2F: add     rsp, 8
 * 0000000140400B33: call    loc_140400B26
 * 0000000140400B38: add     rsp, 8
 * 0000000140400B3C: call    loc_140400B2F
 * 0000000140400B41: add     rsp, 8
 * 0000000140400B45: call    loc_140400B38
 * 0000000140400B4A: add     rsp, 8
 * 0000000140400B4E: call    loc_140400B41
 * 0000000140400B53: add     rsp, 8
 * 0000000140400B57: call    loc_140400B4A
 * 0000000140400B5C: add     rsp, 8
 * 0000000140400B60: call    loc_140400B53
 * 0000000140400B65: add     rsp, 8
 * 0000000140400B69: call    loc_140400B5C
 * 0000000140400B6E: add     rsp, 8
 * 0000000140400B72: call    loc_140400B65
 * 0000000140400B77: add     rsp, 8
 * 0000000140400B7B: call    loc_140400B6E
 * 0000000140400B80: add     rsp, 8
 * 0000000140400B84: call    loc_140400B77
 * 0000000140400B89: add     rsp, 8
 * 0000000140400B8D: call    loc_140400B80
 * 0000000140400B92: add     rsp, 8
 * 0000000140400B96: call    loc_140400B89
 * 0000000140400B9B: add     rsp, 8
 * 0000000140400B9F: call    loc_140400B92
 * 0000000140400BA4: add     rsp, 8
 * 0000000140400BA8: call    loc_140400B9B
 * 0000000140400BAD: add     rsp, 8
 * 0000000140400BB1: call    loc_140400BA4
 * 0000000140400BB6: add     rsp, 8
 * 0000000140400BBA: call    loc_140400BAD
 * 0000000140400BBF: add     rsp, 8
 * 0000000140400BC3: call    loc_140400BB6
 * 0000000140400BC8: add     rsp, 8
 * 0000000140400BCC: call    loc_140400BBF
 * 0000000140400BD1: add     rsp, 8
 * 0000000140400BD5: call    loc_140400BC8
 * 0000000140400BDA: add     rsp, 8
 * 0000000140400BDE: call    loc_140400BD1
 * 0000000140400BE3: add     rsp, 8
 * 0000000140400BE7: call    loc_140400BDA
 * 0000000140400BEC: add     rsp, 8
 * 0000000140400BF0: call    loc_140400BE3
 * 0000000140400BF5: add     rsp, 8
 * 0000000140400BF9: call    loc_140400BEC
 * 0000000140400BFE: add     rsp, 8
 * 0000000140400C02: call    loc_140400BF5
 * 0000000140400C07: add     rsp, 8
 * 0000000140400C0B: call    loc_140400BFE
 * 0000000140400C10: add     rsp, 8
 * 0000000140400C14: call    loc_140400C07
 * 0000000140400C19: add     rsp, 8
 * 0000000140400C1D: call    loc_140400C10
 * 0000000140400C22: add     rsp, 8
 * 0000000140400C26: call    loc_140400C19
 * 0000000140400C2B: add     rsp, 8
 * 0000000140400C2F: call    loc_140400C22
 * 0000000140400C34: add     rsp, 8
 * 0000000140400C38: mov     eax, 0DADAh
 * 0000000140400C3D: test    word ptr gs:860h, 80h
 * 0000000140400C48: jz      short loc_140400C56
 * 0000000140400C4A: xor     eax, eax
 * 0000000140400C4C: xor     edx, edx
 * 0000000140400C4E: mov     ecx, 1
 * 0000000140400C53: div     rcx
 * 0000000140400C56: mov     rdx, [rbp-40h]
 * 0000000140400C5A: mov     rcx, [rbp-48h]
 * 0000000140400C5E: mov     rax, [rbp-50h]
 * 0000000140400C62: mov     rsp, rbp
 * 0000000140400C65: mov     rbp, [rbp+0D8h]
 * 0000000140400C6C: add     rsp, 0E8h
 * 0000000140400C73: test    cs:KiKvaShadow, 1
 * 0000000140400C7A: jz      short loc_140400C81
 * 0000000140400C7C: jmp     KiKernelExit
 * 0000000140400C81: test    word ptr gs:860h, 100h
 * 0000000140400C8C: jz      short loc_140400C93
 * 0000000140400C8E: verw    [rsp-1C8h+arg_1E0]
 * 0000000140400C93: swapgs
 * 0000000140400C96: iretq
 * 0000000140400C98: ldmxcsr dword ptr [rbp-54h]
 * 0000000140400C9C: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140400CA0: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140400CA4: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140400CA8: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140400CAC: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140400CB0: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140400CB4: mov     r11, [rbp-20h]
 * 0000000140400CB8: mov     r10, [rbp-28h]
 * 0000000140400CBC: mov     r9, [rbp-30h]
 * 0000000140400CC0: mov     r8, [rbp-38h]
 * 0000000140400CC4: mov     rdx, [rbp-40h]
 * 0000000140400CC8: mov     rcx, [rbp-48h]
 * 0000000140400CCC: mov     rax, [rbp-50h]
 * 0000000140400CD0: mov     rsp, rbp
 * 0000000140400CD3: mov     rbp, [rbp+0D8h]
 * 0000000140400CDA: add     rsp, 0E8h
 * 0000000140400CE1: iretq
 */
