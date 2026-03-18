/*
 * XREFs of ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00A16B8
 * Callers:
 *     RIMResetPointerDevices @ 0x1C009E460 (RIMResetPointerDevices.c)
 *     RIMReadInput @ 0x1C00A08D0 (RIMReadInput.c)
 *     RIMOnPnpNotification @ 0x1C00A0F20 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00A13D0 (RIMDirectStartStopDeviceRead.c)
 *     RIMRemoveInputOfType @ 0x1C00A4340 (RIMRemoveInputOfType.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C015DCE0 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C015E1B0 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C015E340 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C015E6A0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMFreeInputBuffer @ 0x1C015F140 (RIMFreeInputBuffer.c)
 *     RIMGetDownContactCount @ 0x1C015FBC0 (RIMGetDownContactCount.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0160294 (RIMIDERemoveInjectionDevice.c)
 *     RIMInjectInput @ 0x1C01604E0 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C01607E0 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C0160C20 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0161190 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C0161360 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C01615DC (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall bRimDispositionNormal(struct RawInputManagerObject *a1)
{
  return !*((_BYTE *)a1 + 81) && !*((_BYTE *)a1 + 82);
}
