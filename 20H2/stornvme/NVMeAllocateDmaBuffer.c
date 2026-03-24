/*
 * XREFs of NVMeAllocateDmaBuffer @ 0x1C000456C
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C000143C (QueryProtocolInfoLogPageData.c)
 *     FirmwareGetInfo @ 0x1C00017FC (FirmwareGetInfo.c)
 *     ScsiModeSenseRequest @ 0x1C0001E0C (ScsiModeSenseRequest.c)
 *     IoQueuesInitialize @ 0x1C000B2E4 (IoQueuesInitialize.c)
 *     IoctlQueryEnduranceInformation @ 0x1C00119D8 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0011DC0 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0012798 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0012980 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C001308C (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C001327C (NVMeGetDeviceTelemetryHeader.c)
 *     ProtocolCommandCompletion @ 0x1C0014800 (ProtocolCommandCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0014D34 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0014F9C (QueryProtocolInfoIdentifyData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00160A0 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0017014 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0017298 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0017568 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C00176E8 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C00178C8 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C0017AFC (NVMeGetCommandEffectsLog.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0017FB0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C0018690 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C001963C (NVMeReenumerateNameSpaceIdentify.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0019BE0 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0019F54 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSyncHostTime @ 0x1C001AFD8 (NVMeSyncHostTime.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMeAllocateDmaBuffer @ 0x1C000456C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000456C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000456C: mov     [rsp+arg_0], rbx
 * 00000001C0004571: mov     [rsp+arg_8], rbp
 * 00000001C0004576: mov     [rsp+arg_10], rsi
 * 00000001C000457B: push    rdi
 * 00000001C000457C: push    r14
 * 00000001C000457E: push    r15
 * 00000001C0004580: sub     rsp, 50h
 * 00000001C0004584: mov     eax, [rcx+38h]
 * 00000001C0004587: mov     rbp, r9
 * 00000001C000458A: mov     r14, r8
 * 00000001C000458D: mov     rdi, rcx
 * 00000001C0004590: test    al, 2
 * 00000001C0004592: jnz     short loc_1C0004604
 * 00000001C0004594: mov     esi, [rcx+0DCh]
 * 00000001C000459A: mov     [rsp+68h+var_20], rbp
 * 00000001C000459F: xor     r9d, r9d
 * 00000001C00045A2: mov     [rsp+68h+var_28], r14
 * 00000001C00045A7: mov     rbx, 7FFFFFFFFFFFFFFFh
 * 00000001C00045B1: mov     [rsp+68h+var_30], esi
 * 00000001C00045B5: mov     r15d, edx
 * 00000001C00045B8: mov     [rsp+68h+var_38], 1
 * 00000001C00045C0: lea     ecx, [r9+52h]
 * 00000001C00045C4: and     [rsp+68h+var_40], 0
 * 00000001C00045CA: mov     r8d, edx
 * 00000001C00045CD: mov     rdx, rdi
 * 00000001C00045D0: mov     [rsp+68h+var_48], rbx
 * 00000001C00045D5: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00045DC: nop     dword ptr [rax+rax+00h]
 * 00000001C00045E1: test    eax, eax
 * 00000001C00045E3: jnz     loc_1C0008998
 * 00000001C00045E9: lea     r11, [rsp+68h+var_18]
 * 00000001C00045EE: mov     rbx, [r11+20h]
 * 00000001C00045F2: mov     rbp, [r11+28h]
 * 00000001C00045F6: mov     rsi, [r11+30h]
 * 00000001C00045FA: mov     rsp, r11
 * 00000001C00045FD: pop     r15
 * 00000001C00045FF: pop     r14
 * 00000001C0004601: pop     rdi
 * 00000001C0004602: retn
 * 00000001C0004604: mov     esi, 80000000h
 * 00000001C0004609: jmp     short loc_1C000459A
 * 00000001C0008998: cmp     esi, 80000000h
 * 00000001C000899E: jz      loc_1C00045E9
 * 00000001C00089A4: mov     [rsp+68h+var_20], rbp
 * 00000001C00089A9: xor     r9d, r9d
 * 00000001C00089AC: mov     [rsp+68h+var_28], r14
 * 00000001C00089B1: mov     r8, r15
 * 00000001C00089B4: mov     [rsp+68h+var_30], 80000000h
 * 00000001C00089BC: mov     rdx, rdi
 * 00000001C00089BF: mov     [rsp+68h+var_38], 1
 * 00000001C00089C7: and     [rsp+68h+var_40], 0
 * 00000001C00089CD: lea     ecx, [r9+52h]
 * 00000001C00089D1: mov     [rsp+68h+var_48], rbx
 * 00000001C00089D6: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00089DD: nop     dword ptr [rax+rax+00h]
 * 00000001C00089E2: nop
 * 00000001C00089E3: jmp     loc_1C00045E9
 */
