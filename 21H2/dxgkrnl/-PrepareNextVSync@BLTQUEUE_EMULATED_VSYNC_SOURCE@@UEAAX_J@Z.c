/*
 * XREFs of ?PrepareNextVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAX_J@Z @ 0x1C00DF270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?PrepareNextVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAX_J@Z @ 0x1C00DF270
 * Reason: Hex-Rays returned no pseudocode for 0x1C00DF270
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00DF270: sub     rsp, 28h
 * 00000001C00DF274: cmp     byte ptr [rcx+8], 0
 * 00000001C00DF278: jnz     loc_1C01A2438
 * 00000001C00DF27E: add     rsp, 28h
 * 00000001C00DF282: retn
 * 00000001C01A2438: mov     rcx, [rcx+10h]
 * 00000001C01A243C: xor     r9d, r9d
 * 00000001C01A243F: xor     r8d, r8d
 * 00000001C01A2442: call    cs:__imp_ExSetTimer
 * 00000001C01A2449: nop     dword ptr [rax+rax+00h]
 * 00000001C01A244E: nop
 * 00000001C01A244F: jmp     loc_1C00DF27E
 */
