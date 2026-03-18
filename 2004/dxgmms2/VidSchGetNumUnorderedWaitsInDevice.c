/*
 * XREFs of VidSchGetNumUnorderedWaitsInDevice @ 0x1C0088950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetNumUnorderedWaitsInDevice(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(a1 + 1588);
  else
    return 0LL;
}
