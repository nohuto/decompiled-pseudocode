/*
 * XREFs of ?StartVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C00D7490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?StartVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C00D7490
 * Reason: Hex-Rays returned no pseudocode for 0x1C00D7490
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00D7490: sub     rsp, 28h
 * 00000001C00D7494: xor     r10d, r10d
 * 00000001C00D7497: mov     r8, rdx
 * 00000001C00D749A: mov     r11, rcx
 * 00000001C00D749D: cmp     [rcx+8], r10b
 * 00000001C00D74A1: jnz     short loc_1C00D74B8
 * 00000001C00D74A3: mov     rax, rdx
 * 00000001C00D74A6: xor     edx, edx
 * 00000001C00D74A8: shr     rax, 20h
 * 00000001C00D74AC: imul    eax, 989680h
 * 00000001C00D74B2: div     r8d
 * 00000001C00D74B5: mov     r10d, eax
 * 00000001C00D74B8: mov     ecx, r8d
 * 00000001C00D74BB: mov     rax, r8
 * 00000001C00D74BE: shr     rax, 20h
 * 00000001C00D74C2: xor     r9d, r9d
 * 00000001C00D74C5: imul    rax, 0FFFFFFFFFF676980h
 * 00000001C00D74CC: mov     r8, r10
 * 00000001C00D74CF: cqo
 * 00000001C00D74D1: idiv    rcx
 * 00000001C00D74D4: mov     rcx, [r11+10h]
 * 00000001C00D74D8: mov     rdx, rax
 * 00000001C00D74DB: call    cs:__imp_ExSetTimer
 * 00000001C00D74E2: nop     dword ptr [rax+rax+00h]
 * 00000001C00D74E7: xor     eax, eax
 * 00000001C00D74E9: add     rsp, 28h
 * 00000001C00D74ED: retn
 */
