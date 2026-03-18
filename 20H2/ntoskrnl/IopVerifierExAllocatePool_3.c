/*
 * XREFs of IopVerifierExAllocatePool_3 @ 0x140506DBC
 * Callers:
 *     NtQueryEaFile @ 0x1406BE550 (NtQueryEaFile.c)
 *     NtSetEaFile @ 0x14072C980 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140898570 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140211F50 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID IopVerifierExAllocatePool_3()
{
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFAFFFFF) != 0 || (VfRuleClasses & 0x200000000LL) != 0
                                          || (VfRuleClasses & 0x400000000LL) != 0) )
  {
    return ExAllocatePoolWithTagPriority(
             NonPagedPoolNx,
             0x18uLL,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  }
  else
  {
    return ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x20206F49u);
  }
}
