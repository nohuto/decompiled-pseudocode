/*
 * XREFs of VerifierExEnterPriorityRegionAndAcquireResourceShared @ 0x1409DF110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     VfDeadlockAcquireResource @ 0x1409DA558 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierExEnterPriorityRegionAndAcquireResourceShared(ULONG_PTR a1)
{
  __int64 v2; // rbx
  PVOID retaddr; // [rsp+38h] [rbp+0h]

  v2 = ((__int64 (*)(void))pXdvExEnterPriorityRegionAndAcquireResourceShared)();
  VfDeadlockAcquireResource(a1, 8, (__int64)KeGetCurrentThread(), 0, retaddr);
  return v2;
}
