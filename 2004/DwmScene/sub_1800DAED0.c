/*
 * XREFs of sub_1800DAED0 @ 0x1800DAED0
 * Callers:
 *     sub_1800687EC @ 0x1800687EC (sub_1800687EC.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18008BF00 @ 0x18008BF00 (sub_18008BF00.c)
 */

void __fastcall sub_1800DAED0(__int64 a1, __int64 *a2)
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
    if ( v6 != v7 && (!v6 || !v7 || !sub_18008BF00(v6, v7)) )
    {
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 24), a2);
      *(_BYTE *)(a1 + 61) = 1;
    }
  }
}
