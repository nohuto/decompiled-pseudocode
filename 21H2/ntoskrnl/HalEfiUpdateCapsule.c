/*
 * XREFs of HalEfiUpdateCapsule @ 0x1404C4128
 * Callers:
 *     HalpUpdateCapsule @ 0x1404D78E0 (HalpUpdateCapsule.c)
 * Callees:
 *     HalpConvertEfiToNtStatus @ 0x1404C41B4 (HalpConvertEfiToNtStatus.c)
 *     HalpEfiStartRuntimeCode @ 0x1404C41E8 (HalpEfiStartRuntimeCode.c)
 */

__int64 HalEfiUpdateCapsule()
{
  __int64 v0; // r9
  __int64 v1; // r10
  __int64 v2; // r11
  __int64 v3; // rax

  if ( !HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[6] )
    return 3221225474LL;
  _InterlockedIncrement(&HalpEfiCapsuleCalls);
  _InterlockedIncrement(&HalpEfiCapsuleWrites);
  HalpEfiStartRuntimeCode(64LL);
  v3 = ((__int64 (__fastcall *)(__int64, __int64, __int64))HalEfiRuntimeServicesTable[6])(v2, v1, v0);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFBF);
  _InterlockedDecrement(&HalpEfiCapsuleWrites);
  _InterlockedDecrement(&HalpEfiCapsuleCalls);
  return HalpConvertEfiToNtStatus(v3);
}
