/*
 * XREFs of sub_180065F7C @ 0x180065F7C
 * Callers:
 *     sub_180064028 @ 0x180064028 (sub_180064028.c)
 *     sub_180066090 @ 0x180066090 (sub_180066090.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180065F7C(__int64 a1)
{
  __int64 v3; // rcx

  if ( !a1 )
    return 1LL;
  v3 = -1LL;
  do
    ++v3;
  while ( *(_BYTE *)(a1 + v3) );
  return v3 + 1;
}
