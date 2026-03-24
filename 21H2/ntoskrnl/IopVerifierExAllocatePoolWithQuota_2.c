/*
 * XREFs of IopVerifierExAllocatePoolWithQuota_2 @ 0x1403CAF28
 * Callers:
 *     IopLoadDriverImage @ 0x140399E78 (IopLoadDriverImage.c)
 *     IopUnloadDriver @ 0x140769798 (IopUnloadDriver.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTagPriority @ 0x14033C0E0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140353020 (ExAllocatePoolWithQuotaTag.c)
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
    RtlRaiseStatus(0xC000009A);
  return result;
}
