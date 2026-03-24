/*
 * XREFs of ?StartVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C00DDE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?StartVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C00DDE10
 * Reason: Hex-Rays returned no pseudocode for 0x1C00DDE10
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00DDE10: sub     rsp, 28h
 * 00000001C00DDE14: xor     r10d, r10d
 * 00000001C00DDE17: mov     r8, rdx
 * 00000001C00DDE1A: mov     r11, rcx
 * 00000001C00DDE1D: cmp     [rcx+8], r10b
 * 00000001C00DDE21: jnz     short loc_1C00DDE38
 * 00000001C00DDE23: mov     rax, rdx
 * 00000001C00DDE26: xor     edx, edx
 * 00000001C00DDE28: shr     rax, 20h
 * 00000001C00DDE2C: imul    eax, 989680h
 * 00000001C00DDE32: div     r8d
 * 00000001C00DDE35: mov     r10d, eax
 * 00000001C00DDE38: mov     ecx, r8d
 * 00000001C00DDE3B: mov     rax, r8
 * 00000001C00DDE3E: shr     rax, 20h
 * 00000001C00DDE42: xor     r9d, r9d
 * 00000001C00DDE45: imul    rax, 0FFFFFFFFFF676980h
 * 00000001C00DDE4C: mov     r8, r10
 * 00000001C00DDE4F: cqo
 * 00000001C00DDE51: idiv    rcx
 * 00000001C00DDE54: mov     rcx, [r11+10h]
 * 00000001C00DDE58: mov     rdx, rax
 * 00000001C00DDE5B: call    cs:__imp_ExSetTimer
 * 00000001C00DDE62: nop     dword ptr [rax+rax+00h]
 * 00000001C00DDE67: xor     eax, eax
 * 00000001C00DDE69: add     rsp, 28h
 * 00000001C00DDE6D: retn
 */
