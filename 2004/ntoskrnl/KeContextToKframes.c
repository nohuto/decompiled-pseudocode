/*
 * XREFs of KeContextToKframes @ 0x1403F7200
 * Callers:
 *     KiDispatchException @ 0x1402E5930 (KiDispatchException.c)
 *     KiContinueEx @ 0x1402E9E60 (KiContinueEx.c)
 *     KiContinuePreviousModeUser @ 0x1402EA1A0 (KiContinuePreviousModeUser.c)
 *     KiRestoreSetContextState @ 0x1403F8030 (KiRestoreSetContextState.c)
 *     KiRaiseException @ 0x14051C9E0 (KiRaiseException.c)
 *     KiRestoreProcessorState @ 0x14051FE48 (KiRestoreProcessorState.c)
 *     KeCopyContextToUch @ 0x1408BB0D0 (KeCopyContextToUch.c)
 *     KiRestoreUchFromUmsContext @ 0x1408BBB08 (KiRestoreUchFromUmsContext.c)
 * Callees:
 *     KxContextToKframes @ 0x1402F9670 (KxContextToKframes.c)
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
