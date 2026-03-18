/*
 * XREFs of W32GetThreadWin32Thread @ 0x1C0085450
 * Callers:
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C00089F0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 *     GdiThreadCallout @ 0x1C000B570 (GdiThreadCallout.c)
 *     NtUserGetAsyncKeyState @ 0x1C000F3B0 (NtUserGetAsyncKeyState.c)
 *     EtwTraceQueueMessage @ 0x1C0016720 (EtwTraceQueueMessage.c)
 *     EtwTraceQueueInputMessage @ 0x1C0016808 (EtwTraceQueueInputMessage.c)
 *     EtwTraceBeginAppMessageProcessing @ 0x1C0016A20 (EtwTraceBeginAppMessageProcessing.c)
 *     EtwTraceBeginSendMessage @ 0x1C0016D30 (EtwTraceBeginSendMessage.c)
 *     EtwTraceEndAppMessageProcessing @ 0x1C0016E60 (EtwTraceEndAppMessageProcessing.c)
 *     EtwTraceRetrievePostMessage @ 0x1C00171C0 (EtwTraceRetrievePostMessage.c)
 *     EtwTraceEndSendMessage @ 0x1C0019960 (EtwTraceEndSendMessage.c)
 *     EtwTraceBeginRetrieveSendMessage @ 0x1C0019990 (EtwTraceBeginRetrieveSendMessage.c)
 *     EtwTraceEndRetrieveSendMessage @ 0x1C00199C0 (EtwTraceEndRetrieveSendMessage.c)
 *     PtiFromThreadId @ 0x1C001B650 (PtiFromThreadId.c)
 *     UserIsWindowGdiScaled @ 0x1C001DBD0 (UserIsWindowGdiScaled.c)
 *     UserGlobalAtomTableCallout @ 0x1C002941C (UserGlobalAtomTableCallout.c)
 *     EtwTraceRetrievePseudoMessage @ 0x1C002D4E0 (EtwTraceRetrievePseudoMessage.c)
 *     EtwTraceRetrieveQueueEventMessage @ 0x1C002E210 (EtwTraceRetrieveQueueEventMessage.c)
 *     EtwTraceRetrieveInputMessage @ 0x1C002F880 (EtwTraceRetrieveInputMessage.c)
 *     GreDecNonRBLockCount @ 0x1C0032D00 (GreDecNonRBLockCount.c)
 *     GreIncNonRBLockCount @ 0x1C0032D30 (GreIncNonRBLockCount.c)
 *     _GetKeyState @ 0x1C00342F0 (_GetKeyState.c)
 *     EtwTraceInputQueueLocked @ 0x1C00344D0 (EtwTraceInputQueueLocked.c)
 *     InitSystemThread @ 0x1C00349E0 (InitSystemThread.c)
 *     HmgFreeObjectAttr @ 0x1C00350CC (HmgFreeObjectAttr.c)
 *     NtUserSetInputServiceState @ 0x1C00351C0 (NtUserSetInputServiceState.c)
 *     EtwTraceWakeDIT @ 0x1C0036060 (EtwTraceWakeDIT.c)
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C0036E10 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 *     UserGetDesktopIdForCurrentThread @ 0x1C0039D90 (UserGetDesktopIdForCurrentThread.c)
 *     ?Init@InputThreadState@CInputThread@@QEAAXXZ @ 0x1C003A550 (-Init@InputThreadState@CInputThread@@QEAAXXZ.c)
 *     _GetDC @ 0x1C00400A0 (_GetDC.c)
 *     EtwTraceEndInjectMouse @ 0x1C0045E50 (EtwTraceEndInjectMouse.c)
 *     EtwTraceBeginInjectMouse @ 0x1C0045E90 (EtwTraceBeginInjectMouse.c)
 *     EtwTraceInputQueueLockedPeekRecursion @ 0x1C0047090 (EtwTraceInputQueueLockedPeekRecursion.c)
 *     EtwTraceInputQueueNoRemoveLocker @ 0x1C0049810 (EtwTraceInputQueueNoRemoveLocker.c)
 *     UserIsCurrentThreadGdiScaled @ 0x1C0049C40 (UserIsCurrentThreadGdiScaled.c)
 *     EngUpdateDeviceSurface @ 0x1C004A300 (EngUpdateDeviceSurface.c)
 *     ?bIncludeSprites@SURFACE@@SAHXZ @ 0x1C004A970 (-bIncludeSprites@SURFACE@@SAHXZ.c)
 *     EtwTraceWakeRIT @ 0x1C004B060 (EtwTraceWakeRIT.c)
 *     ?vClearIncludeSprites@SURFACE@@SAXXZ @ 0x1C004D9A0 (-vClearIncludeSprites@SURFACE@@SAXXZ.c)
 *     ?vSetIncludeSprites@SURFACE@@SAXXZ @ 0x1C004D9D0 (-vSetIncludeSprites@SURFACE@@SAXXZ.c)
 *     EtwTraceInputQueueUnLocked @ 0x1C00503A0 (EtwTraceInputQueueUnLocked.c)
 *     LeaveRenderBlock @ 0x1C0051990 (LeaveRenderBlock.c)
 *     EnterRenderBlock @ 0x1C00519C0 (EnterRenderBlock.c)
 *     _GetKeyNameText @ 0x1C0056410 (_GetKeyNameText.c)
 *     NtUserVkKeyScanEx @ 0x1C0058990 (NtUserVkKeyScanEx.c)
 *     xxxInternalToUnicode @ 0x1C0059060 (xxxInternalToUnicode.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C005F5A8 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0063044 (HMValidateHandleNoSecure.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C00633E0 (CoalesceInputSourceMouseMoves.c)
 *     EtwTraceWakePump @ 0x1C00635B0 (EtwTraceWakePump.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C006546C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     UserThreadCallout @ 0x1C00672B0 (UserThreadCallout.c)
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 *     UserGetMonitorDC @ 0x1C006A2F0 (UserGetMonitorDC.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C006BBD4 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     GetMonitorRect @ 0x1C006BC48 (GetMonitorRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C006DC9C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetKeyboardLayout @ 0x1C006F290 (_GetKeyboardLayout.c)
 *     NtUserMapVirtualKeyEx @ 0x1C006F3F0 (NtUserMapVirtualKeyEx.c)
 *     ValidateHmenu @ 0x1C00702D0 (ValidateHmenu.c)
 *     HMValidateHandle @ 0x1C0070320 (HMValidateHandle.c)
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 *     GreCreateSemaphoreInternal @ 0x1C00737B0 (GreCreateSemaphoreInternal.c)
 *     NtUserGetKeyboardState @ 0x1C0073CE0 (NtUserGetKeyboardState.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C007B980 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     HmgFreeDcAttr @ 0x1C007F458 (HmgFreeDcAttr.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     ?isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ @ 0x1C0089350 (-isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ.c)
 *     NtUserGetDC @ 0x1C0089A70 (NtUserGetDC.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008C364 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C008F8F0 (--1SURFMEM@@QEAA@XZ.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0094B40 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserQueryDisplayConfig @ 0x1C0095DB0 (NtUserQueryDisplayConfig.c)
 *     PushThreadGuardedObject @ 0x1C009ADD0 (PushThreadGuardedObject.c)
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C009D69C (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C009D838 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     RIMDeviceClassNotify @ 0x1C009F050 (RIMDeviceClassNotify.c)
 *     HmgAllocateObjectAttr @ 0x1C00A98BC (HmgAllocateObjectAttr.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00AB330 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2860 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GdiThreadCalloutCleanup @ 0x1C00CC020 (GdiThreadCalloutCleanup.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00CDF50 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00CDF9C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C00CE828 (-GrepIsPreviousModeKernel@@YAHXZ.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00CFFEC (--0EngModeState@@QEAA@XZ.c)
 *     AddToDeferredUserCritThreadUnlockList @ 0x1C0121C98 (AddToDeferredUserCritThreadUnlockList.c)
 *     ?GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z @ 0x1C0122560 (-GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z.c)
 *     UserGetCurrentDesktopId @ 0x1C0122600 (UserGetCurrentDesktopId.c)
 *     EtwTraceBeginDelegateInputCallback @ 0x1C012D740 (EtwTraceBeginDelegateInputCallback.c)
 *     EtwTraceBeginDelegatedInputWorker @ 0x1C012D870 (EtwTraceBeginDelegatedInputWorker.c)
 *     EtwTraceConvertTimeOutToBlocking @ 0x1C012DC00 (EtwTraceConvertTimeOutToBlocking.c)
 *     EtwTraceEndDelegateInputCallback @ 0x1C012DEF0 (EtwTraceEndDelegateInputCallback.c)
 *     EtwTraceEndDelegatedInputWorker @ 0x1C012E020 (EtwTraceEndDelegatedInputWorker.c)
 *     EtwTracePostInjectedGestureMessage @ 0x1C012E930 (EtwTracePostInjectedGestureMessage.c)
 *     GetTargetPti @ 0x1C0133A00 (GetTargetPti.c)
 *     NtMITInitMinuserThread @ 0x1C0135420 (NtMITInitMinuserThread.c)
 *     NtMITUninitMinuserThread @ 0x1C0136F30 (NtMITUninitMinuserThread.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C0138C00 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetPointerInfoList @ 0x1C0139A00 (NtUserGetPointerInfoList.c)
 *     NtUserIsMouseInPointerEnabled @ 0x1C013C8A0 (NtUserIsMouseInPointerEnabled.c)
 *     ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1C014370C (-LkdForAtomAdditionFailure@@YAXPEAXJ@Z.c)
 *     UserAddBaseWindowHandle @ 0x1C01439D0 (UserAddBaseWindowHandle.c)
 *     UserDeleteBaseWindowHandle @ 0x1C0143C70 (UserDeleteBaseWindowHandle.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C0149028 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     RIMVirtDeviceClassNotify @ 0x1C0174BE8 (RIMVirtDeviceClassNotify.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C0189000 (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1C0197840 (-GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z.c)
 *     ?WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C01A7610 (-WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
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
