/*
 * XREFs of InitializePerfOptions @ 0x1C000A924
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000C7F0 (NVMeControllerInitPart2.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for InitializePerfOptions @ 0x1C000A924
 * Reason: Hex-Rays returned no pseudocode for 0x1C000A924
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000A924: mov     [rsp-8+arg_0], rbx
 * 00000001C000A929: mov     [rsp-8+arg_8], rdi
 * 00000001C000A92E: push    rbp
 * 00000001C000A92F: mov     rbp, rsp
 * 00000001C000A932: sub     rsp, 50h
 * 00000001C000A936: cmp     byte ptr [rcx+10h], 0
 * 00000001C000A93A: xorps   xmm0, xmm0
 * 00000001C000A93D: xorps   xmm1, xmm1
 * 00000001C000A940: mov     rbx, rcx
 * 00000001C000A943: movdqu  [rbp+var_30+8], xmm0
 * 00000001C000A948: movdqu  [rbp+var_18], xmm1
 * 00000001C000A94D: jz      short loc_1C000A959
 * 00000001C000A94F: mov     eax, 1
 * 00000001C000A954: jmp     loc_1C000AA4F
 * 00000001C000A959: mov     edi, 1
 * 00000001C000A95E: mov     dword ptr [rbp+var_30], 5
 * 00000001C000A965: lea     r9, [rbp+var_30]
 * 00000001C000A969: mov     dword ptr [rbp+var_30+4], 28h ; '('
 * 00000001C000A970: mov     r8d, edi
 * 00000001C000A973: mov     rdx, rbx
 * 00000001C000A976: lea     ecx, [rdi+0Dh]
 * 00000001C000A979: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A980: nop     dword ptr [rax+rax+00h]
 * 00000001C000A985: test    eax, eax
 * 00000001C000A987: jnz     loc_1C000AA4D
 * 00000001C000A98D: mov     eax, dword ptr [rbp+var_30+8]
 * 00000001C000A990: test    dil, al
 * 00000001C000A993: jz      loc_1C000AA4D
 * 00000001C000A999: test    al, 2
 * 00000001C000A99B: jz      loc_1C000AA4D
 * 00000001C000A9A1: test    al, 4
 * 00000001C000A9A3: jz      loc_1C000AA4D
 * 00000001C000A9A9: test    al, 8
 * 00000001C000A9AB: jz      loc_1C000AA4D
 * 00000001C000A9B1: test    al, 40h
 * 00000001C000A9B3: jnz     short loc_1C000A9B9
 * 00000001C000A9B5: and     dword ptr [rbx+38h], 0FFFFFFF7h
 * 00000001C000A9B9: mov     ecx, [rbx+38h]
 * 00000001C000A9BC: xor     eax, eax
 * 00000001C000A9BE: test    cl, 8
 * 00000001C000A9C1: mov     qword ptr [rbp+var_18+8], rax
 * 00000001C000A9C5: mov     eax, 0Fh
 * 00000001C000A9CA: xorps   xmm0, xmm0
 * 00000001C000A9CD: movups  [rbp+var_30], xmm0
 * 00000001C000A9D1: mov     dword ptr [rbp+var_30], 5
 * 00000001C000A9D8: movups  xmmword ptr [rbp-20h], xmm0
 * 00000001C000A9DC: lea     ecx, [rax+40h]
 * 00000001C000A9DF: mov     dword ptr [rbp+var_30+4], 28h ; '('
 * 00000001C000A9E6: cmovnz  eax, ecx
 * 00000001C000A9E9: mov     dword ptr [rbp+var_30+8], eax
 * 00000001C000A9EC: cmp     [rbx+0F8h], di
 * 00000001C000A9F3: jbe     short loc_1C000AA04
 * 00000001C000A9F5: movzx   eax, word ptr [rbx+11Ah]
 * 00000001C000A9FC: mov     [rbp+var_1C], eax
 * 00000001C000A9FF: mov     [rbp+var_20], edi
 * 00000001C000AA02: jmp     short loc_1C000AA0C
 * 00000001C000AA04: and     [rbp+var_20], 0
 * 00000001C000AA08: and     [rbp+var_1C], 0
 * 00000001C000AA0C: movzx   eax, word ptr [rbx+0D2h]
 * 00000001C000AA13: lea     r9, [rbp+var_30]
 * 00000001C000AA17: xor     r8d, r8d
 * 00000001C000AA1A: mov     dword ptr [rbp+var_30+0Ch], eax
 * 00000001C000AA1D: mov     rax, [rbx+108h]
 * 00000001C000AA24: mov     rdx, rbx
 * 00000001C000AA27: mov     qword ptr [rbp+var_18+8], rax
 * 00000001C000AA2B: lea     ecx, [r8+0Eh]
 * 00000001C000AA2F: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000AA36: nop     dword ptr [rax+rax+00h]
 * 00000001C000AA3B: test    eax, eax
 * 00000001C000AA3D: jnz     short loc_1C000AA4D
 * 00000001C000AA3F: mov     eax, dword ptr [rbp+var_18]
 * 00000001C000AA42: mov     [rbx+0DCh], eax
 * 00000001C000AA48: mov     al, dil
 * 00000001C000AA4B: jmp     short loc_1C000AA4F
 * 00000001C000AA4D: xor     al, al
 * 00000001C000AA4F: mov     rbx, [rsp+50h+arg_0]
 * 00000001C000AA54: mov     rdi, [rsp+50h+arg_8]
 * 00000001C000AA59: add     rsp, 50h
 * 00000001C000AA5D: pop     rbp
 * 00000001C000AA5E: retn
 */
