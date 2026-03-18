/*
 * XREFs of ?bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z @ 0x1F4BAA
 * Callers:
 *     ?ppfeGetAMatch@@YGPAVPFE@@AAVXDCOBJ@@PAUtagENUMLOGFONTEXDVW@@PBGKKPAKPAU_POINTL@@3H@Z @ 0x49FBA (-ppfeGetAMatch@@YGPAVPFE@@AAVXDCOBJ@@PAUtagENUMLOGFONTEXDVW@@PBGKKPAKPAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bCalculateWishCell@MAPPER@@AAEHXZ @ 0x4AFA2 (-bCalculateWishCell@MAPPER@@AAEHXZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QAEPAVPFF@@PAUHDEV__@@PAPAPAV2@@Z @ 0x88C66 (-pPFFGet@DEVICE_PFTOBJ@@QAEPAVPFF@@PAUHDEV__@@PAPAPAV2@@Z.c)
 *     ?bWin31BitmapHeightScaling@MAPPER@@QAEHJJPAJ@Z @ 0xC1EE4 (-bWin31BitmapHeightScaling@MAPPER@@QAEHJJPAJ@Z.c)
 *     ??$SafeDivide@JJJ@@YGJJJPAJ@Z @ 0xC1F0C (--$SafeDivide@JJJ@@YGJJJPAJ@Z.c)
 *     ??$SafeDivide@KKK@@YGJKKPAK@Z @ 0xC3054 (--$SafeDivide@KKK@@YGJKKPAK@Z.c)
 *     ?bSimItalic@IFIOBJ@@QAEHXZ @ 0xC52CA (-bSimItalic@IFIOBJ@@QAEHXZ.c)
 *     ?pvSimBold@IFIOBJ@@QAEPAXXZ @ 0xC93D0 (-pvSimBold@IFIOBJ@@QAEPAXXZ.c)
 *     ?ppfeGetPFEFromUFIInternal@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1D8628 (-ppfeGetPFEFromUFIInternal@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QAEHJJPAJ@Z @ 0x1F4F08 (-bWin31BitmapWidthScaling@MAPPER@@QAEHJJPAJ@Z.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QAEPAVPFE@@XZ @ 0x1F4F50 (-ppfeFirst@ENUMFHOBJ@@QAEPAVPFE@@XZ.c)
 *     ?ppfeNext@ENUMFHOBJ@@QAEPAVPFE@@XZ @ 0x1F4F74 (-ppfeNext@ENUMFHOBJ@@QAEPAVPFE@@XZ.c)
 *     ?vSetBest@MAPPER@@QAEXPAVPFE@@HE@Z @ 0x1F51F3 (-vSetBest@MAPPER@@QAEXPAVPFE@@HE@Z.c)
 */

int __thiscall MAPPER::bFoundForcedMatch(MAPPER *this, struct _UNIVERSAL_FONT_ID *a2)
{
  struct _UNIVERSAL_FONT_ID *v2; // edi
  int v4; // ebx
  struct PFF *v5; // eax
  _DWORD *v6; // eax
  struct PFE *PFEFromUFIInternal; // ecx
  struct _UNIVERSAL_FONT_ID *v8; // eax
  IFIOBJ *v9; // eax
  int v10; // edi
  int v11; // ecx
  int v12; // edx
  MAPPER *v13; // eax
  int v14; // eax
  struct _UNIVERSAL_FONT_ID *v15; // edx
  int v16; // eax
  char *v17; // eax
  int v18; // eax
  MAPPER *v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // edi
  unsigned int v23; // ecx
  int v25; // [esp+0h] [ebp-34h]
  int v26; // [esp+4h] [ebp-30h]
  _DWORD v27[4]; // [esp+10h] [ebp-24h] BYREF
  int v28; // [esp+20h] [ebp-14h]
  MAPPER *v29; // [esp+24h] [ebp-10h] BYREF
  int v30; // [esp+28h] [ebp-Ch] BYREF
  struct PFE *v31; // [esp+2Ch] [ebp-8h]

  v2 = a2;
  if ( !*(_DWORD *)a2 )
    return 0;
  v4 = 0;
  if ( *(_DWORD *)a2 == 1 )
  {
    a2 = gpPFTDevice;
    v5 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&a2, *(HDEV *)(**(_DWORD **)this + 36), 0);
    if ( !v5 )
      return 0;
    v6 = (_DWORD *)((char *)v5 + 72);
    if ( !v6 )
      return 0;
    v27[0] = v6;
    v27[1] = *v6;
    v27[2] = 0;
    v27[3] = 0;
    PFEFromUFIInternal = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v27);
    v31 = PFEFromUFIInternal;
    if ( !PFEFromUFIInternal )
      return 0;
    v8 = *(struct _UNIVERSAL_FONT_ID **)v2;
    a2 = *(struct _UNIVERSAL_FONT_ID **)v2;
    do
    {
      if ( *((struct _UNIVERSAL_FONT_ID **)PFEFromUFIInternal + 13) == v8
        && *((_DWORD *)PFEFromUFIInternal + 14) == *((_DWORD *)v2 + 1)
        && (*((_BYTE *)PFEFromUFIInternal + 8) & 2) == 0 )
      {
        break;
      }
      PFEFromUFIInternal = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v27);
      v8 = a2;
      v31 = PFEFromUFIInternal;
    }
    while ( PFEFromUFIInternal );
  }
  else
  {
    PFEFromUFIInternal = ppfeGetPFEFromUFIInternal(0, a2, (struct _UNIVERSAL_FONT_ID *)1, v25, v26);
    v31 = PFEFromUFIInternal;
  }
  if ( PFEFromUFIInternal )
  {
    *((_DWORD *)this + 44) = 0;
    *((_DWORD *)this + 45) = 1;
    *((_DWORD *)this + 46) = 1;
    v9 = (MAPPER *)((char *)this + 224);
    v10 = *((_DWORD *)PFEFromUFIInternal + 5);
    *((_DWORD *)this + 56) = v10;
    a2 = *(struct _UNIVERSAL_FONT_ID **)(v10 + 48);
    if ( ((unsigned int)a2 & 0x3000010) == 0 )
    {
      v11 = *((_DWORD *)this + 55);
      if ( (v11 & 2) != 0 )
        v12 = *(__int16 *)(v10 + 56);
      else
        v12 = *(__int16 *)(v10 + 60) + *(__int16 *)(v10 + 62);
      v13 = (MAPPER *)*((_DWORD *)this + 38);
      v30 = v12;
      v29 = v13;
      if ( v12 < (int)v13
        && (((v11 & 0x8000) == 0) & _bittest((const signed __int32 *)&a2, 0x14u)) != 0
        && (int)v29 > 7 * v12 / 4 )
      {
        a2 = 0;
        if ( !MAPPER::bWin31BitmapHeightScaling(v29, (int)v29, v30, (int *)&a2) )
          return v4;
        v14 = 8;
        if ( (unsigned int)a2 <= 8 )
          v14 = (int)a2;
        *((_DWORD *)this + 46) = v14;
        v9 = (MAPPER *)((char *)this + 224);
        v10 = *((_DWORD *)this + 56);
      }
      else
      {
        v9 = (MAPPER *)((char *)this + 224);
      }
    }
    v29 = (MAPPER *)*((_DWORD *)this + 1);
    if ( *((_BYTE *)v29 + 20) && (*(_BYTE *)(v10 + 52) & 1) == 0 && IFIOBJ::bSimItalic(v9) )
      *((_DWORD *)this + 44) = 0x4000;
    v15 = (struct _UNIVERSAL_FONT_ID *)*((_DWORD *)this + 55);
    v16 = *(unsigned __int16 *)(v10 + 46) - *((_DWORD *)this + 40);
    a2 = v15;
    if ( (((unsigned int)&loc_1FFFFC + 4) & (unsigned int)v15) == 0 && v16 < 0 && -v16 > 150 )
    {
      v17 = IFIOBJ::pvSimBold((MAPPER *)((char *)this + 224));
      LOWORD(v15) = (_WORD)a2;
      if ( v17 )
        *((_DWORD *)this + 44) |= 0x2000u;
    }
    if ( (*(_DWORD *)(v10 + 48) & 0x2000010) != 0 )
      goto LABEL_58;
    a2 = (struct _UNIVERSAL_FONT_ID *)*(__int16 *)(v10 + 76);
    if ( *((_DWORD *)v29 + 1) )
    {
      if ( ((unsigned __int8)v15 & 4) == 0 )
      {
        MAPPER::bCalculateWishCell(this);
        v10 = *((_DWORD *)this + 56);
        v15 = (struct _UNIVERSAL_FONT_ID *)*((_DWORD *)this + 55);
      }
      if ( (*(_DWORD *)(v10 + 48) & 0x100000) == 0 || ((unsigned __int16)v15 & 0x8000) != 0 )
        goto LABEL_58;
      v18 = *((_DWORD *)this + 39);
      v19 = a2;
      if ( v18 <= (int)a2 )
        goto LABEL_58;
      a2 = 0;
      if ( MAPPER::bWin31BitmapWidthScaling(v19, v18, (int)v19, (int *)&a2) )
      {
        v20 = 5;
        if ( (unsigned int)a2 <= 5 )
          v20 = (int)a2;
LABEL_57:
        *((_DWORD *)this + 45) = v20;
        goto LABEL_58;
      }
      return v4;
    }
    if ( (*(_DWORD *)(v10 + 48) & 0x100000) != 0 && ((unsigned __int16)v15 & 0x8000) == 0 )
    {
      v21 = *(_DWORD *)(v10 + 128);
      v22 = *(_DWORD *)(v10 + 132);
      v29 = 0;
      v30 = 0;
      a2 = 0;
      v28 = v21;
      if ( v21 != v22 || *((_DWORD *)this + 53) != *((_DWORD *)this + 54) )
      {
        if ( SafeDivide<unsigned long,unsigned long,unsigned long>(
               100 * *((_DWORD *)this + 54),
               *((_DWORD *)this + 53),
               (int *)&v29)
          || SafeDivide<long,long,long>(100 * v28, v22, (int *)&a2)
          || SafeDivide<long,long,long>((int)a2, *((_DWORD *)this + 46), &v30) )
        {
          return v4;
        }
        if ( (unsigned int)v29 <= (unsigned int)(3 * v30) >> 1 )
          goto LABEL_58;
        if ( !v30 )
          return v4;
        v23 = (unsigned int)v29 / v30;
LABEL_55:
        v20 = 5;
        if ( v23 <= 5 )
          v20 = v23;
        goto LABEL_57;
      }
      v23 = *((_DWORD *)this + 46);
      if ( v23 != 1 )
        goto LABEL_55;
    }
LABEL_58:
    MAPPER::vSetBest(this, v31, 1, 1u);
    return 1;
  }
  return 0;
}
