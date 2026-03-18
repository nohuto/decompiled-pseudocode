/*
 * XREFs of ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E16E0
 * Callers:
 *     ?SetRemarshalingFlags@CParticleEmitterVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01DB740 (-SetRemarshalingFlags@CParticleEmitterVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CSuperWetInkVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01DBF10 (-SetRemarshalingFlags@CSuperWetInkVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CTextVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01DC070 (-SetRemarshalingFlags@CTextVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01E1B30 (-SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CLayerVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E1C10 (-SetRemarshalingFlags@CLayerVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CShapeVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01E21E0 (-SetRemarshalingFlags@CShapeVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CCursorVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E8E30 (-SetRemarshalingFlags@CCursorVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CRedirectVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01EF2E0 (-SetRemarshalingFlags@CRedirectVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CHostVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01F3E90 (-SetRemarshalingFlags@CHostVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01DC194 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::SetRemarshalingFlags(DirectComposition::CVisualMarshaler *this)
{
  char v1; // di
  char v3; // cl

  v1 = 0;
  if ( *((_QWORD *)this + 22) )
    *((_DWORD *)this + 4) |= 0x4000u;
  if ( *((float *)this + 18) != 0.0 || *((float *)this + 19) != 0.0 || *((float *)this + 20) != 0.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((_QWORD *)this + 17) )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_QWORD *)this + 18) )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((_QWORD *)this + 19) )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((_QWORD *)this + 28) )
    *((_DWORD *)this + 4) |= 0x4000000u;
  if ( *((_QWORD *)this + 38) )
  {
    *((_DWORD *)this + 90) |= 1u;
    *((_QWORD *)this + 43) = 0LL;
  }
  if ( *((_QWORD *)this + 41) )
  {
    *((_DWORD *)this + 90) |= 2u;
    *((_QWORD *)this + 44) = 0LL;
  }
  if ( *((_QWORD *)this + 21) )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( *((_QWORD *)this + 20) )
    *((_DWORD *)this + 4) |= 0x1000u;
  v3 = *((_BYTE *)this + 288);
  if ( v3 >= 0 )
    *((_DWORD *)this + 4) |= 0x800000u;
  if ( *((_DWORD *)this + 58) != -1
    || *((_DWORD *)this + 59) != -1
    || *((_DWORD *)this + 60) != -1
    || *((_DWORD *)this + 61) != -1
    || *((_DWORD *)this + 62) != -1
    || *((_DWORD *)this + 63) != -1 )
  {
    *((_DWORD *)this + 4) |= 0x8000u;
  }
  if ( (v3 & 0x58) != 0 || (*((_BYTE *)this + 289) & 2) != 0 )
    *((_DWORD *)this + 4) |= 0x10000u;
  if ( (v3 & 0x20) != 0 )
    *((_DWORD *)this + 4) |= 0x20000u;
  if ( *((_DWORD *)this + 70) )
    *((_DWORD *)this + 4) |= 0x40000u;
  if ( (v3 & 2) != 0 )
    *((_DWORD *)this + 4) |= 0x80000u;
  if ( *((_QWORD *)this + 27) )
    *((_DWORD *)this + 4) |= 0x100000u;
  if ( *((float *)this + 21) != 0.0 || *((float *)this + 22) != 0.0 )
    *((_DWORD *)this + 4) |= 0x200000u;
  if ( *((float *)this + 28) != 1.0 )
    *((_DWORD *)this + 4) |= 0x400000u;
  if ( *((float *)this + 23) != 0.0 || *((float *)this + 24) != 0.0 || *((float *)this + 25) != 0.0 )
    *((_DWORD *)this + 4) |= 0x1000000u;
  if ( *((float *)this + 26) != 0.0 || *((float *)this + 27) != 0.0 )
    *((_DWORD *)this + 4) |= 0x2000000u;
  if ( (v3 & 1) != 0 )
    *((_DWORD *)this + 4) |= 0x10000000u;
  if ( *((_DWORD *)this + 64) )
    *((_DWORD *)this + 4) |= 0x8000000u;
  if ( *((_DWORD *)this + 65) )
    *((_DWORD *)this + 4) |= 0x20000000u;
  if ( *((float *)this + 29) != 0.0
    || *((float *)this + 30) != 0.0
    || *((float *)this + 31) != 0.0
    || *((float *)this + 32) != 0.0 )
  {
    *((_DWORD *)this + 4) |= 0x40000000u;
  }
  if ( DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this)
    || (*((_DWORD *)this + 4) & 0x7F7FDF80) != 0
    || (*((_DWORD *)this + 90) & 3) != 0 )
  {
    return 1;
  }
  return v1;
}
