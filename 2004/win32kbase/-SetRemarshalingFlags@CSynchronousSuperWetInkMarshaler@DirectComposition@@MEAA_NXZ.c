/*
 * XREFs of ?SetRemarshalingFlags@CSynchronousSuperWetInkMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01DBFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSynchronousSuperWetInkMarshaler::SetRemarshalingFlags(
        DirectComposition::CSynchronousSuperWetInkMarshaler *this)
{
  if ( *((_QWORD *)this + 7) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_DWORD *)this + 18) )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((_DWORD *)this + 19) )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_DWORD *)this + 20) )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((_QWORD *)this + 11) )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((_DWORD *)this + 24) )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( *((_DWORD *)this + 25) )
    *((_DWORD *)this + 4) |= 0x1000u;
  if ( *((_DWORD *)this + 26) )
    *((_DWORD *)this + 4) |= 0x2000u;
  return (*((_DWORD *)this + 4) & 0x3FE0) != 0;
}
