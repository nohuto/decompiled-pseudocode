/*
 * XREFs of NVMeRequestComplete @ 0x1C000F470
 * Callers:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     NVMeHwStartIo @ 0x1C0002110 (NVMeHwStartIo.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000BC98 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeFirmwareActivateCompletionAfterReset @ 0x1C0012F60 (NVMeFirmwareActivateCompletionAfterReset.c)
 *     NVMeWriteBufferFirmwareActivateCompletionAfterReset @ 0x1C00145B0 (NVMeWriteBufferFirmwareActivateCompletionAfterReset.c)
 *     ProcessMultipleCommands @ 0x1C001B4A0 (ProcessMultipleCommands.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BBDC (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C000451C (NVMeFreeDmaBuffer.c)
 *     IsInternalSrb @ 0x1C0009150 (IsInternalSrb.c)
 *     GetLocalCommand @ 0x1C000A338 (GetLocalCommand.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeRequestComplete @ 0x1C000F470
 * Reason: Hex-Rays returned no pseudocode for 0x1C000F470
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000F470: mov     [rsp+arg_0], rbx
 * 00000001C000F475: push    rdi
 * 00000001C000F476: sub     rsp, 20h
 * 00000001C000F47A: mov     dil, r8b
 * 00000001C000F47D: mov     r11, rdx
 * 00000001C000F480: mov     rbx, rcx
 * 00000001C000F483: call    IsInternalSrb
 * 00000001C000F488: test    al, al
 * 00000001C000F48A: jz      short loc_1C000F4DA
 * 00000001C000F48C: mov     rdx, r11
 * 00000001C000F48F: mov     rcx, rbx
 * 00000001C000F492: call    GetLocalCommand
 * 00000001C000F497: mov     rdi, rax
 * 00000001C000F49A: test    rax, rax
 * 00000001C000F49D: jz      short loc_1C000F506
 * 00000001C000F49F: and     dword ptr [rax], 0
 * 00000001C000F4A2: cmp     dword ptr [r11+0Ch], 0F000000h
 * 00000001C000F4AA: jnz     short loc_1C000F506
 * 00000001C000F4AC: mov     r9, [rax+68h]
 * 00000001C000F4B0: lea     r8, [r11+38h]
 * 00000001C000F4B4: mov     edx, 2000h
 * 00000001C000F4B9: mov     rcx, rbx
 * 00000001C000F4BC: call    NVMeFreeDmaBuffer
 * 00000001C000F4C1: mov     r8, rdi
 * 00000001C000F4C4: mov     rdx, rbx
 * 00000001C000F4C7: mov     ecx, 1
 * 00000001C000F4CC: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000F4D3: nop     dword ptr [rax+rax+00h]
 * 00000001C000F4D8: jmp     short loc_1C000F506
 * 00000001C000F4DA: mov     r8, r11
 * 00000001C000F4DD: mov     rdx, rbx
 * 00000001C000F4E0: test    dil, dil
 * 00000001C000F4E3: jz      short loc_1C000F4F8
 * 00000001C000F4E5: mov     ecx, 1008h
 * 00000001C000F4EA: call    cs:__imp_StorPortNotification
 * 00000001C000F4F1: nop     dword ptr [rax+rax+00h]
 * 00000001C000F4F6: jmp     short loc_1C000F506
 * 00000001C000F4F8: xor     ecx, ecx
 * 00000001C000F4FA: call    cs:__imp_StorPortNotification
 * 00000001C000F501: nop     dword ptr [rax+rax+00h]
 * 00000001C000F506: mov     rbx, [rsp+28h+arg_0]
 * 00000001C000F50B: add     rsp, 20h
 * 00000001C000F50F: pop     rdi
 * 00000001C000F510: retn
 */
