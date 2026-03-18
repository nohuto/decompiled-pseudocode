/*
 * XREFs of RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0
 * Callers:
 *     ?IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C004D88C (-IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     RIMDeviceIoControl @ 0x1C00A3290 (RIMDeviceIoControl.c)
 *     rimCreateDev @ 0x1C00A3D64 (rimCreateDev.c)
 *     NtSetPointerDeviceInputSpace @ 0x1C0137970 (NtSetPointerDeviceInputSpace.c)
 *     NtUserInjectDeviceInput @ 0x1C013AF60 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C013B390 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C013BBA0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C013BFC0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C013C3E0 (NtUserInjectPointerInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C013D420 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C013E270 (NtUserSetFeatureReportResponse.c)
 *     NtRIMSetExtendedDeviceProperty @ 0x1C015D600 (NtRIMSetExtendedDeviceProperty.c)
 *     RIMAreSiblingDevices @ 0x1C015EA50 (RIMAreSiblingDevices.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C015EC50 (RIMEnableMonitorMappingForDevice.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C015F440 (RIMGetDevicePreparsedDataLockfree.c)
 *     RIMGetDevicePropertiesLockfree @ 0x1C015F710 (RIMGetDevicePropertiesLockfree.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C015FE60 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C0160070 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C01604E0 (RIMInjectInput.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0161190 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C0161360 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C01615DC (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C016FF48 (RIMIDECreatePointerDeviceInfo.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C017BD68 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C017C104 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C01848E0 (rimObsCheckForExistingDeviceHandle.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0190D58 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C01A68C0 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x1C01B61D4 (-GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z.c)
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01BDE50 (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 *     ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C01BE278 (-SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMou.c)
 *     ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C01BE564 (-SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01BEBCC (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C01BF0E8 (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C01416A4 (WPP_RECORDER_SF_qd.c)
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
