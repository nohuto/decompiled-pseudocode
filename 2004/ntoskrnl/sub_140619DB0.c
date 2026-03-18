/*
 * XREFs of sub_140619DB0 @ 0x140619DB0
 * Callers:
 *     sub_140619BB0 @ 0x140619BB0 (sub_140619BB0.c)
 *     WbGetHeapExecutedBlock @ 0x140619C48 (WbGetHeapExecutedBlock.c)
 *     WbHeapExecuteCall @ 0x140619EFC (WbHeapExecuteCall.c)
 *     WbFreeWarbirdProcess @ 0x1406D8C70 (WbFreeWarbirdProcess.c)
 *     WbCreateHeapExecutedBlock @ 0x1406D8EB0 (WbCreateHeapExecutedBlock.c)
 *     WbHeapExecutionUnloadModule @ 0x1406F8A44 (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406F8B48 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 * Callees:
 *     sub_1406F9140 @ 0x1406F9140 (sub_1406F9140.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

signed __int64 __fastcall sub_140619DB0(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rdi

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 80));
    if ( !v2 )
    {
      if ( *(_QWORD *)(a2 + 40) )
      {
        sub_1406F9140();
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
