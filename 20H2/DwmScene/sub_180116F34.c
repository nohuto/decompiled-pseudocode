/*
 * XREFs of sub_180116F34 @ 0x180116F34
 * Callers:
 *     sub_180116FB0 @ 0x180116FB0 (sub_180116FB0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 **__fastcall sub_180116F34(__int64 **a1, __int64 *a2, __int64 *a3, _QWORD *a4)
{
  __int64 *i; // rdi
  __int64 *j; // rsi
  __int64 **result; // rax

  for ( i = a2; i != a3; i += 2 )
  {
    if ( *i == *a4 )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 2; j != a3; j += 2 )
    {
      if ( *j != *a4 )
      {
        std::shared_ptr<__ExceptionPtr>::operator=(i, j);
        i += 2;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
