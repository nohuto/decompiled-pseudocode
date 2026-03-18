/*
 * XREFs of RawInputManagerDeviceObjectResolveHandle @ 0x1C00AB3A0
 * Callers:
 *     ?IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C005B2FC (-IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     RIMDeviceIoControl @ 0x1C0064040 (RIMDeviceIoControl.c)
 *     rimCreateDev @ 0x1C00AB24C (rimCreateDev.c)
 *     NtSetPointerDeviceInputSpace @ 0x1C0131980 (NtSetPointerDeviceInputSpace.c)
 *     NtUserInjectDeviceInput @ 0x1C01352C0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C01356F0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C0135F00 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C0136320 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C0136740 (NtUserInjectPointerInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0137780 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C01385D0 (NtUserSetFeatureReportResponse.c)
 *     NtRIMSetExtendedDeviceProperty @ 0x1C01572B0 (NtRIMSetExtendedDeviceProperty.c)
 *     RIMAreSiblingDevices @ 0x1C0158700 (RIMAreSiblingDevices.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0158900 (RIMEnableMonitorMappingForDevice.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C01590F0 (RIMGetDevicePreparsedDataLockfree.c)
 *     RIMGetDevicePropertiesLockfree @ 0x1C01593C0 (RIMGetDevicePropertiesLockfree.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C0159B10 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C0159D20 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C015A190 (RIMInjectInput.c)
 *     RIMRefreshDeviceAttributes @ 0x1C015AE40 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C015B010 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C015B28C (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0169BF8 (RIMIDECreatePointerDeviceInfo.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0175A38 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0176404 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C017EBE0 (rimObsCheckForExistingDeviceHandle.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C018B058 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C01A0B60 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x1C01B0474 (-GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z.c)
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01B80F0 (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 *     ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C01B8518 (-SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMou.c)
 *     ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C01B8804 (-SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01B8E6C (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C01B9388 (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C013BA04 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectResolveHandle(char *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, PVOID *a4)
{
  char v5; // di
  int v6; // edx
  NTSTATUS v7; // ebx
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  v5 = (char)a1;
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, a2, ExRawInputManagerObjectType, a3, &Object, 0LL);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_qd((_DWORD)gRimLog, v6, 1, 11, (__int64)&WPP_f25a4ae4fc2a30e660934be3cfee1070_Traceguids, v5, v7);
    }
  }
  else if ( *((_DWORD *)Object + 1) == 2 )
  {
    *a4 = Object;
  }
  else
  {
    v7 = -1073741788;
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v7;
}
