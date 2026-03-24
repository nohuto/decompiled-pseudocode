/*
 * XREFs of InitializePerfOptions @ 0x1C000A8D4
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000C7A0 (NVMeControllerInitPart2.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for InitializePerfOptions @ 0x1C000A8D4
 * Reason: Hex-Rays returned no pseudocode for 0x1C000A8D4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000A8D4: mov     [rsp-8+arg_0], rbx
 * 00000001C000A8D9: mov     [rsp-8+arg_8], rdi
 * 00000001C000A8DE: push    rbp
 * 00000001C000A8DF: mov     rbp, rsp
 * 00000001C000A8E2: sub     rsp, 50h
 * 00000001C000A8E6: cmp     byte ptr [rcx+10h], 0
 * 00000001C000A8EA: xorps   xmm0, xmm0
 * 00000001C000A8ED: xorps   xmm1, xmm1
 * 00000001C000A8F0: mov     rbx, rcx
 * 00000001C000A8F3: movdqu  [rbp+var_30+8], xmm0
 * 00000001C000A8F8: movdqu  [rbp+var_18], xmm1
 * 00000001C000A8FD: jz      short loc_1C000A909
 * 00000001C000A8FF: mov     eax, 1
 * 00000001C000A904: jmp     loc_1C000A9FF
 * 00000001C000A909: mov     edi, 1
 * 00000001C000A90E: mov     dword ptr [rbp+var_30], 5
 * 00000001C000A915: lea     r9, [rbp+var_30]
 * 00000001C000A919: mov     dword ptr [rbp+var_30+4], 28h ; '('
 * 00000001C000A920: mov     r8d, edi
 * 00000001C000A923: mov     rdx, rbx
 * 00000001C000A926: lea     ecx, [rdi+0Dh]
 * 00000001C000A929: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A930: nop     dword ptr [rax+rax+00h]
 * 00000001C000A935: test    eax, eax
 * 00000001C000A937: jnz     loc_1C000A9FD
 * 00000001C000A93D: mov     eax, dword ptr [rbp+var_30+8]
 * 00000001C000A940: test    dil, al
 * 00000001C000A943: jz      loc_1C000A9FD
 * 00000001C000A949: test    al, 2
 * 00000001C000A94B: jz      loc_1C000A9FD
 * 00000001C000A951: test    al, 4
 * 00000001C000A953: jz      loc_1C000A9FD
 * 00000001C000A959: test    al, 8
 * 00000001C000A95B: jz      loc_1C000A9FD
 * 00000001C000A961: test    al, 40h
 * 00000001C000A963: jnz     short loc_1C000A969
 * 00000001C000A965: and     dword ptr [rbx+38h], 0FFFFFFF7h
 * 00000001C000A969: mov     ecx, [rbx+38h]
 * 00000001C000A96C: xor     eax, eax
 * 00000001C000A96E: test    cl, 8
 * 00000001C000A971: mov     qword ptr [rbp+var_18+8], rax
 * 00000001C000A975: mov     eax, 0Fh
 * 00000001C000A97A: xorps   xmm0, xmm0
 * 00000001C000A97D: movups  [rbp+var_30], xmm0
 * 00000001C000A981: mov     dword ptr [rbp+var_30], 5
 * 00000001C000A988: movups  xmmword ptr [rbp-20h], xmm0
 * 00000001C000A98C: lea     ecx, [rax+40h]
 * 00000001C000A98F: mov     dword ptr [rbp+var_30+4], 28h ; '('
 * 00000001C000A996: cmovnz  eax, ecx
 * 00000001C000A999: mov     dword ptr [rbp+var_30+8], eax
 * 00000001C000A99C: cmp     [rbx+0F8h], di
 * 00000001C000A9A3: jbe     short loc_1C000A9B4
 * 00000001C000A9A5: movzx   eax, word ptr [rbx+11Ah]
 * 00000001C000A9AC: mov     [rbp+var_1C], eax
 * 00000001C000A9AF: mov     [rbp+var_20], edi
 * 00000001C000A9B2: jmp     short loc_1C000A9BC
 * 00000001C000A9B4: and     [rbp+var_20], 0
 * 00000001C000A9B8: and     [rbp+var_1C], 0
 * 00000001C000A9BC: movzx   eax, word ptr [rbx+0D2h]
 * 00000001C000A9C3: lea     r9, [rbp+var_30]
 * 00000001C000A9C7: xor     r8d, r8d
 * 00000001C000A9CA: mov     dword ptr [rbp+var_30+0Ch], eax
 * 00000001C000A9CD: mov     rax, [rbx+108h]
 * 00000001C000A9D4: mov     rdx, rbx
 * 00000001C000A9D7: mov     qword ptr [rbp+var_18+8], rax
 * 00000001C000A9DB: lea     ecx, [r8+0Eh]
 * 00000001C000A9DF: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A9E6: nop     dword ptr [rax+rax+00h]
 * 00000001C000A9EB: test    eax, eax
 * 00000001C000A9ED: jnz     short loc_1C000A9FD
 * 00000001C000A9EF: mov     eax, dword ptr [rbp+var_18]
 * 00000001C000A9F2: mov     [rbx+0DCh], eax
 * 00000001C000A9F8: mov     al, dil
 * 00000001C000A9FB: jmp     short loc_1C000A9FF
 * 00000001C000A9FD: xor     al, al
 * 00000001C000A9FF: mov     rbx, [rsp+50h+arg_0]
 * 00000001C000AA04: mov     rdi, [rsp+50h+arg_8]
 * 00000001C000AA09: add     rsp, 50h
 * 00000001C000AA0D: pop     rbp
 * 00000001C000AA0E: retn
 */
