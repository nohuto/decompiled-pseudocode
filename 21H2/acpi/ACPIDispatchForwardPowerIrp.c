/*
 * XREFs of ACPIDispatchForwardPowerIrp @ 0x1C0030B70
 * Callers:
 *     ACPIFilterIrpSetPower @ 0x1C002E2B0 (ACPIFilterIrpSetPower.c)
 *     ACPIDeviceIrpForwardRequest @ 0x1C0030A70 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIFilterIrpQueryPower @ 0x1C0055C10 (ACPIFilterIrpQueryPower.c)
 *     ACPIRootIrpQueryPower @ 0x1C005FAC0 (ACPIRootIrpQueryPower.c)
 *     ACPIRootIrpSetPower @ 0x1C005FEA0 (ACPIRootIrpSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIDispatchForwardPowerIrp(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax

  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( !*(_QWORD *)(DeviceExtension + 776) || (*(_BYTE *)(DeviceExtension + 8) & 0x20) != 0 )
  {
    IofCompleteRequest(a2, 0);
  }
  else
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    PoCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), a2);
  }
  return 259LL;
}
