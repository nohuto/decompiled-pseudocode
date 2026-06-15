/*
 * XREFs of sub_1800EA590 @ 0x1800EA590
 * Callers:
 *     unknown_libname_31 @ 0x180076DC0 (unknown_libname_31.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

BOOL __fastcall sub_1800EA590(__int64 **a1)
{
  __int64 *v1; // rbx
  BOOL result; // eax

  v1 = *a1;
  if ( *a1 )
  {
    sub_18000F708(*a1);
    return sub_18006A148(v1);
  }
  return result;
}
