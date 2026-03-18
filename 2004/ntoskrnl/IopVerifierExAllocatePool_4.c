/*
 * XREFs of IopVerifierExAllocatePool_4 @ 0x140504F34
 * Callers:
 *     IopErrorLogThread @ 0x14073FD30 (IopErrorLogThread.c)
 *     IopErrorLogQueueRequest @ 0x1408965F4 (IopErrorLogQueueRequest.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14028C680 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
