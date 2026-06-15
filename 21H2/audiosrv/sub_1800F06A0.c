/*
 * XREFs of sub_1800F06A0 @ 0x1800F06A0
 * Callers:
 *     unknown_libname_122 @ 0x1800F1033 (unknown_libname_122.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800F070C @ 0x1800F070C (sub_1800F070C.c)
 */

BOOL __fastcall sub_1800F06A0(_QWORD *a1)
{
  void *v1; // rbx
  BOOL result; // eax

  v1 = (void *)*a1;
  if ( *a1 )
  {
    sub_1800F070C(*a1);
    return sub_18006A148(v1);
  }
  return result;
}
