/*
 * XREFs of sub_14065F904 @ 0x14065F904
 * Callers:
 *     WbHeapExecutionUnloadModule @ 0x14065C794 (WbHeapExecutionUnloadModule.c)
 *     WbFreeWarbirdProcess @ 0x14065CF10 (WbFreeWarbirdProcess.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x14065D048 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbCreateHeapExecutedBlock @ 0x14065E314 (WbCreateHeapExecutedBlock.c)
 *     sub_14065F704 @ 0x14065F704 (sub_14065F704.c)
 *     WbGetHeapExecutedBlock @ 0x14065F79C (WbGetHeapExecutedBlock.c)
 *     WbHeapExecuteCall @ 0x14065FA50 (WbHeapExecuteCall.c)
 * Callees:
 *     sub_14065E118 @ 0x14065E118 (sub_14065E118.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

signed __int64 __fastcall sub_14065F904(__int64 a1, __int64 a2)
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
        sub_14065E118(a1, v5);
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
