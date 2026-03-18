/*
 * XREFs of ?SetRemarshalingFlags@CDesktopTreeMarshaler@DirectComposition@@EEAA_NXZ @ 0x1C01EDD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CDesktopTreeMarshaler::SetRemarshalingFlags(
        DirectComposition::CDesktopTreeMarshaler *this)
{
  int v1; // eax

  if ( *((_DWORD *)this + 14) || *((_DWORD *)this + 15) )
    *((_DWORD *)this + 4) |= 0x20u;
  v1 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 8) )
  {
    v1 |= 0x40u;
    *((_DWORD *)this + 4) = v1;
  }
  return (v1 & 0x40) != 0;
}
