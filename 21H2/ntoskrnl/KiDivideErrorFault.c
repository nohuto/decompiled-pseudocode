/*
 * XREFs of KiDivideErrorFault @ 0x14040A600
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x140A14100 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x14040A600 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x1404127C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x14040A600
 * Reason: Hex-Rays returned no pseudocode for 0x14040A600
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040A600: sub     rsp, 8
 * 000000014040A604: push    rbp
 * 000000014040A605: sub     rsp, 158h
 * 000000014040A60C: lea     rbp, [rsp+80h]
 * 000000014040A614: mov     [rbp+0E8h+var_13D], 1
 * 000000014040A618: mov     [rbp+0E8h+var_138], rax
 * 000000014040A61C: mov     [rbp+0E8h+var_130], rcx
 * 000000014040A620: mov     [rbp+0E8h+var_128], rdx
 * 000000014040A624: mov     [rbp+0E8h+var_120], r8
 * 000000014040A628: mov     [rbp+0E8h+var_118], r9
 * 000000014040A62C: mov     [rbp+0E8h+var_110], r10
 * 000000014040A630: mov     [rbp+0E8h+var_108], r11
 * 000000014040A634: test    [rbp+0E8h+arg_0], 1
 * 000000014040A63B: jnz     short loc_14040A66C
 * 000000014040A63D: lfence
 * 000000014040A640: test    word ptr gs:860h, 1
 * 000000014040A64B: jnz     short loc_14040A655
 * 000000014040A64D: lfence
 * 000000014040A650: jmp     loc_14040A8BE
 * 000000014040A655: movzx   eax, word ptr gs:864h
 * 000000014040A65E: mov     ecx, 48h ; 'H'
 * 000000014040A663: xor     edx, edx
 * 000000014040A665: wrmsr
 * 000000014040A667: jmp     loc_14040A8BE
 * 000000014040A66C: test    cs:KiKvaShadow, 1
 * 000000014040A673: jnz     short loc_14040A678
 * 000000014040A675: swapgs
 * 000000014040A678: lfence
 * 000000014040A67B: mov     r10, gs:188h
 * 000000014040A684: mov     rcx, gs:188h
 * 000000014040A68D: mov     rcx, [rcx+220h]
 * 000000014040A694: mov     rcx, [rcx+9E0h]
 * 000000014040A69B: mov     gs:858h, rcx
 * 000000014040A6A4: mov     cx, gs:850h
 * 000000014040A6AD: mov     gs:852h, cx
 * 000000014040A6B6: mov     cx, gs:860h
 * 000000014040A6BF: mov     gs:854h, cx
 * 000000014040A6C8: movzx   eax, word ptr gs:866h
 * 000000014040A6D1: cmp     gs:864h, ax
 * 000000014040A6DA: jz      short loc_14040A6EE
 * 000000014040A6DC: mov     gs:864h, ax
 * 000000014040A6E5: mov     ecx, 48h ; 'H'
 * 000000014040A6EA: xor     edx, edx
 * 000000014040A6EC: wrmsr
 * 000000014040A6EE: movzx   edx, word ptr gs:860h
 * 000000014040A6F7: test    edx, 8
 * 000000014040A6FD: jz      short loc_14040A716
 * 000000014040A6FF: mov     eax, 1
 * 000000014040A704: xor     edx, edx
 * 000000014040A706: mov     ecx, 49h ; 'I'
 * 000000014040A70B: wrmsr
 * 000000014040A70D: movzx   edx, word ptr gs:860h
 * 000000014040A716: test    edx, 2
 * 000000014040A71C: jz      loc_14040A847
 * 000000014040A722: call    loc_14040A835
 * 000000014040A727: add     rsp, 8
 * 000000014040A72B: call    loc_14040A83E
 * 000000014040A730: add     rsp, 8
 * 000000014040A734: call    loc_14040A727
 * 000000014040A739: add     rsp, 8
 * 000000014040A73D: call    loc_14040A730
 * 000000014040A742: add     rsp, 8
 * 000000014040A746: call    loc_14040A739
 * 000000014040A74B: add     rsp, 8
 * 000000014040A74F: call    loc_14040A742
 * 000000014040A754: add     rsp, 8
 * 000000014040A758: call    loc_14040A74B
 * 000000014040A75D: add     rsp, 8
 * 000000014040A761: call    loc_14040A754
 * 000000014040A766: add     rsp, 8
 * 000000014040A76A: call    loc_14040A75D
 * 000000014040A76F: add     rsp, 8
 * 000000014040A773: call    loc_14040A766
 * 000000014040A778: add     rsp, 8
 * 000000014040A77C: call    loc_14040A76F
 * 000000014040A781: add     rsp, 8
 * 000000014040A785: call    loc_14040A778
 * 000000014040A78A: add     rsp, 8
 * 000000014040A78E: call    loc_14040A781
 * 000000014040A793: add     rsp, 8
 * 000000014040A797: call    loc_14040A78A
 * 000000014040A79C: add     rsp, 8
 * 000000014040A7A0: call    loc_14040A793
 * 000000014040A7A5: add     rsp, 8
 * 000000014040A7A9: call    loc_14040A79C
 * 000000014040A7AE: add     rsp, 8
 * 000000014040A7B2: call    loc_14040A7A5
 * 000000014040A7B7: add     rsp, 8
 * 000000014040A7BB: call    loc_14040A7AE
 * 000000014040A7C0: add     rsp, 8
 * 000000014040A7C4: call    loc_14040A7B7
 * 000000014040A7C9: add     rsp, 8
 * 000000014040A7CD: call    loc_14040A7C0
 * 000000014040A7D2: add     rsp, 8
 * 000000014040A7D6: call    loc_14040A7C9
 * 000000014040A7DB: add     rsp, 8
 * 000000014040A7DF: call    loc_14040A7D2
 * 000000014040A7E4: add     rsp, 8
 * 000000014040A7E8: call    loc_14040A7DB
 * 000000014040A7ED: add     rsp, 8
 * 000000014040A7F1: call    loc_14040A7E4
 * 000000014040A7F6: add     rsp, 8
 * 000000014040A7FA: call    loc_14040A7ED
 * 000000014040A7FF: add     rsp, 8
 * 000000014040A803: call    loc_14040A7F6
 * 000000014040A808: add     rsp, 8
 * 000000014040A80C: call    loc_14040A7FF
 * 000000014040A811: add     rsp, 8
 * 000000014040A815: call    loc_14040A808
 * 000000014040A81A: add     rsp, 8
 * 000000014040A81E: call    loc_14040A811
 * 000000014040A823: add     rsp, 8
 * 000000014040A827: call    loc_14040A81A
 * 000000014040A82C: add     rsp, 8
 * 000000014040A830: call    loc_14040A823
 * 000000014040A835: add     rsp, 8
 * 000000014040A839: call    loc_14040A82C
 * 000000014040A83E: add     rsp, 8
 * 000000014040A842: mov     eax, 0DADAh
 * 000000014040A847: test    edx, 200h
 * 000000014040A84D: jz      short loc_14040A854
 * 000000014040A84F: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040A854: lfence
 * 000000014040A857: mov     byte ptr gs:856h, 0
 * 000000014040A860: test    byte ptr [r10+3], 80h
 * 000000014040A865: jz      short loc_14040A8A9
 * 000000014040A867: mov     ecx, 0C0000102h
 * 000000014040A86C: rdmsr
 * 000000014040A86E: shl     rdx, 20h
 * 000000014040A872: or      rax, rdx
 * 000000014040A875: cmp     rax, cs:MmUserProbeAddress
 * 000000014040A87C: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040A884: cmp     [r10+0F0h], rax
 * 000000014040A88B: jz      short loc_14040A8A9
 * 000000014040A88D: mov     rdx, [r10+1F0h]
 * 000000014040A894: bts     dword ptr [r10+74h], 8
 * 000000014040A89A: dec     word ptr [r10+1E6h]
 * 000000014040A8A2: mov     [rdx+80h], rax
 * 000000014040A8A9: test    byte ptr [r10+3], 3
 * 000000014040A8AE: mov     [rbp+0E8h+var_68], 0
 * 000000014040A8B7: jz      short loc_14040A8BE
 * 000000014040A8B9: call    KiSaveDebugRegisterState
 * 000000014040A8BE: cld
 * 000000014040A8BF: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040A8C3: ldmxcsr dword ptr gs:180h
 * 000000014040A8CC: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014040A8D0: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040A8D4: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040A8D8: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040A8DC: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040A8E0: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040A8E4: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040A8EB: jz      short loc_14040A8F9
 * 000000014040A8ED: test    [rbp+0E8h+arg_0], 1
 * 000000014040A8F4: jz      short loc_14040A8F9
 * 000000014040A8F6: stac
 * 000000014040A8F9: test    [rbp+0E8h+arg_8], 200h
 * 000000014040A903: jz      short loc_14040A906
 * 000000014040A905: sti
 * 000000014040A906: mov     ecx, 10000003h
 * 000000014040A90B: xor     edx, edx
 * 000000014040A90D: mov     r8, [rbp+0E8h]
 * 000000014040A914: call    KiExceptionDispatch
 * 000000014040A919: nop
 * 000000014040A91A: retn
 */
