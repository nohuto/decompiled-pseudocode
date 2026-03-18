/*
 * XREFs of RawInputManagerObjectResolveHandle @ 0x1C00274F0
 * Callers:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0005F50 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0006400 (RIMRegisterForInputWithCallbacks.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0007434 (UserDeactivateMITInputProcessing.c)
 *     RIMDeviceIoControl @ 0x1C0024840 (RIMDeviceIoControl.c)
 *     RIMResetPointerDevices @ 0x1C0025960 (RIMResetPointerDevices.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0025AD0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0025F40 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMReadInput @ 0x1C0026620 (RIMReadInput.c)
 *     RIMUnregisterForInput @ 0x1C0026970 (RIMUnregisterForInput.c)
 *     RIMOnPnpNotification @ 0x1C0026D30 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00271E0 (RIMDirectStartStopDeviceRead.c)
 *     RIMRemoveInputOfType @ 0x1C0075600 (RIMRemoveInputOfType.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00CAC30 (RIMDirectStartDeviceClassNotifications.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C0153AE0 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0155430 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C0155900 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0155A90 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0155DF0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C01563A0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1C0156890 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C0156A20 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C0156CF0 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C0157310 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C01575B0 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C01577C0 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C0157C30 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C0157F30 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C0158370 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C01588E0 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C0158AB0 (RIMRemoveInjectionDevice.c)
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
