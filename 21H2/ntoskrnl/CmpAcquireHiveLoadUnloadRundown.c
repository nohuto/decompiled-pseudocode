/*
 * XREFs of CmpAcquireHiveLoadUnloadRundown @ 0x140AB4138
 * Callers:
 *     CmLoadDifferencingKey @ 0x14067CE4C (CmLoadDifferencingKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140681670 (CmpLateUnloadHiveWorker.c)
 *     CmUnloadKey @ 0x14069E454 (CmUnloadKey.c)
 *     CmLoadKey @ 0x1406DD184 (CmLoadKey.c)
 *     CmpInitHiveFromFile @ 0x1407122B0 (CmpInitHiveFromFile.c)
 *     CmLoadAppKey @ 0x14071A870 (CmLoadAppKey.c)
 *     CmpLoadHiveVolatile @ 0x14090D4E8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14090D9E8 (CmpRefreshHive.c)
 *     NtReplaceKey @ 0x14090F3F0 (NtReplaceKey.c)
 *     CmpSyncNextBackupHive @ 0x140917F4C (CmpSyncNextBackupHive.c)
 *     CmpLazyCommitWorker @ 0x1409194E0 (CmpLazyCommitWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 */

BOOLEAN CmpAcquireHiveLoadUnloadRundown()
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v1; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = ExAcquireRundownProtection(&CmpHiveLoadUnloadRundown);
  if ( !v1 )
    KeLeaveCriticalRegion();
  return v1;
}
