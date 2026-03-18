/*
 * XREFs of ?SetRemarshalingFlags@CSceneMeshMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D99F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSceneMeshMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneMeshMarshaler *this)
{
  if ( *((_DWORD *)this + 14) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((_QWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_QWORD *)this + 11) )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((_QWORD *)this + 12) )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((_QWORD *)this + 13) )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( *((_QWORD *)this + 14) )
    *((_DWORD *)this + 4) |= 0x1000u;
  if ( *((_DWORD *)this + 30) )
    *((_DWORD *)this + 4) |= 0x2000u;
  if ( *((_DWORD *)this + 31) )
    *((_DWORD *)this + 4) |= 0x4000u;
  if ( *((_DWORD *)this + 32) )
    *((_DWORD *)this + 4) |= 0x8000u;
  if ( *((_DWORD *)this + 33) )
    *((_DWORD *)this + 4) |= 0x10000u;
  if ( *((_DWORD *)this + 34) )
    *((_DWORD *)this + 4) |= 0x20000u;
  if ( *((_DWORD *)this + 35) )
    *((_DWORD *)this + 4) |= 0x40000u;
  if ( *((_DWORD *)this + 36) )
    *((_DWORD *)this + 4) |= 0x80000u;
  return (*((_DWORD *)this + 4) & 0xFFFE0) != 0;
}
