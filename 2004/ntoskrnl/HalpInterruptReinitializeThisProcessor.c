/*
 * XREFs of HalpInterruptReinitializeThisProcessor @ 0x1403A09A8
 * Callers:
 *     HalpInitializeInterruptsPn @ 0x1403ACC20 (HalpInitializeInterruptsPn.c)
 *     HalpPostSleepMP @ 0x140992004 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x1409A56A8 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     HalpInterruptInitializeLocalUnit @ 0x1403A0F7C (HalpInterruptInitializeLocalUnit.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 HalpInterruptReinitializeThisProcessor()
{
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 result; // rax

  BugCheckParameter4 = HalpInterruptController;
  result = *(unsigned int *)(HalpInterruptController + 220);
  if ( (result & 1) != 0 )
  {
    result = HalpInterruptInitializeLocalUnit(HalpInterruptController);
    if ( (int)result < 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, KeGetPcr()->Prcb.Number, BugCheckParameter4);
  }
  return result;
}
