/*
 * XREFs of ?SetRemarshalingFlags@CPropertySetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01EDBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E2114 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CPropertySetMarshaler::SetRemarshalingFlags(
        DirectComposition::CPropertySetMarshaler *this)
{
  char v1; // di
  unsigned int v3; // ecx
  __int64 v4; // r8
  int v5; // eax
  char v6; // al

  v1 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    v3 = 0;
    do
    {
      v4 = v3++;
      *(_DWORD *)(*((_QWORD *)this + 9) + 8 * v4 + 4) = *(_DWORD *)(*((_QWORD *)this + 9) + 8 * v4 + 4) & 0x1FFFFFFF | 0x20000000;
    }
    while ( v3 < *((_DWORD *)this + 20) );
    *((_DWORD *)this + 4) |= 0x80u;
    v5 = *((_DWORD *)this + 4);
  }
  else
  {
    v5 = *((_DWORD *)this + 4);
  }
  if ( *((_DWORD *)this + 26) )
    *((_DWORD *)this + 4) = v5 | 0x100;
  v6 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  if ( (*((_DWORD *)this + 4) & 0x180) != 0 || v6 )
    return 1;
  return v1;
}
