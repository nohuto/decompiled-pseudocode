/*
 * XREFs of ZwPlugPlayControl @ 0x1403FA7D0
 * Callers:
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x1406C5DF0 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PlugPlayGetDeviceStatus @ 0x1406CE484 (PlugPlayGetDeviceStatus.c)
 *     PiPnpRtlGetDeviceRelatedDeviceRoutine @ 0x1406D7E40 (PiPnpRtlGetDeviceRelatedDeviceRoutine.c)
 *     PlugPlayGetDeviceProperty @ 0x1406DBF60 (PlugPlayGetDeviceProperty.c)
 *     PiCMDeleteDevice @ 0x140727D7C (PiCMDeleteDevice.c)
 *     PiCMSetProblem @ 0x14072B630 (PiCMSetProblem.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140730520 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGetDeviceRelationsList @ 0x1408A5E20 (PiPnpRtlGetDeviceRelationsList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPlugPlayControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
