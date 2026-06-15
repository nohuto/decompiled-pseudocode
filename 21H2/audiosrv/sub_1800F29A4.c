/*
 * XREFs of sub_1800F29A4 @ 0x1800F29A4
 * Callers:
 *     sub_1800F3EAC @ 0x1800F3EAC (sub_1800F3EAC.c)
 * Callees:
 *     sub_1800F3E08 @ 0x1800F3E08 (sub_1800F3E08.c)
 */

__int64 __fastcall sub_1800F29A4(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rcx

  result = sub_1800F3E08(a1, a2, a1[1]);
  v4 = (__int64 *)a1[1];
  if ( v4 )
    *v4 = result;
  else
    *a1 = result;
  a1[1] = result;
  return result;
}
