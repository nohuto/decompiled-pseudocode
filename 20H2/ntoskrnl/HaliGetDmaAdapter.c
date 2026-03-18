/*
 * XREFs of HaliGetDmaAdapter @ 0x140379430
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaFindDeviceObjectByToken @ 0x1403795D0 (HalpDmaFindDeviceObjectByToken.c)
 *     HalpGetAdapter @ 0x140761470 (HalpGetAdapter.c)
 */

__int64 __fastcall HaliGetDmaAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 DeviceObjectByToken; // rax

  DeviceObjectByToken = HalpDmaFindDeviceObjectByToken(KeGetCurrentThread(), 0LL, 0LL);
  return HalpGetAdapter(a2, DeviceObjectByToken, a3);
}
