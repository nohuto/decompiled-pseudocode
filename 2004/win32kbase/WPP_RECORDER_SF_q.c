/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C00AE4D0
 * Callers:
 *     NtUserReportInertia @ 0x1C0003BD0 (NtUserReportInertia.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0006400 (RIMRegisterForInputWithCallbacks.c)
 *     RIMDoOnPnpNotification @ 0x1C0015E90 (RIMDoOnPnpNotification.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C0016958 (RIMDeliverDeviceResetRequest.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0016DF0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     rimDeviceResetApc @ 0x1C0019BE0 (rimDeviceResetApc.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C0056604 (rimResetPnpRemovePendingStateBits.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00576E0 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C005B9F0 (RIMFindSiblingPointerDeviceForMouse.c)
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C005CD24 (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C005CD68 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C005F37C (rimFreeAutoRepeatCompleteFrame.c)
 *     RawInputManagerObjectDelete @ 0x1C00657A4 (RawInputManagerObjectDelete.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C006ED0C (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBU_InputHitTestRes.c)
 *     xxxCreateThreadInfo @ 0x1C0072F8C (xxxCreateThreadInfo.c)
 *     RIMDeviceClassNotify @ 0x1C00AAD80 (RIMDeviceClassNotify.c)
 *     RIMUnregisterForInput @ 0x1C00AB430 (RIMUnregisterForInput.c)
 *     RIMReadInput @ 0x1C00ABA70 (RIMReadInput.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C00ABE00 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RIMCreateHidDesc @ 0x1C00ABE60 (RIMCreateHidDesc.c)
 *     EtwTraceUIPISystemError @ 0x1C00ADAE0 (EtwTraceUIPISystemError.c)
 *     ?CheckAppStarting@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00ADF90 (-CheckAppStarting@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxSetProcessInitState @ 0x1C00AE270 (xxxSetProcessInitState.c)
 *     RIMHidGetCaps @ 0x1C00AED04 (RIMHidGetCaps.c)
 *     _lambda_472f4db53ddf5878963a84144a71a26c_::_lambda_invoker_cdecl_ @ 0x1C00AF210 (_lambda_472f4db53ddf5878963a84144a71a26c_--_lambda_invoker_cdecl_.c)
 *     RIMAllocateHidDesc @ 0x1C00AF298 (RIMAllocateHidDesc.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C00B0300 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z @ 0x1C00C20FC (-GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z.c)
 *     UserAddBaseWindowHandle @ 0x1C013D680 (UserAddBaseWindowHandle.c)
 *     UserDeleteBaseWindowHandle @ 0x1C013D920 (UserDeleteBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C013DAF4 (UserFindBaseWindowHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0159F44 (RIMIDERemoveInjectionDevice.c)
 *     RIMAddToActiveDevices @ 0x1C015E308 (RIMAddToActiveDevices.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C01606CC (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPointerInputType @ 0x1C0160DE0 (RIMGetPointerInputType.c)
 *     RIMRemoveFromActiveDevices @ 0x1C0161C90 (RIMRemoveFromActiveDevices.c)
 *     RIMFindSiblingMouseDevice @ 0x1C01640F4 (RIMFindSiblingMouseDevice.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C016433C (RIMMarkSiblingMouseDevice.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0164EF8 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C01652FC (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C016977C (RIMIDECreateHIDDesc.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C016C760 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     RIMVirtDeviceClassNotify @ 0x1C016E8B8 (RIMVirtDeviceClassNotify.c)
 *     rimDispatchCompleteFrame @ 0x1C0175C04 (rimDispatchCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0176404 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimObsDeliverInputToObserver @ 0x1C017EFC0 (rimObsDeliverInputToObserver.c)
 *     rimObsObserveNextInput @ 0x1C017F630 (rimObsObserveNextInput.c)
 *     rimObsPopInputMessage @ 0x1C017F79C (rimObsPopInputMessage.c)
 *     rimObsPushInputMessage @ 0x1C017FA14 (rimObsPushInputMessage.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C0180258 (rimObsUpdateInputObserverRegistration.c)
 *     ?RIMOnTTMDeviceClose@@YAX_K@Z @ 0x1C01828A0 (-RIMOnTTMDeviceClose@@YAX_K@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0192920 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0198DC0 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019CF68 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C01A1790 (-RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C01A9F74 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01AA9EC (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     InitCreateUserCrit @ 0x1C029531C (InitCreateUserCrit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C00AE4D0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00AE4D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00AE4D0: mov     [rsp+arg_0], rbx
 * 00000001C00AE4D5: mov     [rsp+arg_8], rbp
 * 00000001C00AE4DA: mov     [rsp+arg_10], rsi
 * 00000001C00AE4DF: push    rdi
 * 00000001C00AE4E0: push    r14
 * 00000001C00AE4E2: push    r15
 * 00000001C00AE4E4: sub     rsp, 40h
 * 00000001C00AE4E8: mov     r14d, r8d
 * 00000001C00AE4EB: mov     r15, rcx
 * 00000001C00AE4EE: mov     edi, r8d
 * 00000001C00AE4F1: shr     rdi, 10h
 * 00000001C00AE4F5: movzx   esi, dl
 * 00000001C00AE4F8: lea     ebx, [r14-1]
 * 00000001C00AE4FC: movzx   ebp, r9w
 * 00000001C00AE500: mov     r10d, ebx
 * 00000001C00AE503: and     ebx, 1Fh
 * 00000001C00AE506: shr     r10, 5
 * 00000001C00AE50A: lea     rax, [rdi+rdi*4]
 * 00000001C00AE50E: and     r10d, 7FFh
 * 00000001C00AE515: mov     edx, ebx
 * 00000001C00AE517: mov     ebx, 8
 * 00000001C00AE51C: lea     r11, [r10+rax*4]
 * 00000001C00AE520: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00AE527: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00AE52C: bt      eax, edx
 * 00000001C00AE52F: jb      loc_1C0111438
 * 00000001C00AE535: and     [rsp+58h+var_20], 0
 * 00000001C00AE53B: lea     rax, [rsp+58h+arg_28]
 * 00000001C00AE543: mov     r9, [rsp+58h+arg_20]
 * 00000001C00AE54B: mov     r8d, r14d
 * 00000001C00AE54E: mov     [rsp+58h+var_28], rbx
 * 00000001C00AE553: mov     edx, esi
 * 00000001C00AE555: mov     [rsp+58h+var_30], rax
 * 00000001C00AE55A: mov     rcx, r15
 * 00000001C00AE55D: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00AE562: call    cs:__imp_WppAutoLogTrace
 * 00000001C00AE569: nop     dword ptr [rax+rax+00h]
 * 00000001C00AE56E: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00AE573: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00AE578: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00AE57D: add     rsp, 40h
 * 00000001C00AE581: pop     r15
 * 00000001C00AE583: pop     r14
 * 00000001C00AE585: pop     rdi
 * 00000001C00AE586: retn
 * 00000001C0111438: lea     rcx, [rdi+rdi*4]
 * 00000001C011143C: add     rcx, rcx
 * 00000001C011143F: cmp     [r10+rcx*8+29h], sil
 * 00000001C0111444: jb      loc_1C00AE535
 * 00000001C011144A: and     [rsp+58h+var_28], 0
 * 00000001C0111450: lea     rdx, [rsp+58h+arg_28]
 * 00000001C0111458: mov     rax, cs:pfnWppTraceMessage
 * 00000001C011145F: mov     r9d, ebp
 * 00000001C0111462: mov     r8, [rsp+58h+arg_20]
 * 00000001C011146A: mov     rcx, [r10+rcx*8+18h]
 * 00000001C011146F: mov     [rsp+58h+var_30], rbx
 * 00000001C0111474: mov     [rsp+58h+var_38], rdx
 * 00000001C0111479: mov     edx, 2Bh ; '+'
 * 00000001C011147E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0111484: nop
 * 00000001C0111485: jmp     loc_1C00AE535
 */
