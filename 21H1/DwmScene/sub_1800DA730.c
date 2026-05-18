/*
 * XREFs of sub_1800DA730 @ 0x1800DA730
 * Callers:
 *     sub_1800DB5F0 @ 0x1800DB5F0 (sub_1800DB5F0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall sub_1800DA730(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 68) = 1;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 8), (_QWORD *)(a1 + 40));
  result = *(unsigned int *)(a1 + 64);
  *(_DWORD *)(a1 + 56) = result;
  return result;
}
