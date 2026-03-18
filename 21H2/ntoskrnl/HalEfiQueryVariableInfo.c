/*
 * XREFs of HalEfiQueryVariableInfo @ 0x14050FFFC
 * Callers:
 *     HalQueryEnvironmentVariableInfoEx @ 0x140508620 (HalQueryEnvironmentVariableInfoEx.c)
 * Callees:
 *     HalpEfiDecrementEfiCall @ 0x140456C2C (HalpEfiDecrementEfiCall.c)
 *     HalpEfiIncrementEfiCall @ 0x140456C50 (HalpEfiIncrementEfiCall.c)
 *     HalpEfiStartRuntimeCode @ 0x140456C76 (HalpEfiStartRuntimeCode.c)
 *     HalpConvertEfiToNtStatus @ 0x1405104B0 (HalpConvertEfiToNtStatus.c)
 */

__int64 __fastcall HalEfiQueryVariableInfo(unsigned int a1)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // r8

  if ( !HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[8] )
    return 3221225474LL;
  HalpEfiIncrementEfiCall(0LL);
  HalpEfiStartRuntimeCode(0x100u);
  ((void (__fastcall *)(_QWORD, __int64, __int64))HalEfiRuntimeServicesTable[8])(a1, v3, v2);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFEFF);
  HalpEfiDecrementEfiCall(0LL);
  return HalpConvertEfiToNtStatus(v4);
}
