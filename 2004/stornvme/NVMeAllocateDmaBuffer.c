/*
 * XREFs of NVMeAllocateDmaBuffer @ 0x1C0004570
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C000143C (QueryProtocolInfoLogPageData.c)
 *     FirmwareGetInfo @ 0x1C00017FC (FirmwareGetInfo.c)
 *     ScsiModeSenseRequest @ 0x1C0001E0C (ScsiModeSenseRequest.c)
 *     IoQueuesInitialize @ 0x1C000B334 (IoQueuesInitialize.c)
 *     IoctlQueryEnduranceInformation @ 0x1C0011A58 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0011E40 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0012818 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0012A00 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C001310C (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C00132FC (NVMeGetDeviceTelemetryHeader.c)
 *     ProtocolCommandCompletion @ 0x1C0014880 (ProtocolCommandCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0014DB4 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C001501C (QueryProtocolInfoIdentifyData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0016120 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0017094 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0017318 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C00175E8 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C0017768 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C0017948 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C0017B98 (NVMeGetCommandEffectsLog.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0018040 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C0018720 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C00196DC (NVMeReenumerateNameSpaceIdentify.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0019C80 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0019FF4 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSyncHostTime @ 0x1C001B0A8 (NVMeSyncHostTime.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMeAllocateDmaBuffer @ 0x1C0004570
 * Reason: Hex-Rays returned no pseudocode for 0x1C0004570
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0004570: mov     [rsp+arg_0], rbx
 * 00000001C0004575: mov     [rsp+arg_8], rbp
 * 00000001C000457A: mov     [rsp+arg_10], rsi
 * 00000001C000457F: push    rdi
 * 00000001C0004580: push    r14
 * 00000001C0004582: push    r15
 * 00000001C0004584: sub     rsp, 50h
 * 00000001C0004588: mov     eax, [rcx+38h]
 * 00000001C000458B: mov     rbp, r9
 * 00000001C000458E: mov     r14, r8
 * 00000001C0004591: mov     rdi, rcx
 * 00000001C0004594: test    al, 2
 * 00000001C0004596: jnz     short loc_1C0004608
 * 00000001C0004598: mov     esi, [rcx+0DCh]
 * 00000001C000459E: mov     [rsp+68h+var_20], rbp
 * 00000001C00045A3: xor     r9d, r9d
 * 00000001C00045A6: mov     [rsp+68h+var_28], r14
 * 00000001C00045AB: mov     rbx, 7FFFFFFFFFFFFFFFh
 * 00000001C00045B5: mov     [rsp+68h+var_30], esi
 * 00000001C00045B9: mov     r15d, edx
 * 00000001C00045BC: mov     [rsp+68h+var_38], 1
 * 00000001C00045C4: lea     ecx, [r9+52h]
 * 00000001C00045C8: and     [rsp+68h+var_40], 0
 * 00000001C00045CE: mov     r8d, edx
 * 00000001C00045D1: mov     rdx, rdi
 * 00000001C00045D4: mov     [rsp+68h+var_48], rbx
 * 00000001C00045D9: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00045E0: nop     dword ptr [rax+rax+00h]
 * 00000001C00045E5: test    eax, eax
 * 00000001C00045E7: jnz     loc_1C00089D8
 * 00000001C00045ED: lea     r11, [rsp+68h+var_18]
 * 00000001C00045F2: mov     rbx, [r11+20h]
 * 00000001C00045F6: mov     rbp, [r11+28h]
 * 00000001C00045FA: mov     rsi, [r11+30h]
 * 00000001C00045FE: mov     rsp, r11
 * 00000001C0004601: pop     r15
 * 00000001C0004603: pop     r14
 * 00000001C0004605: pop     rdi
 * 00000001C0004606: retn
 * 00000001C0004608: mov     esi, 80000000h
 * 00000001C000460D: jmp     short loc_1C000459E
 * 00000001C00089D8: cmp     esi, 80000000h
 * 00000001C00089DE: jz      loc_1C00045ED
 * 00000001C00089E4: mov     [rsp+68h+var_20], rbp
 * 00000001C00089E9: xor     r9d, r9d
 * 00000001C00089EC: mov     [rsp+68h+var_28], r14
 * 00000001C00089F1: mov     r8, r15
 * 00000001C00089F4: mov     [rsp+68h+var_30], 80000000h
 * 00000001C00089FC: mov     rdx, rdi
 * 00000001C00089FF: mov     [rsp+68h+var_38], 1
 * 00000001C0008A07: and     [rsp+68h+var_40], 0
 * 00000001C0008A0D: lea     ecx, [r9+52h]
 * 00000001C0008A11: mov     [rsp+68h+var_48], rbx
 * 00000001C0008A16: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0008A1D: nop     dword ptr [rax+rax+00h]
 * 00000001C0008A22: nop
 * 00000001C0008A23: jmp     loc_1C00045ED
 */
