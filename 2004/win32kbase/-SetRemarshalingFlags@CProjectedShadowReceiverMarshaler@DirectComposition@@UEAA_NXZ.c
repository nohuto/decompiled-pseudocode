/*
 * XREFs of ?SetRemarshalingFlags@CProjectedShadowReceiverMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01F1FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01DC194 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CProjectedShadowReceiverMarshaler::SetRemarshalingFlags(
        DirectComposition::CProjectedShadowReceiverMarshaler *this)
{
  int v2; // eax
  int v3; // eax
  bool v4; // zf

  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v2 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 9) )
    v2 |= 0x80u;
  v3 = v2 | 0x100;
  v4 = *((_QWORD *)this + 11) == 0LL;
  *((_DWORD *)this + 4) = v3;
  if ( !v4 )
    *((_DWORD *)this + 4) = v3 | 0x200;
  return 1;
}
