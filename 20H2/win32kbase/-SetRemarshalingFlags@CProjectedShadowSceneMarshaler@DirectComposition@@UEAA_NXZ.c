/*
 * XREFs of ?SetRemarshalingFlags@CProjectedShadowSceneMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01F06B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D9EC4 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CProjectedShadowSceneMarshaler::SetRemarshalingFlags(
        DirectComposition::CProjectedShadowSceneMarshaler *this)
{
  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  *((_DWORD *)this + 4) |= 0xFE80u;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 25) = 0;
  if ( *((_QWORD *)this + 16) )
    *((_DWORD *)this + 4) |= 0x100u;
  return 1;
}
