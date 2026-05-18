/*
 * XREFs of sub_180012F88 @ 0x180012F88
 * Callers:
 *     sub_180017EF4 @ 0x180017EF4 (sub_180017EF4.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180092720 @ 0x180092720 (sub_180092720.c)
 *     sub_18009272C @ 0x18009272C (sub_18009272C.c)
 */

__int64 __fastcall sub_180012F88(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r8

  v2 = (_QWORD *)(a1 + 16);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16), a2);
  LOBYTE(v3) = 1;
  *(_WORD *)(*v2 + 112LL) |= 0x10u;
  *(_WORD *)(*v2 + 112LL) &= ~2u;
  *(_WORD *)(*v2 + 112LL) |= 1u;
  sub_18009272C(*v2, &qword_180213638, v3);
  sub_180092720(*v2, &qword_180212678, 1LL);
  return 0LL;
}
