/*
 * XREFs of HalpInterruptReinitializeThisProcessor @ 0x1403A3888
 * Callers:
 *     HalpInitializeInterruptsPn @ 0x1403A9F48 (HalpInitializeInterruptsPn.c)
 *     HalpPostSleepMP @ 0x140996864 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x1409A9408 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     HalpInterruptInitializeLocalUnit @ 0x1403A3E5C (HalpInterruptInitializeLocalUnit.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
