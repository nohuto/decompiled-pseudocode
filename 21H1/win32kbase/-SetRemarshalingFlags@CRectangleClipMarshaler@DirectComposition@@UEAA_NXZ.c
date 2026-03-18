/*
 * XREFs of ?SetRemarshalingFlags@CRectangleClipMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01EA860
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01EAA40 (-SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CRectangleClipMarshaler::SetRemarshalingFlags(
        DirectComposition::CRectangleClipMarshaler *this)
{
  *((_DWORD *)this + 4) &= *((_BYTE *)this + 145) != 0 ? -22529 : -63489;
  DirectComposition::CGeometryMarshaler::SetRemarshalingFlags(this);
  return 1;
}
