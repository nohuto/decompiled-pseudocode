/*
 * XREFs of ACPIDispatchForwardPowerIrp @ 0x1C000CA90
 * Callers:
 *     ACPIDeviceIrpForwardRequest @ 0x1C000CB00 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIFilterIrpSetPower @ 0x1C002D530 (ACPIFilterIrpSetPower.c)
 *     ACPIFilterIrpQueryPower @ 0x1C0055600 (ACPIFilterIrpQueryPower.c)
 *     ACPIRootIrpQueryPower @ 0x1C005EB20 (ACPIRootIrpQueryPower.c)
 *     ACPIRootIrpSetPower @ 0x1C005EF10 (ACPIRootIrpSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIDispatchForwardPowerIrp(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax

  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( !*(_QWORD *)(DeviceExtension + 736) || (*(_BYTE *)(DeviceExtension + 8) & 0x20) != 0 )
  {
    IofCompleteRequest(a2, 0);
  }
  else
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    PoCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 736), a2);
  }
  return 259LL;
}
