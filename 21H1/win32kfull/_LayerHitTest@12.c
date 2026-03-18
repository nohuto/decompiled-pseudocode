/*
 * XREFs of _LayerHitTest@12 @ 0x17B8DE
 * Callers:
 *     ?ClassicIsWindowHit@@YGHPAUtagWND@@UtagPOINT@@@Z @ 0x26C06 (-ClassicIsWindowHit@@YGHPAUtagWND@@UtagPOINT@@@Z.c)
 *     _xxxWindowHitTest2@20 @ 0x7D1C4 (_xxxWindowHitTest2@20.c)
 *     ?TouchTargetingLayerHitTest@@YGHPAUtagWND@@UtagPOINT@@HPBUtagTOUCHTARGETINGCONTACT@@PAUtagRECT@@PAGPAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x17A2A5 (-TouchTargetingLayerHitTest@@YGHPAUtagWND@@UtagPOINT@@HPBUtagTOUCHTARGETINGCONTACT@@PAUtagRECT@@.c)
 *     __ChildWindowFromPointEx@16 @ 0x17BE7F (__ChildWindowFromPointEx@16.c)
 * Callees:
 *     _GrePtInSprite@24 @ 0x23540 (_GrePtInSprite@24.c)
 */

BOOL __thiscall LayerHitTest(int this, HDEV a2, HWND a3)
{
  _BYTE *v4; // eax
  unsigned __int16 v5; // si
  int v6; // eax
  BOOL result; // eax

  v4 = *(_BYTE **)(this + 20);
  result = 0;
  if ( (v4[16] & 0x20) == 0 )
  {
    if ( (v4[19] & 0x20) != 0 && (v4[18] & 0x20) != 0 )
      return 1;
    v5 = *(_WORD *)(this + 148);
    v6 = IsWindowDesktopComposed(this);
    if ( GrePtInSprite(*(_DWORD *)(_gpDispInfo + 20), *(_DWORD *)this, a2, a3, v5 >= 0x602u, v6) )
      return 1;
  }
  return result;
}
