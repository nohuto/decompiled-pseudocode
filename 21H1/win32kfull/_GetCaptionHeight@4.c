/*
 * XREFs of _GetCaptionHeight@4 @ 0x8EDFE
 * Callers:
 *     _xxxDrawWindowFrame@12 @ 0x8E7D8 (_xxxDrawWindowFrame@12.c)
 *     _xxxCalcClientRect@12 @ 0x8E9FC (_xxxCalcClientRect@12.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 *     _xxxMenuBarDraw@16 @ 0x1AA275 (_xxxMenuBarDraw@16.c)
 *     _xxxMNRecomputeBarIfNeeded@8 @ 0x1ABA5C (_xxxMNRecomputeBarIfNeeded@8.c)
 * Callees:
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 */

int __thiscall GetCaptionHeight(_DWORD *this)
{
  int v1; // esi
  unsigned int v3; // eax
  int v4; // edx
  INT v5; // eax
  int v6; // eax
  INT WindowDpiLastNotify; // eax
  int v8; // eax

  v1 = this[5];
  if ( (*(_BYTE *)(v1 + 8) & 8) == 0 )
    return 0;
  v3 = *(_DWORD *)(v1 + 184);
  v4 = v3 & 0xF;
  if ( *(char *)(v1 + 16) >= 0 )
  {
    if ( v4 == 3 )
    {
      WindowDpiLastNotify = (v3 >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v1 + 144) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(this);
    }
    else if ( (v3 & 0xF) == 0
           && (v8 = *(_DWORD *)(this[2] + 248)) != 0
           && (*(_BYTE *)(**(_DWORD **)(v8 + 4) + 32) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_DWORD *)(this[2] + 232) + 160);
    }
    return GetDpiDependentMetric(2, WindowDpiLastNotify);
  }
  else
  {
    if ( v4 == 3 )
    {
      v5 = (v3 >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v1 + 144) & 0x8000000) != 0 )
    {
      v5 = GetWindowDpiLastNotify(this);
    }
    else if ( (v3 & 0xF) == 0
           && (v6 = *(_DWORD *)(this[2] + 248)) != 0
           && (*(_BYTE *)(**(_DWORD **)(v6 + 4) + 32) & 1) != 0 )
    {
      v5 = 96;
    }
    else
    {
      v5 = *(unsigned __int16 *)(*(_DWORD *)(this[2] + 232) + 160);
    }
    return GetDpiDependentMetric(22, v5);
  }
}
