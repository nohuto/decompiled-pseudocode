/*
 * XREFs of IopVerifierExAllocatePool_1 @ 0x1403547B0
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x14068EAF0 (NtQueryVolumeInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x14075AA70 (NtSetVolumeInformationFile.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14028C680 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID IopVerifierExAllocatePool_1()
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
