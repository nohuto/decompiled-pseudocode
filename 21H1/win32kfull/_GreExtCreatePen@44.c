/*
 * XREFs of _GreExtCreatePen@44 @ 0xA90C4
 * Callers:
 *     _GreCreatePen@16 @ 0xA9084 (_GreCreatePen@16.c)
 *     _NtGdiExtCreatePen@44 @ 0x212537 (_NtGdiExtCreatePen@44.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IAEXXZ @ 0xA9338 (-RestoreAttributes@XEBRUSHOBJ@@IAEXXZ.c)
 *     ??0BRUSHSELOBJ@@QAE@PAUHBRUSH__@@@Z @ 0xA9368 (--0BRUSHSELOBJ@@QAE@PAUHBRUSH__@@@Z.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _eftof_c@4 @ 0xEEF63 (_eftof_c@4.c)
 *     ?hCreateHatchBrushInternal@@YGPAUHBRUSH__@@KKH@Z @ 0x21DDF2 (-hCreateHatchBrushInternal@@YGPAUHBRUSH__@@KKH@Z.c)
 *     _GreCreateDIBBrush@24 @ 0x21DE30 (_GreCreateDIBBrush@24.c)
 */

void *__fastcall GreExtCreatePen(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        int *a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // ebx
  unsigned int v12; // eax
  int v13; // esi
  int v14; // ecx
  void *v15; // edi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  BOOL v20; // eax
  HBRUSH SolidBrushInternal; // eax
  HBRUSH v22; // edi
  int v23; // esi
  unsigned int v24; // eax
  unsigned int v25; // eax
  void *v27; // eax
  int *v28; // ecx
  int v29; // edx
  int v30; // eax
  int v31; // edi
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // [esp-4h] [ebp-54h]
  unsigned int v37; // [esp+0h] [ebp-50h]
  int v38; // [esp+4h] [ebp-4Ch]
  char v39; // [esp+Fh] [ebp-41h]
  void *v40; // [esp+10h] [ebp-40h]
  int v41; // [esp+14h] [ebp-3Ch]
  int v42; // [esp+18h] [ebp-38h]
  int v43; // [esp+1Ch] [ebp-34h]
  unsigned int v45; // [esp+24h] [ebp-2Ch]
  int v46; // [esp+28h] [ebp-28h]
  char v47; // [esp+2Ch] [ebp-24h]
  int v48; // [esp+2Ch] [ebp-24h]
  _DWORD *v49; // [esp+30h] [ebp-20h]
  int v50; // [esp+30h] [ebp-20h]
  int v51; // [esp+30h] [ebp-20h]
  unsigned int v52; // [esp+34h] [ebp-1Ch]
  int v53; // [esp+38h] [ebp-18h]
  unsigned int v54; // [esp+38h] [ebp-18h]
  int v55; // [esp+3Ch] [ebp-14h]
  _DWORD v56[2]; // [esp+40h] [ebp-10h] BYREF
  _BYTE v57[8]; // [esp+48h] [ebp-8h] BYREF

  v45 = (unsigned int)&loc_F0000 & a1;
  v11 = 0;
  v12 = abs32(a2);
  v42 = 0;
  v43 = 0;
  v52 = v12;
  v13 = a1 & 0xF;
  v14 = v12 >> 31;
  v15 = 0;
  v40 = 0;
  v46 = v13;
  if ( (a1 & 0xFFF000F0) != 0 )
    v14 = 1;
  if ( v13 == 5 )
    return gahStockObjects[8];
  if ( v45 )
  {
    if ( v45 == 0x10000 )
      goto LABEL_6;
    goto LABEL_48;
  }
  if ( a3 && (a3 != 2 || a6 != 8 && a6 != 10) )
LABEL_48:
    v14 = 1;
LABEL_6:
  if ( v12 != 1 && !v45 && !a10 )
    v14 = 1;
  v16 = a1 & 0xF000;
  if ( (a1 & 0xF000) == 0 )
    goto LABEL_8;
  if ( v16 == 4096 )
  {
    v39 = 1;
  }
  else
  {
    if ( v16 != 0x2000 )
    {
      v14 = 1;
LABEL_8:
      v39 = 0;
      goto LABEL_9;
    }
    v39 = 2;
  }
LABEL_9:
  v17 = a1 & 0xF00;
  if ( (a1 & 0xF00) != 0 )
  {
    if ( v17 == 256 )
    {
      v43 = 1;
    }
    else if ( v17 == 512 )
    {
      v43 = 2;
    }
    else
    {
      v14 = 1;
    }
  }
  else
  {
    v43 = 0;
  }
  v41 = a7;
  if ( v13 == 7 )
  {
    if ( a7 )
    {
LABEL_13:
      if ( a7 <= 0x10 )
        goto LABEL_14;
    }
  }
  else if ( !a7 )
  {
    goto LABEL_13;
  }
  v14 = 1;
LABEL_14:
  if ( v45 != 0x10000 )
  {
    switch ( v13 )
    {
      case 0:
      case 7:
      case 8:
        goto LABEL_16;
      case 1:
        v36 = 2;
        v15 = &galeCosmeticDash;
        goto LABEL_74;
      case 2:
        v36 = 8;
        v15 = &galeCosmeticDot;
        goto LABEL_74;
      case 3:
        v36 = 4;
        v15 = &galeCosmeticDashDot;
        goto LABEL_74;
      case 4:
        v36 = 6;
        v15 = &galeCosmeticDashDotDot;
LABEL_74:
        v18 = v36;
        v41 = v36;
        v40 = v15;
        v42 = 1;
        goto LABEL_17;
      case 6:
        if ( a10 )
          goto LABEL_16;
        goto LABEL_39;
      default:
LABEL_39:
        v14 = 1;
        break;
    }
    goto LABEL_16;
  }
  switch ( v13 )
  {
    case 0:
LABEL_16:
      v18 = a7;
      break;
    case 1:
      v18 = 2;
      v41 = 2;
      a8 = (int *)&gaulGeometricDash;
      break;
    case 2:
      v18 = 2;
      v41 = 2;
      a8 = (int *)&gaulGeometricDot;
      break;
    case 3:
      v18 = 4;
      v41 = 4;
      a8 = (int *)&gaulGeometricDashDot;
      break;
    case 4:
      v18 = 6;
      v41 = 6;
      a8 = (int *)&gaulGeometricDashDotDot;
      break;
    default:
      if ( (unsigned int)(v13 - 6) >= 2 )
        goto LABEL_78;
      goto LABEL_16;
  }
LABEL_17:
  if ( v14 )
  {
LABEL_78:
    EngSetLastError(0x57u);
    return 0;
  }
  if ( v18 && !v15 )
  {
    v53 = 4 * v18;
    v27 = PALLOCMEM2(4 * v18, 2037674823, 0);
    v15 = v27;
    v40 = v27;
    if ( !v27 )
    {
      EngSetLastError(8u);
      return 0;
    }
    v28 = (int *)v27;
    v54 = (unsigned int)v27 + v53;
    if ( !v45 || a10 )
    {
      v51 = 0;
      v48 = 1;
      v34 = 1;
      if ( !a8 )
        goto LABEL_77;
      do
      {
        if ( (unsigned int)v28 >= v54 )
          break;
        v35 = *a8;
        *v28 = *a8;
        if ( v34 >= v35 )
          v34 = v35;
        if ( v48 <= v35 )
          v48 = v35;
        v51 += v35;
        ++v28;
        ++a8;
      }
      while ( a8 );
      v15 = v40;
      if ( !a8 || v34 <= 0 || v48 > 0x3FFF || v51 > 0x3FFF )
        goto LABEL_77;
    }
    else
    {
      v29 = 0;
      if ( !a8 )
        goto LABEL_77;
      v47 = 0;
      v30 = (_BYTE *)v27 - (_BYTE *)a8;
      v31 = 0;
      v55 = v30;
      do
      {
        v49 = (int *)((char *)a8 + v30);
        if ( (unsigned int)a8 + v30 >= v54 )
          break;
        v32 = *a8;
        if ( v46 != 7 )
        {
          if ( v43 != 2 )
            v32 = v32 + 2 * ((v47 & 4) != 0) - 1;
          v32 *= v52;
        }
        if ( v31 >= v32 )
          v31 = v32;
        v56[0] = v32 + v29;
        ltoef_c(v32, v57);
        v33 = eftof_c(v57);
        v47 += 4;
        v29 = v56[0];
        *v49 = v33;
        v30 = v55;
        ++a8;
      }
      while ( a8 );
      v50 = v31;
      v15 = v40;
      if ( !a8 || v50 < 0 || v29 <= 0 )
      {
LABEL_77:
        Win32FreePool(v15);
        goto LABEL_78;
      }
    }
  }
  switch ( a3 )
  {
    case 0:
      v20 = !v52 && !v46;
      SolidBrushInternal = (HBRUSH)hCreateSolidBrushInternal(a4, 1, a11, v20);
      break;
    case 1:
      if ( v15 && !v42 )
        Win32FreePool(v15);
      return gahStockObjects[8];
    case 2:
      SolidBrushInternal = hCreateHatchBrushInternal(1u, v37, v38);
      break;
    case 3:
      SolidBrushInternal = (HBRUSH)GreCreatePatternBrushInternal(a6, 1, 0);
      break;
    case 6:
      SolidBrushInternal = (HBRUSH)GreCreateDIBBrush(a6, a4, a9, 0, 1, a5);
      break;
    default:
      EngSetLastError(0x57u);
LABEL_123:
      if ( v15 && !v42 )
        Win32FreePool(v15);
      return 0;
  }
  v22 = SolidBrushInternal;
  if ( !SolidBrushInternal )
  {
    v15 = v40;
    goto LABEL_123;
  }
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v56, SolidBrushInternal);
  v23 = v56[0];
  if ( v56[0] )
  {
    *(_DWORD *)(v56[0] + 24) |= 0x400u;
    *(_DWORD *)(v23 + 124) = a1;
    *(_BYTE *)(v23 + 133) = v43;
    *(_BYTE *)(v23 + 132) = v39;
    *(_DWORD *)(v23 + 108) = v40;
    *(_DWORD *)(v23 + 128) = v41;
    *(_DWORD *)(v23 + 116) = v52;
    if ( v42 )
      *(_DWORD *)(v23 + 24) |= 0x4000u;
    *(_DWORD *)(v23 + 136) = a3;
    *(_DWORD *)(v23 + 112) = a5;
    v24 = v45;
    if ( a10 || v45 == 0x10000 )
    {
      ltoef_c(v52, v57);
      *(_DWORD *)(v23 + 120) = eftof_c(v57);
      v24 = v45;
    }
    v11 = (unsigned int)v22 | 0x500000;
    if ( a10 )
    {
      v25 = *(_DWORD *)(v23 + 24) & 0xFFFFF3FB | 0xC00;
      *(_DWORD *)(v23 + 24) = v25;
      if ( v46 == 6 )
        *(_DWORD *)(v23 + 24) = v25 | 0x10004;
      v11 = (unsigned int)v22 | 0x300000;
    }
    else if ( v24 )
    {
      if ( v46 == 6 )
        *(_DWORD *)(v23 + 24) |= 0x10000u;
    }
    else
    {
      *(_DWORD *)(v23 + 24) &= ~4u;
    }
    HmgModifyHandleType(v11);
    XEBRUSHOBJ::RestoreAttributes((XEBRUSHOBJ *)v56);
    DEC_SHARE_REF_CNT(v56[0]);
  }
  else if ( v40 && !v42 )
  {
    Win32FreePool(v40);
  }
  return (void *)v11;
}
