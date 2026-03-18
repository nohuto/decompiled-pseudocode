/*
 * XREFs of IopVerifierExAllocatePool_5 @ 0x140509208
 * Callers:
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x14089CBD0 (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableSysEnv @ 0x14089D040 (IopGetEnvironmentVariableSysEnv.c)
 *     IopGetEnvironmentVariableTrEE @ 0x14089D1A0 (IopGetEnvironmentVariableTrEE.c)
 *     IopSetEnvironmentVariableSysEnv @ 0x14089D7F0 (IopSetEnvironmentVariableSysEnv.c)
 *     IopSetEnvironmentVariableTrEE @ 0x14089D900 (IopSetEnvironmentVariableTrEE.c)
 *     IopApplySystemPartitionProt @ 0x140A93060 (IopApplySystemPartitionProt.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140211F50 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
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
