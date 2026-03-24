/*
 * XREFs of KiSystemService @ 0x140406BC0
 * Callers:
 *     KiSystemServiceShadow @ 0x140A11EC0 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x140406BC0 (KiSystemService.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x140406BC0
 * Reason: Hex-Rays returned no pseudocode for 0x140406BC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140406BC0: cmp     [rsp+arg_0], 23h ; '#'
 * 0000000140406BC6: jz      KiSystemService32User
 * 0000000140406BCC: test    cs:KiKvaShadow, 1
 * 0000000140406BD3: jnz     short loc_140406BD8
 * 0000000140406BD5: swapgs
 * 0000000140406BD8: lfence
 * 0000000140406BDB: mov     rcx, r10
 * 0000000140406BDE: sub     rsp, 8
 * 0000000140406BE2: push    rbp
 * 0000000140406BE3: sub     rsp, 158h
 * 0000000140406BEA: lea     rbp, [rsp+168h+var_E8]
 * 0000000140406BF2: mov     [rbp+0C0h], rbx
 * 0000000140406BF9: mov     [rbp+0C8h], rdi
 * 0000000140406C00: mov     [rbp+0D0h], rsi
 * 0000000140406C07: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140406C0E: jz      short loc_140406C1C
 * 0000000140406C10: test    byte ptr [rbp+0F0h], 1
 * 0000000140406C17: jz      short loc_140406C1C
 * 0000000140406C19: stac
 * 0000000140406C1C: mov     [rbp-50h], rax
 * 0000000140406C20: mov     [rbp-48h], rcx
 * 0000000140406C24: mov     [rbp-40h], rdx
 * 0000000140406C28: mov     rcx, gs:188h
 * 0000000140406C31: mov     rcx, [rcx+220h]
 * 0000000140406C38: mov     rcx, [rcx+9E0h]
 * 0000000140406C3F: mov     gs:270h, rcx
 * 0000000140406C48: mov     cl, gs:850h
 * 0000000140406C50: mov     gs:851h, cl
 * 0000000140406C58: mov     cl, gs:278h
 * 0000000140406C60: mov     gs:852h, cl
 * 0000000140406C68: movzx   eax, byte ptr gs:27Bh
 * 0000000140406C71: cmp     gs:27Ah, al
 * 0000000140406C79: jz      short loc_140406C8C
 * 0000000140406C7B: mov     gs:27Ah, al
 * 0000000140406C83: mov     ecx, 48h ; 'H'
 * 0000000140406C88: xor     edx, edx
 * 0000000140406C8A: wrmsr
 * 0000000140406C8C: movzx   edx, byte ptr gs:278h
 * 0000000140406C95: test    edx, 8
 * 0000000140406C9B: jz      short loc_140406CB0
 * 0000000140406C9D: mov     eax, 1
 * 0000000140406CA2: xor     edx, edx
 * 0000000140406CA4: mov     ecx, 49h ; 'I'
 * 0000000140406CA9: wrmsr
 * 0000000140406CAB: jmp     loc_140406DEE
 * 0000000140406CB0: test    edx, 2
 * 0000000140406CB6: jz      loc_140406DEB
 * 0000000140406CBC: test    byte ptr gs:279h, 4
 * 0000000140406CC5: jnz     loc_140406DEB
 * 0000000140406CCB: call    loc_140406DDE
 * 0000000140406CD0: add     rsp, 8
 * 0000000140406CD4: call    loc_140406DE7
 * 0000000140406CD9: add     rsp, 8
 * 0000000140406CDD: call    loc_140406CD0
 * 0000000140406CE2: add     rsp, 8
 * 0000000140406CE6: call    loc_140406CD9
 * 0000000140406CEB: add     rsp, 8
 * 0000000140406CEF: call    loc_140406CE2
 * 0000000140406CF4: add     rsp, 8
 * 0000000140406CF8: call    loc_140406CEB
 * 0000000140406CFD: add     rsp, 8
 * 0000000140406D01: call    loc_140406CF4
 * 0000000140406D06: add     rsp, 8
 * 0000000140406D0A: call    loc_140406CFD
 * 0000000140406D0F: add     rsp, 8
 * 0000000140406D13: call    loc_140406D06
 * 0000000140406D18: add     rsp, 8
 * 0000000140406D1C: call    loc_140406D0F
 * 0000000140406D21: add     rsp, 8
 * 0000000140406D25: call    loc_140406D18
 * 0000000140406D2A: add     rsp, 8
 * 0000000140406D2E: call    loc_140406D21
 * 0000000140406D33: add     rsp, 8
 * 0000000140406D37: call    loc_140406D2A
 * 0000000140406D3C: add     rsp, 8
 * 0000000140406D40: call    loc_140406D33
 * 0000000140406D45: add     rsp, 8
 * 0000000140406D49: call    loc_140406D3C
 * 0000000140406D4E: add     rsp, 8
 * 0000000140406D52: call    loc_140406D45
 * 0000000140406D57: add     rsp, 8
 * 0000000140406D5B: call    loc_140406D4E
 * 0000000140406D60: add     rsp, 8
 * 0000000140406D64: call    loc_140406D57
 * 0000000140406D69: add     rsp, 8
 * 0000000140406D6D: call    loc_140406D60
 * 0000000140406D72: add     rsp, 8
 * 0000000140406D76: call    loc_140406D69
 * 0000000140406D7B: add     rsp, 8
 * 0000000140406D7F: call    loc_140406D72
 * 0000000140406D84: add     rsp, 8
 * 0000000140406D88: call    loc_140406D7B
 * 0000000140406D8D: add     rsp, 8
 * 0000000140406D91: call    loc_140406D84
 * 0000000140406D96: add     rsp, 8
 * 0000000140406D9A: call    loc_140406D8D
 * 0000000140406D9F: add     rsp, 8
 * 0000000140406DA3: call    loc_140406D96
 * 0000000140406DA8: add     rsp, 8
 * 0000000140406DAC: call    loc_140406D9F
 * 0000000140406DB1: add     rsp, 8
 * 0000000140406DB5: call    loc_140406DA8
 * 0000000140406DBA: add     rsp, 8
 * 0000000140406DBE: call    loc_140406DB1
 * 0000000140406DC3: add     rsp, 8
 * 0000000140406DC7: call    loc_140406DBA
 * 0000000140406DCC: add     rsp, 8
 * 0000000140406DD0: call    loc_140406DC3
 * 0000000140406DD5: add     rsp, 8
 * 0000000140406DD9: call    loc_140406DCC
 * 0000000140406DDE: add     rsp, 8
 * 0000000140406DE2: call    loc_140406DD5
 * 0000000140406DE7: add     rsp, 8
 * 0000000140406DEB: lfence
 * 0000000140406DEE: mov     byte ptr gs:853h, 0
 * 0000000140406DF7: jmp     KiSystemServiceUser
 * 0000000140406DFC: retn
 */
