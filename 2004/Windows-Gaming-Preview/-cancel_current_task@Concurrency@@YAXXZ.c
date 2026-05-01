/*
 * XREFs of ?cancel_current_task@Concurrency@@YAXXZ @ 0x180045224
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x18004482C (--2@YAPEAX_K@Z.c)
 * Callees:
 *     sub_180045130 @ 0x180045130 (sub_180045130.c)
 *     _CxxThrowException @ 0x1800453D8 (_CxxThrowException.c)
 */

void __noreturn Concurrency::cancel_current_task(void)
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_180045130(pExceptionObject);
  throw (std::bad_alloc *)pExceptionObject;
}
