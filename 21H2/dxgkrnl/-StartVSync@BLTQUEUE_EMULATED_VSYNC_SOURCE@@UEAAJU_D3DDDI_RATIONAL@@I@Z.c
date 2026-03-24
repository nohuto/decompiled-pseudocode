/*
 * XREFs of ?StartVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C00E0050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?StartVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C00E0050
 * Reason: Hex-Rays returned no pseudocode for 0x1C00E0050
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00E0050: sub     rsp, 28h
 * 00000001C00E0054: xor     r10d, r10d
 * 00000001C00E0057: mov     r8, rdx
 * 00000001C00E005A: mov     r11, rcx
 * 00000001C00E005D: cmp     [rcx+8], r10b
 * 00000001C00E0061: jnz     short loc_1C00E0078
 * 00000001C00E0063: mov     rax, rdx
 * 00000001C00E0066: xor     edx, edx
 * 00000001C00E0068: shr     rax, 20h
 * 00000001C00E006C: imul    eax, 989680h
 * 00000001C00E0072: div     r8d
 * 00000001C00E0075: mov     r10d, eax
 * 00000001C00E0078: mov     ecx, r8d
 * 00000001C00E007B: mov     rax, r8
 * 00000001C00E007E: shr     rax, 20h
 * 00000001C00E0082: xor     r9d, r9d
 * 00000001C00E0085: imul    rax, 0FFFFFFFFFF676980h
 * 00000001C00E008C: mov     r8, r10
 * 00000001C00E008F: cqo
 * 00000001C00E0091: idiv    rcx
 * 00000001C00E0094: mov     rcx, [r11+10h]
 * 00000001C00E0098: mov     rdx, rax
 * 00000001C00E009B: call    cs:__imp_ExSetTimer
 * 00000001C00E00A2: nop     dword ptr [rax+rax+00h]
 * 00000001C00E00A7: xor     eax, eax
 * 00000001C00E00A9: add     rsp, 28h
 * 00000001C00E00AD: retn
 */
