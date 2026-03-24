/*
 * XREFs of NVMeRequestComplete @ 0x1C000F3F0
 * Callers:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     NVMeHwStartIo @ 0x1C0002110 (NVMeHwStartIo.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000BC48 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeFirmwareActivateCompletionAfterReset @ 0x1C0012EE0 (NVMeFirmwareActivateCompletionAfterReset.c)
 *     NVMeWriteBufferFirmwareActivateCompletionAfterReset @ 0x1C0014530 (NVMeWriteBufferFirmwareActivateCompletionAfterReset.c)
 *     ProcessMultipleCommands @ 0x1C001B3D0 (ProcessMultipleCommands.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BB0C (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C000451C (NVMeFreeDmaBuffer.c)
 *     IsInternalSrb @ 0x1C0009100 (IsInternalSrb.c)
 *     GetLocalCommand @ 0x1C000A2E8 (GetLocalCommand.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeRequestComplete @ 0x1C000F3F0
 * Reason: Hex-Rays returned no pseudocode for 0x1C000F3F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000F3F0: mov     [rsp+arg_0], rbx
 * 00000001C000F3F5: push    rdi
 * 00000001C000F3F6: sub     rsp, 20h
 * 00000001C000F3FA: mov     dil, r8b
 * 00000001C000F3FD: mov     r11, rdx
 * 00000001C000F400: mov     rbx, rcx
 * 00000001C000F403: call    IsInternalSrb
 * 00000001C000F408: test    al, al
 * 00000001C000F40A: jz      short loc_1C000F45A
 * 00000001C000F40C: mov     rdx, r11
 * 00000001C000F40F: mov     rcx, rbx
 * 00000001C000F412: call    GetLocalCommand
 * 00000001C000F417: mov     rdi, rax
 * 00000001C000F41A: test    rax, rax
 * 00000001C000F41D: jz      short loc_1C000F486
 * 00000001C000F41F: and     dword ptr [rax], 0
 * 00000001C000F422: cmp     dword ptr [r11+0Ch], 0F000000h
 * 00000001C000F42A: jnz     short loc_1C000F486
 * 00000001C000F42C: mov     r9, [rax+68h]
 * 00000001C000F430: lea     r8, [r11+38h]
 * 00000001C000F434: mov     edx, 2000h
 * 00000001C000F439: mov     rcx, rbx
 * 00000001C000F43C: call    NVMeFreeDmaBuffer
 * 00000001C000F441: mov     r8, rdi
 * 00000001C000F444: mov     rdx, rbx
 * 00000001C000F447: mov     ecx, 1
 * 00000001C000F44C: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000F453: nop     dword ptr [rax+rax+00h]
 * 00000001C000F458: jmp     short loc_1C000F486
 * 00000001C000F45A: mov     r8, r11
 * 00000001C000F45D: mov     rdx, rbx
 * 00000001C000F460: test    dil, dil
 * 00000001C000F463: jz      short loc_1C000F478
 * 00000001C000F465: mov     ecx, 1008h
 * 00000001C000F46A: call    cs:__imp_StorPortNotification
 * 00000001C000F471: nop     dword ptr [rax+rax+00h]
 * 00000001C000F476: jmp     short loc_1C000F486
 * 00000001C000F478: xor     ecx, ecx
 * 00000001C000F47A: call    cs:__imp_StorPortNotification
 * 00000001C000F481: nop     dword ptr [rax+rax+00h]
 * 00000001C000F486: mov     rbx, [rsp+28h+arg_0]
 * 00000001C000F48B: add     rsp, 20h
 * 00000001C000F48F: pop     rdi
 * 00000001C000F490: retn
 */
