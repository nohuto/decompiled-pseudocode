/*
 * XREFs of ?SetRemarshalingFlags@CColorBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C00C4120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CColorBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CColorBrushMarshaler *this)
{
  *((_DWORD *)this + 4) |= 0x20u;
  return 1;
}
