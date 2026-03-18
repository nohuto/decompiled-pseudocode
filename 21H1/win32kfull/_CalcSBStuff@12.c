/*
 * XREFs of _CalcSBStuff@12 @ 0x6DA90
 * Callers:
 *     _xxxGetScrollBarInfo@12 @ 0x6D508 (_xxxGetScrollBarInfo@12.c)
 *     _xxxDrawScrollBar@12 @ 0xC1AFC (_xxxDrawScrollBar@12.c)
 *     ?HitTestScrollBar@@YGHPAUtagWND@@HUtagPOINT@@@Z @ 0x1A2A4A (-HitTestScrollBar@@YGHPAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?RecalcTrackRect@@YGXPAUtagSBTRACK@@@Z @ 0x1A2C4E (-RecalcTrackRect@@YGXPAUtagSBTRACK@@@Z.c)
 *     ?xxxDrawThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z @ 0x1A2EF2 (-xxxDrawThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z.c)
 *     _xxxDoScrollMenu@16 @ 0x1A370F (_xxxDoScrollMenu@16.c)
 *     _xxxSBTrackInit@16 @ 0x1A3B45 (_xxxSBTrackInit@16.c)
 * Callees:
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _CalcSBStuff2@16 @ 0x6DB64 (_CalcSBStuff2@16.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     __InitPwSB@4 @ 0x6E5B6 (__InitPwSB@4.c)
 *     _GetRect@12 @ 0x6E5F2 (_GetRect@12.c)
 */

int __thiscall CalcSBStuff(_DWORD *this, int a2)
{
  int v3; // ecx
  char v4; // al
  int DpiForSystem; // eax
  int result; // eax
  int v7; // eax

  GetRect(33);
  v3 = this[5];
  if ( a2 )
  {
    v4 = *(_BYTE *)(v3 + 8) & 2;
    if ( (*(_BYTE *)(v3 + 17) & 0x40) == 0 )
    {
      if ( !v4 )
        goto LABEL_5;
      goto LABEL_4;
    }
    if ( v4 )
    {
LABEL_4:
      DpiForSystem = GetDpiForSystem();
      GetDpiDependentMetric(0, DpiForSystem);
    }
  }
  else if ( (*(_BYTE *)(v3 + 8) & 4) != 0 )
  {
    v7 = GetDpiForSystem();
    GetDpiDependentMetric(1, v7);
  }
LABEL_5:
  result = _InitPwSB(this);
  if ( result )
    return CalcSBStuff2(this[21] + (a2 != 0 ? 20 : 4), a2);
  return result;
}
