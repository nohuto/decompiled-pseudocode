/*
 * XREFs of sub_14065F4D0 @ 0x14065F4D0
 * Callers:
 *     WbCreateHeapExecutedBlock @ 0x14065CA04 (WbCreateHeapExecutedBlock.c)
 *     sub_14065F2D0 @ 0x14065F2D0 (sub_14065F2D0.c)
 *     WbGetHeapExecutedBlock @ 0x14065F368 (WbGetHeapExecutedBlock.c)
 *     WbHeapExecuteCall @ 0x14065F61C (WbHeapExecuteCall.c)
 *     WbHeapExecutionUnloadModule @ 0x1406D55C4 (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406D56C8 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbFreeWarbirdProcess @ 0x1406E7B88 (WbFreeWarbirdProcess.c)
 * Callees:
 *     sub_14065C808 @ 0x14065C808 (sub_14065C808.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

signed __int64 __fastcall sub_14065F4D0(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rdi
  __int64 v5; // rdx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 80));
    if ( !v2 )
    {
      v5 = *(_QWORD *)(a2 + 40);
      if ( v5 )
      {
        sub_14065C808(a1, v5);
        *(_QWORD *)(a2 + 40) = 0LL;
        *(_QWORD *)(a2 + 24) = 0LL;
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_DWORD *)(a2 + 72) = 0;
      }
      ExFreePoolWithTag((PVOID)a2, 0x42524157u);
    }
  }
  return v2;
}
