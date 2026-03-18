/*
 * XREFs of MmIsDriverVerifyingByAddress @ 0x1407B4CE0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     MiLookupDataTableEntry @ 0x1402FDA80 (MiLookupDataTableEntry.c)
 */

LOGICAL __stdcall MmIsDriverVerifyingByAddress(PVOID AddressWithinSection)
{
  LOGICAL v2; // ebx
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v4; // rax

  if ( (VfRuleClasses & 0x400000) != 0 )
    return 0;
  v2 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v4 = MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 0);
  if ( !v4 || (v4[13] & 0x2000000) == 0 )
    v2 = 0;
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v2;
}
