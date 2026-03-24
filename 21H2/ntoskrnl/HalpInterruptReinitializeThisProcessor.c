/*
 * XREFs of HalpInterruptReinitializeThisProcessor @ 0x1403A3738
 * Callers:
 *     HalpInitializeInterruptsPn @ 0x1403A91B8 (HalpInitializeInterruptsPn.c)
 *     HalpPostSleepMP @ 0x140995864 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x1409A84D8 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     HalpInterruptInitializeLocalUnit @ 0x1403A3D0C (HalpInterruptInitializeLocalUnit.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
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
