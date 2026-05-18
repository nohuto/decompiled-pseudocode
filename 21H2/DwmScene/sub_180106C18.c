/*
 * XREFs of sub_180106C18 @ 0x180106C18
 * Callers:
 *     sub_18010645C @ 0x18010645C (sub_18010645C.c)
 * Callees:
 *     sub_180106CD8 @ 0x180106CD8 (sub_180106CD8.c)
 */

__int64 __fastcall sub_180106C18(void *Src, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi

  if ( a3 > 32 )
  {
    v4 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      Src = (void *)sub_180106CD8(Src);
      --v4;
    }
    while ( v4 );
  }
  return sub_180106CD8(Src);
}
