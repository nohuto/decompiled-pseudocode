/*
 * XREFs of DpiUnmapIommuIdentityRange @ 0x1C02C5F70
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetIoMmuContextFromDevice @ 0x1C00567F4 (DpiGetIoMmuContextFromDevice.c)
 *     DpiUnmapIommuIdentityRangeInternal @ 0x1C0056DB8 (DpiUnmapIommuIdentityRangeInternal.c)
 */

__int64 __fastcall DpiUnmapIommuIdentityRange(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  __int64 IoMmuContextFromDevice; // rax

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  return DpiUnmapIommuIdentityRangeInternal(IoMmuContextFromDevice, a2, a3, a4, a5);
}
