/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x1409EF48C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 * Callees:
 *     BgQueryBootGraphicsInformation @ 0x1403988F4 (BgQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(int a1, __int64 a2)
{
  if ( byte_140C50AD0 )
    return BgQueryBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}
