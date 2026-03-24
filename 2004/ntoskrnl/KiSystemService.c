/*
 * XREFs of KiSystemService @ 0x140407EC0
 * Callers:
 *     KiSystemServiceShadow @ 0x140A11EC0 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x140407EC0 (KiSystemService.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x140407EC0
 * Reason: Hex-Rays returned no pseudocode for 0x140407EC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140407EC0: cmp     [rsp+arg_0], 23h ; '#'
 * 0000000140407EC6: jz      KiSystemService32User
 * 0000000140407ECC: test    cs:KiKvaShadow, 1
 * 0000000140407ED3: jnz     short loc_140407ED8
 * 0000000140407ED5: swapgs
 * 0000000140407ED8: lfence
 * 0000000140407EDB: mov     rcx, r10
 * 0000000140407EDE: sub     rsp, 8
 * 0000000140407EE2: push    rbp
 * 0000000140407EE3: sub     rsp, 158h
 * 0000000140407EEA: lea     rbp, [rsp+168h+var_E8]
 * 0000000140407EF2: mov     [rbp+0C0h], rbx
 * 0000000140407EF9: mov     [rbp+0C8h], rdi
 * 0000000140407F00: mov     [rbp+0D0h], rsi
 * 0000000140407F07: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140407F0E: jz      short loc_140407F1C
 * 0000000140407F10: test    byte ptr [rbp+0F0h], 1
 * 0000000140407F17: jz      short loc_140407F1C
 * 0000000140407F19: stac
 * 0000000140407F1C: mov     [rbp-50h], rax
 * 0000000140407F20: mov     [rbp-48h], rcx
 * 0000000140407F24: mov     [rbp-40h], rdx
 * 0000000140407F28: mov     rcx, gs:188h
 * 0000000140407F31: mov     rcx, [rcx+220h]
 * 0000000140407F38: mov     rcx, [rcx+9E0h]
 * 0000000140407F3F: mov     gs:270h, rcx
 * 0000000140407F48: mov     cl, gs:850h
 * 0000000140407F50: mov     gs:851h, cl
 * 0000000140407F58: mov     cl, gs:278h
 * 0000000140407F60: mov     gs:852h, cl
 * 0000000140407F68: movzx   eax, byte ptr gs:27Bh
 * 0000000140407F71: cmp     gs:27Ah, al
 * 0000000140407F79: jz      short loc_140407F8C
 * 0000000140407F7B: mov     gs:27Ah, al
 * 0000000140407F83: mov     ecx, 48h ; 'H'
 * 0000000140407F88: xor     edx, edx
 * 0000000140407F8A: wrmsr
 * 0000000140407F8C: movzx   edx, byte ptr gs:278h
 * 0000000140407F95: test    edx, 8
 * 0000000140407F9B: jz      short loc_140407FB0
 * 0000000140407F9D: mov     eax, 1
 * 0000000140407FA2: xor     edx, edx
 * 0000000140407FA4: mov     ecx, 49h ; 'I'
 * 0000000140407FA9: wrmsr
 * 0000000140407FAB: jmp     loc_1404080EE
 * 0000000140407FB0: test    edx, 2
 * 0000000140407FB6: jz      loc_1404080EB
 * 0000000140407FBC: test    byte ptr gs:279h, 4
 * 0000000140407FC5: jnz     loc_1404080EB
 * 0000000140407FCB: call    loc_1404080DE
 * 0000000140407FD0: add     rsp, 8
 * 0000000140407FD4: call    loc_1404080E7
 * 0000000140407FD9: add     rsp, 8
 * 0000000140407FDD: call    loc_140407FD0
 * 0000000140407FE2: add     rsp, 8
 * 0000000140407FE6: call    loc_140407FD9
 * 0000000140407FEB: add     rsp, 8
 * 0000000140407FEF: call    loc_140407FE2
 * 0000000140407FF4: add     rsp, 8
 * 0000000140407FF8: call    loc_140407FEB
 * 0000000140407FFD: add     rsp, 8
 * 0000000140408001: call    loc_140407FF4
 * 0000000140408006: add     rsp, 8
 * 000000014040800A: call    loc_140407FFD
 * 000000014040800F: add     rsp, 8
 * 0000000140408013: call    loc_140408006
 * 0000000140408018: add     rsp, 8
 * 000000014040801C: call    loc_14040800F
 * 0000000140408021: add     rsp, 8
 * 0000000140408025: call    loc_140408018
 * 000000014040802A: add     rsp, 8
 * 000000014040802E: call    loc_140408021
 * 0000000140408033: add     rsp, 8
 * 0000000140408037: call    loc_14040802A
 * 000000014040803C: add     rsp, 8
 * 0000000140408040: call    loc_140408033
 * 0000000140408045: add     rsp, 8
 * 0000000140408049: call    loc_14040803C
 * 000000014040804E: add     rsp, 8
 * 0000000140408052: call    loc_140408045
 * 0000000140408057: add     rsp, 8
 * 000000014040805B: call    loc_14040804E
 * 0000000140408060: add     rsp, 8
 * 0000000140408064: call    loc_140408057
 * 0000000140408069: add     rsp, 8
 * 000000014040806D: call    loc_140408060
 * 0000000140408072: add     rsp, 8
 * 0000000140408076: call    loc_140408069
 * 000000014040807B: add     rsp, 8
 * 000000014040807F: call    loc_140408072
 * 0000000140408084: add     rsp, 8
 * 0000000140408088: call    loc_14040807B
 * 000000014040808D: add     rsp, 8
 * 0000000140408091: call    loc_140408084
 * 0000000140408096: add     rsp, 8
 * 000000014040809A: call    loc_14040808D
 * 000000014040809F: add     rsp, 8
 * 00000001404080A3: call    loc_140408096
 * 00000001404080A8: add     rsp, 8
 * 00000001404080AC: call    loc_14040809F
 * 00000001404080B1: add     rsp, 8
 * 00000001404080B5: call    loc_1404080A8
 * 00000001404080BA: add     rsp, 8
 * 00000001404080BE: call    loc_1404080B1
 * 00000001404080C3: add     rsp, 8
 * 00000001404080C7: call    loc_1404080BA
 * 00000001404080CC: add     rsp, 8
 * 00000001404080D0: call    loc_1404080C3
 * 00000001404080D5: add     rsp, 8
 * 00000001404080D9: call    loc_1404080CC
 * 00000001404080DE: add     rsp, 8
 * 00000001404080E2: call    loc_1404080D5
 * 00000001404080E7: add     rsp, 8
 * 00000001404080EB: lfence
 * 00000001404080EE: mov     byte ptr gs:853h, 0
 * 00000001404080F7: jmp     KiSystemServiceUser
 * 00000001404080FC: retn
 */
