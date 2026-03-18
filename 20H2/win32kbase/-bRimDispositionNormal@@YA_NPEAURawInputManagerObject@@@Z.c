/*
 * XREFs of ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00274C8
 * Callers:
 *     RIMResetPointerDevices @ 0x1C0025960 (RIMResetPointerDevices.c)
 *     RIMReadInput @ 0x1C0026620 (RIMReadInput.c)
 *     RIMOnPnpNotification @ 0x1C0026D30 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00271E0 (RIMDirectStartStopDeviceRead.c)
 *     RIMRemoveInputOfType @ 0x1C0075600 (RIMRemoveInputOfType.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0155430 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C0155900 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0155A90 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0155DF0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMFreeInputBuffer @ 0x1C0156890 (RIMFreeInputBuffer.c)
 *     RIMGetDownContactCount @ 0x1C0157310 (RIMGetDownContactCount.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01579E4 (RIMIDERemoveInjectionDevice.c)
 *     RIMInjectInput @ 0x1C0157C30 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C0157F30 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C0158370 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C01588E0 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C0158AB0 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C0158D2C (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall bRimDispositionNormal(struct RawInputManagerObject *a1)
{
  return !*((_BYTE *)a1 + 81) && !*((_BYTE *)a1 + 82);
}
