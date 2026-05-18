/*
 * XREFs of unknown_libname_9 @ 0x18011C7BC
 * Callers:
 *     sub_180130A6F @ 0x180130A6F (sub_180130A6F.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Microsoft VisualC v7/14 64bit runtime
_QWORD *__fastcall unknown_libname_9(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 *i; // rdi

  for ( i = a1; i != a2; i += 2 )
  {
    std::shared_ptr<__ExceptionPtr>::operator=(a3, i);
    a3 += 2;
  }
  return a3;
}
