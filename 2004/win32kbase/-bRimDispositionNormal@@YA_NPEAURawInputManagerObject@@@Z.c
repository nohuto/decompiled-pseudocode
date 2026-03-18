/*
 * XREFs of ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00AAB88
 * Callers:
 *     RIMResetPointerDevices @ 0x1C0055490 (RIMResetPointerDevices.c)
 *     RIMRemoveInputOfType @ 0x1C00563B0 (RIMRemoveInputOfType.c)
 *     RIMOnPnpNotification @ 0x1C00A9D80 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00AA480 (RIMDirectStartStopDeviceRead.c)
 *     RIMReadInput @ 0x1C00ABA70 (RIMReadInput.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0157990 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C0157E60 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0157FF0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0158350 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMFreeInputBuffer @ 0x1C0158DF0 (RIMFreeInputBuffer.c)
 *     RIMGetDownContactCount @ 0x1C0159870 (RIMGetDownContactCount.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0159F44 (RIMIDERemoveInjectionDevice.c)
 *     RIMInjectInput @ 0x1C015A190 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C015A490 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C015A8D0 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C015AE40 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C015B010 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C015B28C (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall bRimDispositionNormal(struct RawInputManagerObject *a1)
{
  return !*((_BYTE *)a1 + 81) && !*((_BYTE *)a1 + 82);
}
