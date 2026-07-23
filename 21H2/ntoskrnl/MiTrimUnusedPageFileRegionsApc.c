/*
 * XREFs of MiTrimUnusedPageFileRegionsApc @ 0x140251D30
 * Callers:
 *     <none>
 * Callees:
 *     MiFindFreePageFileSpace @ 0x1402586B4 (MiFindFreePageFileSpace.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 */

/*
 * Hex-Rays decompilation failed for MiTrimUnusedPageFileRegionsApc @ 0x140251D30
 * Reason: Hex-Rays returned no pseudocode for 0x140251D30
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140251D30: mov     [rsp+arg_8], rbx
 * 0000000140251D35: mov     [rsp+arg_10], rbp
 * 0000000140251D3A: mov     [rsp+arg_18], rsi
 * 0000000140251D3F: push    rdi
 * 0000000140251D40: sub     rsp, 20h
 * 0000000140251D44: mov     rdi, [rcx+18h]
 * 0000000140251D48: mov     rbx, rcx
 * 0000000140251D4B: mov     eax, [rcx+20h]
 * 0000000140251D4E: mov     ecx, [rcx+28h]
 * 0000000140251D51: shl     rcx, 20h
 * 0000000140251D55: mov     rsi, [rdi+rax*8+1B20h]
 * 0000000140251D5D: call    MiSwizzleInvalidPte
 * 0000000140251D62: movzx   ecx, word ptr [rsi+0CCh]
 * 0000000140251D69: lea     rdx, [rsp+28h+arg_0]
 * 0000000140251D6E: mov     r8d, [rbx+24h]
 * 0000000140251D72: and     ecx, 0Fh
 * 0000000140251D75: shl     rcx, 0Ch
 * 0000000140251D79: and     rax, 0FFFFFFFFFFFF0FFFh
 * 0000000140251D7F: or      rax, rcx
 * 0000000140251D82: mov     r9d, 0ABh
 * 0000000140251D88: mov     rcx, rdi
 * 0000000140251D8B: mov     [rsp+28h+arg_0], rax
 * 0000000140251D90: call    MiFindFreePageFileSpace
 * 0000000140251D95: mov     ebp, eax
 * 0000000140251D97: cmp     eax, [rbx+24h]
 * 0000000140251D9A: jb      short loc_140251E07
 * 0000000140251D9C: mov     r8, cs:qword_140C4DF80
 * 0000000140251DA3: mov     rcx, [rsp+28h+arg_0]
 * 0000000140251DA8: mov     rdx, rcx
 * 0000000140251DAB: test    r8, r8
 * 0000000140251DAE: jz      short loc_140251DBE
 * 0000000140251DB0: test    dl, 10h
 * 0000000140251DB3: jnz     short loc_140251DBE
 * 0000000140251DB5: mov     rcx, r8
 * 0000000140251DB8: not     rcx
 * 0000000140251DBB: and     rcx, rdx
 * 0000000140251DBE: shr     rcx, 20h
 * 0000000140251DC2: mov     [rbx+28h], ecx
 * 0000000140251DC5: add     ecx, ebp
 * 0000000140251DC7: shl     rcx, 20h
 * 0000000140251DCB: call    MiSwizzleInvalidPte
 * 0000000140251DD0: movzx   edx, word ptr [rsi+0CCh]
 * 0000000140251DD7: and     rax, 0FFFFFFFFFFFF0FFFh
 * 0000000140251DDD: mov     r8, [rsi]
 * 0000000140251DE0: and     edx, 0Fh
 * 0000000140251DE3: shl     rdx, 0Ch
 * 0000000140251DE7: mov     r9d, 6Bh ; 'k'
 * 0000000140251DED: or      rax, rdx
 * 0000000140251DF0: mov     rcx, rdi
 * 0000000140251DF3: lea     rdx, [rsp+28h+arg_0]
 * 0000000140251DF8: mov     [rsp+28h+arg_0], rax
 * 0000000140251DFD: call    MiFindFreePageFileSpace
 * 0000000140251E02: add     eax, ebp
 * 0000000140251E04: mov     [rbx+2Ch], eax
 * 0000000140251E07: xor     r8d, r8d; Wait
 * 0000000140251E0A: xor     edx, edx; Increment
 * 0000000140251E0C: mov     rcx, rbx; Event
 * 0000000140251E0F: call    KeSetEvent
 * 0000000140251E14: mov     rbx, [rsp+28h+arg_8]
 * 0000000140251E19: mov     rbp, [rsp+28h+arg_10]
 * 0000000140251E1E: mov     rsi, [rsp+28h+arg_18]
 * 0000000140251E23: add     rsp, 20h
 * 0000000140251E27: pop     rdi
 * 0000000140251E28: retn
 */
