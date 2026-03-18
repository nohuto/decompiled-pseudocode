/*
 * XREFs of VfDriverInitSuccess @ 0x1409C57BC
 * Callers:
 *     MmCallDllInitialize @ 0x1407A23C0 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x140A5D948 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ViDriverReApplyVerifierForAll @ 0x1409CBB18 (ViDriverReApplyVerifierForAll.c)
 */

__int64 __fastcall VfDriverInitSuccess(int a1, __int64 a2)
{
  __int64 result; // rax

  if ( ViActiveVerifierThunks != a1 )
    return ViDriverReApplyVerifierForAll(a2);
  return result;
}
