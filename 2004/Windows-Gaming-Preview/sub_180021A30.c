/*
 * XREFs of sub_180021A30 @ 0x180021A30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025E7C @ 0x180025E7C (sub_180025E7C.c)
 */

__int64 __fastcall sub_180021A30(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 256)) == 2 )
    return (unsigned int)sub_180025E7C(
                           a1 + 200,
                           (a1 + 200) & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 8) >> 64));
  return v1;
}
