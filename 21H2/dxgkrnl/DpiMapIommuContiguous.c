/*
 * XREFs of DpiMapIommuContiguous @ 0x1C02C6A20
 * Callers:
 *     ?MapHardwareReservedRangesToIoMmu@DXGADAPTER@@QEAAJXZ @ 0x1C020DDF4 (-MapHardwareReservedRangesToIoMmu@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     DpiGetIoMmuContextFromDevice @ 0x1C0057704 (DpiGetIoMmuContextFromDevice.c)
 *     DpiMapIommuContiguousInternal @ 0x1C0057750 (DpiMapIommuContiguousInternal.c)
 */

__int64 __fastcall DpiMapIommuContiguous(__int64 a1, struct _MDL *a2, SIZE_T a3, int a4, __int64 a5)
{
  int IoMmuContextFromDevice; // eax

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  return DpiMapIommuContiguousInternal(IoMmuContextFromDevice, a2, a3, a4, a5);
}
