/*
 * XREFs of IopVerifierExAllocatePoolWithQuota_4 @ 0x1405089DC
 * Callers:
 *     NtUnlockFile @ 0x1405EF3E0 (NtUnlockFile.c)
 *     NtLockFile @ 0x14071FB70 (NtLockFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTagPriority @ 0x140346E30 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID IopVerifierExAllocatePoolWithQuota_4()
{
  PVOID result; // rax

  if ( !ViVerifierEnabled
    || (VfRuleClasses & 0xFFAFFFFF) == 0 && (VfRuleClasses & 0x200000000LL) == 0 && (VfRuleClasses & 0x400000000LL) == 0 )
  {
    return ExAllocatePoolWithQuotaTag(NonPagedPoolNx, 8uLL, 0x20206F49u);
  }
  result = ExAllocatePoolWithTagPriority(
             NonPagedPoolNx,
             8uLL,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
