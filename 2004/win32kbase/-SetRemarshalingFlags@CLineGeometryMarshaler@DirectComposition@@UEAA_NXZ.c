/*
 * XREFs of ?SetRemarshalingFlags@CLineGeometryMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01E4CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E4AC0 (-SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CLineGeometryMarshaler::SetRemarshalingFlags(
        DirectComposition::CLineGeometryMarshaler *this)
{
  DirectComposition::CGeometryMarshaler::SetRemarshalingFlags(this);
  *((_DWORD *)this + 4) |= 0x1800u;
  return 1;
}
