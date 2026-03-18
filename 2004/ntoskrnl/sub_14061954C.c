/*
 * XREFs of sub_14061954C @ 0x14061954C
 * Callers:
 *     WbGetWarbirdThread @ 0x14061935C (WbGetWarbirdThread.c)
 *     sub_140619B04 @ 0x140619B04 (sub_140619B04.c)
 *     WbHeapExecuteCall @ 0x140619EFC (WbHeapExecuteCall.c)
 *     WbFreeWarbirdProcess @ 0x1406D8C70 (WbFreeWarbirdProcess.c)
 *     sub_14071109C @ 0x14071109C (sub_14071109C.c)
 * Callees:
 *     sub_1407111F8 @ 0x1407111F8 (sub_1407111F8.c)
 */

signed __int64 __fastcall sub_14061954C(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 )
      sub_1407111F8();
  }
  return v2;
}
