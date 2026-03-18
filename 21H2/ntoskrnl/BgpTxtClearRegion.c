/*
 * XREFs of BgpTxtClearRegion @ 0x140AB1814
 * Callers:
 *     BgpTxtDisplayString @ 0x140AB1844 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x1403A7F70 (BgpGxDrawRectangle.c)
 */

__int64 __fastcall BgpTxtClearRegion(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 72) & 1) != 0 )
    return BgpGxDrawRectangle(*(_BYTE **)(a1 + 24), a1);
  else
    return 3221225485LL;
}
