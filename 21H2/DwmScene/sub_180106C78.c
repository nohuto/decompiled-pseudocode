/*
 * XREFs of sub_180106C78 @ 0x180106C78
 * Callers:
 *     sub_180106544 @ 0x180106544 (sub_180106544.c)
 * Callees:
 *     sub_180106D74 @ 0x180106D74 (sub_180106D74.c)
 */

__int64 __fastcall sub_180106C78(void *Src, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi

  if ( a3 > 32 )
  {
    v4 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      Src = (void *)sub_180106D74(Src);
      --v4;
    }
    while ( v4 );
  }
  return sub_180106D74(Src);
}
