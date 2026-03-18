/*
 * XREFs of KeContextToKframes @ 0x1403F5F70
 * Callers:
 *     KiDispatchException @ 0x14032AA60 (KiDispatchException.c)
 *     KiContinueEx @ 0x14032EFA0 (KiContinueEx.c)
 *     KiContinuePreviousModeUser @ 0x14032F2E0 (KiContinuePreviousModeUser.c)
 *     KiRestoreSetContextState @ 0x1403F6DA0 (KiRestoreSetContextState.c)
 *     KiRaiseException @ 0x14051C390 (KiRaiseException.c)
 *     KiRestoreProcessorState @ 0x14051F7F8 (KiRestoreProcessorState.c)
 *     KeCopyContextToUch @ 0x1408B9DB0 (KeCopyContextToUch.c)
 *     KiRestoreUchFromUmsContext @ 0x1408BA7E8 (KiRestoreUchFromUmsContext.c)
 * Callees:
 *     KxContextToKframes @ 0x140355650 (KxContextToKframes.c)
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
