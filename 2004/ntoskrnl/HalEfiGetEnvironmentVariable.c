/*
 * XREFs of HalEfiGetEnvironmentVariable @ 0x1404BE8FC
 * Callers:
 *     HalGetEnvironmentVariableEx @ 0x1403B77B0 (HalGetEnvironmentVariableEx.c)
 * Callees:
 *     HalpConvertEfiToNtStatus @ 0x1404BF084 (HalpConvertEfiToNtStatus.c)
 *     HalpEfiStartRuntimeCode @ 0x1404BF0B8 (HalpEfiStartRuntimeCode.c)
 */

__int64 __fastcall HalEfiGetEnvironmentVariable(__int64 a1)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // rax

  if ( !HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[3] )
    return 3221225474LL;
  _InterlockedIncrement(&HalpEfiVariableCalls);
  HalpEfiStartRuntimeCode(8LL);
  v4 = ((__int64 (__fastcall *)(__int64, __int64, __int64))HalEfiRuntimeServicesTable[3])(a1, v3, v2);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFF7);
  _InterlockedDecrement(&HalpEfiVariableCalls);
  return HalpConvertEfiToNtStatus(v4);
}
