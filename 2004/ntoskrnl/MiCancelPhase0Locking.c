/*
 * XREFs of MiCancelPhase0Locking @ 0x1406A9678
 * Callers:
 *     MmResetDriverPaging @ 0x1406A8720 (MmResetDriverPaging.c)
 *     MmPageEntireDriver @ 0x1406A88B0 (MmPageEntireDriver.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     MiLockPagableSections @ 0x140A52934 (MiLockPagableSections.c)
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
