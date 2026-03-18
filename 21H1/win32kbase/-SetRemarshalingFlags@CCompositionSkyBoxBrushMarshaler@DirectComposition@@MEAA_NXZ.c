/*
 * XREFs of ?SetRemarshalingFlags@CCompositionSkyBoxBrushMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01F6170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCompositionSkyBoxBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionSkyBoxBrushMarshaler *this)
{
  if ( *((_DWORD *)this + 22) != 63 )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((float *)this + 23) != 0.0 || *((float *)this + 24) != 0.0 || *((float *)this + 25) != 0.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((float *)this + 26) != 100.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_BYTE *)this + 108) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_QWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x200u;
  return 1;
}
