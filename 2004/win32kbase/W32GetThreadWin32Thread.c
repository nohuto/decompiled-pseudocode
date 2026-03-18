/*
 * XREFs of W32GetThreadWin32Thread @ 0x1C0087B20
 * Callers:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C0005E10 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 *     UserGlobalAtomTableCallout @ 0x1C000F1EC (UserGlobalAtomTableCallout.c)
 *     GetMonitorRect @ 0x1C0011784 (GetMonitorRect.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C00125B4 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     HmgAllocateObjectAttr @ 0x1C0015124 (HmgAllocateObjectAttr.c)
 *     NtUserVkKeyScanEx @ 0x1C0018D10 (NtUserVkKeyScanEx.c)
 *     xxxInternalToUnicode @ 0x1C00193E0 (xxxInternalToUnicode.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C001E7E0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 *     EtwTraceQueueMessage @ 0x1C0024B70 (EtwTraceQueueMessage.c)
 *     EtwTraceQueueInputMessage @ 0x1C0024C58 (EtwTraceQueueInputMessage.c)
 *     EtwTraceBeginAppMessageProcessing @ 0x1C00264E0 (EtwTraceBeginAppMessageProcessing.c)
 *     EtwTraceBeginSendMessage @ 0x1C00267F0 (EtwTraceBeginSendMessage.c)
 *     EtwTraceEndAppMessageProcessing @ 0x1C0026BE0 (EtwTraceEndAppMessageProcessing.c)
 *     EtwTraceRetrievePostMessage @ 0x1C0026F40 (EtwTraceRetrievePostMessage.c)
 *     EtwTraceEndSendMessage @ 0x1C0029610 (EtwTraceEndSendMessage.c)
 *     EtwTraceBeginRetrieveSendMessage @ 0x1C0029640 (EtwTraceBeginRetrieveSendMessage.c)
 *     EtwTraceEndRetrieveSendMessage @ 0x1C0029670 (EtwTraceEndRetrieveSendMessage.c)
 *     PtiFromThreadId @ 0x1C002F8C0 (PtiFromThreadId.c)
 *     InitSystemThread @ 0x1C0030EE0 (InitSystemThread.c)
 *     UserIsWindowGdiScaled @ 0x1C0031F00 (UserIsWindowGdiScaled.c)
 *     EtwTraceRetrievePseudoMessage @ 0x1C003B9C0 (EtwTraceRetrievePseudoMessage.c)
 *     EtwTraceRetrieveQueueEventMessage @ 0x1C003CC70 (EtwTraceRetrieveQueueEventMessage.c)
 *     EtwTraceRetrieveInputMessage @ 0x1C003E100 (EtwTraceRetrieveInputMessage.c)
 *     GreDecNonRBLockCount @ 0x1C0041920 (GreDecNonRBLockCount.c)
 *     GreIncNonRBLockCount @ 0x1C0041950 (GreIncNonRBLockCount.c)
 *     _GetKeyNameText @ 0x1C00425D0 (_GetKeyNameText.c)
 *     _GetKeyState @ 0x1C0043A60 (_GetKeyState.c)
 *     EtwTraceInputQueueLocked @ 0x1C0043C90 (EtwTraceInputQueueLocked.c)
 *     NtUserSetInputServiceState @ 0x1C00446F0 (NtUserSetInputServiceState.c)
 *     EtwTraceWakeDIT @ 0x1C00458A0 (EtwTraceWakeDIT.c)
 *     ?Init@InputThreadState@CInputThread@@QEAAXXZ @ 0x1C0047200 (-Init@InputThreadState@CInputThread@@QEAAXXZ.c)
 *     _GetDC @ 0x1C004CC10 (_GetDC.c)
 *     EtwTraceEndInjectMouse @ 0x1C0053AB0 (EtwTraceEndInjectMouse.c)
 *     EtwTraceBeginInjectMouse @ 0x1C0053AF0 (EtwTraceBeginInjectMouse.c)
 *     EtwTraceInputQueueLockedPeekRecursion @ 0x1C0054890 (EtwTraceInputQueueLockedPeekRecursion.c)
 *     EtwTraceInputQueueNoRemoveLocker @ 0x1C0057670 (EtwTraceInputQueueNoRemoveLocker.c)
 *     UserIsCurrentThreadGdiScaled @ 0x1C00579D0 (UserIsCurrentThreadGdiScaled.c)
 *     EngUpdateDeviceSurface @ 0x1C0058010 (EngUpdateDeviceSurface.c)
 *     ?bIncludeSprites@SURFACE@@SAHXZ @ 0x1C00587E0 (-bIncludeSprites@SURFACE@@SAHXZ.c)
 *     EtwTraceWakeRIT @ 0x1C0058D50 (EtwTraceWakeRIT.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C005A2B8 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     ?vClearIncludeSprites@SURFACE@@SAXXZ @ 0x1C005B410 (-vClearIncludeSprites@SURFACE@@SAXXZ.c)
 *     ?vSetIncludeSprites@SURFACE@@SAXXZ @ 0x1C005B440 (-vSetIncludeSprites@SURFACE@@SAXXZ.c)
 *     EtwTraceInputQueueUnLocked @ 0x1C005DE60 (EtwTraceInputQueueUnLocked.c)
 *     LeaveRenderBlock @ 0x1C005F4A0 (LeaveRenderBlock.c)
 *     EnterRenderBlock @ 0x1C005F4D0 (EnterRenderBlock.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00690EC (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C006DF18 (HMValidateHandleNoSecure.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C006E2B0 (CoalesceInputSourceMouseMoves.c)
 *     EtwTraceWakePump @ 0x1C006E480 (EtwTraceWakePump.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0070E3C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     UserThreadCallout @ 0x1C0072890 (UserThreadCallout.c)
 *     xxxCreateThreadInfo @ 0x1C0072F8C (xxxCreateThreadInfo.c)
 *     ValidateHmenu @ 0x1C00742B0 (ValidateHmenu.c)
 *     HMValidateHandle @ 0x1C0074300 (HMValidateHandle.c)
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 *     _GetKeyboardLayout @ 0x1C0076FF0 (_GetKeyboardLayout.c)
 *     NtUserMapVirtualKeyEx @ 0x1C0077150 (NtUserMapVirtualKeyEx.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C007BEC0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00822A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0083EF8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     HmgFreeDcAttr @ 0x1C0086408 (HmgFreeDcAttr.c)
 *     PushThreadGuardedObject @ 0x1C0086B80 (PushThreadGuardedObject.c)
 *     ?isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ @ 0x1C0086E80 (-isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ.c)
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 *     NtUserGetDC @ 0x1C0090AC0 (NtUserGetDC.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00958C0 (--1SURFMEM@@QEAA@XZ.c)
 *     UserGetMonitorDC @ 0x1C00A52E8 (UserGetMonitorDC.c)
 *     GreCreateSemaphoreInternal @ 0x1C00A56B4 (GreCreateSemaphoreInternal.c)
 *     UserGetDesktopIdForCurrentThread @ 0x1C00A9A40 (UserGetDesktopIdForCurrentThread.c)
 *     RIMDeviceClassNotify @ 0x1C00AAD80 (RIMDeviceClassNotify.c)
 *     NtUserGetAsyncKeyState @ 0x1C00AC550 (NtUserGetAsyncKeyState.c)
 *     NtUserGetKeyboardState @ 0x1C00AC8F0 (NtUserGetKeyboardState.c)
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C00AF5FC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C00AF798 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     NtUserQueryDisplayConfig @ 0x1C00B3D90 (NtUserQueryDisplayConfig.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C00B4150 (NtUserDisplayConfigGetDeviceInfo.c)
 *     GdiThreadCallout @ 0x1C00BD690 (GdiThreadCallout.c)
 *     HmgFreeObjectAttr @ 0x1C00C0D68 (HmgFreeObjectAttr.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C32F0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GdiThreadCalloutCleanup @ 0x1C00CC8D0 (GdiThreadCalloutCleanup.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00CEA50 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00CEA9C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C00CF220 (-GrepIsPreviousModeKernel@@YAHXZ.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00D09EC (--0EngModeState@@QEAA@XZ.c)
 *     AddToDeferredUserCritThreadUnlockList @ 0x1C011AF88 (AddToDeferredUserCritThreadUnlockList.c)
 *     ?GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z @ 0x1C011C0A0 (-GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z.c)
 *     UserGetCurrentDesktopId @ 0x1C011C140 (UserGetCurrentDesktopId.c)
 *     EtwTraceBeginDelegateInputCallback @ 0x1C0127750 (EtwTraceBeginDelegateInputCallback.c)
 *     EtwTraceBeginDelegatedInputWorker @ 0x1C0127880 (EtwTraceBeginDelegatedInputWorker.c)
 *     EtwTraceConvertTimeOutToBlocking @ 0x1C0127C10 (EtwTraceConvertTimeOutToBlocking.c)
 *     EtwTraceEndDelegateInputCallback @ 0x1C0127F00 (EtwTraceEndDelegateInputCallback.c)
 *     EtwTraceEndDelegatedInputWorker @ 0x1C0128030 (EtwTraceEndDelegatedInputWorker.c)
 *     EtwTracePostInjectedGestureMessage @ 0x1C0128940 (EtwTracePostInjectedGestureMessage.c)
 *     GetTargetPti @ 0x1C012DA10 (GetTargetPti.c)
 *     NtMITInitMinuserThread @ 0x1C012F430 (NtMITInitMinuserThread.c)
 *     NtMITUninitMinuserThread @ 0x1C0130F40 (NtMITUninitMinuserThread.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C0132F60 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetPointerInfoList @ 0x1C0133D60 (NtUserGetPointerInfoList.c)
 *     NtUserIsMouseInPointerEnabled @ 0x1C0136C00 (NtUserIsMouseInPointerEnabled.c)
 *     ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1C013D3BC (-LkdForAtomAdditionFailure@@YAXPEAXJ@Z.c)
 *     UserAddBaseWindowHandle @ 0x1C013D680 (UserAddBaseWindowHandle.c)
 *     UserDeleteBaseWindowHandle @ 0x1C013D920 (UserDeleteBaseWindowHandle.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C0142CD8 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     RIMVirtDeviceClassNotify @ 0x1C016E8B8 (RIMVirtDeviceClassNotify.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C0183300 (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1C0191B40 (-GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z.c)
 *     ?WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C01A18B0 (-WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall W32GetThreadWin32Thread(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v8; // rcx
  __int64 CurrentThreadProcess; // rax

  if ( (!(unsigned __int8)KeIsAttachedProcess(a1)
     || (CurrentProcess = PsGetCurrentProcess(v3, v2),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(v8),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = PsGetThreadWin32Thread(a1)) != 0 )
  {
    return *(_QWORD *)ThreadWin32Thread;
  }
  else
  {
    return 0LL;
  }
}
