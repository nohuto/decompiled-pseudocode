/*
 * XREFs of ?CuratedWindowHidden@NotifyShell@@YGXPAUtagWND@@@Z @ 0xAC8F6
 * Callers:
 *     ?PositioningChanged@NotifyShell@@YGXPAUtagWND@@ABUtagCVR@@@Z @ 0x2624C (-PositioningChanged@NotifyShell@@YGXPAUtagWND@@ABUtagCVR@@@Z.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x174C8 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void __thiscall NotifyShell::CuratedWindowHidden(int *ecx0)
{
  int v1; // eax

  v1 = ecx0[49];
  if ( (v1 & 2) != 0 )
  {
    ecx0[49] = v1 & 0xFFFFFFFD;
    anonymous_namespace_::NotifyShellSimplePayload(*ecx0, 11, 0, 0);
  }
}
