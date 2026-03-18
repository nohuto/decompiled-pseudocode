/*
 * XREFs of PpReleaseBootDDB @ 0x1407A64A4
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1403BF4C4 (PnpCompleteSystemStartProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     SdbReleaseDatabase @ 0x14073EAA8 (SdbReleaseDatabase.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 PpReleaseBootDDB()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiDDBLock, 1u);
  if ( PpDDBHandle )
  {
    SdbReleaseDatabase((__int64)PpDDBHandle);
    PpDDBHandle = 0LL;
    ExFreePoolWithTag(PpBootDDB, 0);
    PpBootDDB = 0LL;
    v1 = 0;
  }
  else
  {
    v1 = -1073741823;
  }
  if ( PpDDBPatchHandle )
  {
    SdbReleaseDatabase((__int64)PpDDBPatchHandle);
    PpDDBPatchHandle = 0LL;
    ExFreePoolWithTag(PpBootDDBPatch, 0);
    PpBootDDBPatch = 0LL;
  }
  ExReleaseResourceLite(&PiDDBLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v2, v3, v4);
  return v1;
}
