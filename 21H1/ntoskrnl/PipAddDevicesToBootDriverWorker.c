/*
 * XREFs of PipAddDevicesToBootDriverWorker @ 0x140A686A0
 * Callers:
 *     PipApplyFunctionToServiceInstances @ 0x1407ABA90 (PipApplyFunctionToServiceInstances.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14071068C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiProcessAddBootDevices @ 0x1407B0F48 (PiProcessAddBootDevices.c)
 */

__int64 __fastcall PipAddDevicesToBootDriverWorker(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  void *v3; // rbx

  v2 = PnpDeviceObjectFromDeviceInstanceWithTag(a2, 0x746C6644u);
  v3 = v2;
  if ( v2 )
  {
    PiProcessAddBootDevices((__int64)v2);
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  }
  return 1LL;
}
