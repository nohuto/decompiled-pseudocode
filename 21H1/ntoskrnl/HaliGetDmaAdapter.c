/*
 * XREFs of HaliGetDmaAdapter @ 0x140376690
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaFindDeviceObjectByToken @ 0x140376830 (HalpDmaFindDeviceObjectByToken.c)
 *     HalpGetAdapter @ 0x14074E200 (HalpGetAdapter.c)
 */

__int64 __fastcall HaliGetDmaAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 DeviceObjectByToken; // rax

  DeviceObjectByToken = HalpDmaFindDeviceObjectByToken(KeGetCurrentThread(), 0LL, 0LL);
  return HalpGetAdapter(a2, DeviceObjectByToken, a3);
}
