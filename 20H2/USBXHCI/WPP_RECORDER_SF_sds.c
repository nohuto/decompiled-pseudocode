/*
 * XREFs of WPP_RECORDER_SF_sds @ 0x1C0036B5C
 * Callers:
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0002AE0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_MapStage @ 0x1C0003780 (Isoch_MapStage.c)
 *     Control_Transfer_Map @ 0x1C00040CC (Control_Transfer_Map.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C0005050 (TR_AddTRBRangeToSecureTransferRing.c)
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0005C8C (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     DynamicLock_Release @ 0x1C0006D40 (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0007340 (DynamicLock_Acquire.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0007714 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_CompleteConfigureEndpointRequest @ 0x1C000793C (UsbDevice_CompleteConfigureEndpointRequest.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0007B20 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     Debug_FreAssertMsg @ 0x1C0007C5C (Debug_FreAssertMsg.c)
 *     XilEndpoint_Create @ 0x1C00095C8 (XilEndpoint_Create.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0009E10 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C000CBA0 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_MapStage @ 0x1C000D4EC (Bulk_MapStage.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C000F3B8 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C000F634 (XilDeviceSlot_SetDeviceContext.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C000F6C4 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x1C000F894 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     Register_ControllerReset @ 0x1C0010D88 (Register_ControllerReset.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C00110F8 (Wmi_CreateControllerCapabilities.c)
 *     Controller_Start @ 0x1C0011474 (Controller_Start.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0011710 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011EE0 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00120A0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C00128A0 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0013360 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0013DD0 (RootHub_AcquireReadModifyWriteLock.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0014CE0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_AllocateIrqlTrackingArray @ 0x1C001536C (Controller_AllocateIrqlTrackingArray.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C0015BCC (XilDeviceSlot_PrepareHardware.c)
 *     XilUsbDevice_Create @ 0x1C001646C (XilUsbDevice_Create.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C001766C (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     XilDeviceSlot_Create @ 0x1C00179B4 (XilDeviceSlot_Create.c)
 *     XilCommand_Create @ 0x1C0017CD8 (XilCommand_Create.c)
 *     XilUsbDevice_QueryAttributesFromTrustlet @ 0x1C0018F0C (XilUsbDevice_QueryAttributesFromTrustlet.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002F490 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_AllocateSecureResources @ 0x1C0030420 (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x1C00305B4 (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x1C0030768 (XilCommand_FreeSecureResources.c)
 *     XilCommand_InitializeSecureResources @ 0x1C00308C8 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C0030A28 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C0030B88 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C0030E7C (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C0030FE0 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     Controller_D0EntryRestoreState @ 0x1C00317F4 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C0031B1C (Controller_D0ExitSaveState.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x1C0031E64 (Controller_DecrementNumberOfEndpointsOffloaded.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0035720 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0035910 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C0036EE4 (XilDeviceSlot_AllocateSecureResources.c)
 *     XilDeviceSlot_CreateSecureObject @ 0x1C003705C (XilDeviceSlot_CreateSecureObject.c)
 *     XilDeviceSlot_FreeSecureResources @ 0x1C00371E4 (XilDeviceSlot_FreeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C0037368 (XilDeviceSlot_InitializeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C00374D4 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C0037680 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C00377E8 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0037974 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C0037AF8 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C0037F60 (XilEndpoint_CreateSecureObject.c)
 *     XilEndpoint_GetRemoteHandle @ 0x1C0038294 (XilEndpoint_GetRemoteHandle.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C003B230 (Endpoint_UcxEvtEndpointReset.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C003E5E0 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C003E8C0 (RootHub_UcxEvtGetPortErrorCount.c)
 *     TR_AcquireSecureSegments @ 0x1C003F4F4 (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C003FA0C (TR_CreateSecureObject.c)
 *     TR_FreeSecureTransferSegments @ 0x1C003FF3C (TR_FreeSecureTransferSegments.c)
 *     TR_InitializeTransferSegment @ 0x1C0040078 (TR_InitializeTransferSegment.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C0046108 (XilUsbDevice_CreateSecureObject.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C0046F7C (UsbDevice_GetEndpointOffloadInformation.c)
 *     UsbDevice_HandleAssignPinsForEndpointsToOffloadState @ 0x1C0047270 (UsbDevice_HandleAssignPinsForEndpointsToOffloadState.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x1C0047468 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnassignPinsForOffloadedEndpointsState @ 0x1C0047568 (UsbDevice_HandleUnassignPinsForOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnhandledEventReceivedState @ 0x1C00476B4 (UsbDevice_HandleUnhandledEventReceivedState.c)
 *     UsbDevice_SetResourceAssignmentCompletion @ 0x1C0047D70 (UsbDevice_SetResourceAssignmentCompletion.c)
 *     UsbDevice_StopEndpointToOffloadedEndpointCompletion @ 0x1C0047ED0 (UsbDevice_StopEndpointToOffloadedEndpointCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sds @ 0x1C0036B5C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0036B5C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0036B5C: mov     [rsp+arg_0], rbx
 * 00000001C0036B61: mov     [rsp+arg_8], rbp
 * 00000001C0036B66: mov     [rsp+arg_10], rsi
 * 00000001C0036B6B: push    rdi
 * 00000001C0036B6C: push    r13
 * 00000001C0036B6E: push    r15
 * 00000001C0036B70: sub     rsp, 60h
 * 00000001C0036B74: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0036B7B: lea     r13, aNull; "NULL"
 * 00000001C0036B82: mov     rdi, [rsp+78h+arg_38]
 * 00000001C0036B8A: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0036B8E: mov     rsi, [rsp+78h+arg_28]
 * 00000001C0036B96: mov     rbp, rcx
 * 00000001C0036B99: mov     eax, [rdx+2Ch]
 * 00000001C0036B9C: lea     r15d, [rbx+6]
 * 00000001C0036BA0: lea     r10d, [rbx+0Bh]
 * 00000001C0036BA4: test    al, 2
 * 00000001C0036BA6: jz      loc_1C0036C5B
 * 00000001C0036BAC: cmp     byte ptr [rdx+29h], 2
 * 00000001C0036BB0: jb      loc_1C0036C5B
 * 00000001C0036BB6: test    rdi, rdi
 * 00000001C0036BB9: jz      short loc_1C0036BCC
 * 00000001C0036BBB: mov     rdx, rbx
 * 00000001C0036BBE: inc     rdx
 * 00000001C0036BC1: cmp     byte ptr [rdi+rdx], 0
 * 00000001C0036BC5: jnz     short loc_1C0036BBE
 * 00000001C0036BC7: inc     rdx
 * 00000001C0036BCA: jmp     short loc_1C0036BCF
 * 00000001C0036BCC: mov     rdx, r15
 * 00000001C0036BCF: test    rdi, rdi
 * 00000001C0036BD2: mov     r9, rdi
 * 00000001C0036BD5: cmovz   r9, r13
 * 00000001C0036BD9: test    rsi, rsi
 * 00000001C0036BDC: jz      short loc_1C0036BF0
 * 00000001C0036BDE: mov     r8, rbx
 * 00000001C0036BE1: inc     r8
 * 00000001C0036BE4: cmp     byte ptr [rsi+r8], 0
 * 00000001C0036BE9: jnz     short loc_1C0036BE1
 * 00000001C0036BEB: inc     r8
 * 00000001C0036BEE: jmp     short loc_1C0036BF3
 * 00000001C0036BF0: mov     r8, r15
 * 00000001C0036BF3: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0036BFA: test    rsi, rsi
 * 00000001C0036BFD: mov     rcx, rsi
 * 00000001C0036C00: cmovz   rcx, r13
 * 00000001C0036C04: and     [rsp+78h+var_28], 0
 * 00000001C0036C0A: mov     [rsp+78h+var_30], rdx
 * 00000001C0036C0F: lea     rdx, [rsp+78h+arg_30]
 * 00000001C0036C17: mov     [rsp+78h+var_38], r9
 * 00000001C0036C1C: mov     [rsp+78h+var_40], 4
 * 00000001C0036C25: mov     [rsp+78h+var_48], rdx
 * 00000001C0036C2A: mov     edx, 2Bh ; '+'
 * 00000001C0036C2F: mov     [rsp+78h+var_50], r8
 * 00000001C0036C34: lea     r8, WPP_5ace6a9c3ff4347ed3a705afad901349_Traceguids
 * 00000001C0036C3B: mov     [rsp+78h+var_58], rcx
 * 00000001C0036C40: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0036C47: movzx   r9d, r10w
 * 00000001C0036C4B: mov     rcx, [rcx+18h]
 * 00000001C0036C4F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0036C55: mov     r10d, 0Ah
 * 00000001C0036C5B: test    rdi, rdi
 * 00000001C0036C5E: jz      short loc_1C0036C71
 * 00000001C0036C60: mov     rax, rbx
 * 00000001C0036C63: inc     rax
 * 00000001C0036C66: cmp     byte ptr [rdi+rax], 0
 * 00000001C0036C6A: jnz     short loc_1C0036C63
 * 00000001C0036C6C: inc     rax
 * 00000001C0036C6F: jmp     short loc_1C0036C74
 * 00000001C0036C71: mov     rax, r15
 * 00000001C0036C74: test    rdi, rdi
 * 00000001C0036C77: cmovz   rdi, r13
 * 00000001C0036C7B: test    rsi, rsi
 * 00000001C0036C7E: jz      short loc_1C0036C8E
 * 00000001C0036C80: inc     rbx
 * 00000001C0036C83: cmp     byte ptr [rsi+rbx], 0
 * 00000001C0036C87: jnz     short loc_1C0036C80
 * 00000001C0036C89: inc     rbx
 * 00000001C0036C8C: jmp     short loc_1C0036C91
 * 00000001C0036C8E: mov     rbx, r15
 * 00000001C0036C91: test    rsi, rsi
 * 00000001C0036C94: lea     r9, WPP_5ace6a9c3ff4347ed3a705afad901349_Traceguids
 * 00000001C0036C9B: mov     edx, 2
 * 00000001C0036CA0: mov     rcx, rbp
 * 00000001C0036CA3: cmovz   rsi, r13
 * 00000001C0036CA7: mov     r8d, edx
 * 00000001C0036CAA: and     [rsp+78h+var_20], 0
 * 00000001C0036CB0: mov     [rsp+78h+var_28], rax
 * 00000001C0036CB5: lea     rax, [rsp+78h+arg_30]
 * 00000001C0036CBD: mov     [rsp+78h+var_30], rdi
 * 00000001C0036CC2: mov     [rsp+78h+var_38], 4
 * 00000001C0036CCB: mov     [rsp+78h+var_40], rax
 * 00000001C0036CD0: mov     [rsp+78h+var_48], rbx
 * 00000001C0036CD5: mov     [rsp+78h+var_50], rsi
 * 00000001C0036CDA: mov     word ptr [rsp+78h+var_58], r10w
 * 00000001C0036CE0: call    cs:__imp_WppAutoLogTrace
 * 00000001C0036CE7: nop     dword ptr [rax+rax+00h]
 * 00000001C0036CEC: lea     r11, [rsp+78h+var_18]
 * 00000001C0036CF1: mov     rbx, [r11+20h]
 * 00000001C0036CF5: mov     rbp, [r11+28h]
 * 00000001C0036CF9: mov     rsi, [r11+30h]
 * 00000001C0036CFD: mov     rsp, r11
 * 00000001C0036D00: pop     r15
 * 00000001C0036D02: pop     r13
 * 00000001C0036D04: pop     rdi
 * 00000001C0036D05: retn
 */
