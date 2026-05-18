/*
 * XREFs of ?cancel_current_task@Concurrency@@YAXXZ @ 0x18011F5CC
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 * Callees:
 *     sub_1800915B4 @ 0x1800915B4 (sub_1800915B4.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __noreturn Concurrency::cancel_current_task(void)
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_1800915B4(pExceptionObject);
  throw (std::bad_alloc *)pExceptionObject;
}
