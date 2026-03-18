/*
 * XREFs of ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C0144154
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0059B40 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C001E86C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C005D108 (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C01058A8 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C0115CB4 (-bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C0115CF0 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 *     ??$SafeDivide@KKK@@YAJKKPEAK@Z @ 0x1C011C28C (--$SafeDivide@KKK@@YAJKKPEAK@Z.c)
 *     ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C01442B0 (-ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C014AFCC (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C0155DD0 (-bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C0293680 (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C02936B8 (-ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 */

__int64 __fastcall MAPPER::bFoundForcedMatch(MAPPER *this, struct _UNIVERSAL_FONT_ID *a2)
{
  unsigned int v2; // edi
  __int64 v4; // rcx
  struct PFE *PFEFromUFIInternal; // rsi
  __int64 *v6; // r15
  __int64 v7; // r8
  int v8; // edx
  __int64 v9; // r10
  int v10; // r9d
  int v11; // eax
  struct PFF *v13; // rax
  _QWORD *v14; // rax
  int *v15; // r11
  int v16; // r10d
  signed int v17; // r10d
  int v18; // r11d
  int v19; // eax
  int v21; // r14d
  int v22; // edx
  unsigned int v23; // eax
  int v24; // r10d
  int v25; // r11d
  int v26; // r10d
  int v27; // r11d
  _QWORD v28[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v29; // [rsp+30h] [rbp-10h]
  struct PFT *v30; // [rsp+88h] [rbp+48h] BYREF
  int v31; // [rsp+90h] [rbp+50h] BYREF
  unsigned int v32; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  if ( !*(_DWORD *)a2 )
    return 0LL;
  if ( *(_DWORD *)a2 == 1 )
  {
    v30 = gpPFTDevice;
    v13 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v30, *(_QWORD *)(**(_QWORD **)this + 48LL), 0LL);
    if ( !v13 )
      return 0LL;
    v14 = (_QWORD *)((char *)v13 + 112);
    if ( !v14 )
      return 0LL;
    v28[0] = v14;
    v28[1] = *v14;
    v29 = 0LL;
    PFEFromUFIInternal = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v28);
    if ( !PFEFromUFIInternal )
      return 0LL;
    v16 = *v15;
    do
    {
      if ( *((_DWORD *)PFEFromUFIInternal + 21) == v16
        && *((_DWORD *)PFEFromUFIInternal + 22) == v15[1]
        && (*((_DWORD *)PFEFromUFIInternal + 3) & 2) == 0 )
      {
        break;
      }
      PFEFromUFIInternal = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v28);
    }
    while ( PFEFromUFIInternal );
  }
  else
  {
    PFEFromUFIInternal = ppfeGetPFEFromUFIInternal(a2, 0, 1);
  }
  if ( PFEFromUFIInternal )
  {
    *((_DWORD *)this + 48) = 1;
    v6 = (__int64 *)((char *)this + 256);
    *((_DWORD *)this + 49) = 1;
    *((_DWORD *)this + 47) = 0;
    v7 = *((_QWORD *)PFEFromUFIInternal + 4);
    *((_QWORD *)this + 32) = v7;
    v8 = *(_DWORD *)(v7 + 48);
    if ( (v8 & 0x3000010) == 0 )
    {
      v4 = *((unsigned int *)this + 63);
      v17 = (v4 & 2) != 0 ? *(__int16 *)(v7 + 56) : *(__int16 *)(v7 + 60) + *(__int16 *)(v7 + 62);
      v18 = *((_DWORD *)this + 41);
      if ( v17 < v18 )
      {
        LOBYTE(v4) = (*((_DWORD *)this + 63) & 0x8000) == 0;
        if ( ((unsigned __int8)v4 & ((v8 & 0x100000) != 0)) != 0 && v18 > 7 * v17 / 4 )
        {
          LODWORD(v30) = 0;
          if ( !MAPPER::bWin31BitmapHeightScaling((MAPPER *)v4, v18, v17, (int *)&v30) )
            return v2;
          v19 = (int)v30;
          v4 = 8LL;
          v7 = *v6;
          if ( (unsigned int)v30 > 8 )
            v19 = 8;
          *((_DWORD *)this + 49) = v19;
        }
      }
    }
    v9 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v9 + 20) )
    {
      if ( (*(_BYTE *)(v7 + 52) & 1) == 0 )
      {
        if ( (unsigned int)IFIOBJ::bSimItalic((MAPPER *)((char *)this + 256)) )
          *((_DWORD *)this + 47) = 0x4000;
      }
    }
    v10 = *((_DWORD *)this + 63);
    if ( (v10 & 0x200000) == 0
      && *(unsigned __int16 *)(v7 + 46) - *((_DWORD *)this + 43) < 0
      && *((_DWORD *)this + 43) - *(unsigned __int16 *)(v7 + 46) > 150
      && IFIOBJ::pvSimBold((MAPPER *)((char *)this + 256)) )
    {
      *((_DWORD *)this + 47) |= 0x2000u;
    }
    v11 = *(_DWORD *)(v7 + 48);
    if ( (v11 & 0x2000010) != 0 )
    {
LABEL_10:
      v2 = 1;
      **((_DWORD **)this + 27) = *((_DWORD *)this + 47);
      **((_QWORD **)this + 28) = *((_QWORD *)this + 24);
      *(_BYTE *)(*((_QWORD *)this + 29) + 3LL) = 1;
      *((_DWORD *)this + 63) |= 0x1000000u;
      *((_QWORD *)this + 25) = PFEFromUFIInternal;
      return v2;
    }
    v21 = *(__int16 *)(v7 + 76);
    if ( *(_DWORD *)(v9 + 4) )
    {
      if ( (v10 & 4) == 0 )
      {
        MAPPER::bCalculateWishCell(this);
        v7 = *v6;
        v10 = *((_DWORD *)this + 63);
      }
      LOBYTE(v4) = (*(_DWORD *)(v7 + 48) & 0x100000) != 0;
      if ( ((unsigned __int8)v4 & ((v10 & 0x8000) == 0)) == 0 )
        goto LABEL_10;
      v22 = *((_DWORD *)this + 42);
      if ( v22 <= v21 )
        goto LABEL_10;
      LODWORD(v30) = 0;
      if ( !(unsigned int)MAPPER::bWin31BitmapWidthScaling((MAPPER *)v4, v22, v21, (int *)&v30) )
        return v2;
      v23 = (unsigned int)v30;
    }
    else
    {
      if ( (v11 & 0x100000) == 0 || (v10 & 0x8000) != 0 )
        goto LABEL_10;
      v24 = *(_DWORD *)(v7 + 128);
      v25 = *(_DWORD *)(v7 + 132);
      LODWORD(v30) = 0;
      v32 = 0;
      v31 = 0;
      if ( v24 == v25 && *((_DWORD *)this + 61) == *((_DWORD *)this + 62) )
      {
        v23 = *((_DWORD *)this + 49);
        if ( v23 == 1 )
          goto LABEL_10;
      }
      else
      {
        if ( (unsigned int)SafeDivide<unsigned long,unsigned long,unsigned long>(
                             100 * *((_DWORD *)this + 62),
                             *((_DWORD *)this + 61),
                             (int *)&v30)
          || (unsigned int)SafeDivide<long,long,long>(100 * v26, v27, &v31)
          || (unsigned int)SafeDivide<long,long,long>(v31, *((_DWORD *)this + 49), (int *)&v32) )
        {
          return v2;
        }
        if ( (unsigned int)v30 <= (3 * v32) >> 1 )
          goto LABEL_10;
        if ( !v32 )
          return v2;
        v23 = (unsigned int)v30 / v32;
      }
    }
    if ( v23 > 5 )
      v23 = 5;
    *((_DWORD *)this + 48) = v23;
    goto LABEL_10;
  }
  return 0LL;
}
