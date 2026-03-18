/*
 * XREFs of AcpiIrqGetRootResourceList @ 0x1C00023A8
 * Callers:
 *     ProcessorpReserveUnownedRanges @ 0x1C0097B5C (ProcessorpReserveUnownedRanges.c)
 * Callees:
 *     <none>
 */

__int64 AcpiIrqGetRootResourceList()
{
  return *(_QWORD *)(RootDeviceExtension + 632);
}
