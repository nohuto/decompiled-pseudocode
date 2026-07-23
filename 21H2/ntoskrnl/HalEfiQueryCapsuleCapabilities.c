/*
 * XREFs of HalEfiQueryCapsuleCapabilities @ 0x1404C3CE8
 * Callers:
 *     HalpQueryCapsuleCapabilities @ 0x1404D7800 (HalpQueryCapsuleCapabilities.c)
 * Callees:
 *     HalpConvertEfiToNtStatus @ 0x1404C41B4 (HalpConvertEfiToNtStatus.c)
 *     HalpEfiStartRuntimeCode @ 0x1404C41E8 (HalpEfiStartRuntimeCode.c)
 */

__int64 __fastcall HalEfiQueryCapsuleCapabilities(__int64 a1)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // rax

  if ( !HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[7] )
    return 3221225474LL;
  _InterlockedIncrement(&HalpEfiCapsuleCalls);
  HalpEfiStartRuntimeCode(128LL);
  v4 = ((__int64 (__fastcall *)(__int64, __int64, __int64))HalEfiRuntimeServicesTable[7])(a1, v3, v2);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFF7F);
  _InterlockedDecrement(&HalpEfiCapsuleCalls);
  return HalpConvertEfiToNtStatus(v4);
}
