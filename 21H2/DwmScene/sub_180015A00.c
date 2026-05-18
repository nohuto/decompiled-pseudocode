/*
 * XREFs of sub_180015A00 @ 0x180015A00
 * Callers:
 *     sub_180022B3C @ 0x180022B3C (sub_180022B3C.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall sub_180015A00(__int64 a1, _QWORD *a2)
{
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 32), a2);
  return 0LL;
}
