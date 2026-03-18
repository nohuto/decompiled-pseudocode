/*
 * XREFs of ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180043D48
 * Callers:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18004011C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800430D0 (-NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeSubtract(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // rbp
  __int64 v4; // rcx
  int v5; // r10d
  _DWORD *v6; // rsi
  char *v7; // r14
  unsigned int v8; // r8d
  char *v9; // rdx
  char *v10; // r10
  _DWORD *v11; // r9
  int v12; // eax
  int v13; // r11d
  int v14; // eax
  int v15; // ebp
  int j; // ebx
  int v17; // edi
  _DWORD *v18; // r15
  _DWORD *v20; // rcx
  int v21; // eax
  int v22; // eax
  _DWORD *v23; // r9
  _DWORD *v24; // rcx
  int v25; // eax
  int v26; // eax
  int i; // eax
  _DWORD *v28; // rcx
  int v29; // eax
  _DWORD *v30; // r11
  int v31; // eax

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = *((_DWORD *)a2 + 3);
  v6 = &v3[2 * v2];
  v7 = (char *)a2 + 8 * v4 + 12;
  v8 = 8 * (v4 + v2) + 12;
  if ( *v3 >= v5 )
  {
    v9 = (char *)a2 + 20;
    if ( *v3 > v5 )
    {
      while ( 1 )
      {
        v29 = *(_DWORD *)v9;
        if ( *v3 < *(_DWORD *)v9 )
          goto LABEL_3;
        v9 += 8;
        if ( *v3 <= v29 )
          break;
        if ( v9 == v7 )
        {
          v11 = v3 + 2;
          v22 = v3[3] - v3[1] + 8;
LABEL_14:
          v8 += v22;
          v23 = v11 + 2;
          if ( v23 != v6 )
          {
            v24 = v23 - 2;
            do
            {
              v25 = v24[3] - v24[1] - (_DWORD)v24;
              v24 += 2;
              v26 = (_DWORD)v23 + v25;
              v23 += 2;
              v8 += v26;
            }
            while ( v23 != v6 );
          }
          return v8;
        }
      }
      v11 = v3 + 2;
      if ( v9 != v7 )
      {
        v13 = *((_DWORD *)v9 + 1);
        v10 = v9 - 8;
        v14 = v3[3] + v13 + -*((_DWORD *)v9 - 1) - v3[1] + 8 + 8;
        goto LABEL_5;
      }
      v22 = v3[3] + 8 - v3[1];
      goto LABEL_14;
    }
LABEL_3:
    v10 = v9 - 8;
    v11 = v3 + 2;
    v12 = v3[3] - *((_DWORD *)v9 - 1) - v3[1] - (_DWORD)v3;
LABEL_4:
    v13 = *((_DWORD *)v9 + 1);
    v14 = (_DWORD)v11 + v13 + (_DWORD)v9 + v12 - (_DWORD)v10;
LABEL_5:
    v8 += v14;
    goto LABEL_6;
  }
  v11 = v3 + 2;
  for ( i = v3[3] - v3[1] + 8; ; i = v30[3] - v30[1] + 8 )
  {
    v8 += i;
    if ( *v11 >= v5 )
      break;
    v30 = v11;
    v11 += 2;
    if ( v11 == v6 )
      return v8;
  }
  v9 = (char *)a2 + 20;
  v28 = v11;
  if ( *v11 <= v5 )
  {
    v11 += 2;
    if ( v11 == v6 )
      return v8;
    v10 = v9 - 8;
    v12 = v11[1] - *((_DWORD *)v9 - 1) - v28[1] - (_DWORD)v28;
    goto LABEL_4;
  }
  v10 = v9 - 8;
  v13 = *((_DWORD *)v9 + 1);
  v8 += v13 + v11[1] - *((_DWORD *)v9 - 1) - *(v11 - 1) + 16;
LABEL_6:
  v15 = *(_DWORD *)v9;
  for ( j = (int)v9; ; v8 += v13 + j + v18[3] - *((_DWORD *)v10 + 1) - v18[1] - (_DWORD)v10 + 8 )
  {
    v17 = *v11;
    while ( 1 )
    {
      v18 = v11;
      if ( v17 < v15 )
        break;
      v9 += 8;
      if ( v17 > v15 )
      {
        v20 = v11 - 2;
        v21 = (int)v11;
        if ( v9 == v7 )
          goto LABEL_13;
        v13 = *((_DWORD *)v9 + 1);
        v10 = v9 - 8;
        v31 = v13 + -*((_DWORD *)v9 - 1) - *(v11 - 1) + 16;
      }
      else
      {
        v11 += 2;
        if ( v11 == v6 )
          return v8;
        v20 = v11 - 2;
        if ( v9 == v7 )
        {
          v21 = (int)v11;
LABEL_13:
          v22 = v11[1] + v21 - v20[1] - (_DWORD)v20;
          goto LABEL_14;
        }
        v13 = *((_DWORD *)v9 + 1);
        v10 = v9 - 8;
        v17 = *v11;
        v31 = v13 + -*((_DWORD *)v9 - 1) - *(v11 - 1) + 16;
      }
      j = (int)v9;
      v15 = *(_DWORD *)v9;
      v8 += v11[1] + v31;
    }
    v11 += 2;
    if ( v11 == v6 )
      break;
  }
  return v8;
}
