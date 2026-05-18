/*
 * XREFs of sub_18009D690 @ 0x18009D690
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800997D8 @ 0x1800997D8 (sub_1800997D8.c)
 */

_QWORD *__fastcall sub_18009D690(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  sub_1800997D8((_QWORD *)(a1 + 104), 0LL);
  v3 = 0LL;
  return std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 88), &v3);
}
