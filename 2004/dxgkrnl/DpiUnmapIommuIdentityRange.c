/*
 * XREFs of DpiUnmapIommuIdentityRange @ 0x1C02C6F30
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetIoMmuContextFromDevice @ 0x1C00568B4 (DpiGetIoMmuContextFromDevice.c)
 *     DpiUnmapIommuIdentityRangeInternal @ 0x1C0056E78 (DpiUnmapIommuIdentityRangeInternal.c)
 */

__int64 __fastcall DpiUnmapIommuIdentityRange(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  __int64 IoMmuContextFromDevice; // rax

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  return DpiUnmapIommuIdentityRangeInternal(IoMmuContextFromDevice, a2, a3, a4, a5);
}
