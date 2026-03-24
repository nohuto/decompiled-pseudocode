/*
 * XREFs of NVMeFreeDmaBuffer @ 0x1C000451C
 * Callers:
 *     QueryProtocolInfoCompletion @ 0x1C0001640 (QueryProtocolInfoCompletion.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0001930 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeCompletionDpcRoutine @ 0x1C0002270 (NVMeCompletionDpcRoutine.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C00036A0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     IoQueuesFreeResources @ 0x1C000B074 (IoQueuesFreeResources.c)
 *     IoQueuesInitialize @ 0x1C000B2E4 (IoQueuesInitialize.c)
 *     NVMeControllerRemove @ 0x1C000CE6C (NVMeControllerRemove.c)
 *     NVMeRequestComplete @ 0x1C000F3F0 (NVMeRequestComplete.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C0011528 (IoctlDeleteReservedQueuePair.c)
 *     NVMeGetErrorInfoLogPageCompletion @ 0x1C0013400 (NVMeGetErrorInfoLogPageCompletion.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x1C00134B0 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C0013560 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0013870 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     QueryEnduranceInfoLogCompletion @ 0x1C0014C50 (QueryEnduranceInfoLogCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0015100 (QueryTemperatureInfoHealthLogCompletion.c)
 *     SetProtocolInfoCompletion @ 0x1C0015CB0 (SetProtocolInfoCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0017014 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0017298 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0017568 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransitionCompletion @ 0x1C0017850 (NVMeGetAutoPowerStateTransitionCompletion.c)
 *     NVMeGetCloudSSDErrorRecoveryLogPageCompletion @ 0x1C0017A50 (NVMeGetCloudSSDErrorRecoveryLogPageCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C0017C90 (NVMeGetLogPageCompletion.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0017FB0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C0018690 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeReenumerateNameSpaceIdentifyCompletion @ 0x1C0019880 (NVMeReenumerateNameSpaceIdentifyCompletion.c)
 *     NVMeSyncHostTime @ 0x1C001AFD8 (NVMeSyncHostTime.c)
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
 * 00000001C000452A: jz      short loc_1C000455E
 * 00000001C000452C: mov     r8, [r8]
 * 00000001C000452F: test    r8, r8
 * 00000001C0004532: jz      short loc_1C000455E
 * 00000001C0004534: mov     [rsp+38h+var_10], r9
 * 00000001C0004539: mov     r9, rdx
 * 00000001C000453C: mov     rdx, rcx
 * 00000001C000453F: mov     [rsp+38h+var_18], 1
 * 00000001C0004547: lea     ecx, [rax+53h]
 * 00000001C000454A: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0004551: nop     dword ptr [rax+rax+00h]
 * 00000001C0004556: test    eax, eax
 * 00000001C0004558: jnz     short loc_1C000455E
 * 00000001C000455A: and     qword ptr [rbx], 0
 * 00000001C000455E: add     rsp, 30h
 * 00000001C0004562: pop     rbx
 * 00000001C0004563: retn
 */
