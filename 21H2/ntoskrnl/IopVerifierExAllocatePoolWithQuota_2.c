/*
 * XREFs of IopVerifierExAllocatePoolWithQuota_2 @ 0x1403CB09C
 * Callers:
 *     IopLoadDriverImage @ 0x140399FC8 (IopLoadDriverImage.c)
 *     IopUnloadDriver @ 0x140769958 (IopUnloadDriver.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTagPriority @ 0x140346E30 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
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
