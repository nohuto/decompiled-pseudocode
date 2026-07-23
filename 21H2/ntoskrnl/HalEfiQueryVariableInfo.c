/*
 * XREFs of HalEfiQueryVariableInfo @ 0x1404C3D6C
 * Callers:
 *     HalQueryEnvironmentVariableInfoEx @ 0x1404BBDF0 (HalQueryEnvironmentVariableInfoEx.c)
 * Callees:
 *     HalpConvertEfiToNtStatus @ 0x1404C41B4 (HalpConvertEfiToNtStatus.c)
 *     HalpEfiStartRuntimeCode @ 0x1404C41E8 (HalpEfiStartRuntimeCode.c)
 */

__int64 __fastcall HalEfiQueryVariableInfo(unsigned int a1)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // rax

  if ( !HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[8] )
    return 3221225474LL;
  HalpEfiStartRuntimeCode(256LL);
  v4 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))HalEfiRuntimeServicesTable[8])(a1, v3, v2);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFEFF);
  return HalpConvertEfiToNtStatus(v4);
}
