/*
 * XREFs of sub_1800158B0 @ 0x1800158B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180014CA8 @ 0x180014CA8 (sub_180014CA8.c)
 */

__int64 __fastcall sub_1800158B0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  result = *a2;
  if ( *a2 == 0x4BD1CD637052B94FLL )
  {
    result = a2[1];
    if ( result == 0xDB6D126B7184B2B7uLL )
      return sub_180014CA8(a1 + 16);
  }
  return result;
}
