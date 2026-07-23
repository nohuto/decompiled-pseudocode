/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x1409F348C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     BgQueryBootGraphicsInformation @ 0x14039BF64 (BgQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(int a1, __int64 a2)
{
  if ( byte_140C50BE8 )
    return BgQueryBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}
