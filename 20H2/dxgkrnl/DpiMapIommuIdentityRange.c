/*
 * XREFs of DpiMapIommuIdentityRange @ 0x1C02C5700
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetIoMmuContextFromDevice @ 0x1C00567F4 (DpiGetIoMmuContextFromDevice.c)
 *     DpiMapIommuIdentityRangeInternal @ 0x1C0056988 (DpiMapIommuIdentityRangeInternal.c)
 */

__int64 __fastcall DpiMapIommuIdentityRange(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  __int64 IoMmuContextFromDevice; // rax

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  return DpiMapIommuIdentityRangeInternal(IoMmuContextFromDevice, a2, a3, a4, a5);
}
