/*
 * XREFs of sub_14065F0A0 @ 0x14065F0A0
 * Callers:
 *     WbFreeWarbirdProcess @ 0x14065CF10 (WbFreeWarbirdProcess.c)
 *     WbGetWarbirdThread @ 0x14065EEB0 (WbGetWarbirdThread.c)
 *     sub_14065F658 @ 0x14065F658 (sub_14065F658.c)
 *     WbHeapExecuteCall @ 0x14065FA50 (WbHeapExecuteCall.c)
 *     sub_1406E36CC @ 0x1406E36CC (sub_1406E36CC.c)
 * Callees:
 *     sub_1406E38DC @ 0x1406E38DC (sub_1406E38DC.c)
 */

signed __int64 __fastcall sub_14065F0A0(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 )
      sub_1406E38DC();
  }
  return v2;
}
