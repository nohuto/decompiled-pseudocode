/*
 * XREFs of ViDeadlockAllocate @ 0x1409DBB28
 * Callers:
 *     VfDeadlockAcquireResource @ 0x1409DA5B8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockBeforeCallDriver @ 0x1409DAD14 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockInitializeResource @ 0x1409DB1A4 (VfDeadlockInitializeResource.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14026E044 (ExAllocateFromNPagedLookasideList.c)
 */

PVOID __fastcall ViDeadlockAllocate(int a1)
{
  int v1; // ecx
  int v2; // ecx
  PVOID result; // rax
  struct _NPAGED_LOOKASIDE_LIST *v4; // rcx

  v1 = a1 - 1;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      if ( v2 != 1 )
        return 0LL;
      v4 = &ViDeadlockThreadLookaside;
    }
    else
    {
      v4 = &ViDeadlockNodeLookaside;
    }
  }
  else
  {
    v4 = &ViDeadlockResourceLookaside;
  }
  result = ExAllocateFromNPagedLookasideList(v4);
  if ( !result )
  {
    ViDeadlockState |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)ViDeadlockGlobals + 8196);
  }
  return result;
}
