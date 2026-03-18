/*
 * XREFs of ?pxrlStrRead32@@YGPAU_XRUNLEN@@PAU_STRDDA@@PAU_STRRUN@@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0x22A28D
 * Callers:
 *     <none>
 * Callees:
 *     _XLATEOBJ_iXlate@8 @ 0xC5A04 (_XLATEOBJ_iXlate@8.c)
 */

struct _STRRUN **__stdcall pxrlStrRead32(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        ULONG iColor,
        XLATEOBJ *pxlo,
        int a6,
        int a7,
        int a8)
{
  ULONG v8; // edx
  ULONG *v9; // ecx
  struct _STRRUN **v10; // esi
  unsigned int *v11; // edi
  int v12; // ebx
  int *v13; // eax
  int v14; // edi
  int v15; // eax
  ULONG *v16; // esi
  unsigned int v17; // eax
  ULONG v18; // eax
  struct _STRRUN **v19; // edi
  int v21; // ebx
  int v22; // edx
  int v23; // eax
  int v24; // edi
  ULONG v25; // eax
  struct _STRRUN *v26; // ecx
  ULONG v27; // ebx
  int v28; // ebx
  struct _STRRUN *v29; // ecx
  unsigned int v30; // [esp+Ch] [ebp-Ch]
  struct _STRRUN **v31; // [esp+10h] [ebp-8h]
  int v32; // [esp+10h] [ebp-8h]
  ULONG *v33; // [esp+14h] [ebp-4h]
  ULONG *v34; // [esp+14h] [ebp-4h]
  unsigned int *v35; // [esp+20h] [ebp+8h]
  struct _STRRUN *v36; // [esp+24h] [ebp+Ch]
  struct _STRRUN *v37; // [esp+24h] [ebp+Ch]
  unsigned __int8 *v38; // [esp+28h] [ebp+10h]
  ULONG iColora; // [esp+2Ch] [ebp+14h]
  ULONG iColorb; // [esp+2Ch] [ebp+14h]
  int v41; // [esp+34h] [ebp+1Ch]
  unsigned int v42; // [esp+34h] [ebp+1Ch]
  int v43; // [esp+38h] [ebp+20h]
  int *v44; // [esp+3Ch] [ebp+24h]

  v8 = iColor;
  v9 = (ULONG *)&a3[4 * a6];
  v10 = (struct _STRRUN **)((char *)a2 + 8);
  v31 = (struct _STRRUN **)((char *)a2 + 8);
  v33 = v9;
  v36 = *(struct _STRRUN **)a1;
  if ( iColor )
  {
    v21 = a8 & 0x1F;
    v22 = a7;
    v44 = (int *)(iColor + 4 * (a8 >> 5));
    v32 = *v44;
    v23 = 0;
    v38 = 0;
    if ( a6 < a7 )
    {
      v35 = (unsigned int *)((char *)a1 + 28);
      while ( 1 )
      {
        iColora = *v9;
        v24 = a6;
        v34 = v9 + 1;
        if ( pxlo )
        {
          v25 = XLATEOBJ_iXlate(pxlo, iColora);
          v22 = a7;
          iColora = v25;
          v23 = (int)v38;
        }
        if ( (v32 & dword_252A60[v21]) != 0 )
        {
          v30 = *v35;
          if ( *v35 )
          {
            memset32(&v10[v23 + 2], iColora, *v35);
            v23 = (int)&v38[v30];
            v24 = a6;
            v38 += v30;
          }
          v26 = v36;
        }
        else
        {
          v29 = v36;
          if ( v23 > 0 )
          {
            *v10 = v36;
            v29 = (struct _STRRUN *)((char *)v36 + v23);
            v10[1] = (struct _STRRUN *)v23;
            v10 += v23 + 2;
            v23 = 0;
            v38 = 0;
          }
          v26 = (struct _STRRUN *)((char *)v29 + *v35);
          v22 = a7;
          v36 = v26;
        }
        ++v35;
        v27 = v21 + 1;
        a6 = v24 + 1;
        iColorb = v27;
        if ( v24 + 1 >= v22 )
          break;
        v28 = v27 & 0x20;
        if ( v28 )
          v32 = *++v44;
        v9 = v34;
        v21 = v28 == 0 ? iColorb : 0;
      }
      if ( v23 > 0 )
      {
        *v10 = v26;
        v10[1] = (struct _STRRUN *)v23;
        v10 += v23 + 2;
      }
    }
    return v10;
  }
  else
  {
    *v10 = *(struct _STRRUN **)a1;
    v10[1] = (struct _STRRUN *)(*((_DWORD *)a1 + 2) - *(_DWORD *)a1);
    v37 = 0;
    if ( a6 != a7 )
    {
      v11 = (unsigned int *)((char *)a1 + 28);
      v12 = a7 - a6;
      if ( pxlo )
      {
        do
        {
          v17 = *v11++;
          v42 = v17;
          v43 = (int)v11;
          if ( v17 )
          {
            v18 = XLATEOBJ_iXlate(pxlo, *v9);
            v8 = (ULONG)v37 + v42;
            v19 = &v10[(_DWORD)v37 + 2];
            v37 = (struct _STRRUN *)((char *)v37 + v42);
            memset32(v19, v18, v42);
            v9 = v33;
            v11 = (unsigned int *)v43;
          }
          v33 = ++v9;
          --v12;
        }
        while ( v12 );
      }
      else
      {
        v13 = (int *)((char *)a1 + 28);
        do
        {
          v14 = *v13++;
          v41 = (int)v13;
          if ( v14 )
          {
            v15 = (int)&v10[v8 + 2];
            v8 += v14;
            v16 = (ULONG *)v15;
            do
            {
              *v16++ = *v9;
              --v14;
            }
            while ( v14 );
            v10 = v31;
            v13 = (int *)v41;
          }
          ++v9;
          --v12;
        }
        while ( v12 );
      }
    }
    return &v10[v8 + 2];
  }
}
