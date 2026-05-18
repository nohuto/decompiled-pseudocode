/*
 * XREFs of sub_18011CC10 @ 0x18011CC10
 * Callers:
 *     sub_18011C880 @ 0x18011C880 (sub_18011C880.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     unknown_libname_102 @ 0x180011624 (unknown_libname_102.c)
 */

_QWORD *__fastcall sub_18011CC10(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
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
    unknown_libname_102(i, 0);
  result = a2;
  *a2 = a3;
  *(_QWORD *)(a1 + 8) = v9;
  return result;
}
