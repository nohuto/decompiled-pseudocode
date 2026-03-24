/*
 * XREFs of NVMeWriteBufferFirmwareDownloadCompletion @ 0x1C0014790
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeWriteBufferFirmwareDownloadCompletion @ 0x1C0014790
 * Reason: Hex-Rays returned no pseudocode for 0x1C0014790
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0014790: push    rbx
 * 00000001C0014792: sub     rsp, 20h
 * 00000001C0014796: mov     r9, rcx
 * 00000001C0014799: mov     rcx, rdx
 * 00000001C001479C: call    GetSrbExtension
 * 00000001C00147A1: mov     edx, [r9+38h]
 * 00000001C00147A5: mov     rbx, rax
 * 00000001C00147A8: test    dl, 8
 * 00000001C00147AB: jnz     short loc_1C00147D7
 * 00000001C00147AD: mov     r8, [rax+1078h]
 * 00000001C00147B4: test    r8, r8
 * 00000001C00147B7: jz      short loc_1C00147D7
 * 00000001C00147B9: mov     rdx, r9
 * 00000001C00147BC: mov     ecx, 1
 * 00000001C00147C1: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00147C8: nop     dword ptr [rax+rax+00h]
 * 00000001C00147CD: and     qword ptr [rbx+1078h], 0
 * 00000001C00147D5: jmp     short loc_1C00147DE
 * 00000001C00147D7: and     dword ptr [rax+1078h], 0
 * 00000001C00147DE: or      byte ptr [rbx+109Dh], 8
 * 00000001C00147E5: add     rsp, 20h
 * 00000001C00147E9: pop     rbx
 * 00000001C00147EA: retn
 */
