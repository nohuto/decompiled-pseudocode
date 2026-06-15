/*
 * XREFs of unknown_libname_35 @ 0x180002250
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _o___std_exception_destroy @ 0x18003A6CE (_o___std_exception_destroy.c)
 */

// Microsoft VisualC v14 64bit runtime
_QWORD *__fastcall unknown_libname_35(_QWORD *a1, char a2)
{
  *a1 = &off_18003E080;
  o___std_exception_destroy(a1 + 1);
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}
