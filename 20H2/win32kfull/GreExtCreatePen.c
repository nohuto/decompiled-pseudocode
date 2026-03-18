/*
 * XREFs of GreExtCreatePen @ 0x1C007BEA0
 * Callers:
 *     GreCreatePen @ 0x1C007BE18 (GreCreatePen.c)
 *     NtGdiExtCreatePen @ 0x1C01507B0 (NtGdiExtCreatePen.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00673AC (PALLOCMEM2.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C007C200 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C007C280 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     GreCreateDIBBrush @ 0x1C0152498 (GreCreateDIBBrush.c)
 *     ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x1C02B6190 (-hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z.c)
 */

void *__fastcall GreExtCreatePen(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        int *a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 v11; // rbx
  int v12; // r12d
  int v13; // r13d
  unsigned int v15; // ebp
  int v17; // ecx
  unsigned int v18; // r10d
  int v19; // r15d
  void *v20; // rsi
  int v21; // eax
  int v22; // eax
  unsigned int v23; // r14d
  __int64 v25; // r9
  HBRUSH SolidBrushInternal; // rax
  HBRUSH v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rdi
  unsigned int v30; // ecx
  bool v32; // zf
  int v33; // eax
  ULONG v34; // ecx
  char *v35; // rax
  float *v36; // rdx
  float *v37; // r11
  int v38; // r9d
  int v39; // r8d
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  int v43; // ecx
  int v44; // r10d
  int v45; // eax
  char v46; // [rsp+30h] [rbp-58h]
  int v47; // [rsp+34h] [rbp-54h]
  int v48; // [rsp+38h] [rbp-50h]
  int v49; // [rsp+3Ch] [rbp-4Ch]
  _QWORD v50[9]; // [rsp+40h] [rbp-48h] BYREF

  v11 = 0LL;
  v47 = 0;
  v12 = a1 & 0xF0000;
  v48 = a1 & 0xF0000;
  v13 = a1 & 0xF;
  v15 = abs32(a2);
  v49 = v15;
  v17 = v15 >> 31;
  v18 = a4;
  v19 = 0;
  v20 = 0LL;
  if ( (a1 & 0xFFF000F0) != 0 )
    v17 = 1;
  if ( v13 == 5 )
    return gahStockObjects[8];
  if ( v12 )
  {
    if ( v12 != 0x10000 )
LABEL_66:
      v17 = 1;
  }
  else if ( a3 && (a3 != 2 || ((a6 - 8) & 0xFFFFFFFFFFFFFFFDuLL) != 0) )
  {
    goto LABEL_66;
  }
  if ( v15 != 1 && !v12 && !a10 )
    v17 = 1;
  v21 = a1 & 0xF000;
  if ( (a1 & 0xF000) == 0 )
    goto LABEL_8;
  if ( v21 == 4096 )
  {
    v46 = 1;
  }
  else
  {
    if ( v21 != 0x2000 )
    {
      v17 = 1;
LABEL_8:
      v46 = 0;
      goto LABEL_9;
    }
    v46 = 2;
  }
LABEL_9:
  v22 = a1 & 0xF00;
  if ( (a1 & 0xF00) != 0 )
  {
    if ( v22 == 512 )
    {
      v47 = 2;
    }
    else if ( v22 == 256 )
    {
      v47 = 1;
    }
    else
    {
      v17 = 1;
    }
  }
  else
  {
    v47 = 0;
  }
  v23 = a7;
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
  v17 = 1;
LABEL_14:
  if ( v12 == 0x10000 )
  {
    switch ( v13 )
    {
      case 0:
        goto LABEL_16;
      case 1:
        v23 = 2;
        a8 = (int *)&gaulGeometricDash;
        goto LABEL_16;
      case 2:
        v23 = 2;
        a8 = (int *)&gaulGeometricDot;
        goto LABEL_16;
      case 3:
        v23 = 4;
        a8 = (int *)&gaulGeometricDashDot;
        goto LABEL_16;
      case 4:
        v23 = 6;
        a8 = (int *)&gaulGeometricDashDotDot;
        goto LABEL_16;
    }
    v33 = v13 - 6;
    v32 = v13 == 6;
  }
  else
  {
    switch ( v13 )
    {
      case 0:
        goto LABEL_16;
      case 1:
        v23 = 2;
        v20 = &galeCosmeticDash;
        goto LABEL_54;
      case 2:
        v23 = 8;
        v20 = &galeCosmeticDot;
LABEL_54:
        v19 = 1;
        goto LABEL_16;
      case 3:
        v23 = 4;
        v20 = &galeCosmeticDashDot;
        goto LABEL_54;
      case 4:
        v23 = 6;
        v20 = &galeCosmeticDashDotDot;
        goto LABEL_54;
      case 6:
        if ( !a10 )
          v17 = 1;
        goto LABEL_16;
    }
    v33 = v13 - 7;
    v32 = v13 == 7;
  }
  if ( !v32 && v33 != 1 )
    goto LABEL_93;
LABEL_16:
  if ( v17 )
  {
LABEL_93:
    v34 = 87;
LABEL_95:
    EngSetLastError(v34);
    return 0LL;
  }
  if ( v23 && !v20 )
  {
    v35 = (char *)PALLOCMEM2(4 * v23, 2037674823LL, 0);
    v20 = v35;
    if ( !v35 )
    {
      v34 = 8;
      goto LABEL_95;
    }
    v36 = (float *)v35;
    v37 = (float *)&v35[4 * v23];
    if ( !v12 || a10 )
    {
      v41 = 1;
      v42 = 0;
      v43 = 1;
      if ( !a8 )
        goto LABEL_92;
      do
      {
        v44 = v43;
        if ( v36 >= v37 )
          break;
        v43 = *a8;
        v42 += *a8;
        *(_DWORD *)v36 = *a8;
        v45 = v43;
        ++v36;
        if ( v41 > v43 )
          v45 = v41;
        v41 = v45;
        if ( v44 < v43 )
          v43 = v44;
        ++a8;
      }
      while ( a8 );
      if ( !a8 || v43 <= 0 || v41 > 0x3FFF || v42 > 0x3FFF )
        goto LABEL_92;
    }
    else
    {
      v38 = 0;
      v39 = 0;
      if ( !a8 )
        goto LABEL_92;
      do
      {
        if ( v36 >= v37 )
          break;
        v40 = *a8;
        if ( v13 != 7 )
        {
          if ( v47 != 2 )
            v40 += (((_BYTE)v36 - (_BYTE)v35) & 4) != 0 ? 1 : -1;
          v40 *= v15;
        }
        v38 += v40;
        *v36++ = (float)v40;
        if ( v39 < v40 )
          v40 = v39;
        v39 = v40;
        ++a8;
      }
      while ( a8 );
      v12 = v48;
      if ( !a8 || v39 < 0 || v38 <= 0 )
      {
LABEL_92:
        Win32FreePool(v20);
        goto LABEL_93;
      }
    }
    v18 = a4;
  }
  switch ( a3 )
  {
    case 0:
      if ( v15 || (v25 = 1LL, v13) )
        v25 = 0LL;
      SolidBrushInternal = (HBRUSH)hCreateSolidBrushInternal(v18, 1LL, a11, v25);
      break;
    case 1:
      if ( v20 && !v19 )
        Win32FreePool(v20);
      return gahStockObjects[8];
    case 2:
      SolidBrushInternal = hCreateHatchBrushInternal(a6, v18, 1);
      break;
    case 3:
      SolidBrushInternal = (HBRUSH)GreCreatePatternBrushInternal(a6, 1LL, 0LL, 2LL);
      break;
    case 6:
      SolidBrushInternal = (HBRUSH)GreCreateDIBBrush(a6, v18, a9, 0, 1, a5);
      break;
    default:
      EngSetLastError(0x57u);
      goto LABEL_131;
  }
  v27 = SolidBrushInternal;
  if ( !SolidBrushInternal )
  {
LABEL_131:
    if ( v20 && !v19 )
      Win32FreePool(v20);
    return 0LL;
  }
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v50, SolidBrushInternal);
  v28 = v50[0];
  if ( v50[0] )
  {
    *(_DWORD *)(v50[0] + 40LL) |= 0x400u;
    *(_DWORD *)(v28 + 176) = a1;
    *(_BYTE *)(v28 + 185) = v47;
    *(_BYTE *)(v28 + 184) = v46;
    *(_QWORD *)(v28 + 152) = v20;
    *(_DWORD *)(v28 + 180) = v23;
    *(_DWORD *)(v28 + 168) = v49;
    if ( v19 )
      *(_DWORD *)(v28 + 40) |= 0x4000u;
    *(_DWORD *)(v28 + 188) = a3;
    *(_QWORD *)(v28 + 160) = a5;
    if ( a10 || v12 == 0x10000 )
      *(float *)(v28 + 172) = (float)v49;
    v29 = (unsigned __int64)v27 | 0x500000;
    if ( a10 )
    {
      v30 = *(_DWORD *)(v28 + 40) & 0xFFFFF3FB | 0xC00;
      *(_DWORD *)(v28 + 40) = v30;
      if ( v13 == 6 )
        *(_DWORD *)(v28 + 40) = v30 | 0x10004;
      v29 = (unsigned __int64)v27 | 0x300000;
    }
    else if ( v12 )
    {
      if ( v13 == 6 )
        *(_DWORD *)(v28 + 40) |= 0x10000u;
    }
    else
    {
      *(_DWORD *)(v28 + 40) &= ~4u;
    }
    HmgModifyHandleType(v29, 0x10000LL);
    v11 = v29;
  }
  else if ( v20 && !v19 )
  {
    Win32FreePool(v20);
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v50);
  return (void *)v11;
}
