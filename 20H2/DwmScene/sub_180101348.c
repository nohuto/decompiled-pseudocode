/*
 * XREFs of sub_180101348 @ 0x180101348
 * Callers:
 *     sub_180100B8C @ 0x180100B8C (sub_180100B8C.c)
 * Callees:
 *     sub_180101408 @ 0x180101408 (sub_180101408.c)
 */

__int64 __fastcall sub_180101348(void *Src, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi

  if ( a3 > 32 )
  {
    v4 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      Src = (void *)sub_180101408(Src);
      --v4;
    }
    while ( v4 );
  }
  return sub_180101408(Src);
}
