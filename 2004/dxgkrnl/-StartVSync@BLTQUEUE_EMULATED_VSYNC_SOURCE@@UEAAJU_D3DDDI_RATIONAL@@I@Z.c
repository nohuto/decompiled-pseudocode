/*
 * XREFs of ?StartVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C00DEEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?StartVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C00DEEA0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00DEEA0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00DEEA0: sub     rsp, 28h
 * 00000001C00DEEA4: xor     r10d, r10d
 * 00000001C00DEEA7: mov     r8, rdx
 * 00000001C00DEEAA: mov     r11, rcx
 * 00000001C00DEEAD: cmp     [rcx+8], r10b
 * 00000001C00DEEB1: jnz     short loc_1C00DEEC8
 * 00000001C00DEEB3: mov     rax, rdx
 * 00000001C00DEEB6: xor     edx, edx
 * 00000001C00DEEB8: shr     rax, 20h
 * 00000001C00DEEBC: imul    eax, 989680h
 * 00000001C00DEEC2: div     r8d
 * 00000001C00DEEC5: mov     r10d, eax
 * 00000001C00DEEC8: mov     ecx, r8d
 * 00000001C00DEECB: mov     rax, r8
 * 00000001C00DEECE: shr     rax, 20h
 * 00000001C00DEED2: xor     r9d, r9d
 * 00000001C00DEED5: imul    rax, 0FFFFFFFFFF676980h
 * 00000001C00DEEDC: mov     r8, r10
 * 00000001C00DEEDF: cqo
 * 00000001C00DEEE1: idiv    rcx
 * 00000001C00DEEE4: mov     rcx, [r11+10h]
 * 00000001C00DEEE8: mov     rdx, rax
 * 00000001C00DEEEB: call    cs:__imp_ExSetTimer
 * 00000001C00DEEF2: nop     dword ptr [rax+rax+00h]
 * 00000001C00DEEF7: xor     eax, eax
 * 00000001C00DEEF9: add     rsp, 28h
 * 00000001C00DEEFD: retn
 */
