/*
 * XREFs of HMValidateHandleNoSecure @ 0x1C0063044
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x1C0038434 (UserDeactivateMITInputProcessing.c)
 *     ResolveMouseOrPointerDevice @ 0x1C0048F70 (ResolveMouseOrPointerDevice.c)
 *     ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1C00622A0 (-CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_IN.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C0063D5C (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBU_InputHitTestRes.c)
 *     GetWorkspaceId @ 0x1C012A920 (GetWorkspaceId.c)
 *     GetPreparsedData @ 0x1C01640AC (GetPreparsedData.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0188DB0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0189128 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0189298 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C018F3FC (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0190D58 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C0191514 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C0192D84 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0194FD8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x1C01966DC (-GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z.c)
 *     ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C0199C60 (-GetPrevMTNodeTarget@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInp.c)
 *     ?IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C019B2BC (-IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C019C878 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C019DB1C (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01A843C (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x1C01A8950 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01A9100 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01A9640 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01A9C64 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01AC670 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01ACBB0 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     IsTouchpadDevice @ 0x1C01B17A0 (IsTouchpadDevice.c)
 *     _GetDeviceRects @ 0x1C01B2220 (_GetDeviceRects.c)
 *     _IsPseudoDevice @ 0x1C01B22A0 (_IsPseudoDevice.c)
 *     ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x1C01B61D4 (-GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z.c)
 *     SynthesizeMitTouchInput @ 0x1C01B630C (SynthesizeMitTouchInput.c)
 *     SynthesizeTouchInputContainer @ 0x1C01B65E0 (SynthesizeTouchInputContainer.c)
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01BDE50 (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C01C1734 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateHandleNoSecure(unsigned __int64 a1, char a2)
{
  __int64 v4; // rbx
  char *v5; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // r15
  unsigned __int64 v8; // rdi
  __int64 v9; // r14
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v5 = (char *)qword_1C0250D48 + (unsigned int)(unsigned __int16)a1 * dword_1C0250D50;
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v11);
    v7 = gpKernelHandleTable;
    v8 = a1 >> 16;
    v9 = 3LL * (unsigned int)((v5 - (char *)qword_1C0250D48) >> 5);
    if ( ((_WORD)v8 == *((_WORD *)v5 + 13) || (_WORD)v8 == 0xFFFF || !(_WORD)v8 && PsGetCurrentProcessWow64Process(v6))
      && (v5[25] & 1) == 0
      && v5[24] == a2 )
    {
      return v7[v9];
    }
  }
  return v4;
}
