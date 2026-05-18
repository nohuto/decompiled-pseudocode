/*
 * XREFs of sub_180097DC0 @ 0x180097DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180093F08 @ 0x180093F08 (sub_180093F08.c)
 */

_QWORD *__fastcall sub_180097DC0(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  sub_180093F08((_QWORD *)(a1 + 104), 0LL);
  v3 = 0LL;
  return std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 88), &v3);
}
