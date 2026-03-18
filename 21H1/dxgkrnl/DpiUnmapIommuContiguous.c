/*
 * XREFs of DpiUnmapIommuContiguous @ 0x1C02C2960
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetIoMmuContextFromDevice @ 0x1C00558A4 (DpiGetIoMmuContextFromDevice.c)
 *     DpiUnmapIommuContiguousInternal @ 0x1C0055D68 (DpiUnmapIommuContiguousInternal.c)
 */

void __fastcall DpiUnmapIommuContiguous(__int64 a1, struct _MDL *a2, SIZE_T a3, int a4, __int64 a5)
{
  int IoMmuContextFromDevice; // eax

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  DpiUnmapIommuContiguousInternal(IoMmuContextFromDevice, a2, a3, a4, a5);
}
