/*
 * XREFs of sub_1800229F4 @ 0x1800229F4
 * Callers:
 *     sub_1800180F4 @ 0x1800180F4 (sub_1800180F4.c)
 *     sub_180018214 @ 0x180018214 (sub_180018214.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall sub_1800229F4(__int64 a1, _QWORD *a2)
{
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16), a2);
  return 0LL;
}
