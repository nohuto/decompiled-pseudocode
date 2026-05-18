/*
 * XREFs of ?cancel_current_task@Concurrency@@YAXXZ @ 0x180124E9C
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 * Callees:
 *     sub_180096E84 @ 0x180096E84 (sub_180096E84.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __noreturn Concurrency::cancel_current_task(void)
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_180096E84(pExceptionObject);
  throw (std::bad_alloc *)pExceptionObject;
}
