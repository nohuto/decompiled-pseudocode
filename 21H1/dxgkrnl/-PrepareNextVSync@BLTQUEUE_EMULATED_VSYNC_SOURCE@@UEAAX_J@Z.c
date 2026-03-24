/*
 * XREFs of ?PrepareNextVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAX_J@Z @ 0x1C00D66B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?PrepareNextVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAX_J@Z @ 0x1C00D66B0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00D66B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00D66B0: sub     rsp, 28h
 * 00000001C00D66B4: cmp     byte ptr [rcx+8], 0
 * 00000001C00D66B8: jnz     loc_1C018B412
 * 00000001C00D66BE: add     rsp, 28h
 * 00000001C00D66C2: retn
 * 00000001C018B412: mov     rcx, [rcx+10h]
 * 00000001C018B416: xor     r9d, r9d
 * 00000001C018B419: xor     r8d, r8d
 * 00000001C018B41C: call    cs:__imp_ExSetTimer
 * 00000001C018B423: nop     dword ptr [rax+rax+00h]
 * 00000001C018B428: nop
 * 00000001C018B429: jmp     loc_1C00D66BE
 */
