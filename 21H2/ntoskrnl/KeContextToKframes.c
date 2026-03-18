/*
 * XREFs of KeContextToKframes @ 0x14041F500
 * Callers:
 *     KiContinuePreviousModeUser @ 0x140298420 (KiContinuePreviousModeUser.c)
 *     KiContinueEx @ 0x1402987C0 (KiContinueEx.c)
 *     KiDispatchException @ 0x140299280 (KiDispatchException.c)
 *     KiRestoreProcessorState @ 0x14029B804 (KiRestoreProcessorState.c)
 *     KiRestoreSetContextState @ 0x1404206B0 (KiRestoreSetContextState.c)
 *     KyRaiseException @ 0x140576820 (KyRaiseException.c)
 * Callees:
 *     KxContextToKframes @ 0x14022E3B0 (KxContextToKframes.c)
 */

__int64 __fastcall KeContextToKframes(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax
  int CurrentIrql; // [rsp+28h] [rbp-B0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    __writecr8(1uLL);
  result = KxContextToKframes(a1, a2, a3, a4, a5);
  if ( (_BYTE)result )
    _fxrstor((void *)(a3 + 256));
  if ( !CurrentIrql )
  {
    result = 0LL;
    __writecr8(0LL);
  }
  return result;
}
