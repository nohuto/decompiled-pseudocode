/*
 * XREFs of NVMeRequestComplete @ 0x1C000F468
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
 * Hex-Rays decompilation failed for NVMeRequestComplete @ 0x1C000F468
 * Reason: Hex-Rays returned no pseudocode for 0x1C000F468
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000F468: mov     [rsp+arg_0], rbx
 * 00000001C000F46D: push    rdi
 * 00000001C000F46E: sub     rsp, 20h
 * 00000001C000F472: mov     dil, r8b
 * 00000001C000F475: mov     r11, rdx
 * 00000001C000F478: mov     rbx, rcx
 * 00000001C000F47B: call    IsInternalSrb
 * 00000001C000F480: test    al, al
 * 00000001C000F482: jz      short loc_1C000F4D2
 * 00000001C000F484: mov     rdx, r11
 * 00000001C000F487: mov     rcx, rbx
 * 00000001C000F48A: call    GetLocalCommand
 * 00000001C000F48F: mov     rdi, rax
 * 00000001C000F492: test    rax, rax
 * 00000001C000F495: jz      short loc_1C000F4FE
 * 00000001C000F497: and     dword ptr [rax], 0
 * 00000001C000F49A: cmp     dword ptr [r11+0Ch], 0F000000h
 * 00000001C000F4A2: jnz     short loc_1C000F4FE
 * 00000001C000F4A4: mov     r9, [rax+68h]
 * 00000001C000F4A8: lea     r8, [r11+38h]
 * 00000001C000F4AC: mov     edx, 2000h
 * 00000001C000F4B1: mov     rcx, rbx
 * 00000001C000F4B4: call    NVMeFreeDmaBuffer
 * 00000001C000F4B9: mov     r8, rdi
 * 00000001C000F4BC: mov     rdx, rbx
 * 00000001C000F4BF: mov     ecx, 1
 * 00000001C000F4C4: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000F4CB: nop     dword ptr [rax+rax+00h]
 * 00000001C000F4D0: jmp     short loc_1C000F4FE
 * 00000001C000F4D2: mov     r8, r11
 * 00000001C000F4D5: mov     rdx, rbx
 * 00000001C000F4D8: test    dil, dil
 * 00000001C000F4DB: jz      short loc_1C000F4F0
 * 00000001C000F4DD: mov     ecx, 1008h
 * 00000001C000F4E2: call    cs:__imp_StorPortNotification
 * 00000001C000F4E9: nop     dword ptr [rax+rax+00h]
 * 00000001C000F4EE: jmp     short loc_1C000F4FE
 * 00000001C000F4F0: xor     ecx, ecx
 * 00000001C000F4F2: call    cs:__imp_StorPortNotification
 * 00000001C000F4F9: nop     dword ptr [rax+rax+00h]
 * 00000001C000F4FE: mov     rbx, [rsp+28h+arg_0]
 * 00000001C000F503: add     rsp, 20h
 * 00000001C000F507: pop     rdi
 * 00000001C000F508: retn
 */
