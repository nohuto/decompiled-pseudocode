/*
 * XREFs of ?InitTooltipAnimation@@YGXPAUtagTOOLTIPWND@@@Z @ 0xE4948
 * Callers:
 *     _xxxTooltipWndProc@16 @ 0xE4592 (_xxxTooltipWndProc@16.c)
 * Callees:
 *     ?GetTooltipDC@@YGPAUHDC__@@PAUtagTOOLTIPWND@@PAUtagMONITOR@@@Z @ 0xE4980 (-GetTooltipDC@@YGPAUHDC__@@PAUtagTOOLTIPWND@@PAUtagMONITOR@@@Z.c)
 */

void __thiscall InitTooltipAnimation(_DWORD *this)
{
  HDC TooltipDC; // edi
  int CompatibleDC; // eax
  struct tagTOOLTIPWND *v4; // [esp+0h] [ebp-Ch]
  struct tagMONITOR *v5; // [esp+4h] [ebp-8h]

  TooltipDC = GetTooltipDC(v4, v5);
  CompatibleDC = GreCreateCompatibleDC(TooltipDC);
  this[3] = CompatibleDC;
  if ( CompatibleDC )
  {
    _ReleaseDC(TooltipDC);
    GreSetDCOwnerEx(this[3], 0, 0, 0);
  }
}
