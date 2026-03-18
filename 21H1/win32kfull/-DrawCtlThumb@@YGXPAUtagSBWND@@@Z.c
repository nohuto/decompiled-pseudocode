/*
 * XREFs of ?DrawCtlThumb@@YGXPAUtagSBWND@@@Z @ 0x1A28A9
 * Callers:
 *     _xxxEndScroll@8 @ 0x1A391B (_xxxEndScroll@8.c)
 * Callees:
 *     _DrawThumb2@24 @ 0xC1CFA (_DrawThumb2@24.c)
 *     ?xxxGetColorObjects@@YGPAUHBRUSH__@@PAUtagWND@@PAUHDC__@@@Z @ 0xC1E2A (-xxxGetColorObjects@@YGPAUHBRUSH__@@PAUtagWND@@PAUHDC__@@@Z.c)
 *     _SBCtlSetup@4 @ 0x1A3664 (_SBCtlSetup@4.c)
 */

void __thiscall DrawCtlThumb(int *this)
{
  int ColorObjects; // esi
  int v3; // edi
  HDC DCEx; // [esp+10h] [ebp-8h]

  DCEx = (HDC)_GetDCEx(*this, 0, 65537);
  SBCtlSetup(this);
  ColorObjects = xxxGetColorObjects((int *)*this, (int)DCEx);
  v3 = GreSelectBrush(DCEx, ColorObjects);
  DrawThumb2(*this, this + 3, DCEx, ColorObjects, (HBRUSH)this[1], this[2]);
  GreSelectBrush(DCEx, v3);
  _ReleaseDC(DCEx);
}
