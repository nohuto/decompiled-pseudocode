/*
 * XREFs of ?pxrlStrRead24@@YGPAU_XRUNLEN@@PAU_STRDDA@@PAU_STRRUN@@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0x229EA9
 * Callers:
 *     <none>
 * Callees:
 *     _XLATEOBJ_iXlate@8 @ 0xC5A04 (_XLATEOBJ_iXlate@8.c)
 */

unsigned __int8 **__stdcall pxrlStrRead24(
        struct _STRDDA *a1,
        ULONG iColor,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7,
        int a8)
{
  unsigned __int8 **v8; // esi
  unsigned __int8 *v9; // ebx
  int v10; // edi
  unsigned int *v11; // ecx
  int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // eax
  ULONG v15; // eax
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  __int16 v20; // ax
  ULONG v21; // eax
  unsigned __int8 *v22; // eax
  unsigned __int8 *v23; // eax
  int v24; // [esp+Ch] [ebp-8h]
  int v25; // [esp+Ch] [ebp-8h]
  ULONG v26; // [esp+10h] [ebp-4h]
  unsigned int *v27; // [esp+1Ch] [ebp+8h]
  unsigned __int8 *iColora; // [esp+20h] [ebp+Ch]
  unsigned __int8 *v29; // [esp+24h] [ebp+10h]
  unsigned __int8 *v30; // [esp+28h] [ebp+14h]
  unsigned int v31; // [esp+30h] [ebp+1Ch]
  int v32; // [esp+34h] [ebp+20h]
  int v33; // [esp+38h] [ebp+24h]
  int v34; // [esp+38h] [ebp+24h]
  int v35; // [esp+38h] [ebp+24h]
  int v36; // [esp+38h] [ebp+24h]

  v8 = (unsigned __int8 **)(iColor + 8);
  v9 = &a3[3 * a6];
  v10 = 0;
  v24 = 0;
  HIBYTE(iColor) = 0;
  HIBYTE(v26) = 0;
  v29 = *(unsigned __int8 **)a1;
  if ( a4 )
  {
    v17 = a8 & 0x1F;
    v18 = a8 >> 5;
    v34 = v17;
    v19 = 0;
    iColora = &a4[4 * v18];
    v25 = *(_DWORD *)iColora;
    v30 = 0;
    if ( a6 < a7 )
    {
      v27 = (unsigned int *)((char *)a1 + 28);
      while ( 1 )
      {
        v20 = *(_WORD *)v9;
        v9 += 3;
        LOWORD(v26) = v20;
        BYTE2(v26) = *(v9 - 1);
        if ( pxlo )
        {
          v21 = XLATEOBJ_iXlate(pxlo, v26);
          v17 = v34;
          v19 = (int)v30;
          v26 = v21;
        }
        if ( (v25 & dword_252A60[v17]) != 0 )
        {
          v35 = *v27;
          if ( *v27 )
          {
            memset32(&v8[v19 + 2], v26, *v27);
            v19 = (int)&v30[v35];
            v30 += v35;
          }
          v22 = v29;
        }
        else
        {
          v23 = v29;
          if ( v19 > 0 )
          {
            *v8 = v29;
            v8[1] = (unsigned __int8 *)v19;
            v8 += v19 + 2;
            v30 = 0;
            v23 = &v29[v19];
          }
          v22 = &v23[*v27];
          v19 = (int)v30;
          v29 = v22;
        }
        ++a6;
        ++v27;
        v36 = v17 + 1;
        if ( a6 >= a7 )
          break;
        if ( (v36 & 0x20) != 0 )
        {
          iColora += 4;
          v25 = *(_DWORD *)iColora;
          v19 = (int)v30;
        }
        v17 = (v36 & 0x20) == 0 ? v36 : 0;
        v34 = v17;
      }
      if ( v19 > 0 )
      {
        *v8 = v22;
        v8[1] = (unsigned __int8 *)v19;
        v8 += v19 + 2;
      }
    }
    return v8;
  }
  else
  {
    *v8 = *(unsigned __int8 **)a1;
    v8[1] = (unsigned __int8 *)(*((_DWORD *)a1 + 2) - *(_DWORD *)a1);
    if ( a6 != a7 )
    {
      v11 = (unsigned int *)((char *)a1 + 28);
      v12 = a7 - a6;
      if ( pxlo )
      {
        v32 = a7 - a6;
        do
        {
          v14 = *v11++;
          v31 = v14;
          v33 = (int)v11;
          if ( v14 )
          {
            LOWORD(iColor) = *(_WORD *)v9;
            BYTE2(iColor) = v9[2];
            v15 = XLATEOBJ_iXlate(pxlo, iColor);
            v12 = v32;
            HIBYTE(iColor) = HIBYTE(v15);
            memset32(&v8[v10 + 2], v15, v31);
            v10 = v31 + v24;
            v11 = (unsigned int *)v33;
            v24 += v31;
          }
          v9 += 3;
          v32 = --v12;
        }
        while ( v12 );
      }
      else
      {
        do
        {
          v13 = *v11++;
          if ( v13 )
          {
            LOWORD(iColor) = *(_WORD *)v9;
            BYTE2(iColor) = v9[2];
            memset32(&v8[v10 + 2], iColor, v13);
            v10 = v13 + v24;
            v24 += v13;
          }
          v9 += 3;
          --v12;
        }
        while ( v12 );
      }
    }
    return &v8[v10 + 2];
  }
}
