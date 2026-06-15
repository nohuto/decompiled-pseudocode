/*
 * XREFs of sub_1800CE420 @ 0x1800CE420
 * Callers:
 *     sub_180005310 @ 0x180005310 (sub_180005310.c)
 *     sub_1800CD9DC @ 0x1800CD9DC (sub_1800CD9DC.c)
 *     sub_1800CFD1C @ 0x1800CFD1C (sub_1800CFD1C.c)
 * Callees:
 *     sub_1800CDF74 @ 0x1800CDF74 (sub_1800CDF74.c)
 */

__int64 __fastcall sub_1800CE420(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v2 = a2;
    do
    {
      result = sub_1800CDF74(a1++);
      --v2;
    }
    while ( v2 );
  }
  return result;
}
