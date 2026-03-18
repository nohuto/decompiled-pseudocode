/*
 * XREFs of ?SetRemarshalingFlags@CSceneMeshRendererComponentMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01F35B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSceneMeshRendererComponentMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneMeshRendererComponentMarshaler *this)
{
  if ( *((_QWORD *)this + 7) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_DWORD *)this + 20) )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((_DWORD *)this + 21) = 0;
  }
  return (*((_DWORD *)this + 4) & 0xE0) != 0;
}
