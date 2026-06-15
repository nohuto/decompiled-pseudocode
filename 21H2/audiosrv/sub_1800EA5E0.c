/*
 * XREFs of sub_1800EA5E0 @ 0x1800EA5E0
 * Callers:
 *     unknown_libname_236 @ 0x180076DA0 (unknown_libname_236.c)
 *     sub_180076EE0 @ 0x180076EE0 (sub_180076EE0.c)
 *     sub_1800EC052 @ 0x1800EC052 (sub_1800EC052.c)
 * Callees:
 *     sub_1800EA84C @ 0x1800EA84C (sub_1800EA84C.c)
 */

__int64 __fastcall sub_1800EA5E0(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_1800EA84C(v1);
  return result;
}
