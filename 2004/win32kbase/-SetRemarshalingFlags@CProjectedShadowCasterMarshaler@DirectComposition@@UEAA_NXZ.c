/*
 * XREFs of ?SetRemarshalingFlags@CProjectedShadowCasterMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01F1E10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01DC194 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CProjectedShadowCasterMarshaler::SetRemarshalingFlags(
        DirectComposition::CProjectedShadowCasterMarshaler *this)
{
  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((_QWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((_QWORD *)this + 11) )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_QWORD *)this + 12) )
    *((_DWORD *)this + 4) |= 0x400u;
  return 1;
}
