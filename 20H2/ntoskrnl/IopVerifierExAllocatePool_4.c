/*
 * XREFs of IopVerifierExAllocatePool_4 @ 0x140508944
 * Callers:
 *     IopErrorLogThread @ 0x14074E910 (IopErrorLogThread.c)
 *     IopErrorLogQueueRequest @ 0x14089C2A4 (IopErrorLogQueueRequest.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140211F50 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopVerifierExAllocatePool_4(POOL_TYPE a1, SIZE_T a2)
{
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFAFFFFF) != 0 || (VfRuleClasses & 0x200000000LL) != 0
                                          || (VfRuleClasses & 0x400000000LL) != 0) )
  {
    return ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  }
  else
  {
    return ExAllocatePoolWithTag(a1, a2, 0x20206F49u);
  }
}
