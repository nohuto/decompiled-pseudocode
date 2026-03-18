/*
 * XREFs of sub_14065EC6C @ 0x14065EC6C
 * Callers:
 *     WbGetWarbirdThread @ 0x14065EA7C (WbGetWarbirdThread.c)
 *     sub_14065F224 @ 0x14065F224 (sub_14065F224.c)
 *     WbHeapExecuteCall @ 0x14065F61C (WbHeapExecuteCall.c)
 *     WbFreeWarbirdProcess @ 0x1406E7B88 (WbFreeWarbirdProcess.c)
 *     sub_1406ED56C @ 0x1406ED56C (sub_1406ED56C.c)
 * Callees:
 *     sub_1406ED6C8 @ 0x1406ED6C8 (sub_1406ED6C8.c)
 */

signed __int64 __fastcall sub_14065EC6C(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 )
      sub_1406ED6C8();
  }
  return v2;
}
