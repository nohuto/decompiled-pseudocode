/*
 * XREFs of sub_1800E06C0 @ 0x1800E06C0
 * Callers:
 *     sub_1800E057C @ 0x1800E057C (sub_1800E057C.c)
 *     sub_1800E0EC0 @ 0x1800E0EC0 (sub_1800E0EC0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall sub_1800E06C0(__int64 a1)
{
  __int64 result; // rax

  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 24), (_QWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 40) = -1;
  result = 1065353216LL;
  *(_DWORD *)(a1 + 44) = 1065353216;
  *(_DWORD *)(a1 + 48) = 1065353216;
  *(_DWORD *)(a1 + 52) = 1065353216;
  *(_DWORD *)(a1 + 56) = 1065353216;
  *(_WORD *)(a1 + 60) = 256;
  return result;
}
