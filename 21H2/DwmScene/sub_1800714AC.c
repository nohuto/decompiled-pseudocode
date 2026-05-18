/*
 * XREFs of sub_1800714AC @ 0x1800714AC
 * Callers:
 *     sub_18007016C @ 0x18007016C (sub_18007016C.c)
 *     sub_180079884 @ 0x180079884 (sub_180079884.c)
 *     sub_180086D34 @ 0x180086D34 (sub_180086D34.c)
 *     sub_180086F6C @ 0x180086F6C (sub_180086F6C.c)
 *     sub_1800B5060 @ 0x1800B5060 (sub_1800B5060.c)
 *     sub_1800DE6F0 @ 0x1800DE6F0 (sub_1800DE6F0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     unknown_libname_102 @ 0x180011624 (unknown_libname_102.c)
 */

_QWORD *__fastcall sub_1800714AC(__int64 a1, _QWORD *a2, __int64 a3)
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
  unknown_libname_102((__int64)(v3 - 2), 0);
  *(_QWORD *)(a1 + 8) -= 16LL;
  result = a2;
  *a2 = a3;
  return result;
}
