/*
 * XREFs of ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180099690
 * Callers:
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x1800989E0 (--$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z.c)
 *     ?NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180099D70 (-NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18009B3D8 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeUnion(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r14
  __int64 v4; // rcx
  char *v5; // r9
  char *v6; // rbx
  _DWORD *v7; // rbp
  int v8; // eax
  int v9; // r8d
  char *v10; // rdi
  unsigned int v11; // edx
  _DWORD *v12; // r10
  int i; // eax
  int v14; // ebx
  char *v15; // r9
  _DWORD *v16; // rcx
  char *v17; // r11
  int v18; // r8d
  char *v19; // r9
  int v21; // r14d
  int v22; // esi
  _DWORD *v23; // r15
  int v24; // eax
  int v25; // eax
  int v26; // eax
  _DWORD *v27; // r10
  _DWORD *v28; // rcx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  _DWORD *v32; // r11
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  char *v37; // rax
  int v38; // ecx
  int v39; // ecx

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = (char *)a2 + 12;
  v6 = (char *)a2 + 12;
  v7 = &v3[2 * v2];
  v8 = v4 + v2;
  v9 = *((_DWORD *)a2 + 3);
  v10 = (char *)a2 + 8 * v4 + 12;
  v11 = 8 * v8 + 12;
  if ( *v3 >= v9 )
  {
    v15 = v5 + 8;
    if ( *v3 > v9 )
    {
      while ( 1 )
      {
        v34 = *(_DWORD *)v15;
        v11 += *((_DWORD *)v15 + 1) - *((_DWORD *)v15 - 1) + 8;
        if ( *v3 < *(_DWORD *)v15 )
          goto LABEL_23;
        v15 += 8;
        if ( *v3 <= v34 )
          break;
        if ( v15 == v10 )
        {
          v12 = v3 + 2;
          v25 = v3[3] - v3[1] - (_DWORD)v3;
LABEL_17:
          v26 = (_DWORD)v12 + v25;
LABEL_18:
          v11 += v26;
          v27 = v12 + 2;
          if ( v27 != v7 )
          {
            v28 = v27 - 2;
            do
            {
              v29 = v28[3] - v28[1] - (_DWORD)v28;
              v28 += 2;
              v30 = (_DWORD)v27 + v29;
              v27 += 2;
              v11 += v30;
            }
            while ( v27 != v7 );
          }
          return v11;
        }
      }
      v12 = v3 + 2;
      if ( v15 != v10 )
      {
        v14 = *((_DWORD *)v15 + 1);
        v17 = v15 - 8;
        v31 = v3[3] + v14 + -*((_DWORD *)v15 - 1) - v3[1] + 8 + 8;
        goto LABEL_24;
      }
      v26 = v3[3] + 8 - v3[1];
      goto LABEL_18;
    }
LABEL_23:
    v17 = v15 - 8;
    v12 = v3 + 2;
    v14 = *((_DWORD *)v15 + 1);
    v31 = v14 + v3[3] - *((_DWORD *)v15 - 1) - v3[1] + 16;
LABEL_24:
    v11 += v31;
LABEL_10:
    v18 = (int)v15;
  }
  else
  {
    v12 = v3 + 2;
    for ( i = v3[3] - v3[1] + 8; ; i = v32[3] - v32[1] + 8 )
    {
      v11 += i;
      if ( *v12 >= v9 )
        break;
      v32 = v12;
      v12 += 2;
      if ( v12 == v7 )
      {
        v36 = *((_DWORD *)v5 + 3);
        v15 = v5 + 8;
        v35 = v36 - *((_DWORD *)v6 + 1) - (_DWORD)v6;
        goto LABEL_40;
      }
    }
    v14 = *((_DWORD *)v5 + 3);
    v15 = v5 + 8;
    v16 = v12;
    v17 = v15 - 8;
    if ( *v12 > v9 )
    {
      v11 += v14 + v12[1] - *((_DWORD *)v15 - 1) - *(v12 - 1) + 16;
      goto LABEL_10;
    }
    v12 += 2;
    v18 = (int)v15;
    if ( v12 == v7 )
    {
      v11 += v14 + 8 - *((_DWORD *)v15 - 1);
      goto LABEL_7;
    }
    v11 += v14 + (_DWORD)v12 + v12[1] - *((_DWORD *)v15 - 1) - v16[1] - (_DWORD)v16 + 8;
  }
  v21 = *(_DWORD *)v15;
  while ( 2 )
  {
    v22 = *v12;
    while ( 1 )
    {
      v23 = v12;
      if ( v22 < v21 )
        break;
      v15 += 8;
      if ( v22 <= v21 )
      {
        v12 += 2;
        if ( v12 == v7 )
        {
          if ( v15 == v10 )
            return v11;
          v11 += *((_DWORD *)v15 + 1) - *((_DWORD *)v15 - 1) + 8;
          goto LABEL_7;
        }
        if ( v15 == v10 )
        {
          v26 = v12[1] + 8 - *(v12 - 1);
          goto LABEL_18;
        }
        v14 = *((_DWORD *)v15 + 1);
        v17 = v15 - 8;
        v22 = *v12;
        v33 = v12[1] + v14 + -*((_DWORD *)v15 - 1) - *(v12 - 1) + 16;
      }
      else
      {
        v24 = v12[1];
        if ( v15 == v10 )
        {
          v25 = v24 - *(v12 - 1) - ((_DWORD)v12 - 8);
          goto LABEL_17;
        }
        v14 = *((_DWORD *)v15 + 1);
        v17 = v15 - 8;
        v33 = v14 + v24 - *((_DWORD *)v15 - 1) - *(v12 - 1) + 16;
      }
      v21 = *(_DWORD *)v15;
      v11 += v33;
      v18 = (int)v15;
    }
    v12 += 2;
    if ( v12 != v7 )
    {
      v11 += v14 + v18 + v23[3] - *((_DWORD *)v17 + 1) - v23[1] - (_DWORD)v17 + 8;
      continue;
    }
    break;
  }
  v35 = *((_DWORD *)v15 + 1) - *((_DWORD *)v17 + 1) - (_DWORD)v17;
LABEL_40:
  v11 += (_DWORD)v15 + v35;
LABEL_7:
  v19 = v15 + 8;
  if ( v19 != v10 )
  {
    v37 = v19 - 8;
    do
    {
      v38 = *((_DWORD *)v37 + 3) - *((_DWORD *)v37 + 1) - (_DWORD)v37;
      v37 += 8;
      v39 = (_DWORD)v19 + v38;
      v19 += 8;
      v11 += v39;
    }
    while ( v19 != v10 );
  }
  return v11;
}
