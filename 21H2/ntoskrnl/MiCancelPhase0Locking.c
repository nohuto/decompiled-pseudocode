/*
 * XREFs of MiCancelPhase0Locking @ 0x1407610B4
 * Callers:
 *     MmResetDriverPaging @ 0x140760ED0 (MmResetDriverPaging.c)
 *     MmPageEntireDriver @ 0x140761010 (MmPageEntireDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     MiLockPagableSections @ 0x140B0872C (MiLockPagableSections.c)
 */

_QWORD *__fastcall MiCancelPhase0Locking(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *result; // rax

  if ( (*(_DWORD *)(a1 + 104) & 0x400000) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
    if ( (*(_DWORD *)(a1 + 104) & 0x400000) != 0 )
    {
      MiLockPagableSections(a1, 0LL);
      *(_DWORD *)(a1 + 104) &= ~0x400000u;
    }
    ExReleaseResourceLite(&PsLoadedModuleResource);
    return KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return result;
}
