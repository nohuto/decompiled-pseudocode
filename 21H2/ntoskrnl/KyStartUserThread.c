/*
 * XREFs of KyStartUserThread @ 0x140406F10
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE440 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x140406F10 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x1404071F0 (KxStartUserThread.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x140406F10
 * Reason: Hex-Rays returned no pseudocode for 0x140406F10
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140406F10: sub     rsp, 8
 * 0000000140406F14: push    rbp
 * 0000000140406F15: sub     rsp, 158h
 * 0000000140406F1C: lea     rbp, [rsp+80h]
 * 0000000140406F24: mov     [rbp+0E8h+var_13D], 1
 * 0000000140406F28: mov     [rbp+0E8h+var_138], rax
 * 0000000140406F2C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140406F30: mov     [rbp+0E8h+var_128], rdx
 * 0000000140406F34: mov     [rbp+0E8h+var_120], r8
 * 0000000140406F38: mov     [rbp+0E8h+var_118], r9
 * 0000000140406F3C: mov     [rbp+0E8h+var_110], r10
 * 0000000140406F40: mov     [rbp+0E8h+var_108], r11
 * 0000000140406F44: test    [rbp+0E8h+arg_0], 1
 * 0000000140406F4B: jnz     short loc_140406F7C
 * 0000000140406F4D: lfence
 * 0000000140406F50: test    word ptr gs:860h, 1
 * 0000000140406F5B: jnz     short loc_140406F65
 * 0000000140406F5D: lfence
 * 0000000140406F60: jmp     loc_140407185
 * 0000000140406F65: movzx   eax, word ptr gs:864h
 * 0000000140406F6E: mov     ecx, 48h ; 'H'
 * 0000000140406F73: xor     edx, edx
 * 0000000140406F75: wrmsr
 * 0000000140406F77: jmp     loc_140407185
 * 0000000140406F7C: test    cs:KiKvaShadow, 1
 * 0000000140406F83: jnz     short loc_140406F88
 * 0000000140406F85: swapgs
 * 0000000140406F88: lfence
 * 0000000140406F8B: mov     r10, gs:188h
 * 0000000140406F94: mov     rcx, gs:188h
 * 0000000140406F9D: mov     rcx, [rcx+220h]
 * 0000000140406FA4: mov     rcx, [rcx+9E0h]
 * 0000000140406FAB: mov     gs:858h, rcx
 * 0000000140406FB4: mov     cx, gs:850h
 * 0000000140406FBD: mov     gs:852h, cx
 * 0000000140406FC6: mov     cx, gs:860h
 * 0000000140406FCF: mov     gs:854h, cx
 * 0000000140406FD8: movzx   eax, word ptr gs:866h
 * 0000000140406FE1: cmp     gs:864h, ax
 * 0000000140406FEA: jz      short loc_140406FFE
 * 0000000140406FEC: mov     gs:864h, ax
 * 0000000140406FF5: mov     ecx, 48h ; 'H'
 * 0000000140406FFA: xor     edx, edx
 * 0000000140406FFC: wrmsr
 * 0000000140406FFE: movzx   edx, word ptr gs:860h
 * 0000000140407007: test    edx, 8
 * 000000014040700D: jz      short loc_140407026
 * 000000014040700F: mov     eax, 1
 * 0000000140407014: xor     edx, edx
 * 0000000140407016: mov     ecx, 49h ; 'I'
 * 000000014040701B: wrmsr
 * 000000014040701D: movzx   edx, word ptr gs:860h
 * 0000000140407026: test    edx, 2
 * 000000014040702C: jz      loc_140407157
 * 0000000140407032: call    loc_140407145
 * 0000000140407037: add     rsp, 8
 * 000000014040703B: call    loc_14040714E
 * 0000000140407040: add     rsp, 8
 * 0000000140407044: call    loc_140407037
 * 0000000140407049: add     rsp, 8
 * 000000014040704D: call    loc_140407040
 * 0000000140407052: add     rsp, 8
 * 0000000140407056: call    loc_140407049
 * 000000014040705B: add     rsp, 8
 * 000000014040705F: call    loc_140407052
 * 0000000140407064: add     rsp, 8
 * 0000000140407068: call    loc_14040705B
 * 000000014040706D: add     rsp, 8
 * 0000000140407071: call    loc_140407064
 * 0000000140407076: add     rsp, 8
 * 000000014040707A: call    loc_14040706D
 * 000000014040707F: add     rsp, 8
 * 0000000140407083: call    loc_140407076
 * 0000000140407088: add     rsp, 8
 * 000000014040708C: call    loc_14040707F
 * 0000000140407091: add     rsp, 8
 * 0000000140407095: call    loc_140407088
 * 000000014040709A: add     rsp, 8
 * 000000014040709E: call    loc_140407091
 * 00000001404070A3: add     rsp, 8
 * 00000001404070A7: call    loc_14040709A
 * 00000001404070AC: add     rsp, 8
 * 00000001404070B0: call    loc_1404070A3
 * 00000001404070B5: add     rsp, 8
 * 00000001404070B9: call    loc_1404070AC
 * 00000001404070BE: add     rsp, 8
 * 00000001404070C2: call    loc_1404070B5
 * 00000001404070C7: add     rsp, 8
 * 00000001404070CB: call    loc_1404070BE
 * 00000001404070D0: add     rsp, 8
 * 00000001404070D4: call    loc_1404070C7
 * 00000001404070D9: add     rsp, 8
 * 00000001404070DD: call    loc_1404070D0
 * 00000001404070E2: add     rsp, 8
 * 00000001404070E6: call    loc_1404070D9
 * 00000001404070EB: add     rsp, 8
 * 00000001404070EF: call    loc_1404070E2
 * 00000001404070F4: add     rsp, 8
 * 00000001404070F8: call    loc_1404070EB
 * 00000001404070FD: add     rsp, 8
 * 0000000140407101: call    loc_1404070F4
 * 0000000140407106: add     rsp, 8
 * 000000014040710A: call    loc_1404070FD
 * 000000014040710F: add     rsp, 8
 * 0000000140407113: call    loc_140407106
 * 0000000140407118: add     rsp, 8
 * 000000014040711C: call    loc_14040710F
 * 0000000140407121: add     rsp, 8
 * 0000000140407125: call    loc_140407118
 * 000000014040712A: add     rsp, 8
 * 000000014040712E: call    loc_140407121
 * 0000000140407133: add     rsp, 8
 * 0000000140407137: call    loc_14040712A
 * 000000014040713C: add     rsp, 8
 * 0000000140407140: call    loc_140407133
 * 0000000140407145: add     rsp, 8
 * 0000000140407149: call    loc_14040713C
 * 000000014040714E: add     rsp, 8
 * 0000000140407152: mov     eax, 0DADAh
 * 0000000140407157: test    edx, 200h
 * 000000014040715D: jz      short loc_140407164
 * 000000014040715F: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140407164: lfence
 * 0000000140407167: mov     byte ptr gs:856h, 0
 * 0000000140407170: test    byte ptr [r10+3], 3
 * 0000000140407175: mov     [rbp+0E8h+var_68], 0
 * 000000014040717E: jz      short loc_140407185
 * 0000000140407180: call    KiSaveDebugRegisterState
 * 0000000140407185: cld
 * 0000000140407186: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040718A: ldmxcsr dword ptr gs:180h
 * 0000000140407193: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140407197: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040719B: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040719F: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001404071A3: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001404071A7: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001404071AB: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404071B2: jz      short loc_1404071C0
 * 00000001404071B4: test    [rbp+0E8h+arg_0], 1
 * 00000001404071BB: jz      short loc_1404071C0
 * 00000001404071BD: stac
 * 00000001404071C0: test    [rbp+0E8h+arg_8], 200h
 * 00000001404071CA: jz      short loc_1404071CD
 * 00000001404071CC: sti
 * 00000001404071CD: call    KxStartUserThread
 * 00000001404071D2: nop     word ptr [rax+rax+00000000h]
 * 00000001404071E0: nop
 * 00000001404071E1: retn
 */
