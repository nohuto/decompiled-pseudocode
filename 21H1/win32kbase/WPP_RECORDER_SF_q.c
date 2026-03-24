/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C00A07E0
 * Callers:
 *     NtUserReportInertia @ 0x1C0003A80 (NtUserReportInertia.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0037400 (RIMRegisterForInputWithCallbacks.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C004E030 (RIMFindSiblingPointerDeviceForMouse.c)
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C004F1B4 (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C004F1F8 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C005170C (rimFreeAutoRepeatCompleteFrame.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C0056DD0 (rimResetPnpRemovePendingStateBits.c)
 *     rimDeviceResetApc @ 0x1C00574F0 (rimDeviceResetApc.c)
 *     RIMDoOnPnpNotification @ 0x1C0059D84 (RIMDoOnPnpNotification.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C005A46C (RIMDeliverDeviceResetRequest.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C005AE30 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     RawInputManagerObjectDelete @ 0x1C005CEEC (RawInputManagerObjectDelete.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C0063D5C (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBU_InputHitTestRes.c)
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C009D130 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     RIMAllocateHidDesc @ 0x1C009E724 (RIMAllocateHidDesc.c)
 *     _lambda_472f4db53ddf5878963a84144a71a26c_::_lambda_invoker_cdecl_ @ 0x1C009ECE0 (_lambda_472f4db53ddf5878963a84144a71a26c_--_lambda_invoker_cdecl_.c)
 *     RIMDeviceClassNotify @ 0x1C009F050 (RIMDeviceClassNotify.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C009F4EC (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RIMCreateHidDesc @ 0x1C009F54C (RIMCreateHidDesc.c)
 *     EtwTraceUIPISystemError @ 0x1C009FDF0 (EtwTraceUIPISystemError.c)
 *     ?CheckAppStarting@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00A02A0 (-CheckAppStarting@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxSetProcessInitState @ 0x1C00A0580 (xxxSetProcessInitState.c)
 *     RIMReadInput @ 0x1C00A08D0 (RIMReadInput.c)
 *     RIMUnregisterForInput @ 0x1C00A0B60 (RIMUnregisterForInput.c)
 *     RIMHidGetCaps @ 0x1C00A2DB4 (RIMHidGetCaps.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00A36E0 (rimHandleAnyPnpRemovePendingDevices.c)
 *     ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z @ 0x1C00C1390 (-GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z.c)
 *     UserAddBaseWindowHandle @ 0x1C01439D0 (UserAddBaseWindowHandle.c)
 *     UserDeleteBaseWindowHandle @ 0x1C0143C70 (UserDeleteBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C0143E44 (UserFindBaseWindowHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0160294 (RIMIDERemoveInjectionDevice.c)
 *     RIMAddToActiveDevices @ 0x1C0164658 (RIMAddToActiveDevices.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C0166A1C (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPointerInputType @ 0x1C0167130 (RIMGetPointerInputType.c)
 *     RIMRemoveFromActiveDevices @ 0x1C0167FE0 (RIMRemoveFromActiveDevices.c)
 *     RIMFindSiblingMouseDevice @ 0x1C016A444 (RIMFindSiblingMouseDevice.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C016A68C (RIMMarkSiblingMouseDevice.c)
 *     RIMVirtAllocateHidDesc @ 0x1C016B248 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C016B64C (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C016FACC (RIMIDECreateHIDDesc.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C0172AB0 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     RIMVirtDeviceClassNotify @ 0x1C0174BE8 (RIMVirtDeviceClassNotify.c)
 *     rimDispatchCompleteFrame @ 0x1C017BF34 (rimDispatchCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C017C104 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimObsDeliverInputToObserver @ 0x1C0184CC0 (rimObsDeliverInputToObserver.c)
 *     rimObsObserveNextInput @ 0x1C0185330 (rimObsObserveNextInput.c)
 *     rimObsPopInputMessage @ 0x1C018549C (rimObsPopInputMessage.c)
 *     rimObsPushInputMessage @ 0x1C0185714 (rimObsPushInputMessage.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C0185F58 (rimObsUpdateInputObserverRegistration.c)
 *     ?RIMOnTTMDeviceClose@@YAX_K@Z @ 0x1C01885A0 (-RIMOnTTMDeviceClose@@YAX_K@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0198620 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019EAB0 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01A2CC8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C01A74F0 (-RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C01AFCD4 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01B074C (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     InitCreateUserCrit @ 0x1C029B0F0 (InitCreateUserCrit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C00A07E0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00A07E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00A07E0: mov     [rsp+arg_0], rbx
 * 00000001C00A07E5: mov     [rsp+arg_8], rbp
 * 00000001C00A07EA: mov     [rsp+arg_10], rsi
 * 00000001C00A07EF: push    rdi
 * 00000001C00A07F0: push    r14
 * 00000001C00A07F2: push    r15
 * 00000001C00A07F4: sub     rsp, 40h
 * 00000001C00A07F8: mov     r14d, r8d
 * 00000001C00A07FB: mov     r15, rcx
 * 00000001C00A07FE: mov     edi, r8d
 * 00000001C00A0801: shr     rdi, 10h
 * 00000001C00A0805: movzx   esi, dl
 * 00000001C00A0808: lea     ebx, [r14-1]
 * 00000001C00A080C: movzx   ebp, r9w
 * 00000001C00A0810: mov     r10d, ebx
 * 00000001C00A0813: and     ebx, 1Fh
 * 00000001C00A0816: shr     r10, 5
 * 00000001C00A081A: lea     rax, [rdi+rdi*4]
 * 00000001C00A081E: and     r10d, 7FFh
 * 00000001C00A0825: mov     edx, ebx
 * 00000001C00A0827: mov     ebx, 8
 * 00000001C00A082C: lea     r11, [r10+rax*4]
 * 00000001C00A0830: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00A0837: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00A083C: bt      eax, edx
 * 00000001C00A083F: jb      loc_1C0116F02
 * 00000001C00A0845: and     [rsp+58h+var_20], 0
 * 00000001C00A084B: lea     rax, [rsp+58h+arg_28]
 * 00000001C00A0853: mov     r9, [rsp+58h+arg_20]
 * 00000001C00A085B: mov     r8d, r14d
 * 00000001C00A085E: mov     [rsp+58h+var_28], rbx
 * 00000001C00A0863: mov     edx, esi
 * 00000001C00A0865: mov     [rsp+58h+var_30], rax
 * 00000001C00A086A: mov     rcx, r15
 * 00000001C00A086D: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00A0872: call    cs:__imp_WppAutoLogTrace
 * 00000001C00A0879: nop     dword ptr [rax+rax+00h]
 * 00000001C00A087E: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00A0883: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00A0888: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00A088D: add     rsp, 40h
 * 00000001C00A0891: pop     r15
 * 00000001C00A0893: pop     r14
 * 00000001C00A0895: pop     rdi
 * 00000001C00A0896: retn
 * 00000001C0116F02: lea     rcx, [rdi+rdi*4]
 * 00000001C0116F06: add     rcx, rcx
 * 00000001C0116F09: cmp     [r10+rcx*8+29h], sil
 * 00000001C0116F0E: jb      loc_1C00A0845
 * 00000001C0116F14: and     [rsp+58h+var_28], 0
 * 00000001C0116F1A: lea     rdx, [rsp+58h+arg_28]
 * 00000001C0116F22: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0116F29: mov     r9d, ebp
 * 00000001C0116F2C: mov     r8, [rsp+58h+arg_20]
 * 00000001C0116F34: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0116F39: mov     [rsp+58h+var_30], rbx
 * 00000001C0116F3E: mov     [rsp+58h+var_38], rdx
 * 00000001C0116F43: mov     edx, 2Bh ; '+'
 * 00000001C0116F48: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0116F4E: nop
 * 00000001C0116F4F: jmp     loc_1C00A0845
 */
