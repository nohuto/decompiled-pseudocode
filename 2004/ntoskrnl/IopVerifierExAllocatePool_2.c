/*
 * XREFs of IopVerifierExAllocatePool_2 @ 0x1405019EC
 * Callers:
 *     NtRemoveIoCompletionEx @ 0x1405F7CD0 (NtRemoveIoCompletionEx.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14028C680 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopVerifierExAllocatePool_2(__int64 a1, SIZE_T a2)
{
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFAFFFFF) != 0 || (VfRuleClasses & 0x200000000LL) != 0
                                          || (VfRuleClasses & 0x400000000LL) != 0) )
  {
    return ExAllocatePoolWithTagPriority(
             NonPagedPoolNx,
             a2,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  }
  else
  {
    return ExAllocatePoolWithTag(NonPagedPoolNx, a2, 0x20206F49u);
  }
}
