/*
 * XREFs of ?PrepareNextVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAX_J@Z @ 0x1C00DD030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?PrepareNextVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAX_J@Z @ 0x1C00DD030
 * Reason: Hex-Rays returned no pseudocode for 0x1C00DD030
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00DD030: sub     rsp, 28h
 * 00000001C00DD034: cmp     byte ptr [rcx+8], 0
 * 00000001C00DD038: jnz     loc_1C019A28C
 * 00000001C00DD03E: add     rsp, 28h
 * 00000001C00DD042: retn
 * 00000001C019A28C: mov     rcx, [rcx+10h]
 * 00000001C019A290: xor     r9d, r9d
 * 00000001C019A293: xor     r8d, r8d
 * 00000001C019A296: call    cs:__imp_ExSetTimer
 * 00000001C019A29D: nop     dword ptr [rax+rax+00h]
 * 00000001C019A2A2: nop
 * 00000001C019A2A3: jmp     loc_1C00DD03E
 */
