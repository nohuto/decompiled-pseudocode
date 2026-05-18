/*
 * XREFs of sub_180012EA8 @ 0x180012EA8
 * Callers:
 *     sub_180017A4C @ 0x180017A4C (sub_180017A4C.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18008CE50 @ 0x18008CE50 (sub_18008CE50.c)
 *     sub_18008CE5C @ 0x18008CE5C (sub_18008CE5C.c)
 */

__int64 __fastcall sub_180012EA8(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r8

  v2 = (_QWORD *)(a1 + 16);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16), a2);
  LOBYTE(v3) = 1;
  *(_WORD *)(*v2 + 112LL) |= 0x10u;
  *(_WORD *)(*v2 + 112LL) &= ~2u;
  *(_WORD *)(*v2 + 112LL) |= 1u;
  sub_18008CE5C(*v2, &qword_18020C5C0, v3);
  sub_18008CE50(*v2, &qword_18020B600, 1LL);
  return 0LL;
}
