/*
 * XREFs of sub_180117340 @ 0x180117340
 * Callers:
 *     sub_180116FB0 @ 0x180116FB0 (sub_180116FB0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     unknown_libname_100 @ 0x180011544 (unknown_libname_100.c)
 */

_QWORD *__fastcall sub_180117340(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  __int64 *v4; // rsi
  __int64 *v5; // rbp
  _QWORD *v9; // rdi
  __int64 i; // rbp
  _QWORD *result; // rax

  v4 = *(__int64 **)(a1 + 8);
  v5 = a4;
  v9 = a3;
  if ( a4 != v4 )
  {
    do
    {
      std::shared_ptr<__ExceptionPtr>::operator=(v9, v5);
      v9 += 2;
      v5 += 2;
    }
    while ( v5 != v4 );
    v4 = *(__int64 **)(a1 + 8);
  }
  for ( i = (__int64)v9; (__int64 *)i != v4; i += 16LL )
    unknown_libname_100(i, 0);
  result = a2;
  *a2 = a3;
  *(_QWORD *)(a1 + 8) = v9;
  return result;
}
