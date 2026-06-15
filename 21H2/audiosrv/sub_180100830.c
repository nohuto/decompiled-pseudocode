/*
 * XREFs of sub_180100830 @ 0x180100830
 * Callers:
 *     sub_180103040 @ 0x180103040 (sub_180103040.c)
 *     sub_180111EF0 @ 0x180111EF0 (sub_180111EF0.c)
 *     sub_180112220 @ 0x180112220 (sub_180112220.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_180100830(_QWORD *a1)
{
  if ( !*a1 )
    sub_1800B8610(-2147467259);
  return *a1 + 16LL;
}
