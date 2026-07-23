/*
 * XREFs of KiOverflowTrap @ 0x14040B780
 * Callers:
 *     KiOverflowTrapShadow @ 0x140A15340 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x14040B780 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x1404128C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x14040B780
 * Reason: Hex-Rays returned no pseudocode for 0x14040B780
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040B780: sub     rsp, 8
 * 000000014040B784: push    rbp
 * 000000014040B785: sub     rsp, 158h
 * 000000014040B78C: lea     rbp, [rsp+80h]
 * 000000014040B794: mov     [rbp+0E8h+var_13D], 1
 * 000000014040B798: mov     [rbp+0E8h+var_138], rax
 * 000000014040B79C: mov     [rbp+0E8h+var_130], rcx
 * 000000014040B7A0: mov     [rbp+0E8h+var_128], rdx
 * 000000014040B7A4: mov     [rbp+0E8h+var_120], r8
 * 000000014040B7A8: mov     [rbp+0E8h+var_118], r9
 * 000000014040B7AC: mov     [rbp+0E8h+var_110], r10
 * 000000014040B7B0: mov     [rbp+0E8h+var_108], r11
 * 000000014040B7B4: test    [rbp+0E8h+arg_0], 1
 * 000000014040B7BB: jnz     short loc_14040B7EC
 * 000000014040B7BD: lfence
 * 000000014040B7C0: test    word ptr gs:860h, 1
 * 000000014040B7CB: jnz     short loc_14040B7D5
 * 000000014040B7CD: lfence
 * 000000014040B7D0: jmp     loc_14040BA3E
 * 000000014040B7D5: movzx   eax, word ptr gs:864h
 * 000000014040B7DE: mov     ecx, 48h ; 'H'
 * 000000014040B7E3: xor     edx, edx
 * 000000014040B7E5: wrmsr
 * 000000014040B7E7: jmp     loc_14040BA3E
 * 000000014040B7EC: test    cs:KiKvaShadow, 1
 * 000000014040B7F3: jnz     short loc_14040B7F8
 * 000000014040B7F5: swapgs
 * 000000014040B7F8: lfence
 * 000000014040B7FB: mov     r10, gs:188h
 * 000000014040B804: mov     rcx, gs:188h
 * 000000014040B80D: mov     rcx, [rcx+220h]
 * 000000014040B814: mov     rcx, [rcx+9E0h]
 * 000000014040B81B: mov     gs:858h, rcx
 * 000000014040B824: mov     cx, gs:850h
 * 000000014040B82D: mov     gs:852h, cx
 * 000000014040B836: mov     cx, gs:860h
 * 000000014040B83F: mov     gs:854h, cx
 * 000000014040B848: movzx   eax, word ptr gs:866h
 * 000000014040B851: cmp     gs:864h, ax
 * 000000014040B85A: jz      short loc_14040B86E
 * 000000014040B85C: mov     gs:864h, ax
 * 000000014040B865: mov     ecx, 48h ; 'H'
 * 000000014040B86A: xor     edx, edx
 * 000000014040B86C: wrmsr
 * 000000014040B86E: movzx   edx, word ptr gs:860h
 * 000000014040B877: test    edx, 8
 * 000000014040B87D: jz      short loc_14040B896
 * 000000014040B87F: mov     eax, 1
 * 000000014040B884: xor     edx, edx
 * 000000014040B886: mov     ecx, 49h ; 'I'
 * 000000014040B88B: wrmsr
 * 000000014040B88D: movzx   edx, word ptr gs:860h
 * 000000014040B896: test    edx, 2
 * 000000014040B89C: jz      loc_14040B9C7
 * 000000014040B8A2: call    loc_14040B9B5
 * 000000014040B8A7: add     rsp, 8
 * 000000014040B8AB: call    loc_14040B9BE
 * 000000014040B8B0: add     rsp, 8
 * 000000014040B8B4: call    loc_14040B8A7
 * 000000014040B8B9: add     rsp, 8
 * 000000014040B8BD: call    loc_14040B8B0
 * 000000014040B8C2: add     rsp, 8
 * 000000014040B8C6: call    loc_14040B8B9
 * 000000014040B8CB: add     rsp, 8
 * 000000014040B8CF: call    loc_14040B8C2
 * 000000014040B8D4: add     rsp, 8
 * 000000014040B8D8: call    loc_14040B8CB
 * 000000014040B8DD: add     rsp, 8
 * 000000014040B8E1: call    loc_14040B8D4
 * 000000014040B8E6: add     rsp, 8
 * 000000014040B8EA: call    loc_14040B8DD
 * 000000014040B8EF: add     rsp, 8
 * 000000014040B8F3: call    loc_14040B8E6
 * 000000014040B8F8: add     rsp, 8
 * 000000014040B8FC: call    loc_14040B8EF
 * 000000014040B901: add     rsp, 8
 * 000000014040B905: call    loc_14040B8F8
 * 000000014040B90A: add     rsp, 8
 * 000000014040B90E: call    loc_14040B901
 * 000000014040B913: add     rsp, 8
 * 000000014040B917: call    loc_14040B90A
 * 000000014040B91C: add     rsp, 8
 * 000000014040B920: call    loc_14040B913
 * 000000014040B925: add     rsp, 8
 * 000000014040B929: call    loc_14040B91C
 * 000000014040B92E: add     rsp, 8
 * 000000014040B932: call    loc_14040B925
 * 000000014040B937: add     rsp, 8
 * 000000014040B93B: call    loc_14040B92E
 * 000000014040B940: add     rsp, 8
 * 000000014040B944: call    loc_14040B937
 * 000000014040B949: add     rsp, 8
 * 000000014040B94D: call    loc_14040B940
 * 000000014040B952: add     rsp, 8
 * 000000014040B956: call    loc_14040B949
 * 000000014040B95B: add     rsp, 8
 * 000000014040B95F: call    loc_14040B952
 * 000000014040B964: add     rsp, 8
 * 000000014040B968: call    loc_14040B95B
 * 000000014040B96D: add     rsp, 8
 * 000000014040B971: call    loc_14040B964
 * 000000014040B976: add     rsp, 8
 * 000000014040B97A: call    loc_14040B96D
 * 000000014040B97F: add     rsp, 8
 * 000000014040B983: call    loc_14040B976
 * 000000014040B988: add     rsp, 8
 * 000000014040B98C: call    loc_14040B97F
 * 000000014040B991: add     rsp, 8
 * 000000014040B995: call    loc_14040B988
 * 000000014040B99A: add     rsp, 8
 * 000000014040B99E: call    loc_14040B991
 * 000000014040B9A3: add     rsp, 8
 * 000000014040B9A7: call    loc_14040B99A
 * 000000014040B9AC: add     rsp, 8
 * 000000014040B9B0: call    loc_14040B9A3
 * 000000014040B9B5: add     rsp, 8
 * 000000014040B9B9: call    loc_14040B9AC
 * 000000014040B9BE: add     rsp, 8
 * 000000014040B9C2: mov     eax, 0DADAh
 * 000000014040B9C7: test    edx, 200h
 * 000000014040B9CD: jz      short loc_14040B9D4
 * 000000014040B9CF: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040B9D4: lfence
 * 000000014040B9D7: mov     byte ptr gs:856h, 0
 * 000000014040B9E0: test    byte ptr [r10+3], 80h
 * 000000014040B9E5: jz      short loc_14040BA29
 * 000000014040B9E7: mov     ecx, 0C0000102h
 * 000000014040B9EC: rdmsr
 * 000000014040B9EE: shl     rdx, 20h
 * 000000014040B9F2: or      rax, rdx
 * 000000014040B9F5: cmp     rax, cs:MmUserProbeAddress
 * 000000014040B9FC: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040BA04: cmp     [r10+0F0h], rax
 * 000000014040BA0B: jz      short loc_14040BA29
 * 000000014040BA0D: mov     rdx, [r10+1F0h]
 * 000000014040BA14: bts     dword ptr [r10+74h], 8
 * 000000014040BA1A: dec     word ptr [r10+1E6h]
 * 000000014040BA22: mov     [rdx+80h], rax
 * 000000014040BA29: test    byte ptr [r10+3], 3
 * 000000014040BA2E: mov     [rbp+0E8h+var_68], 0
 * 000000014040BA37: jz      short loc_14040BA3E
 * 000000014040BA39: call    KiSaveDebugRegisterState
 * 000000014040BA3E: cld
 * 000000014040BA3F: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040BA43: ldmxcsr dword ptr gs:180h
 * 000000014040BA4C: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014040BA50: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040BA54: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040BA58: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040BA5C: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040BA60: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040BA64: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040BA6B: jz      short loc_14040BA79
 * 000000014040BA6D: test    [rbp+0E8h+arg_0], 1
 * 000000014040BA74: jz      short loc_14040BA79
 * 000000014040BA76: stac
 * 000000014040BA79: test    [rbp+0E8h+arg_8], 200h
 * 000000014040BA83: jz      short loc_14040BA86
 * 000000014040BA85: sti
 * 000000014040BA86: mov     ecx, 0C0000095h
 * 000000014040BA8B: xor     edx, edx
 * 000000014040BA8D: mov     r8, [rbp+0E8h]
 * 000000014040BA94: dec     r8
 * 000000014040BA97: call    KiExceptionDispatch
 * 000000014040BA9C: nop
 * 000000014040BA9D: retn
 */
