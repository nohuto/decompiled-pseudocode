/*
 * XREFs of IopVerifierExAllocatePool_0 @ 0x1402B6C78
 * Callers:
 *     IopAllocateFileObjectExtension @ 0x14022C1D0 (IopAllocateFileObjectExtension.c)
 *     IopGetSetSpecificExtension @ 0x140356AE8 (IopGetSetSpecificExtension.c)
 *     IopSetLockOperationProcess @ 0x14035770C (IopSetLockOperationProcess.c)
 *     NtUnlockFile @ 0x14068F570 (NtUnlockFile.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14033C0E0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
