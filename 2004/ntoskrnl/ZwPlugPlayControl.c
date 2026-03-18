/*
 * XREFs of ZwPlugPlayControl @ 0x1403F5C00
 * Callers:
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x1406F2A10 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PlugPlayGetDeviceStatus @ 0x1406FBB54 (PlugPlayGetDeviceStatus.c)
 *     PiPnpRtlGetDeviceRelatedDeviceRoutine @ 0x140704810 (PiPnpRtlGetDeviceRelatedDeviceRoutine.c)
 *     PlugPlayGetDeviceProperty @ 0x140709A10 (PlugPlayGetDeviceProperty.c)
 *     PiCMDeleteDevice @ 0x140719D8C (PiCMDeleteDevice.c)
 *     PiCMSetProblem @ 0x14071D794 (PiCMSetProblem.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140722410 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGetDeviceRelationsList @ 0x1408A02F0 (PiPnpRtlGetDeviceRelationsList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPlugPlayControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
