/*
 * XREFs of KiOverflowTrap @ 0x14040B680
 * Callers:
 *     KiOverflowTrapShadow @ 0x140A14340 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x14040B680 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x1404127C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x14040B680
 * Reason: Hex-Rays returned no pseudocode for 0x14040B680
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040B680: sub     rsp, 8
 * 000000014040B684: push    rbp
 * 000000014040B685: sub     rsp, 158h
 * 000000014040B68C: lea     rbp, [rsp+80h]
 * 000000014040B694: mov     [rbp+0E8h+var_13D], 1
 * 000000014040B698: mov     [rbp+0E8h+var_138], rax
 * 000000014040B69C: mov     [rbp+0E8h+var_130], rcx
 * 000000014040B6A0: mov     [rbp+0E8h+var_128], rdx
 * 000000014040B6A4: mov     [rbp+0E8h+var_120], r8
 * 000000014040B6A8: mov     [rbp+0E8h+var_118], r9
 * 000000014040B6AC: mov     [rbp+0E8h+var_110], r10
 * 000000014040B6B0: mov     [rbp+0E8h+var_108], r11
 * 000000014040B6B4: test    [rbp+0E8h+arg_0], 1
 * 000000014040B6BB: jnz     short loc_14040B6EC
 * 000000014040B6BD: lfence
 * 000000014040B6C0: test    word ptr gs:860h, 1
 * 000000014040B6CB: jnz     short loc_14040B6D5
 * 000000014040B6CD: lfence
 * 000000014040B6D0: jmp     loc_14040B93E
 * 000000014040B6D5: movzx   eax, word ptr gs:864h
 * 000000014040B6DE: mov     ecx, 48h ; 'H'
 * 000000014040B6E3: xor     edx, edx
 * 000000014040B6E5: wrmsr
 * 000000014040B6E7: jmp     loc_14040B93E
 * 000000014040B6EC: test    cs:KiKvaShadow, 1
 * 000000014040B6F3: jnz     short loc_14040B6F8
 * 000000014040B6F5: swapgs
 * 000000014040B6F8: lfence
 * 000000014040B6FB: mov     r10, gs:188h
 * 000000014040B704: mov     rcx, gs:188h
 * 000000014040B70D: mov     rcx, [rcx+220h]
 * 000000014040B714: mov     rcx, [rcx+9E0h]
 * 000000014040B71B: mov     gs:858h, rcx
 * 000000014040B724: mov     cx, gs:850h
 * 000000014040B72D: mov     gs:852h, cx
 * 000000014040B736: mov     cx, gs:860h
 * 000000014040B73F: mov     gs:854h, cx
 * 000000014040B748: movzx   eax, word ptr gs:866h
 * 000000014040B751: cmp     gs:864h, ax
 * 000000014040B75A: jz      short loc_14040B76E
 * 000000014040B75C: mov     gs:864h, ax
 * 000000014040B765: mov     ecx, 48h ; 'H'
 * 000000014040B76A: xor     edx, edx
 * 000000014040B76C: wrmsr
 * 000000014040B76E: movzx   edx, word ptr gs:860h
 * 000000014040B777: test    edx, 8
 * 000000014040B77D: jz      short loc_14040B796
 * 000000014040B77F: mov     eax, 1
 * 000000014040B784: xor     edx, edx
 * 000000014040B786: mov     ecx, 49h ; 'I'
 * 000000014040B78B: wrmsr
 * 000000014040B78D: movzx   edx, word ptr gs:860h
 * 000000014040B796: test    edx, 2
 * 000000014040B79C: jz      loc_14040B8C7
 * 000000014040B7A2: call    loc_14040B8B5
 * 000000014040B7A7: add     rsp, 8
 * 000000014040B7AB: call    loc_14040B8BE
 * 000000014040B7B0: add     rsp, 8
 * 000000014040B7B4: call    loc_14040B7A7
 * 000000014040B7B9: add     rsp, 8
 * 000000014040B7BD: call    loc_14040B7B0
 * 000000014040B7C2: add     rsp, 8
 * 000000014040B7C6: call    loc_14040B7B9
 * 000000014040B7CB: add     rsp, 8
 * 000000014040B7CF: call    loc_14040B7C2
 * 000000014040B7D4: add     rsp, 8
 * 000000014040B7D8: call    loc_14040B7CB
 * 000000014040B7DD: add     rsp, 8
 * 000000014040B7E1: call    loc_14040B7D4
 * 000000014040B7E6: add     rsp, 8
 * 000000014040B7EA: call    loc_14040B7DD
 * 000000014040B7EF: add     rsp, 8
 * 000000014040B7F3: call    loc_14040B7E6
 * 000000014040B7F8: add     rsp, 8
 * 000000014040B7FC: call    loc_14040B7EF
 * 000000014040B801: add     rsp, 8
 * 000000014040B805: call    loc_14040B7F8
 * 000000014040B80A: add     rsp, 8
 * 000000014040B80E: call    loc_14040B801
 * 000000014040B813: add     rsp, 8
 * 000000014040B817: call    loc_14040B80A
 * 000000014040B81C: add     rsp, 8
 * 000000014040B820: call    loc_14040B813
 * 000000014040B825: add     rsp, 8
 * 000000014040B829: call    loc_14040B81C
 * 000000014040B82E: add     rsp, 8
 * 000000014040B832: call    loc_14040B825
 * 000000014040B837: add     rsp, 8
 * 000000014040B83B: call    loc_14040B82E
 * 000000014040B840: add     rsp, 8
 * 000000014040B844: call    loc_14040B837
 * 000000014040B849: add     rsp, 8
 * 000000014040B84D: call    loc_14040B840
 * 000000014040B852: add     rsp, 8
 * 000000014040B856: call    loc_14040B849
 * 000000014040B85B: add     rsp, 8
 * 000000014040B85F: call    loc_14040B852
 * 000000014040B864: add     rsp, 8
 * 000000014040B868: call    loc_14040B85B
 * 000000014040B86D: add     rsp, 8
 * 000000014040B871: call    loc_14040B864
 * 000000014040B876: add     rsp, 8
 * 000000014040B87A: call    loc_14040B86D
 * 000000014040B87F: add     rsp, 8
 * 000000014040B883: call    loc_14040B876
 * 000000014040B888: add     rsp, 8
 * 000000014040B88C: call    loc_14040B87F
 * 000000014040B891: add     rsp, 8
 * 000000014040B895: call    loc_14040B888
 * 000000014040B89A: add     rsp, 8
 * 000000014040B89E: call    loc_14040B891
 * 000000014040B8A3: add     rsp, 8
 * 000000014040B8A7: call    loc_14040B89A
 * 000000014040B8AC: add     rsp, 8
 * 000000014040B8B0: call    loc_14040B8A3
 * 000000014040B8B5: add     rsp, 8
 * 000000014040B8B9: call    loc_14040B8AC
 * 000000014040B8BE: add     rsp, 8
 * 000000014040B8C2: mov     eax, 0DADAh
 * 000000014040B8C7: test    edx, 200h
 * 000000014040B8CD: jz      short loc_14040B8D4
 * 000000014040B8CF: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040B8D4: lfence
 * 000000014040B8D7: mov     byte ptr gs:856h, 0
 * 000000014040B8E0: test    byte ptr [r10+3], 80h
 * 000000014040B8E5: jz      short loc_14040B929
 * 000000014040B8E7: mov     ecx, 0C0000102h
 * 000000014040B8EC: rdmsr
 * 000000014040B8EE: shl     rdx, 20h
 * 000000014040B8F2: or      rax, rdx
 * 000000014040B8F5: cmp     rax, cs:MmUserProbeAddress
 * 000000014040B8FC: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040B904: cmp     [r10+0F0h], rax
 * 000000014040B90B: jz      short loc_14040B929
 * 000000014040B90D: mov     rdx, [r10+1F0h]
 * 000000014040B914: bts     dword ptr [r10+74h], 8
 * 000000014040B91A: dec     word ptr [r10+1E6h]
 * 000000014040B922: mov     [rdx+80h], rax
 * 000000014040B929: test    byte ptr [r10+3], 3
 * 000000014040B92E: mov     [rbp+0E8h+var_68], 0
 * 000000014040B937: jz      short loc_14040B93E
 * 000000014040B939: call    KiSaveDebugRegisterState
 * 000000014040B93E: cld
 * 000000014040B93F: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040B943: ldmxcsr dword ptr gs:180h
 * 000000014040B94C: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014040B950: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040B954: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040B958: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040B95C: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040B960: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040B964: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040B96B: jz      short loc_14040B979
 * 000000014040B96D: test    [rbp+0E8h+arg_0], 1
 * 000000014040B974: jz      short loc_14040B979
 * 000000014040B976: stac
 * 000000014040B979: test    [rbp+0E8h+arg_8], 200h
 * 000000014040B983: jz      short loc_14040B986
 * 000000014040B985: sti
 * 000000014040B986: mov     ecx, 0C0000095h
 * 000000014040B98B: xor     edx, edx
 * 000000014040B98D: mov     r8, [rbp+0E8h]
 * 000000014040B994: dec     r8
 * 000000014040B997: call    KiExceptionDispatch
 * 000000014040B99C: nop
 * 000000014040B99D: retn
 */
