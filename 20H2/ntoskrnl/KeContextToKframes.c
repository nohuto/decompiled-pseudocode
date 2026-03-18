/*
 * XREFs of KeContextToKframes @ 0x1403FBDD0
 * Callers:
 *     KiContinueEx @ 0x1402E6780 (KiContinueEx.c)
 *     KiContinuePreviousModeUser @ 0x1402E6AC0 (KiContinuePreviousModeUser.c)
 *     KiDispatchException @ 0x1402E7710 (KiDispatchException.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiRaiseException @ 0x1405203B0 (KiRaiseException.c)
 *     KiRestoreProcessorState @ 0x140523818 (KiRestoreProcessorState.c)
 *     KeCopyContextToUch @ 0x1408C0E30 (KeCopyContextToUch.c)
 *     KiRestoreUchFromUmsContext @ 0x1408C1868 (KiRestoreUchFromUmsContext.c)
 * Callees:
 *     KxContextToKframes @ 0x1402D6B70 (KxContextToKframes.c)
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
