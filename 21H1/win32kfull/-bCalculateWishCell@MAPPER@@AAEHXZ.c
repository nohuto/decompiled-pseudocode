/*
 * XREFs of ?bCalculateWishCell@MAPPER@@AAEHXZ @ 0x4AFA2
 * Callers:
 *     ?bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z @ 0x4A670 (-bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z.c)
 *     ?bGetFaceName@MAPPER@@AAEHXZ @ 0x8ACA6 (-bGetFaceName@MAPPER@@AAEHXZ.c)
 *     ?bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z @ 0x1F4BAA (-bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ?lSignum@EFLOAT@@QAEJXZ @ 0xCC96A (-lSignum@EFLOAT@@QAEJXZ.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 */

int __thiscall MAPPER::bCalculateWishCell(MAPPER *this)
{
  int v2; // eax
  int v3; // ecx
  int result; // eax
  EFLOAT *v5; // edi
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // ebx
  int v10; // edx
  bool v11; // zf
  _DWORD *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // [esp-Ch] [ebp-38h]
  EFLOAT *v16; // [esp+4h] [ebp-28h] BYREF
  _DWORD *v17; // [esp+10h] [ebp-1Ch]
  _DWORD *v18; // [esp+14h] [ebp-18h]
  int v19; // [esp+18h] [ebp-14h]
  int v20; // [esp+1Ch] [ebp-10h]
  int v21; // [esp+20h] [ebp-Ch]
  int v22; // [esp+24h] [ebp-8h]
  int v23; // [esp+28h] [ebp-4h]

  v2 = lNormAngle(*(_DWORD *)(*((_DWORD *)this + 1) + 12));
  v3 = *((_DWORD *)this + 55);
  v20 = v2;
  if ( (v3 & 0x20) != 0 )
    return 0;
  if ( (*(_DWORD *)(*(_DWORD *)(**(_DWORD **)this + 1020) + 340) & 0x802) == 0x802 || (v3 & 0x40) != 0 )
  {
    *((_DWORD *)this + 41) = v2;
  }
  else
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v16, *(struct XDCOBJ **)this, 0x204u);
    v5 = v16;
    v21 = EFLOAT::lSignum(v16);
    v19 = EFLOAT::lSignum((EFLOAT *)((char *)v5 + 8));
    v17 = (_DWORD *)((char *)v5 + 16);
    v23 = EFLOAT::lSignum((EFLOAT *)((char *)v5 + 16));
    v18 = (_DWORD *)((char *)v5 + 24);
    v6 = EFLOAT::lSignum((EFLOAT *)((char *)v5 + 24));
    v8 = *(_DWORD *)this;
    v22 = v6;
    if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v8 + 1020) + 340) & 0x40) != 0 )
    {
      v6 = -v6;
      v23 = -v7;
      v22 = v6;
    }
    v9 = *((_DWORD *)this + 55);
    if ( (((unsigned int)&loc_80FFF + 1) & v9) == 0 )
    {
      if ( v20 % 900 || (v19 + v23) | (v21 - v22) | ((unsigned __int8)v21 ^ (unsigned __int8)~(_BYTE)v19) & 1 )
      {
        result = 0;
        *((_DWORD *)this + 55) = v9 | 0x20;
        return result;
      }
      v10 = (v23 & 0xA8C) + v20 + (v21 & 0x708) + (v19 & 0x384);
      *((_DWORD *)this + 41) = v10;
      if ( v10 >= 3600 )
        *((_DWORD *)this + 41) = v10 - 3600;
      v6 = v22;
      v9 |= (unsigned int)&loc_80000;
      *((_DWORD *)this + 55) = v9;
    }
    if ( (v9 & 8) == 0 )
    {
      v11 = v6 == 0;
      v12 = v18;
      if ( v11 )
        v12 = v17;
      v13 = lCvt(*v12, v12[1], *((_DWORD *)this + 38));
      if ( v13 < 0 )
        v13 = -v13;
      v9 = *((_DWORD *)this + 55);
      v5 = v16;
      *((_DWORD *)this + 38) = (v13 + 8) >> 4;
    }
    v3 = v9;
    if ( *(_DWORD *)(*((_DWORD *)this + 1) + 4) && (v9 & 0x10) == 0 )
    {
      v15 = *((_DWORD *)this + 39);
      if ( v21 )
        v14 = lCvt(*(_DWORD *)v5, *((_DWORD *)v5 + 1), v15);
      else
        v14 = lCvt(*((_DWORD *)v5 + 2), *((_DWORD *)v5 + 3), v15);
      if ( v14 < 0 )
        v14 = -v14;
      v3 = *((_DWORD *)this + 55);
      *((_DWORD *)this + 39) = (v14 + 8) >> 4;
    }
  }
  result = 1;
  *((_DWORD *)this + 55) = v3 | 0x1C;
  return result;
}
