/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0063890
 * Callers:
 *     NtUserReportInertia @ 0x1C0003BD0 (NtUserReportInertia.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0006400 (RIMRegisterForInputWithCallbacks.c)
 *     RIMDoOnPnpNotification @ 0x1C0020EE0 (RIMDoOnPnpNotification.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0021140 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C0022964 (RIMDeliverDeviceResetRequest.c)
 *     ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z @ 0x1C0022D5C (-GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0023E10 (rimHandleAnyPnpRemovePendingDevices.c)
 *     _lambda_472f4db53ddf5878963a84144a71a26c_::_lambda_invoker_cdecl_ @ 0x1C0025EB0 (_lambda_472f4db53ddf5878963a84144a71a26c_--_lambda_invoker_cdecl_.c)
 *     RIMDeviceClassNotify @ 0x1C0026220 (RIMDeviceClassNotify.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C00265B4 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RIMReadInput @ 0x1C0026620 (RIMReadInput.c)
 *     RIMUnregisterForInput @ 0x1C0026970 (RIMUnregisterForInput.c)
 *     RawInputManagerObjectDelete @ 0x1C0029244 (RawInputManagerObjectDelete.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C0033D90 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBU_InputHitTestRes.c)
 *     xxxCreateThreadInfo @ 0x1C004FF68 (xxxCreateThreadInfo.c)
 *     xxxSetProcessInitState @ 0x1C0063630 (xxxSetProcessInitState.c)
 *     ?CheckAppStarting@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0064DE0 (-CheckAppStarting@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     RIMAllocateHidDesc @ 0x1C006E23C (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C006E4C4 (RIMCreateHidDesc.c)
 *     RIMHidGetCaps @ 0x1C006ECC8 (RIMHidGetCaps.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C006F364 (RIMFindSiblingPointerDeviceForMouse.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C0075900 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     EtwTraceUIPISystemError @ 0x1C00774A0 (EtwTraceUIPISystemError.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C0077AA8 (rimResetPnpRemovePendingStateBits.c)
 *     rimDeviceResetApc @ 0x1C00BC610 (rimDeviceResetApc.c)
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00BD2F4 (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00BD338 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00BF6BC (rimFreeAutoRepeatCompleteFrame.c)
 *     UserAddBaseWindowHandle @ 0x1C013B330 (UserAddBaseWindowHandle.c)
 *     UserDeleteBaseWindowHandle @ 0x1C013B5D0 (UserDeleteBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C013B7A4 (UserFindBaseWindowHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01579E4 (RIMIDERemoveInjectionDevice.c)
 *     RIMAddToActiveDevices @ 0x1C015BDA8 (RIMAddToActiveDevices.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C015E16C (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPointerInputType @ 0x1C015E880 (RIMGetPointerInputType.c)
 *     RIMRemoveFromActiveDevices @ 0x1C015F730 (RIMRemoveFromActiveDevices.c)
 *     RIMFindSiblingMouseDevice @ 0x1C0161B94 (RIMFindSiblingMouseDevice.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C0161DDC (RIMMarkSiblingMouseDevice.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0162998 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C0162D9C (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C016721C (RIMIDECreateHIDDesc.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C016A200 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     RIMVirtDeviceClassNotify @ 0x1C016C488 (RIMVirtDeviceClassNotify.c)
 *     rimDispatchCompleteFrame @ 0x1C01737D4 (rimDispatchCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0173FD4 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimObsDeliverInputToObserver @ 0x1C017CB90 (rimObsDeliverInputToObserver.c)
 *     rimObsObserveNextInput @ 0x1C017D200 (rimObsObserveNextInput.c)
 *     rimObsPopInputMessage @ 0x1C017D36C (rimObsPopInputMessage.c)
 *     rimObsPushInputMessage @ 0x1C017D5E4 (rimObsPushInputMessage.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C017DE28 (rimObsUpdateInputObserverRegistration.c)
 *     ?RIMOnTTMDeviceClose@@YAX_K@Z @ 0x1C0180360 (-RIMOnTTMDeviceClose@@YAX_K@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0190400 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0196890 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019AA68 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C019F3F0 (-RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C01A7BF4 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01A866C (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     InitCreateUserCrit @ 0x1C0293B84 (InitCreateUserCrit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C0063890
 * Reason: Hex-Rays returned no pseudocode for 0x1C0063890
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0063890: mov     [rsp+arg_0], rbx
 * 00000001C0063895: mov     [rsp+arg_8], rbp
 * 00000001C006389A: mov     [rsp+arg_10], rsi
 * 00000001C006389F: push    rdi
 * 00000001C00638A0: push    r14
 * 00000001C00638A2: push    r15
 * 00000001C00638A4: sub     rsp, 40h
 * 00000001C00638A8: mov     r14d, r8d
 * 00000001C00638AB: mov     r15, rcx
 * 00000001C00638AE: mov     edi, r8d
 * 00000001C00638B1: shr     rdi, 10h
 * 00000001C00638B5: movzx   esi, dl
 * 00000001C00638B8: lea     ebx, [r14-1]
 * 00000001C00638BC: movzx   ebp, r9w
 * 00000001C00638C0: mov     r10d, ebx
 * 00000001C00638C3: and     ebx, 1Fh
 * 00000001C00638C6: shr     r10, 5
 * 00000001C00638CA: lea     rax, [rdi+rdi*4]
 * 00000001C00638CE: and     r10d, 7FFh
 * 00000001C00638D5: mov     edx, ebx
 * 00000001C00638D7: mov     ebx, 8
 * 00000001C00638DC: lea     r11, [r10+rax*4]
 * 00000001C00638E0: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00638E7: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00638EC: bt      eax, edx
 * 00000001C00638EF: jb      loc_1C00F8968
 * 00000001C00638F5: and     [rsp+58h+var_20], 0
 * 00000001C00638FB: lea     rax, [rsp+58h+arg_28]
 * 00000001C0063903: mov     r9, [rsp+58h+arg_20]
 * 00000001C006390B: mov     r8d, r14d
 * 00000001C006390E: mov     [rsp+58h+var_28], rbx
 * 00000001C0063913: mov     edx, esi
 * 00000001C0063915: mov     [rsp+58h+var_30], rax
 * 00000001C006391A: mov     rcx, r15
 * 00000001C006391D: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C0063922: call    cs:__imp_WppAutoLogTrace
 * 00000001C0063929: nop     dword ptr [rax+rax+00h]
 * 00000001C006392E: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0063933: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0063938: mov     rsi, [rsp+58h+arg_10]
 * 00000001C006393D: add     rsp, 40h
 * 00000001C0063941: pop     r15
 * 00000001C0063943: pop     r14
 * 00000001C0063945: pop     rdi
 * 00000001C0063946: retn
 * 00000001C00F8968: lea     rcx, [rdi+rdi*4]
 * 00000001C00F896C: add     rcx, rcx
 * 00000001C00F896F: cmp     [r10+rcx*8+29h], sil
 * 00000001C00F8974: jb      loc_1C00638F5
 * 00000001C00F897A: and     [rsp+58h+var_28], 0
 * 00000001C00F8980: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00F8988: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00F898F: mov     r9d, ebp
 * 00000001C00F8992: mov     r8, [rsp+58h+arg_20]
 * 00000001C00F899A: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00F899F: mov     [rsp+58h+var_30], rbx
 * 00000001C00F89A4: mov     [rsp+58h+var_38], rdx
 * 00000001C00F89A9: mov     edx, 2Bh ; '+'
 * 00000001C00F89AE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00F89B4: nop
 * 00000001C00F89B5: jmp     loc_1C00638F5
 */
