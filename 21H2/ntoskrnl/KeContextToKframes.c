/*
 * XREFs of KeContextToKframes @ 0x1403FE200
 * Callers:
 *     KiDispatchException @ 0x1402612C0 (KiDispatchException.c)
 *     KiContinueEx @ 0x140264660 (KiContinueEx.c)
 *     KiContinuePreviousModeUser @ 0x1402649A0 (KiContinuePreviousModeUser.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiRaiseException @ 0x1405220D0 (KiRaiseException.c)
 *     KiRestoreProcessorState @ 0x140525538 (KiRestoreProcessorState.c)
 *     KeCopyContextToUch @ 0x1408BE750 (KeCopyContextToUch.c)
 *     KiRestoreUchFromUmsContext @ 0x1408BF188 (KiRestoreUchFromUmsContext.c)
 * Callees:
 *     KxContextToKframes @ 0x140266FA0 (KxContextToKframes.c)
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
