/*
 * XREFs of sub_18007296C @ 0x18007296C
 * Callers:
 *     sub_180073D04 @ 0x180073D04 (sub_180073D04.c)
 * Callees:
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_180072D4C @ 0x180072D4C (sub_180072D4C.c)
 */

__int64 *__fastcall sub_18007296C(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  LPVOID v5; // rax
  __int64 *result; // rax

  v4 = 0LL;
  v5 = sub_18006A18C(0x50uLL);
  if ( v5 )
    v4 = sub_180072D4C(v5, a2);
  result = a1;
  *a1 = v4;
  return result;
}
