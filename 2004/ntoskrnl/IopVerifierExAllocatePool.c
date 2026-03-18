/*
 * XREFs of IopVerifierExAllocatePool @ 0x140228EE8
 * Callers:
 *     IopGetSetSpecificExtension @ 0x1402289D4 (IopGetSetSpecificExtension.c)
 *     IopAllocateFileObjectExtension @ 0x140228D80 (IopAllocateFileObjectExtension.c)
 *     IopSetLockOperationProcess @ 0x1402D6EC0 (IopSetLockOperationProcess.c)
 *     NtUnlockFile @ 0x1406DF1B0 (NtUnlockFile.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14028C680 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopVerifierExAllocatePool(__int64 a1, SIZE_T a2)
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
