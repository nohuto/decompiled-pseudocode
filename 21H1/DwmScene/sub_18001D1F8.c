/*
 * XREFs of sub_18001D1F8 @ 0x18001D1F8
 * Callers:
 *     sub_180017C4C @ 0x180017C4C (sub_180017C4C.c)
 *     sub_180017D6C @ 0x180017D6C (sub_180017D6C.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall sub_18001D1F8(__int64 a1, _QWORD *a2)
{
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16), a2);
  return 0LL;
}
