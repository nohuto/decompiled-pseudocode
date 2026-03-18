/*
 * XREFs of VfDriverInitSuccess @ 0x1409BF79C
 * Callers:
 *     MmCallDllInitialize @ 0x1407932E0 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x140A57548 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ViDriverReApplyVerifierForAll @ 0x1409C5AE8 (ViDriverReApplyVerifierForAll.c)
 */

__int64 __fastcall VfDriverInitSuccess(int a1, __int64 a2)
{
  __int64 result; // rax

  if ( ViActiveVerifierThunks != a1 )
    return ViDriverReApplyVerifierForAll(a2);
  return result;
}
