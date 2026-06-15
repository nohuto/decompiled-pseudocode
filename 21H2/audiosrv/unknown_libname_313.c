/*
 * XREFs of unknown_libname_313 @ 0x1800F9B64
 * Callers:
 *     sub_1800FD89F @ 0x1800FD89F (sub_1800FD89F.c)
 * Callees:
 *     sub_1800FA07C @ 0x1800FA07C (sub_1800FA07C.c)
 */

// Microsoft VisualC v7/14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_313(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    result = sub_1800FA07C();
  *a1 = 0LL;
  return result;
}
