/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x140AACB50
 * Callers:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     BgQueryBootGraphicsInformation @ 0x1403A7B10 (BgQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(int a1, __int64 a2)
{
  if ( byte_140C54D48 )
    return BgQueryBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}
