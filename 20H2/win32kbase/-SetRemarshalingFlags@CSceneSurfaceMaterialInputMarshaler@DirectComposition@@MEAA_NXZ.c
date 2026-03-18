/*
 * XREFs of ?SetRemarshalingFlags@CSceneSurfaceMaterialInputMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01F20B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSceneSurfaceMaterialInputMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneSurfaceMaterialInputMarshaler *this)
{
  if ( *((_DWORD *)this + 20) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 7) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_DWORD *)this + 21) != 2 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((_DWORD *)this + 22) != 2 )
    *((_DWORD *)this + 4) |= 0x100u;
  return (*((_DWORD *)this + 4) & 0x1E0) != 0;
}
