/*
 * XREFs of IopVerifierExAllocatePoolWithQuota_2 @ 0x1403C6B0C
 * Callers:
 *     IopLoadDriverImage @ 0x140396978 (IopLoadDriverImage.c)
 *     IopUnloadDriver @ 0x140754A50 (IopUnloadDriver.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithTagPriority @ 0x14024FDE0 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 */

PVOID __fastcall IopVerifierExAllocatePoolWithQuota_2(__int64 a1, SIZE_T a2)
{
  PVOID result; // rax

  if ( !ViVerifierEnabled
    || (VfRuleClasses & 0xFFAFFFFF) == 0 && (VfRuleClasses & 0x200000000LL) == 0 && (VfRuleClasses & 0x400000000LL) == 0 )
  {
    return ExAllocatePoolWithQuotaTag(PagedPool, a2, 0x20206F49u);
  }
  result = ExAllocatePoolWithTagPriority(
             PagedPool,
             a2,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
