/*
 * XREFs of WPP_RECORDER_SF_sds @ 0x1C003567C
 * Callers:
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0002AE0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_MapStage @ 0x1C0003760 (Isoch_MapStage.c)
 *     Control_Transfer_Map @ 0x1C00040AC (Control_Transfer_Map.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C0005050 (TR_AddTRBRangeToSecureTransferRing.c)
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0005BA4 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     DynamicLock_Release @ 0x1C0006998 (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0006DD0 (DynamicLock_Acquire.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C00071A4 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_CompleteConfigureEndpointRequest @ 0x1C00073CC (UsbDevice_CompleteConfigureEndpointRequest.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C00075B0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     Debug_FreAssertMsg @ 0x1C00076EC (Debug_FreAssertMsg.c)
 *     XilEndpoint_Create @ 0x1C0008BE8 (XilEndpoint_Create.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0009430 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C000C2D0 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_MapStage @ 0x1C000CC1C (Bulk_MapStage.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C000E928 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C000EB74 (XilDeviceSlot_SetDeviceContext.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C000EC04 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x1C000EDD4 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     Register_ControllerReset @ 0x1C00102FC (Register_ControllerReset.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C001066C (Wmi_CreateControllerCapabilities.c)
 *     Controller_Start @ 0x1C00109E8 (Controller_Start.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0010C80 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011228 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00113F0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0011BF0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C00122E0 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0012CF4 (RootHub_AcquireReadModifyWriteLock.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0013C00 (Controller_WdfEvtDeviceD0Entry.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C00144CC (XilDeviceSlot_PrepareHardware.c)
 *     XilUsbDevice_Create @ 0x1C0014E2C (XilUsbDevice_Create.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C00160C4 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     XilDeviceSlot_Create @ 0x1C0016768 (XilDeviceSlot_Create.c)
 *     XilCommand_Create @ 0x1C00169DC (XilCommand_Create.c)
 *     XilUsbDevice_QueryAttributesFromTrustlet @ 0x1C0017C0C (XilUsbDevice_QueryAttributesFromTrustlet.c)
 *     Controller_AllocateIrqlTrackingArray @ 0x1C0018B0C (Controller_AllocateIrqlTrackingArray.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002DFB0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_AllocateSecureResources @ 0x1C002EF40 (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x1C002F0D4 (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x1C002F288 (XilCommand_FreeSecureResources.c)
 *     XilCommand_InitializeSecureResources @ 0x1C002F3E8 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C002F548 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C002F6A8 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C002F990 (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C002FAF4 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     Controller_D0EntryRestoreState @ 0x1C0030314 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C003063C (Controller_D0ExitSaveState.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x1C0030984 (Controller_DecrementNumberOfEndpointsOffloaded.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0034240 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0034430 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C0035A04 (XilDeviceSlot_AllocateSecureResources.c)
 *     XilDeviceSlot_CreateSecureObject @ 0x1C0035B7C (XilDeviceSlot_CreateSecureObject.c)
 *     XilDeviceSlot_FreeSecureResources @ 0x1C0035D04 (XilDeviceSlot_FreeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C0035E88 (XilDeviceSlot_InitializeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C0035FF4 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C00361A0 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C0036308 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0036494 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C0036618 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C0036A80 (XilEndpoint_CreateSecureObject.c)
 *     XilEndpoint_GetRemoteHandle @ 0x1C0036DB4 (XilEndpoint_GetRemoteHandle.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C0039D50 (Endpoint_UcxEvtEndpointReset.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C003D100 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C003D3E0 (RootHub_UcxEvtGetPortErrorCount.c)
 *     TR_AcquireSecureSegments @ 0x1C003E014 (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C003E52C (TR_CreateSecureObject.c)
 *     TR_FreeSecureTransferSegments @ 0x1C003EA5C (TR_FreeSecureTransferSegments.c)
 *     TR_InitializeTransferSegment @ 0x1C003EB98 (TR_InitializeTransferSegment.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C0044C18 (XilUsbDevice_CreateSecureObject.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C0045A8C (UsbDevice_GetEndpointOffloadInformation.c)
 *     UsbDevice_HandleAssignPinsForEndpointsToOffloadState @ 0x1C0045D80 (UsbDevice_HandleAssignPinsForEndpointsToOffloadState.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x1C0045F78 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnassignPinsForOffloadedEndpointsState @ 0x1C0046078 (UsbDevice_HandleUnassignPinsForOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnhandledEventReceivedState @ 0x1C00461C4 (UsbDevice_HandleUnhandledEventReceivedState.c)
 *     UsbDevice_SetResourceAssignmentCompletion @ 0x1C0046870 (UsbDevice_SetResourceAssignmentCompletion.c)
 *     UsbDevice_StopEndpointToOffloadedEndpointCompletion @ 0x1C00469D0 (UsbDevice_StopEndpointToOffloadedEndpointCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sds @ 0x1C003567C
 * Reason: Hex-Rays returned no pseudocode for 0x1C003567C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003567C: mov     [rsp+arg_0], rbx
 * 00000001C0035681: mov     [rsp+arg_8], rbp
 * 00000001C0035686: mov     [rsp+arg_10], rsi
 * 00000001C003568B: push    rdi
 * 00000001C003568C: push    r13
 * 00000001C003568E: push    r15
 * 00000001C0035690: sub     rsp, 60h
 * 00000001C0035694: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C003569B: lea     r13, aNull; "NULL"
 * 00000001C00356A2: mov     rdi, [rsp+78h+arg_38]
 * 00000001C00356AA: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00356AE: mov     rsi, [rsp+78h+arg_28]
 * 00000001C00356B6: mov     rbp, rcx
 * 00000001C00356B9: mov     eax, [rdx+2Ch]
 * 00000001C00356BC: lea     r15d, [rbx+6]
 * 00000001C00356C0: lea     r10d, [rbx+0Bh]
 * 00000001C00356C4: test    al, 2
 * 00000001C00356C6: jz      loc_1C003577B
 * 00000001C00356CC: cmp     byte ptr [rdx+29h], 2
 * 00000001C00356D0: jb      loc_1C003577B
 * 00000001C00356D6: test    rdi, rdi
 * 00000001C00356D9: jz      short loc_1C00356EC
 * 00000001C00356DB: mov     rdx, rbx
 * 00000001C00356DE: inc     rdx
 * 00000001C00356E1: cmp     byte ptr [rdi+rdx], 0
 * 00000001C00356E5: jnz     short loc_1C00356DE
 * 00000001C00356E7: inc     rdx
 * 00000001C00356EA: jmp     short loc_1C00356EF
 * 00000001C00356EC: mov     rdx, r15
 * 00000001C00356EF: test    rdi, rdi
 * 00000001C00356F2: mov     r9, rdi
 * 00000001C00356F5: cmovz   r9, r13
 * 00000001C00356F9: test    rsi, rsi
 * 00000001C00356FC: jz      short loc_1C0035710
 * 00000001C00356FE: mov     r8, rbx
 * 00000001C0035701: inc     r8
 * 00000001C0035704: cmp     byte ptr [rsi+r8], 0
 * 00000001C0035709: jnz     short loc_1C0035701
 * 00000001C003570B: inc     r8
 * 00000001C003570E: jmp     short loc_1C0035713
 * 00000001C0035710: mov     r8, r15
 * 00000001C0035713: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003571A: test    rsi, rsi
 * 00000001C003571D: mov     rcx, rsi
 * 00000001C0035720: cmovz   rcx, r13
 * 00000001C0035724: and     [rsp+78h+var_28], 0
 * 00000001C003572A: mov     [rsp+78h+var_30], rdx
 * 00000001C003572F: lea     rdx, [rsp+78h+arg_30]
 * 00000001C0035737: mov     [rsp+78h+var_38], r9
 * 00000001C003573C: mov     [rsp+78h+var_40], 4
 * 00000001C0035745: mov     [rsp+78h+var_48], rdx
 * 00000001C003574A: mov     edx, 2Bh ; '+'
 * 00000001C003574F: mov     [rsp+78h+var_50], r8
 * 00000001C0035754: lea     r8, WPP_5ace6a9c3ff4347ed3a705afad901349_Traceguids
 * 00000001C003575B: mov     [rsp+78h+var_58], rcx
 * 00000001C0035760: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0035767: movzx   r9d, r10w
 * 00000001C003576B: mov     rcx, [rcx+18h]
 * 00000001C003576F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0035775: mov     r10d, 0Ah
 * 00000001C003577B: test    rdi, rdi
 * 00000001C003577E: jz      short loc_1C0035791
 * 00000001C0035780: mov     rax, rbx
 * 00000001C0035783: inc     rax
 * 00000001C0035786: cmp     byte ptr [rdi+rax], 0
 * 00000001C003578A: jnz     short loc_1C0035783
 * 00000001C003578C: inc     rax
 * 00000001C003578F: jmp     short loc_1C0035794
 * 00000001C0035791: mov     rax, r15
 * 00000001C0035794: test    rdi, rdi
 * 00000001C0035797: cmovz   rdi, r13
 * 00000001C003579B: test    rsi, rsi
 * 00000001C003579E: jz      short loc_1C00357AE
 * 00000001C00357A0: inc     rbx
 * 00000001C00357A3: cmp     byte ptr [rsi+rbx], 0
 * 00000001C00357A7: jnz     short loc_1C00357A0
 * 00000001C00357A9: inc     rbx
 * 00000001C00357AC: jmp     short loc_1C00357B1
 * 00000001C00357AE: mov     rbx, r15
 * 00000001C00357B1: test    rsi, rsi
 * 00000001C00357B4: lea     r9, WPP_5ace6a9c3ff4347ed3a705afad901349_Traceguids
 * 00000001C00357BB: mov     edx, 2
 * 00000001C00357C0: mov     rcx, rbp
 * 00000001C00357C3: cmovz   rsi, r13
 * 00000001C00357C7: mov     r8d, edx
 * 00000001C00357CA: and     [rsp+78h+var_20], 0
 * 00000001C00357D0: mov     [rsp+78h+var_28], rax
 * 00000001C00357D5: lea     rax, [rsp+78h+arg_30]
 * 00000001C00357DD: mov     [rsp+78h+var_30], rdi
 * 00000001C00357E2: mov     [rsp+78h+var_38], 4
 * 00000001C00357EB: mov     [rsp+78h+var_40], rax
 * 00000001C00357F0: mov     [rsp+78h+var_48], rbx
 * 00000001C00357F5: mov     [rsp+78h+var_50], rsi
 * 00000001C00357FA: mov     word ptr [rsp+78h+var_58], r10w
 * 00000001C0035800: call    cs:__imp_WppAutoLogTrace
 * 00000001C0035807: nop     dword ptr [rax+rax+00h]
 * 00000001C003580C: lea     r11, [rsp+78h+var_18]
 * 00000001C0035811: mov     rbx, [r11+20h]
 * 00000001C0035815: mov     rbp, [r11+28h]
 * 00000001C0035819: mov     rsi, [r11+30h]
 * 00000001C003581D: mov     rsp, r11
 * 00000001C0035820: pop     r15
 * 00000001C0035822: pop     r13
 * 00000001C0035824: pop     rdi
 * 00000001C0035825: retn
 */
