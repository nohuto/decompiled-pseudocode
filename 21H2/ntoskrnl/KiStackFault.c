/*
 * XREFs of KiStackFault @ 0x14040D640
 * Callers:
 *     KiStackFaultShadow @ 0x140A14740 (KiStackFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x14040D640 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x1404127C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x14040D640
 * Reason: Hex-Rays returned no pseudocode for 0x14040D640
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040D640: push    rbp
 * 000000014040D641: sub     rsp, 158h
 * 000000014040D648: lea     rbp, [rsp+80h]
 * 000000014040D650: mov     [rbp+0D8h+var_12D], 1
 * 000000014040D654: mov     [rbp+0D8h+var_128], rax
 * 000000014040D658: mov     [rbp+0D8h+var_120], rcx
 * 000000014040D65C: mov     [rbp+0D8h+var_118], rdx
 * 000000014040D660: mov     [rbp+0D8h+var_110], r8
 * 000000014040D664: mov     [rbp+0D8h+var_108], r9
 * 000000014040D668: mov     [rbp+0D8h+var_100], r10
 * 000000014040D66C: mov     [rbp+0D8h+var_F8], r11
 * 000000014040D670: test    [rbp+0D8h+arg_8], 1
 * 000000014040D677: jnz     short loc_14040D6A8
 * 000000014040D679: lfence
 * 000000014040D67C: test    word ptr gs:860h, 1
 * 000000014040D687: jnz     short loc_14040D691
 * 000000014040D689: lfence
 * 000000014040D68C: jmp     loc_14040D8FA
 * 000000014040D691: movzx   eax, word ptr gs:864h
 * 000000014040D69A: mov     ecx, 48h ; 'H'
 * 000000014040D69F: xor     edx, edx
 * 000000014040D6A1: wrmsr
 * 000000014040D6A3: jmp     loc_14040D8FA
 * 000000014040D6A8: test    cs:KiKvaShadow, 1
 * 000000014040D6AF: jnz     short loc_14040D6B4
 * 000000014040D6B1: swapgs
 * 000000014040D6B4: lfence
 * 000000014040D6B7: mov     r10, gs:188h
 * 000000014040D6C0: mov     rcx, gs:188h
 * 000000014040D6C9: mov     rcx, [rcx+220h]
 * 000000014040D6D0: mov     rcx, [rcx+9E0h]
 * 000000014040D6D7: mov     gs:858h, rcx
 * 000000014040D6E0: mov     cx, gs:850h
 * 000000014040D6E9: mov     gs:852h, cx
 * 000000014040D6F2: mov     cx, gs:860h
 * 000000014040D6FB: mov     gs:854h, cx
 * 000000014040D704: movzx   eax, word ptr gs:866h
 * 000000014040D70D: cmp     gs:864h, ax
 * 000000014040D716: jz      short loc_14040D72A
 * 000000014040D718: mov     gs:864h, ax
 * 000000014040D721: mov     ecx, 48h ; 'H'
 * 000000014040D726: xor     edx, edx
 * 000000014040D728: wrmsr
 * 000000014040D72A: movzx   edx, word ptr gs:860h
 * 000000014040D733: test    edx, 8
 * 000000014040D739: jz      short loc_14040D752
 * 000000014040D73B: mov     eax, 1
 * 000000014040D740: xor     edx, edx
 * 000000014040D742: mov     ecx, 49h ; 'I'
 * 000000014040D747: wrmsr
 * 000000014040D749: movzx   edx, word ptr gs:860h
 * 000000014040D752: test    edx, 2
 * 000000014040D758: jz      loc_14040D883
 * 000000014040D75E: call    loc_14040D871
 * 000000014040D763: add     rsp, 8
 * 000000014040D767: call    loc_14040D87A
 * 000000014040D76C: add     rsp, 8
 * 000000014040D770: call    loc_14040D763
 * 000000014040D775: add     rsp, 8
 * 000000014040D779: call    loc_14040D76C
 * 000000014040D77E: add     rsp, 8
 * 000000014040D782: call    loc_14040D775
 * 000000014040D787: add     rsp, 8
 * 000000014040D78B: call    loc_14040D77E
 * 000000014040D790: add     rsp, 8
 * 000000014040D794: call    loc_14040D787
 * 000000014040D799: add     rsp, 8
 * 000000014040D79D: call    loc_14040D790
 * 000000014040D7A2: add     rsp, 8
 * 000000014040D7A6: call    loc_14040D799
 * 000000014040D7AB: add     rsp, 8
 * 000000014040D7AF: call    loc_14040D7A2
 * 000000014040D7B4: add     rsp, 8
 * 000000014040D7B8: call    loc_14040D7AB
 * 000000014040D7BD: add     rsp, 8
 * 000000014040D7C1: call    loc_14040D7B4
 * 000000014040D7C6: add     rsp, 8
 * 000000014040D7CA: call    loc_14040D7BD
 * 000000014040D7CF: add     rsp, 8
 * 000000014040D7D3: call    loc_14040D7C6
 * 000000014040D7D8: add     rsp, 8
 * 000000014040D7DC: call    loc_14040D7CF
 * 000000014040D7E1: add     rsp, 8
 * 000000014040D7E5: call    loc_14040D7D8
 * 000000014040D7EA: add     rsp, 8
 * 000000014040D7EE: call    loc_14040D7E1
 * 000000014040D7F3: add     rsp, 8
 * 000000014040D7F7: call    loc_14040D7EA
 * 000000014040D7FC: add     rsp, 8
 * 000000014040D800: call    loc_14040D7F3
 * 000000014040D805: add     rsp, 8
 * 000000014040D809: call    loc_14040D7FC
 * 000000014040D80E: add     rsp, 8
 * 000000014040D812: call    loc_14040D805
 * 000000014040D817: add     rsp, 8
 * 000000014040D81B: call    loc_14040D80E
 * 000000014040D820: add     rsp, 8
 * 000000014040D824: call    loc_14040D817
 * 000000014040D829: add     rsp, 8
 * 000000014040D82D: call    loc_14040D820
 * 000000014040D832: add     rsp, 8
 * 000000014040D836: call    loc_14040D829
 * 000000014040D83B: add     rsp, 8
 * 000000014040D83F: call    loc_14040D832
 * 000000014040D844: add     rsp, 8
 * 000000014040D848: call    loc_14040D83B
 * 000000014040D84D: add     rsp, 8
 * 000000014040D851: call    loc_14040D844
 * 000000014040D856: add     rsp, 8
 * 000000014040D85A: call    loc_14040D84D
 * 000000014040D85F: add     rsp, 8
 * 000000014040D863: call    loc_14040D856
 * 000000014040D868: add     rsp, 8
 * 000000014040D86C: call    loc_14040D85F
 * 000000014040D871: add     rsp, 8
 * 000000014040D875: call    loc_14040D868
 * 000000014040D87A: add     rsp, 8
 * 000000014040D87E: mov     eax, 0DADAh
 * 000000014040D883: test    edx, 200h
 * 000000014040D889: jz      short loc_14040D890
 * 000000014040D88B: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040D890: lfence
 * 000000014040D893: mov     byte ptr gs:856h, 0
 * 000000014040D89C: test    byte ptr [r10+3], 80h
 * 000000014040D8A1: jz      short loc_14040D8E5
 * 000000014040D8A3: mov     ecx, 0C0000102h
 * 000000014040D8A8: rdmsr
 * 000000014040D8AA: shl     rdx, 20h
 * 000000014040D8AE: or      rax, rdx
 * 000000014040D8B1: cmp     rax, cs:MmUserProbeAddress
 * 000000014040D8B8: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040D8C0: cmp     [r10+0F0h], rax
 * 000000014040D8C7: jz      short loc_14040D8E5
 * 000000014040D8C9: mov     rdx, [r10+1F0h]
 * 000000014040D8D0: bts     dword ptr [r10+74h], 8
 * 000000014040D8D6: dec     word ptr [r10+1E6h]
 * 000000014040D8DE: mov     [rdx+80h], rax
 * 000000014040D8E5: test    byte ptr [r10+3], 3
 * 000000014040D8EA: mov     [rbp+0D8h+var_58], 0
 * 000000014040D8F3: jz      short loc_14040D8FA
 * 000000014040D8F5: call    KiSaveDebugRegisterState
 * 000000014040D8FA: cld
 * 000000014040D8FB: stmxcsr [rbp+0D8h+var_12C]
 * 000000014040D8FF: ldmxcsr dword ptr gs:180h
 * 000000014040D908: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014040D90C: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014040D910: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014040D914: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014040D918: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014040D91C: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014040D920: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040D927: jz      short loc_14040D935
 * 000000014040D929: test    [rbp+0D8h+arg_8], 1
 * 000000014040D930: jz      short loc_14040D935
 * 000000014040D932: stac
 * 000000014040D935: mov     eax, [rbp+0E0h]
 * 000000014040D93B: test    [rbp+0D8h+arg_10], 200h
 * 000000014040D945: jz      short loc_14040D948
 * 000000014040D947: sti
 * 000000014040D948: mov     ecx, 0C0000005h
 * 000000014040D94D: mov     edx, 2
 * 000000014040D952: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040D959: mov     r9d, [rbp+0E0h]
 * 000000014040D960: or      r9d, 3
 * 000000014040D964: and     r9d, 0FFFFh
 * 000000014040D96B: test    [rbp+0D8h+arg_8], 1
 * 000000014040D972: jnz     short loc_14040D978
 * 000000014040D974: or      r9, 0FFFFFFFFFFFFFFFFh
 * 000000014040D978: xor     r10, r10
 * 000000014040D97B: call    KiExceptionDispatch
 * 000000014040D980: nop
 * 000000014040D981: retn
 */
