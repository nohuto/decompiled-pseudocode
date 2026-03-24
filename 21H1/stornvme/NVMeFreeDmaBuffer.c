/*
 * XREFs of NVMeFreeDmaBuffer @ 0x1C000451C
 * Callers:
 *     QueryProtocolInfoCompletion @ 0x1C0001640 (QueryProtocolInfoCompletion.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0001930 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeCompletionDpcRoutine @ 0x1C0002270 (NVMeCompletionDpcRoutine.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C00036A0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     IoQueuesFreeResources @ 0x1C000B0C4 (IoQueuesFreeResources.c)
 *     IoQueuesInitialize @ 0x1C000B334 (IoQueuesInitialize.c)
 *     NVMeControllerRemove @ 0x1C000CE54 (NVMeControllerRemove.c)
 *     NVMeRequestComplete @ 0x1C000F468 (NVMeRequestComplete.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C00115A0 (IoctlDeleteReservedQueuePair.c)
 *     NVMeGetErrorInfoLogPageCompletion @ 0x1C0013480 (NVMeGetErrorInfoLogPageCompletion.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x1C0013530 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C00135E0 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C00138F0 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     QueryEnduranceInfoLogCompletion @ 0x1C0014CD0 (QueryEnduranceInfoLogCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0015180 (QueryTemperatureInfoHealthLogCompletion.c)
 *     SetProtocolInfoCompletion @ 0x1C0015D30 (SetProtocolInfoCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0017094 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0017318 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C00175E8 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransitionCompletion @ 0x1C00178D0 (NVMeGetAutoPowerStateTransitionCompletion.c)
 *     NVMeGetCloudSSDErrorRecoveryLogPageCompletion @ 0x1C0017AD0 (NVMeGetCloudSSDErrorRecoveryLogPageCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C0017D20 (NVMeGetLogPageCompletion.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0018040 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C0018720 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeReenumerateNameSpaceIdentifyCompletion @ 0x1C0019920 (NVMeReenumerateNameSpaceIdentifyCompletion.c)
 *     NVMeSyncHostTime @ 0x1C001B0A8 (NVMeSyncHostTime.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMeFreeDmaBuffer @ 0x1C000451C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000451C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000451C: push    rbx
 * 00000001C000451E: sub     rsp, 30h
 * 00000001C0004522: xor     eax, eax
 * 00000001C0004524: mov     rbx, r8
 * 00000001C0004527: test    r8, r8
 * 00000001C000452A: jz      short loc_1C0004563
 * 00000001C000452C: mov     r8, [r8]
 * 00000001C000452F: test    r8, r8
 * 00000001C0004532: jz      short loc_1C0004563
 * 00000001C0004534: test    r9, r9
 * 00000001C0004537: jz      short loc_1C0004563
 * 00000001C0004539: mov     [rsp+38h+var_10], r9
 * 00000001C000453E: mov     r9, rdx
 * 00000001C0004541: mov     rdx, rcx
 * 00000001C0004544: mov     [rsp+38h+var_18], 1
 * 00000001C000454C: lea     ecx, [rax+53h]
 * 00000001C000454F: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0004556: nop     dword ptr [rax+rax+00h]
 * 00000001C000455B: test    eax, eax
 * 00000001C000455D: jnz     short loc_1C0004563
 * 00000001C000455F: and     qword ptr [rbx], 0
 * 00000001C0004563: add     rsp, 30h
 * 00000001C0004567: pop     rbx
 * 00000001C0004568: retn
 */
