/*
 * XREFs of ?SetRemarshalingFlags@CColorGradientStopMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C00C3330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CColorGradientStopMarshaler::SetRemarshalingFlags(
        DirectComposition::CColorGradientStopMarshaler *this)
{
  *((_DWORD *)this + 4) |= 0x60u;
  return 1;
}
