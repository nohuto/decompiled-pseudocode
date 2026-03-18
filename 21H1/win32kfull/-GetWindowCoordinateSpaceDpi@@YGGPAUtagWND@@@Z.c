/*
 * XREFs of ?GetWindowCoordinateSpaceDpi@@YGGPAUtagWND@@@Z @ 0xA3A82
 * Callers:
 *     ?CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z @ 0x37040 (-CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z.c)
 *     _IsChildWindowDpiBoundary@4 @ 0x38846 (_IsChildWindowDpiBoundary@4.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 *     _ScaleDpiOffsetWithSubpixel@16 @ 0x151870 (_ScaleDpiOffsetWithSubpixel@16.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __thiscall GetWindowCoordinateSpaceDpi(_DWORD *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // eax

  v1 = this[5];
  v2 = (*(_DWORD *)(v1 + 184) >> 8) & 0x1FF;
  if ( !v2 )
  {
    v3 = ValidateHmonitorNoRip(*(_DWORD *)(v1 + 164));
    if ( v3 )
      LOWORD(v2) = *(_WORD *)(*(_DWORD *)(v3 + 20) + 52);
  }
  return v2;
}
