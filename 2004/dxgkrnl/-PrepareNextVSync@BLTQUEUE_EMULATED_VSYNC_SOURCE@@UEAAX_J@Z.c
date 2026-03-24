/*
 * XREFs of ?PrepareNextVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAX_J@Z @ 0x1C00DE0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?PrepareNextVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAX_J@Z @ 0x1C00DE0C0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00DE0C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00DE0C0: sub     rsp, 28h
 * 00000001C00DE0C4: cmp     byte ptr [rcx+8], 0
 * 00000001C00DE0C8: jnz     loc_1C019B412
 * 00000001C00DE0CE: add     rsp, 28h
 * 00000001C00DE0D2: retn
 * 00000001C019B412: mov     rcx, [rcx+10h]
 * 00000001C019B416: xor     r9d, r9d
 * 00000001C019B419: xor     r8d, r8d
 * 00000001C019B41C: call    cs:__imp_ExSetTimer
 * 00000001C019B423: nop     dword ptr [rax+rax+00h]
 * 00000001C019B428: nop
 * 00000001C019B429: jmp     loc_1C00DE0CE
 */
