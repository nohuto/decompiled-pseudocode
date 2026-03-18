/*
 * XREFs of HalExamineMBR @ 0x14088A990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall HalExamineMBR(PDEVICE_OBJECT DeviceObject, ULONG SectorSize, ULONG MBRTypeIdentifier, PVOID *Buffer)
{
  *Buffer = 0LL;
}
