/*
 * XREFs of sub_1800E00A0 @ 0x1800E00A0
 * Callers:
 *     sub_18006E09C @ 0x18006E09C (sub_18006E09C.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

_QWORD *__fastcall sub_1800E00A0(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *result; // rax

  result = std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 8), a2);
  *(_DWORD *)(a1 + 56) = a3;
  return result;
}
