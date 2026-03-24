/*
 * XREFs of WaitForCommandCompleteWithCustomTimeout @ 0x1C001BB0C
 * Callers:
 *     NVMeBuildPollingConfiguration @ 0x1C0016798 (NVMeBuildPollingConfiguration.c)
 *     NVMeConfigAsyncEvent @ 0x1C0016914 (NVMeConfigAsyncEvent.c)
 *     NVMeControllerIdentify @ 0x1C0016A28 (NVMeControllerIdentify.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C0016F2C (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0017014 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C00171A4 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0017298 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C0017474 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0017568 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C00176E8 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C00178C8 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C0017AFC (NVMeGetCommandEffectsLog.c)
 *     NVMeGetTemperatureThreshold @ 0x1C0017E6C (NVMeGetTemperatureThreshold.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0017FB0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C0018394 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C0018690 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0018A44 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeNameSpaceIdentify @ 0x1C0018DC4 (NVMeNameSpaceIdentify.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0019BE0 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0019F54 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSetArbitration @ 0x1C001A2B8 (NVMeSetArbitration.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C001A3D8 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C001A4C0 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetInterruptCoalescing @ 0x1C001A678 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C001A78C (NVMeSetIoQueueCount.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C001ABA4 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 *     NVMeSetPowerState @ 0x1C001AD64 (NVMeSetPowerState.c)
 *     NVMeSyncHostTime @ 0x1C001AFD8 (NVMeSyncHostTime.c)
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     RequestPendingCompletion @ 0x1C00049F0 (RequestPendingCompletion.c)
 *     IsInternalSrb @ 0x1C0009100 (IsInternalSrb.c)
 *     GetLocalCommand @ 0x1C000A2E8 (GetLocalCommand.c)
 *     NVMeRequestComplete @ 0x1C000F3F0 (NVMeRequestComplete.c)
 *     NVMeLogTelemetryWaitForCmdComplete @ 0x1C0018BC0 (NVMeLogTelemetryWaitForCmdComplete.c)
 *     ProcessCompletionQueues @ 0x1C001B1BC (ProcessCompletionQueues.c)
 */

/*
 * Hex-Rays decompilation failed for WaitForCommandCompleteWithCustomTimeout @ 0x1C001BB0C
 * Reason: Hex-Rays returned no pseudocode for 0x1C001BB0C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001BB0C: mov     [rsp+arg_0], rbx
 * 00000001C001BB11: mov     [rsp+arg_8], rbp
 * 00000001C001BB16: mov     [rsp+arg_10], rsi
 * 00000001C001BB1B: push    rdi
 * 00000001C001BB1C: push    r12
 * 00000001C001BB1E: push    r13
 * 00000001C001BB20: push    r14
 * 00000001C001BB22: push    r15
 * 00000001C001BB24: sub     rsp, 20h
 * 00000001C001BB28: mov     rbx, rcx
 * 00000001C001BB2B: mov     ebp, r9d
 * 00000001C001BB2E: mov     rcx, rdx
 * 00000001C001BB31: mov     r14b, r8b
 * 00000001C001BB34: mov     rdi, rdx
 * 00000001C001BB37: call    GetSrbExtension
 * 00000001C001BB3C: mov     r10, [rbx+98h]
 * 00000001C001BB43: xor     r15b, r15b
 * 00000001C001BB46: xor     r12b, r12b
 * 00000001C001BB49: mov     r13, rax
 * 00000001C001BB4C: mov     r11b, 1
 * 00000001C001BB4F: mov     edx, [r10+28h]
 * 00000001C001BB53: mov     ecx, [r10+2Ch]
 * 00000001C001BB57: shl     rcx, 20h
 * 00000001C001BB5B: or      rcx, rdx
 * 00000001C001BB5E: cmp     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001C001BB62: jnz     short loc_1C001BB6D
 * 00000001C001BB64: mov     byte ptr [rdi+3], 8
 * 00000001C001BB68: jmp     loc_1C001BC57
 * 00000001C001BB6D: xor     esi, esi
 * 00000001C001BB6F: test    ebp, ebp
 * 00000001C001BB71: jz      loc_1C001BC10
 * 00000001C001BB77: test    r11b, r11b
 * 00000001C001BB7A: jz      loc_1C001BC0C
 * 00000001C001BB80: test    r14b, r14b
 * 00000001C001BB83: jz      short loc_1C001BBA8
 * 00000001C001BB85: test    r15b, r15b
 * 00000001C001BB88: jnz     short loc_1C001BBA8
 * 00000001C001BB8A: xor     edx, edx
 * 00000001C001BB8C: mov     rcx, rbx
 * 00000001C001BB8F: call    RequestPendingCompletion
 * 00000001C001BB94: test    al, al
 * 00000001C001BB96: jz      short loc_1C001BBA8
 * 00000001C001BB98: xor     edx, edx
 * 00000001C001BB9A: mov     r8b, r14b
 * 00000001C001BB9D: mov     rcx, rbx
 * 00000001C001BBA0: call    ProcessCompletionQueues
 * 00000001C001BBA5: mov     r15b, 1
 * 00000001C001BBA8: mov     r8d, 3E8h
 * 00000001C001BBAE: mov     rdx, rbx
 * 00000001C001BBB1: mov     ecx, 51h ; 'Q'
 * 00000001C001BBB6: call    cs:__imp_StorPortExtendedFunction
 * 00000001C001BBBD: nop     dword ptr [rax+rax+00h]
 * 00000001C001BBC2: mov     rdx, rdi
 * 00000001C001BBC5: mov     rcx, rbx
 * 00000001C001BBC8: call    IsInternalSrb
 * 00000001C001BBCD: test    al, al
 * 00000001C001BBCF: jz      short loc_1C001BBF0
 * 00000001C001BBD1: mov     rdx, rdi
 * 00000001C001BBD4: mov     rcx, rbx
 * 00000001C001BBD7: call    GetLocalCommand
 * 00000001C001BBDC: test    rax, rax
 * 00000001C001BBDF: jz      short loc_1C001BBEB
 * 00000001C001BBE1: cmp     dword ptr [rax], 1
 * 00000001C001BBE4: jnz     short loc_1C001BBEB
 * 00000001C001BBE6: mov     r11b, 1
 * 00000001C001BBE9: jmp     short loc_1C001BC02
 * 00000001C001BBEB: xor     r11b, r11b
 * 00000001C001BBEE: jmp     short loc_1C001BC02
 * 00000001C001BBF0: mov     r11b, [r13+109Dh]
 * 00000001C001BBF7: shr     r11b, 3
 * 00000001C001BBFB: not     r11b
 * 00000001C001BBFE: and     r11b, 1
 * 00000001C001BC02: inc     esi
 * 00000001C001BC04: cmp     esi, ebp
 * 00000001C001BC06: jb      loc_1C001BB77
 * 00000001C001BC0C: cmp     esi, ebp
 * 00000001C001BC0E: jb      short loc_1C001BC33
 * 00000001C001BC10: mov     rcx, [rbx+98h]
 * 00000001C001BC17: mov     r12b, 1
 * 00000001C001BC1A: mov     eax, [rcx+28h]
 * 00000001C001BC1D: mov     ecx, [rcx+2Ch]
 * 00000001C001BC20: shl     rcx, 20h
 * 00000001C001BC24: or      rcx, rax
 * 00000001C001BC27: cmp     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001C001BC2B: setnz   al
 * 00000001C001BC2E: add     al, 8
 * 00000001C001BC30: mov     [rdi+3], al
 * 00000001C001BC33: mov     r9d, esi
 * 00000001C001BC36: mov     r8d, ebp
 * 00000001C001BC39: mov     rdx, rdi
 * 00000001C001BC3C: mov     rcx, rbx; int
 * 00000001C001BC3F: call    NVMeLogTelemetryWaitForCmdComplete
 * 00000001C001BC44: test    r12b, r12b
 * 00000001C001BC47: jz      short loc_1C001BC57
 * 00000001C001BC49: xor     r8d, r8d
 * 00000001C001BC4C: mov     rdx, rdi
 * 00000001C001BC4F: mov     rcx, rbx
 * 00000001C001BC52: call    NVMeRequestComplete
 * 00000001C001BC57: mov     rbx, [rsp+48h+arg_0]
 * 00000001C001BC5C: mov     rbp, [rsp+48h+arg_8]
 * 00000001C001BC61: mov     rsi, [rsp+48h+arg_10]
 * 00000001C001BC66: add     rsp, 20h
 * 00000001C001BC6A: pop     r15
 * 00000001C001BC6C: pop     r14
 * 00000001C001BC6E: pop     r13
 * 00000001C001BC70: pop     r12
 * 00000001C001BC72: pop     rdi
 * 00000001C001BC73: retn
 */
