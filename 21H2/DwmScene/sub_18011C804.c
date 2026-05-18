/*
 * XREFs of sub_18011C804 @ 0x18011C804
 * Callers:
 *     sub_18011C880 @ 0x18011C880 (sub_18011C880.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 **__fastcall sub_18011C804(__int64 **a1, __int64 *a2, __int64 *a3, _QWORD *a4)
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
