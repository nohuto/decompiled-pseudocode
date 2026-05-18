/*
 * XREFs of sub_18007D4C4 @ 0x18007D4C4
 * Callers:
 *     sub_18007CE10 @ 0x18007CE10 (sub_18007CE10.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18007D4C4(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4,
        unsigned __int8 (__fastcall *a5)(__int64 *, __int64 *))
{
  __int64 *v9; // rsi
  _QWORD *v10; // rbx

  v9 = a2;
  while ( 1 )
  {
    v10 = a4 + 2;
    if ( !a5(v9, a1) )
      break;
    std::shared_ptr<__ExceptionPtr>::operator=(a4, v9);
    v9 += 2;
    if ( v9 == a3 )
    {
      while ( a1 != a2 )
      {
        std::shared_ptr<__ExceptionPtr>::operator=(v10, a1);
        v10 += 2;
        a1 += 2;
      }
      return v10;
    }
LABEL_6:
    a4 += 2;
  }
  std::shared_ptr<__ExceptionPtr>::operator=(a4, a1);
  a1 += 2;
  if ( a1 != a2 )
    goto LABEL_6;
  while ( v9 != a3 )
  {
    std::shared_ptr<__ExceptionPtr>::operator=(v10, v9);
    v10 += 2;
    v9 += 2;
  }
  return v10;
}
