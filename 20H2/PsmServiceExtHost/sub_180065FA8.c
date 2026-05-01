/*
 * XREFs of sub_180065FA8 @ 0x180065FA8
 * Callers:
 *     sub_1800640A4 @ 0x1800640A4 (sub_1800640A4.c)
 *     sub_180066090 @ 0x180066090 (sub_180066090.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180065FA8(__int64 a1)
{
  __int64 v2; // rax

  if ( !a1 )
    return 2LL;
  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a1 + 2 * v2) );
  return 2 * v2 + 2;
}
