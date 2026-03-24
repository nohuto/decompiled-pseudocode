/*
 * XREFs of KyStartUserThread @ 0x1403FD4B0
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F6390 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x1403FD4B0 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x1403FD780 (KxStartUserThread.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x1403FD4B0
 * Reason: Hex-Rays returned no pseudocode for 0x1403FD4B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FD4B0: sub     rsp, 8
 * 00000001403FD4B4: push    rbp
 * 00000001403FD4B5: sub     rsp, 158h
 * 00000001403FD4BC: lea     rbp, [rsp+80h]
 * 00000001403FD4C4: mov     [rbp+0E8h+var_13D], 1
 * 00000001403FD4C8: mov     [rbp+0E8h+var_138], rax
 * 00000001403FD4CC: mov     [rbp+0E8h+var_130], rcx
 * 00000001403FD4D0: mov     [rbp+0E8h+var_128], rdx
 * 00000001403FD4D4: mov     [rbp+0E8h+var_120], r8
 * 00000001403FD4D8: mov     [rbp+0E8h+var_118], r9
 * 00000001403FD4DC: mov     [rbp+0E8h+var_110], r10
 * 00000001403FD4E0: mov     [rbp+0E8h+var_108], r11
 * 00000001403FD4E4: test    [rbp+0E8h+arg_0], 1
 * 00000001403FD4EB: jnz     short loc_1403FD51A
 * 00000001403FD4ED: lfence
 * 00000001403FD4F0: test    byte ptr gs:278h, 1
 * 00000001403FD4F9: jnz     short loc_1403FD503
 * 00000001403FD4FB: lfence
 * 00000001403FD4FE: jmp     loc_1403FD716
 * 00000001403FD503: movzx   eax, byte ptr gs:27Ah
 * 00000001403FD50C: mov     ecx, 48h ; 'H'
 * 00000001403FD511: xor     edx, edx
 * 00000001403FD513: wrmsr
 * 00000001403FD515: jmp     loc_1403FD716
 * 00000001403FD51A: test    cs:KiKvaShadow, 1
 * 00000001403FD521: jnz     short loc_1403FD526
 * 00000001403FD523: swapgs
 * 00000001403FD526: lfence
 * 00000001403FD529: mov     r10, gs:188h
 * 00000001403FD532: mov     rcx, gs:188h
 * 00000001403FD53B: mov     rcx, [rcx+220h]
 * 00000001403FD542: mov     rcx, [rcx+9E0h]
 * 00000001403FD549: mov     gs:270h, rcx
 * 00000001403FD552: mov     cl, gs:850h
 * 00000001403FD55A: mov     gs:851h, cl
 * 00000001403FD562: mov     cl, gs:278h
 * 00000001403FD56A: mov     gs:852h, cl
 * 00000001403FD572: movzx   eax, byte ptr gs:27Bh
 * 00000001403FD57B: cmp     gs:27Ah, al
 * 00000001403FD583: jz      short loc_1403FD596
 * 00000001403FD585: mov     gs:27Ah, al
 * 00000001403FD58D: mov     ecx, 48h ; 'H'
 * 00000001403FD592: xor     edx, edx
 * 00000001403FD594: wrmsr
 * 00000001403FD596: movzx   edx, byte ptr gs:278h
 * 00000001403FD59F: test    edx, 8
 * 00000001403FD5A5: jz      short loc_1403FD5BA
 * 00000001403FD5A7: mov     eax, 1
 * 00000001403FD5AC: xor     edx, edx
 * 00000001403FD5AE: mov     ecx, 49h ; 'I'
 * 00000001403FD5B3: wrmsr
 * 00000001403FD5B5: jmp     loc_1403FD6F8
 * 00000001403FD5BA: test    edx, 2
 * 00000001403FD5C0: jz      loc_1403FD6F5
 * 00000001403FD5C6: test    byte ptr gs:279h, 4
 * 00000001403FD5CF: jnz     loc_1403FD6F5
 * 00000001403FD5D5: call    loc_1403FD6E8
 * 00000001403FD5DA: add     rsp, 8
 * 00000001403FD5DE: call    loc_1403FD6F1
 * 00000001403FD5E3: add     rsp, 8
 * 00000001403FD5E7: call    loc_1403FD5DA
 * 00000001403FD5EC: add     rsp, 8
 * 00000001403FD5F0: call    loc_1403FD5E3
 * 00000001403FD5F5: add     rsp, 8
 * 00000001403FD5F9: call    loc_1403FD5EC
 * 00000001403FD5FE: add     rsp, 8
 * 00000001403FD602: call    loc_1403FD5F5
 * 00000001403FD607: add     rsp, 8
 * 00000001403FD60B: call    loc_1403FD5FE
 * 00000001403FD610: add     rsp, 8
 * 00000001403FD614: call    loc_1403FD607
 * 00000001403FD619: add     rsp, 8
 * 00000001403FD61D: call    loc_1403FD610
 * 00000001403FD622: add     rsp, 8
 * 00000001403FD626: call    loc_1403FD619
 * 00000001403FD62B: add     rsp, 8
 * 00000001403FD62F: call    loc_1403FD622
 * 00000001403FD634: add     rsp, 8
 * 00000001403FD638: call    loc_1403FD62B
 * 00000001403FD63D: add     rsp, 8
 * 00000001403FD641: call    loc_1403FD634
 * 00000001403FD646: add     rsp, 8
 * 00000001403FD64A: call    loc_1403FD63D
 * 00000001403FD64F: add     rsp, 8
 * 00000001403FD653: call    loc_1403FD646
 * 00000001403FD658: add     rsp, 8
 * 00000001403FD65C: call    loc_1403FD64F
 * 00000001403FD661: add     rsp, 8
 * 00000001403FD665: call    loc_1403FD658
 * 00000001403FD66A: add     rsp, 8
 * 00000001403FD66E: call    loc_1403FD661
 * 00000001403FD673: add     rsp, 8
 * 00000001403FD677: call    loc_1403FD66A
 * 00000001403FD67C: add     rsp, 8
 * 00000001403FD680: call    loc_1403FD673
 * 00000001403FD685: add     rsp, 8
 * 00000001403FD689: call    loc_1403FD67C
 * 00000001403FD68E: add     rsp, 8
 * 00000001403FD692: call    loc_1403FD685
 * 00000001403FD697: add     rsp, 8
 * 00000001403FD69B: call    loc_1403FD68E
 * 00000001403FD6A0: add     rsp, 8
 * 00000001403FD6A4: call    loc_1403FD697
 * 00000001403FD6A9: add     rsp, 8
 * 00000001403FD6AD: call    loc_1403FD6A0
 * 00000001403FD6B2: add     rsp, 8
 * 00000001403FD6B6: call    loc_1403FD6A9
 * 00000001403FD6BB: add     rsp, 8
 * 00000001403FD6BF: call    loc_1403FD6B2
 * 00000001403FD6C4: add     rsp, 8
 * 00000001403FD6C8: call    loc_1403FD6BB
 * 00000001403FD6CD: add     rsp, 8
 * 00000001403FD6D1: call    loc_1403FD6C4
 * 00000001403FD6D6: add     rsp, 8
 * 00000001403FD6DA: call    loc_1403FD6CD
 * 00000001403FD6DF: add     rsp, 8
 * 00000001403FD6E3: call    loc_1403FD6D6
 * 00000001403FD6E8: add     rsp, 8
 * 00000001403FD6EC: call    loc_1403FD6DF
 * 00000001403FD6F1: add     rsp, 8
 * 00000001403FD6F5: lfence
 * 00000001403FD6F8: mov     byte ptr gs:853h, 0
 * 00000001403FD701: test    byte ptr [r10+3], 3
 * 00000001403FD706: mov     [rbp+0E8h+var_68], 0
 * 00000001403FD70F: jz      short loc_1403FD716
 * 00000001403FD711: call    KiSaveDebugRegisterState
 * 00000001403FD716: cld
 * 00000001403FD717: stmxcsr [rbp+0E8h+var_13C]
 * 00000001403FD71B: ldmxcsr dword ptr gs:180h
 * 00000001403FD724: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001403FD728: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001403FD72C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001403FD730: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001403FD734: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001403FD738: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001403FD73C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FD743: jz      short loc_1403FD751
 * 00000001403FD745: test    [rbp+0E8h+arg_0], 1
 * 00000001403FD74C: jz      short loc_1403FD751
 * 00000001403FD74E: stac
 * 00000001403FD751: test    [rbp+0E8h+arg_8], 200h
 * 00000001403FD75B: jz      short loc_1403FD75E
 * 00000001403FD75D: sti
 * 00000001403FD75E: call    KxStartUserThread
 * 00000001403FD763: nop     word ptr [rax+rax+00000000h]
 * 00000001403FD770: nop
 * 00000001403FD771: retn
 */
