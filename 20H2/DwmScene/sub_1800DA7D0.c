/*
 * XREFs of sub_1800DA7D0 @ 0x1800DA7D0
 * Callers:
 *     sub_1800687CC @ 0x1800687CC (sub_1800687CC.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

_QWORD *__fastcall sub_1800DA7D0(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *result; // rax

  result = std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 8), a2);
  *(_DWORD *)(a1 + 56) = a3;
  return result;
}
