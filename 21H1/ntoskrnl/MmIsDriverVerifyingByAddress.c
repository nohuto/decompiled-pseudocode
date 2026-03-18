/*
 * XREFs of MmIsDriverVerifyingByAddress @ 0x1407BCDE0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     MiLookupDataTableEntry @ 0x140324C98 (MiLookupDataTableEntry.c)
 */

LOGICAL __stdcall MmIsDriverVerifyingByAddress(PVOID AddressWithinSection)
{
  struct _KTHREAD *CurrentThread; // rsi
  LOGICAL v3; // edi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  CurrentThread = KeGetCurrentThread();
  v3 = 1;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v4 = MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 0);
  if ( !v4 || (*(_DWORD *)(v4 + 104) & 0x2000000) == 0 )
    v3 = 0;
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v5, v6, v7);
  return v3;
}
