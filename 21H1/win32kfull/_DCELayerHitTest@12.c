/*
 * XREFs of _DCELayerHitTest@12 @ 0x25668
 * Callers:
 *     ?DCEIsWindowHit@@YGHPAUtagWND@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z @ 0x26176 (-DCEIsWindowHit@@YGHPAUtagWND@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x26470 (-xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS.c)
 *     _DCELogicalSpeedTopLevelHitTest@8 @ 0x150A63 (_DCELogicalSpeedTopLevelHitTest@8.c)
 *     ?TouchTargetingLayerHitTest@@YGHPAUtagWND@@UtagPOINT@@HPBUtagTOUCHTARGETINGCONTACT@@PAUtagRECT@@PAGPAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x17A2A5 (-TouchTargetingLayerHitTest@@YGHPAUtagWND@@UtagPOINT@@HPBUtagTOUCHTARGETINGCONTACT@@PAUtagRECT@@.c)
 * Callees:
 *     _GrePtInSprite@24 @ 0x23540 (_GrePtInSprite@24.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 */

BOOL __thiscall DCELayerHitTest(int this, HDEV a2, HWND a3)
{
  int v4; // edx
  unsigned __int16 v5; // si
  int v6; // eax
  BOOL result; // eax

  result = 0;
  if ( (*(_BYTE *)(*(_DWORD *)(this + 20) + 16) & 0x20) == 0 )
  {
    if ( !PtInRect(a2, a3) || (*(_BYTE *)(v4 + 19) & 0x20) != 0 && (*(_BYTE *)(v4 + 18) & 0x20) != 0 )
      return 1;
    v5 = *(_WORD *)(this + 148);
    v6 = IsWindowDesktopComposed(this);
    if ( GrePtInSprite(*(_DWORD *)(_gpDispInfo + 20), *(_DWORD *)this, a2, a3, v5 >= 0x602u, v6) )
      return 1;
  }
  return result;
}
