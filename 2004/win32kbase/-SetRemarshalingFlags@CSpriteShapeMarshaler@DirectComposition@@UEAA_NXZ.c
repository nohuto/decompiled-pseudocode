/*
 * XREFs of ?SetRemarshalingFlags@CSpriteShapeMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01E4210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSpriteShapeMarshaler::SetRemarshalingFlags(
        DirectComposition::CSpriteShapeMarshaler *this)
{
  int v1; // eax

  if ( *((_QWORD *)this + 7) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((_QWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x100u;
  v1 = *((_DWORD *)this + 4);
  if ( *((_DWORD *)this + 24) )
  {
    *((_DWORD *)this + 25) = 0;
    v1 |= 0x400u;
  }
  *((_DWORD *)this + 4) = v1 | 0x7A00;
  return 1;
}
