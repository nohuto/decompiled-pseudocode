/*
 * XREFs of IopVerifierExAllocatePool_5 @ 0x1405051A8
 * Callers:
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x140895C00 (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableSysEnv @ 0x140896070 (IopGetEnvironmentVariableSysEnv.c)
 *     IopGetEnvironmentVariableTrEE @ 0x1408961D0 (IopGetEnvironmentVariableTrEE.c)
 *     IopSetEnvironmentVariableSysEnv @ 0x140896820 (IopSetEnvironmentVariableSysEnv.c)
 *     IopSetEnvironmentVariableTrEE @ 0x140896930 (IopSetEnvironmentVariableTrEE.c)
 *     IopApplySystemPartitionProt @ 0x140A8DD70 (IopApplySystemPartitionProt.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14024FDE0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopVerifierExAllocatePool_5(__int64 a1, SIZE_T a2)
{
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFAFFFFF) != 0 || (VfRuleClasses & 0x200000000LL) != 0
                                          || (VfRuleClasses & 0x400000000LL) != 0) )
  {
    return ExAllocatePoolWithTagPriority(
             PagedPool,
             a2,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  }
  else
  {
    return ExAllocatePoolWithTag(PagedPool, a2, 0x20206F49u);
  }
}
