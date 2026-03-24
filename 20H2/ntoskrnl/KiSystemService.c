/*
 * XREFs of KiSystemService @ 0x14040E900
 * Callers:
 *     KiSystemServiceShadow @ 0x140A17EC0 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x14040E900 (KiSystemService.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x14040E900
 * Reason: Hex-Rays returned no pseudocode for 0x14040E900
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040E900: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014040E906: jz      KiSystemService32User
 * 000000014040E90C: test    cs:KiKvaShadow, 1
 * 000000014040E913: jnz     short loc_14040E918
 * 000000014040E915: swapgs
 * 000000014040E918: lfence
 * 000000014040E91B: mov     rcx, r10
 * 000000014040E91E: sub     rsp, 8
 * 000000014040E922: push    rbp
 * 000000014040E923: sub     rsp, 158h
 * 000000014040E92A: lea     rbp, [rsp+168h+var_E8]
 * 000000014040E932: mov     [rbp+0C0h], rbx
 * 000000014040E939: mov     [rbp+0C8h], rdi
 * 000000014040E940: mov     [rbp+0D0h], rsi
 * 000000014040E947: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040E94E: jz      short loc_14040E95C
 * 000000014040E950: test    byte ptr [rbp+0F0h], 1
 * 000000014040E957: jz      short loc_14040E95C
 * 000000014040E959: stac
 * 000000014040E95C: mov     [rbp-50h], rax
 * 000000014040E960: mov     [rbp-48h], rcx
 * 000000014040E964: mov     [rbp-40h], rdx
 * 000000014040E968: mov     rcx, gs:188h
 * 000000014040E971: mov     rcx, [rcx+220h]
 * 000000014040E978: mov     rcx, [rcx+9E0h]
 * 000000014040E97F: mov     gs:270h, rcx
 * 000000014040E988: mov     cl, gs:850h
 * 000000014040E990: mov     gs:851h, cl
 * 000000014040E998: mov     cl, gs:278h
 * 000000014040E9A0: mov     gs:852h, cl
 * 000000014040E9A8: movzx   eax, byte ptr gs:27Bh
 * 000000014040E9B1: cmp     gs:27Ah, al
 * 000000014040E9B9: jz      short loc_14040E9CC
 * 000000014040E9BB: mov     gs:27Ah, al
 * 000000014040E9C3: mov     ecx, 48h ; 'H'
 * 000000014040E9C8: xor     edx, edx
 * 000000014040E9CA: wrmsr
 * 000000014040E9CC: movzx   edx, byte ptr gs:278h
 * 000000014040E9D5: test    edx, 8
 * 000000014040E9DB: jz      short loc_14040E9F4
 * 000000014040E9DD: mov     eax, 1
 * 000000014040E9E2: xor     edx, edx
 * 000000014040E9E4: mov     ecx, 49h ; 'I'
 * 000000014040E9E9: wrmsr
 * 000000014040E9EB: movzx   edx, byte ptr gs:278h
 * 000000014040E9F4: test    edx, 2
 * 000000014040E9FA: jz      loc_14040EB25
 * 000000014040EA00: call    loc_14040EB13
 * 000000014040EA05: add     rsp, 8
 * 000000014040EA09: call    loc_14040EB1C
 * 000000014040EA0E: add     rsp, 8
 * 000000014040EA12: call    loc_14040EA05
 * 000000014040EA17: add     rsp, 8
 * 000000014040EA1B: call    loc_14040EA0E
 * 000000014040EA20: add     rsp, 8
 * 000000014040EA24: call    loc_14040EA17
 * 000000014040EA29: add     rsp, 8
 * 000000014040EA2D: call    loc_14040EA20
 * 000000014040EA32: add     rsp, 8
 * 000000014040EA36: call    loc_14040EA29
 * 000000014040EA3B: add     rsp, 8
 * 000000014040EA3F: call    loc_14040EA32
 * 000000014040EA44: add     rsp, 8
 * 000000014040EA48: call    loc_14040EA3B
 * 000000014040EA4D: add     rsp, 8
 * 000000014040EA51: call    loc_14040EA44
 * 000000014040EA56: add     rsp, 8
 * 000000014040EA5A: call    loc_14040EA4D
 * 000000014040EA5F: add     rsp, 8
 * 000000014040EA63: call    loc_14040EA56
 * 000000014040EA68: add     rsp, 8
 * 000000014040EA6C: call    loc_14040EA5F
 * 000000014040EA71: add     rsp, 8
 * 000000014040EA75: call    loc_14040EA68
 * 000000014040EA7A: add     rsp, 8
 * 000000014040EA7E: call    loc_14040EA71
 * 000000014040EA83: add     rsp, 8
 * 000000014040EA87: call    loc_14040EA7A
 * 000000014040EA8C: add     rsp, 8
 * 000000014040EA90: call    loc_14040EA83
 * 000000014040EA95: add     rsp, 8
 * 000000014040EA99: call    loc_14040EA8C
 * 000000014040EA9E: add     rsp, 8
 * 000000014040EAA2: call    loc_14040EA95
 * 000000014040EAA7: add     rsp, 8
 * 000000014040EAAB: call    loc_14040EA9E
 * 000000014040EAB0: add     rsp, 8
 * 000000014040EAB4: call    loc_14040EAA7
 * 000000014040EAB9: add     rsp, 8
 * 000000014040EABD: call    loc_14040EAB0
 * 000000014040EAC2: add     rsp, 8
 * 000000014040EAC6: call    loc_14040EAB9
 * 000000014040EACB: add     rsp, 8
 * 000000014040EACF: call    loc_14040EAC2
 * 000000014040EAD4: add     rsp, 8
 * 000000014040EAD8: call    loc_14040EACB
 * 000000014040EADD: add     rsp, 8
 * 000000014040EAE1: call    loc_14040EAD4
 * 000000014040EAE6: add     rsp, 8
 * 000000014040EAEA: call    loc_14040EADD
 * 000000014040EAEF: add     rsp, 8
 * 000000014040EAF3: call    loc_14040EAE6
 * 000000014040EAF8: add     rsp, 8
 * 000000014040EAFC: call    loc_14040EAEF
 * 000000014040EB01: add     rsp, 8
 * 000000014040EB05: call    loc_14040EAF8
 * 000000014040EB0A: add     rsp, 8
 * 000000014040EB0E: call    loc_14040EB01
 * 000000014040EB13: add     rsp, 8
 * 000000014040EB17: call    loc_14040EB0A
 * 000000014040EB1C: add     rsp, 8
 * 000000014040EB20: mov     eax, 0DADAh
 * 000000014040EB25: lfence
 * 000000014040EB28: mov     byte ptr gs:853h, 0
 * 000000014040EB31: jmp     KiSystemServiceUser
 * 000000014040EB36: retn
 */
