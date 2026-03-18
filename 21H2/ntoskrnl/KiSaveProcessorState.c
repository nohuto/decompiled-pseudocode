/*
 * XREFs of KiSaveProcessorState @ 0x14029AEF0
 * Callers:
 *     KiFreezeTargetExecution @ 0x14029AF90 (KiFreezeTargetExecution.c)
 *     KxNmiInterrupt @ 0x14042D380 (KxNmiInterrupt.c)
 * Callees:
 *     KiSaveNpxState @ 0x140242104 (KiSaveNpxState.c)
 *     KeContextFromKframes @ 0x140298BF0 (KeContextFromKframes.c)
 *     KiSaveProcessorControlState @ 0x14041F720 (KiSaveProcessorControlState.c)
 */

__int64 __fastcall KiSaveProcessorState(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 Context; // rbx
  int ContextFlagsInit; // edx

  CurrentPrcb = KeGetCurrentPrcb();
  Context = (__int64)CurrentPrcb->Context;
  ContextFlagsInit = CurrentPrcb->ContextFlagsInit;
  *(_DWORD *)(Context + 48) = ContextFlagsInit;
  if ( (*(_BYTE *)(a1 + 368) & 1) == 0
    && ((ContextFlagsInit & 0x100040) == 1048640 || (ContextFlagsInit & 0x100008) == 1048584) )
  {
    KiSaveNpxState(Context, ContextFlagsInit);
  }
  KeContextFromKframes(a1, a2, Context);
  return KiSaveProcessorControlState(&CurrentPrcb->ProcessorState);
}
