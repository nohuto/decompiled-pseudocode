/*
 * XREFs of VfDriverInitSuccess @ 0x1409BF7AC
 * Callers:
 *     MmCallDllInitialize @ 0x14078C110 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x140A4E9AC (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ViDriverReApplyVerifierForAll @ 0x1409C5AF8 (ViDriverReApplyVerifierForAll.c)
 */

__int64 __fastcall VfDriverInitSuccess(int a1, __int64 a2)
{
  __int64 result; // rax

  if ( ViActiveVerifierThunks != a1 )
    return ViDriverReApplyVerifierForAll(a2);
  return result;
}
