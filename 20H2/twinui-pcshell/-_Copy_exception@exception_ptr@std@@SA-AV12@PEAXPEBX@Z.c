/*
 * XREFs of ?_Copy_exception@exception_ptr@std@@SA?AV12@PEAXPEBX@Z @ 0x180326668
 * Callers:
 *     ??$make_exception_ptr@PE$AAVException@Platform@@@std@@YA?AVexception_ptr@0@PE$AAVException@Platform@@@Z @ 0x18032385C (--$make_exception_ptr@PE$AAVException@Platform@@@std@@YA-AVexception_ptr@0@PE$AAVException@Platf.c)
 *     ??$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA?AVexception_ptr@0@Uhresult_canceled@winrt@@@Z @ 0x180461690 (--$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA-AVexception_ptr@0@Uhresult_canceled@winr.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=3
void *__fastcall std::exception_ptr::_Copy_exception(void *a1, const void *a2, const void *a3)
{
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  __ExceptionPtrCreate(v7);
  if ( a3 )
    __ExceptionPtrCopyException(v7, a2, a3);
  __ExceptionPtrCopy(a1, v7);
  __ExceptionPtrDestroy(v7);
  return a1;
}
