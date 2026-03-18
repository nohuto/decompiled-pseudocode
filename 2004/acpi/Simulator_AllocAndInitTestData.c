/*
 * XREFs of Simulator_AllocAndInitTestData @ 0x1C006368C
 * Callers:
 *     Simulator_NotifyNamespaceCollision @ 0x1C0063B60 (Simulator_NotifyNamespaceCollision.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C0063DBC (Simulator_Pre_AsyncEvalObject.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C0063EB8 (Simulator_Pre_EvalNameSpaceObject.c)
 *     Simulator_Pre_RegEventHandler @ 0x1C0063F8C (Simulator_Pre_RegEventHandler.c)
 *     Simulator_RefreshTree @ 0x1C0064030 (Simulator_RefreshTree.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00C056C (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     memset @ 0x1C0032180 (memset.c)
 */

PVOID Simulator_AllocAndInitTestData()
{
  PVOID PoolWithTag; // rax
  PVOID v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x44415341u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 0x50uLL);
  return v1;
}
