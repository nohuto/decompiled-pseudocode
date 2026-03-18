/*
 * XREFs of HalpFreeResumeStructures @ 0x140A5228C
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x14039693C (HalpDispatchSystemStateTransition.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 */

void __fastcall HalpFreeResumeStructures(__int64 a1)
{
  if ( HalpHiberProcState )
  {
    HalpMmAllocCtxFree(a1, HalpHiberProcState);
    HalpHiberProcState = 0LL;
  }
}
