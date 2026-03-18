/*
 * XREFs of ViRaiseIrqlToDpcLevel @ 0x14059D060
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x14059CD58 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x14059CEB8 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x1409DA5B8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockAfterCallDriver @ 0x1409DACA4 (VfDeadlockAfterCallDriver.c)
 *     VfDeadlockBeforeCallDriver @ 0x1409DAD14 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockInitializeResource @ 0x1409DB1A4 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x1409DB328 (VfDeadlockReleaseResource.c)
 *     ViDeadlockDetectionApplySettings @ 0x1409DC24C (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x1409DC304 (ViDeadlockEmptyDatabase.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x1409DCF38 (ViIsThreadInsidePagingCodePaths.c)
 * Callees:
 *     <none>
 */

unsigned __int8 ViRaiseIrqlToDpcLevel()
{
  unsigned __int8 CurrentIrql; // r10
  unsigned __int8 v1; // cl
  struct _KPRCB *CurrentPrcb; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v1 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && v1 <= 0xFu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        *((_DWORD *)CurrentPrcb->SchedulerAssist + 5) |= ~((unsigned __int8)(1LL << (v1 + 1)) - 1) & 4;
      }
    }
  }
  return CurrentIrql;
}
