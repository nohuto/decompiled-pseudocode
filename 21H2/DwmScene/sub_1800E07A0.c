/*
 * XREFs of sub_1800E07A0 @ 0x1800E07A0
 * Callers:
 *     sub_18006E0BC @ 0x18006E0BC (sub_18006E0BC.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800917D0 @ 0x1800917D0 (sub_1800917D0.c)
 */

void __fastcall sub_1800E07A0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx

  v4 = *(_QWORD *)(a1 + 24);
  v5 = *a2;
  if ( v4 != v5 )
  {
    v6 = *(_QWORD *)(v4 + 112);
    v7 = *(_QWORD *)(v5 + 112);
    if ( v6 != v7 && (!v6 || !v7 || !sub_1800917D0(v6, v7)) )
    {
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 24), a2);
      *(_BYTE *)(a1 + 61) = 1;
    }
  }
}
