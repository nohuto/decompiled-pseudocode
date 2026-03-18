/*
 * XREFs of MiCancelPhase0Locking @ 0x1406F0198
 * Callers:
 *     MmResetDriverPaging @ 0x1406EF240 (MmResetDriverPaging.c)
 *     MmPageEntireDriver @ 0x1406EF3D0 (MmPageEntireDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     MiLockPagableSections @ 0x140A4CC34 (MiLockPagableSections.c)
 */

_QWORD *__fastcall MiCancelPhase0Locking(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
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
    return KeLeaveCriticalRegionThread((__int64)CurrentThread, v3, v4, v5);
  }
  return result;
}
