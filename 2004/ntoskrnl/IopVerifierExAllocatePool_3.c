/*
 * XREFs of IopVerifierExAllocatePool_3 @ 0x1405033AC
 * Callers:
 *     NtQueryEaFile @ 0x1406EA6D0 (NtQueryEaFile.c)
 *     NtSetEaFile @ 0x14071EAF0 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x1408928F0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14028C680 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
