/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x1409F248C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 * Callees:
 *     BgQueryBootGraphicsInformation @ 0x14039BE14 (BgQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(int a1, __int64 a2)
{
  if ( byte_140C50B99 )
    return BgQueryBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}
