/*
 * XREFs of HalEfiSetEnvironmentVariable @ 0x1404C3E68
 * Callers:
 *     HalSetEnvironmentVariableEx @ 0x1404BBFD0 (HalSetEnvironmentVariableEx.c)
 * Callees:
 *     HalpConvertEfiToNtStatus @ 0x1404C41B4 (HalpConvertEfiToNtStatus.c)
 *     HalpEfiStartRuntimeCode @ 0x1404C41E8 (HalpEfiStartRuntimeCode.c)
 */

__int64 __fastcall HalEfiSetEnvironmentVariable(__int64 a1)
{
  unsigned int v2; // r10d
  __int64 v3; // r11
  __int64 v4; // rax

  if ( !HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[5] )
    return 3221225474LL;
  _InterlockedIncrement(&HalpEfiVariableCalls);
  _InterlockedIncrement(&HalpEfiVariableWrites);
  HalpEfiStartRuntimeCode(32LL);
  v4 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalEfiRuntimeServicesTable[5])(a1, v3, v2);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFDF);
  _InterlockedDecrement(&HalpEfiVariableWrites);
  _InterlockedDecrement(&HalpEfiVariableCalls);
  return HalpConvertEfiToNtStatus(v4);
}
