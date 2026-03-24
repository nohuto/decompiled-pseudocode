/*
 * XREFs of WaitForCommandCompleteWithCustomTimeout @ 0x1C001BBDC
 * Callers:
 *     NVMeBuildPollingConfiguration @ 0x1C0016818 (NVMeBuildPollingConfiguration.c)
 *     NVMeConfigAsyncEvent @ 0x1C0016994 (NVMeConfigAsyncEvent.c)
 *     NVMeControllerIdentify @ 0x1C0016AA8 (NVMeControllerIdentify.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C0016FAC (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0017094 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C0017224 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0017318 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C00174F4 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C00175E8 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C0017768 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C0017948 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C0017B98 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetTemperatureThreshold @ 0x1C0017EFC (NVMeGetTemperatureThreshold.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0018040 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C0018424 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C0018720 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0018AE4 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeNameSpaceIdentify @ 0x1C0018E64 (NVMeNameSpaceIdentify.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0019C80 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0019FF4 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSetArbitration @ 0x1C001A358 (NVMeSetArbitration.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C001A478 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C001A560 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetInterruptCoalescing @ 0x1C001A718 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C001A82C (NVMeSetIoQueueCount.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C001AC44 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 *     NVMeSetPowerState @ 0x1C001AE34 (NVMeSetPowerState.c)
 *     NVMeSyncHostTime @ 0x1C001B0A8 (NVMeSyncHostTime.c)
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     RequestPendingCompletion @ 0x1C00049F0 (RequestPendingCompletion.c)
 *     IsInternalSrb @ 0x1C0009150 (IsInternalSrb.c)
 *     GetLocalCommand @ 0x1C000A338 (GetLocalCommand.c)
 *     NVMeRequestComplete @ 0x1C000F468 (NVMeRequestComplete.c)
 *     NVMeLogTelemetryWaitForCmdComplete @ 0x1C0018C60 (NVMeLogTelemetryWaitForCmdComplete.c)
 *     ProcessCompletionQueues @ 0x1C001B28C (ProcessCompletionQueues.c)
 */

/*
 * Hex-Rays decompilation failed for WaitForCommandCompleteWithCustomTimeout @ 0x1C001BBDC
 * Reason: Hex-Rays returned no pseudocode for 0x1C001BBDC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001BBDC: mov     [rsp+arg_0], rbx
 * 00000001C001BBE1: mov     [rsp+arg_8], rbp
 * 00000001C001BBE6: mov     [rsp+arg_10], rsi
 * 00000001C001BBEB: push    rdi
 * 00000001C001BBEC: push    r12
 * 00000001C001BBEE: push    r13
 * 00000001C001BBF0: push    r14
 * 00000001C001BBF2: push    r15
 * 00000001C001BBF4: sub     rsp, 20h
 * 00000001C001BBF8: mov     rbx, rcx
 * 00000001C001BBFB: mov     ebp, r9d
 * 00000001C001BBFE: mov     rcx, rdx
 * 00000001C001BC01: mov     r14b, r8b
 * 00000001C001BC04: mov     rdi, rdx
 * 00000001C001BC07: call    GetSrbExtension
 * 00000001C001BC0C: mov     r10, [rbx+98h]
 * 00000001C001BC13: xor     r15b, r15b
 * 00000001C001BC16: xor     r12b, r12b
 * 00000001C001BC19: mov     r13, rax
 * 00000001C001BC1C: mov     r11b, 1
 * 00000001C001BC1F: mov     edx, [r10+28h]
 * 00000001C001BC23: mov     ecx, [r10+2Ch]
 * 00000001C001BC27: shl     rcx, 20h
 * 00000001C001BC2B: or      rcx, rdx
 * 00000001C001BC2E: cmp     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001C001BC32: jnz     short loc_1C001BC3D
 * 00000001C001BC34: mov     byte ptr [rdi+3], 8
 * 00000001C001BC38: jmp     loc_1C001BD27
 * 00000001C001BC3D: xor     esi, esi
 * 00000001C001BC3F: test    ebp, ebp
 * 00000001C001BC41: jz      loc_1C001BCE0
 * 00000001C001BC47: test    r11b, r11b
 * 00000001C001BC4A: jz      loc_1C001BCDC
 * 00000001C001BC50: test    r14b, r14b
 * 00000001C001BC53: jz      short loc_1C001BC78
 * 00000001C001BC55: test    r15b, r15b
 * 00000001C001BC58: jnz     short loc_1C001BC78
 * 00000001C001BC5A: xor     edx, edx
 * 00000001C001BC5C: mov     rcx, rbx
 * 00000001C001BC5F: call    RequestPendingCompletion
 * 00000001C001BC64: test    al, al
 * 00000001C001BC66: jz      short loc_1C001BC78
 * 00000001C001BC68: xor     edx, edx
 * 00000001C001BC6A: mov     r8b, r14b
 * 00000001C001BC6D: mov     rcx, rbx
 * 00000001C001BC70: call    ProcessCompletionQueues
 * 00000001C001BC75: mov     r15b, 1
 * 00000001C001BC78: mov     r8d, 3E8h
 * 00000001C001BC7E: mov     rdx, rbx
 * 00000001C001BC81: mov     ecx, 51h ; 'Q'
 * 00000001C001BC86: call    cs:__imp_StorPortExtendedFunction
 * 00000001C001BC8D: nop     dword ptr [rax+rax+00h]
 * 00000001C001BC92: mov     rdx, rdi
 * 00000001C001BC95: mov     rcx, rbx
 * 00000001C001BC98: call    IsInternalSrb
 * 00000001C001BC9D: test    al, al
 * 00000001C001BC9F: jz      short loc_1C001BCC0
 * 00000001C001BCA1: mov     rdx, rdi
 * 00000001C001BCA4: mov     rcx, rbx
 * 00000001C001BCA7: call    GetLocalCommand
 * 00000001C001BCAC: test    rax, rax
 * 00000001C001BCAF: jz      short loc_1C001BCBB
 * 00000001C001BCB1: cmp     dword ptr [rax], 1
 * 00000001C001BCB4: jnz     short loc_1C001BCBB
 * 00000001C001BCB6: mov     r11b, 1
 * 00000001C001BCB9: jmp     short loc_1C001BCD2
 * 00000001C001BCBB: xor     r11b, r11b
 * 00000001C001BCBE: jmp     short loc_1C001BCD2
 * 00000001C001BCC0: mov     r11b, [r13+109Dh]
 * 00000001C001BCC7: shr     r11b, 3
 * 00000001C001BCCB: not     r11b
 * 00000001C001BCCE: and     r11b, 1
 * 00000001C001BCD2: inc     esi
 * 00000001C001BCD4: cmp     esi, ebp
 * 00000001C001BCD6: jb      loc_1C001BC47
 * 00000001C001BCDC: cmp     esi, ebp
 * 00000001C001BCDE: jb      short loc_1C001BD03
 * 00000001C001BCE0: mov     rcx, [rbx+98h]
 * 00000001C001BCE7: mov     r12b, 1
 * 00000001C001BCEA: mov     eax, [rcx+28h]
 * 00000001C001BCED: mov     ecx, [rcx+2Ch]
 * 00000001C001BCF0: shl     rcx, 20h
 * 00000001C001BCF4: or      rcx, rax
 * 00000001C001BCF7: cmp     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001C001BCFB: setnz   al
 * 00000001C001BCFE: add     al, 8
 * 00000001C001BD00: mov     [rdi+3], al
 * 00000001C001BD03: mov     r9d, esi
 * 00000001C001BD06: mov     r8d, ebp
 * 00000001C001BD09: mov     rdx, rdi
 * 00000001C001BD0C: mov     rcx, rbx; int
 * 00000001C001BD0F: call    NVMeLogTelemetryWaitForCmdComplete
 * 00000001C001BD14: test    r12b, r12b
 * 00000001C001BD17: jz      short loc_1C001BD27
 * 00000001C001BD19: xor     r8d, r8d
 * 00000001C001BD1C: mov     rdx, rdi
 * 00000001C001BD1F: mov     rcx, rbx
 * 00000001C001BD22: call    NVMeRequestComplete
 * 00000001C001BD27: mov     rbx, [rsp+48h+arg_0]
 * 00000001C001BD2C: mov     rbp, [rsp+48h+arg_8]
 * 00000001C001BD31: mov     rsi, [rsp+48h+arg_10]
 * 00000001C001BD36: add     rsp, 20h
 * 00000001C001BD3A: pop     r15
 * 00000001C001BD3C: pop     r14
 * 00000001C001BD3E: pop     r13
 * 00000001C001BD40: pop     r12
 * 00000001C001BD42: pop     rdi
 * 00000001C001BD43: retn
 */
