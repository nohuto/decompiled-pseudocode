/*
 * XREFs of ViDeadlockFree @ 0x1409DC538
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x14059C668 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x14059C7C8 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x1409DA558 (VfDeadlockAcquireResource.c)
 *     VfDeadlockBeforeCallDriver @ 0x1409DACB4 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockInitializeResource @ 0x1409DB144 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x1409DB2C8 (VfDeadlockReleaseResource.c)
 *     ViDeadlockEmptyDatabase @ 0x1409DC2A4 (ViDeadlockEmptyDatabase.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402D7298 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViDeadlockFree(PVOID Entry, int a2)
{
  int v2; // edx
  int v3; // edx
  PVOID v4; // rdx
  struct _NPAGED_LOOKASIDE_LIST *v5; // rcx

  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        return;
      v4 = Entry;
      v5 = &ViDeadlockThreadLookaside;
    }
    else
    {
      v4 = Entry;
      v5 = &ViDeadlockNodeLookaside;
    }
  }
  else
  {
    v4 = Entry;
    v5 = &ViDeadlockResourceLookaside;
  }
  ExFreeToNPagedLookasideList(v5, v4);
}
