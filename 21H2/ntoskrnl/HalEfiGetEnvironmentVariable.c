/*
 * XREFs of HalEfiGetEnvironmentVariable @ 0x140456B94
 * Callers:
 *     HalGetEnvironmentVariableEx @ 0x1403DAAF0 (HalGetEnvironmentVariableEx.c)
 * Callees:
 *     HalpEfiDecrementEfiCall @ 0x140456C2C (HalpEfiDecrementEfiCall.c)
 *     HalpEfiIncrementEfiCall @ 0x140456C50 (HalpEfiIncrementEfiCall.c)
 *     HalpEfiStartRuntimeCode @ 0x140456C76 (HalpEfiStartRuntimeCode.c)
 *     HalpConvertEfiToNtStatus @ 0x1405104B0 (HalpConvertEfiToNtStatus.c)
 */

__int64 __fastcall HalEfiGetEnvironmentVariable(__int64 a1)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // rax
  KPCR *Pcr; // rdx
  __int64 v6; // r8

  if ( !HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[3] )
    return 3221225474LL;
  HalpEfiIncrementEfiCall(&HalpEfiVariableCalls);
  HalpEfiStartRuntimeCode(8LL);
  v4 = ((__int64 (__fastcall *)(__int64, __int64, __int64))HalEfiRuntimeServicesTable[3])(a1, v3, v2);
  Pcr = KeGetPcr();
  _InterlockedAnd((volatile signed __int32 *)&Pcr->HalReserved[8], 0xFFFFFFF7);
  HalpEfiDecrementEfiCall(&HalpEfiVariableCalls, Pcr, v4);
  return HalpConvertEfiToNtStatus(v6);
}
