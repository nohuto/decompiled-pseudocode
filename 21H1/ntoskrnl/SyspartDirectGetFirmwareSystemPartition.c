/*
 * XREFs of SyspartDirectGetFirmwareSystemPartition @ 0x14077A1C0
 * Callers:
 *     <none>
 * Callees:
 *     SiGetSystemDeviceName @ 0x1406E0C38 (SiGetSystemDeviceName.c)
 */

__int64 __fastcall SyspartDirectGetFirmwareSystemPartition(void *a1, unsigned int a2, unsigned int *a3)
{
  return SiGetSystemDeviceName((__int64 (__fastcall *)(_QWORD, void **))SiGetFirmwareSystemPartition, a1, a2, a3);
}
