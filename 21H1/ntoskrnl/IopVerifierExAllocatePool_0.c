/*
 * XREFs of IopVerifierExAllocatePool_0 @ 0x140281F38
 * Callers:
 *     IopGetSetSpecificExtension @ 0x140281A24 (IopGetSetSpecificExtension.c)
 *     IopAllocateFileObjectExtension @ 0x140281DD0 (IopAllocateFileObjectExtension.c)
 *     IopSetLockOperationProcess @ 0x1402E3C10 (IopSetLockOperationProcess.c)
 *     NtUnlockFile @ 0x1406BEC50 (NtUnlockFile.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14024FDE0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopVerifierExAllocatePool_0(__int64 a1, SIZE_T a2)
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
