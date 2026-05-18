/*
 * XREFs of ?cancel_current_task@Concurrency@@YAXXZ_0 @ 0x180124EBC
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 * Callees:
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     sub_180124E7C @ 0x180124E7C (sub_180124E7C.c)
 */

void __noreturn Concurrency::cancel_current_task(void)
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_180124E7C(pExceptionObject);
  throw (std::bad_array_new_length *)pExceptionObject;
}
