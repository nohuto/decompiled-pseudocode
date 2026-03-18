/*
 * XREFs of PpReleaseBootDDB @ 0x1407B80E4
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1403C2BC8 (PnpCompleteSystemStartProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     SdbReleaseDatabase @ 0x14074F208 (SdbReleaseDatabase.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 PpReleaseBootDDB()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // ebx

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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v1;
}
