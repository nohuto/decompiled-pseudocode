/*
 * XREFs of RawInputManagerObjectResolveHandle @ 0x1C00A16E0
 * Callers:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0036F50 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0037400 (RIMRegisterForInputWithCallbacks.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0038434 (UserDeactivateMITInputProcessing.c)
 *     RIMResetPointerDevices @ 0x1C009E460 (RIMResetPointerDevices.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C009E5D0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C009ED70 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMReadInput @ 0x1C00A08D0 (RIMReadInput.c)
 *     RIMUnregisterForInput @ 0x1C00A0B60 (RIMUnregisterForInput.c)
 *     RIMOnPnpNotification @ 0x1C00A0F20 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00A13D0 (RIMDirectStartStopDeviceRead.c)
 *     RIMDeviceIoControl @ 0x1C00A3290 (RIMDeviceIoControl.c)
 *     RIMRemoveInputOfType @ 0x1C00A4340 (RIMRemoveInputOfType.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00CB340 (RIMDirectStartDeviceClassNotifications.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C015C390 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C015DCE0 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C015E1B0 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C015E340 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C015E6A0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C015EC50 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1C015F140 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C015F2D0 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C015F5A0 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C015FBC0 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C015FE60 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C0160070 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C01604E0 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C01607E0 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C0160C20 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0161190 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C0161360 (RIMRemoveInjectionDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RawInputManagerObjectResolveHandle(char *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, PVOID *a4)
{
  NTSTATUS v5; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(a1, a2, ExRawInputManagerObjectType, a3, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( *((_DWORD *)Object + 1) == 1 )
    {
      *a4 = Object;
    }
    else
    {
      v5 = -1073741788;
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)v5;
}
