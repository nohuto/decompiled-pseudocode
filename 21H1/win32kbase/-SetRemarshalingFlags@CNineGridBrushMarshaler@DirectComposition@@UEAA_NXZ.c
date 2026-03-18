/*
 * XREFs of ?SetRemarshalingFlags@CNineGridBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01E9170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CNineGridBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CNineGridBrushMarshaler *this)
{
  __int64 v1; // rbp
  bool v2; // si
  bool v3; // di
  bool v4; // bl
  bool v5; // r11
  bool v6; // r10
  bool v7; // r9
  bool v8; // r8
  bool v9; // al
  char v10; // dl
  char v11; // al

  v1 = *((_QWORD *)this + 9);
  v2 = *((float *)this + 20) != 0.0;
  v3 = *((float *)this + 22) != 0.0;
  v4 = *((float *)this + 24) != 0.0;
  v5 = *((float *)this + 26) != 0.0;
  v6 = *((float *)this + 21) != 1.0;
  v7 = *((float *)this + 23) != 1.0;
  v8 = *((float *)this + 25) != 1.0;
  v9 = *((float *)this + 27) != 1.0;
  if ( v1 )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( v2 )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( v3 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( v4 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( v5 )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( v6 )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( v7 )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( v8 )
    *((_DWORD *)this + 4) |= 0x1000u;
  if ( v9 )
    *((_DWORD *)this + 4) |= 0x2000u;
  v10 = *((_BYTE *)this + 112);
  if ( v10 )
    *((_DWORD *)this + 4) |= 0x4000u;
  v11 = v2 || v3 || v4 || v5 || v6 || v7 || v8 || v9;
  if ( v1 )
    v11 = 1;
  return v10 | v11;
}
