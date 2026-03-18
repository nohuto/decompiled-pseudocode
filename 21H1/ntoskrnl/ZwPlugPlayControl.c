/*
 * XREFs of ZwPlugPlayControl @ 0x1403F4970
 * Callers:
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x1406D1A50 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PlugPlayGetDeviceStatus @ 0x1406D8164 (PlugPlayGetDeviceStatus.c)
 *     PiPnpRtlGetDeviceRelatedDeviceRoutine @ 0x1406E1E90 (PiPnpRtlGetDeviceRelatedDeviceRoutine.c)
 *     PlugPlayGetDeviceProperty @ 0x1406E5CF0 (PlugPlayGetDeviceProperty.c)
 *     PiCMDeleteDevice @ 0x1407179FC (PiCMDeleteDevice.c)
 *     PiCMSetProblem @ 0x14071B814 (PiCMSetProblem.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140720550 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGetDeviceRelationsList @ 0x14089EFD0 (PiPnpRtlGetDeviceRelationsList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPlugPlayControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
