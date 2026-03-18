/*
 * XREFs of HalpInterruptReinitializeThisProcessor @ 0x1403AEED4
 * Callers:
 *     HalpInitializeInterruptsPn @ 0x1403B8BF8 (HalpInitializeInterruptsPn.c)
 *     HalpPostSleepMP @ 0x140A500C0 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x140A62458 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     HalpInterruptInitializeLocalUnit @ 0x1403B0A04 (HalpInterruptInitializeLocalUnit.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 HalpInterruptReinitializeThisProcessor()
{
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 result; // rax

  BugCheckParameter4 = HalpInterruptController;
  result = *(unsigned int *)(HalpInterruptController + 228);
  if ( (result & 1) != 0 )
  {
    result = HalpInterruptInitializeLocalUnit(HalpInterruptController);
    if ( (int)result < 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, KeGetPcr()->Prcb.Number, BugCheckParameter4);
  }
  return result;
}
