/*
 * XREFs of unknown_libname_272 @ 0x1800B49F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _o___std_exception_destroy @ 0x18006AA7E (_o___std_exception_destroy.c)
 */

// Microsoft VisualC v14 64bit runtime
_QWORD *__fastcall unknown_libname_272(_QWORD *a1, char a2)
{
  *a1 = &off_180149EB8;
  o___std_exception_destroy((__int64)(a1 + 1));
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
