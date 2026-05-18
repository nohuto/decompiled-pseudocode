/*
 * XREFs of sub_18006BBDC @ 0x18006BBDC
 * Callers:
 *     sub_18006A89C @ 0x18006A89C (sub_18006A89C.c)
 *     sub_180073FB4 @ 0x180073FB4 (sub_180073FB4.c)
 *     sub_180081464 @ 0x180081464 (sub_180081464.c)
 *     sub_18008169C @ 0x18008169C (sub_18008169C.c)
 *     sub_1800AF790 @ 0x1800AF790 (sub_1800AF790.c)
 *     sub_1800D8E20 @ 0x1800D8E20 (sub_1800D8E20.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     unknown_libname_100 @ 0x180011544 (unknown_libname_100.c)
 */

_QWORD *__fastcall sub_18006BBDC(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 *v4; // rdi
  _QWORD *result; // rax

  v3 = *(__int64 **)(a1 + 8);
  v4 = (__int64 *)(a3 + 16);
  if ( (__int64 *)(a3 + 16) != v3 )
  {
    do
    {
      std::shared_ptr<__ExceptionPtr>::operator=(v4 - 2, v4);
      v4 += 2;
    }
    while ( v4 != v3 );
    v3 = *(__int64 **)(a1 + 8);
  }
  unknown_libname_100((__int64)(v3 - 2), 0);
  *(_QWORD *)(a1 + 8) -= 16LL;
  result = a2;
  *a2 = a3;
  return result;
}
