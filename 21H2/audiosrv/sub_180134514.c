/*
 * XREFs of sub_180134514 @ 0x180134514
 * Callers:
 *     sub_18007BB1E @ 0x18007BB1E (sub_18007BB1E.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 */

__int64 __fastcall sub_180134514(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = sub_1800472E0(v2, (a1[2] - v2) & 0xFFFFFFFFFFFFFFFCuLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
