/*
 * XREFs of ?pxrlStrRead08@@YGPAU_XRUNLEN@@PAU_STRDDA@@PAU_STRRUN@@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0xB956C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _STRRUN **__stdcall pxrlStrRead08(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  struct _STRRUN **v8; // edx
  unsigned __int8 *v9; // edi
  int v10; // esi
  int *v11; // ecx
  int v12; // ebx
  int v13; // eax
  _DWORD *v14; // ebx
  int v15; // edx
  _DWORD *v16; // ebx
  int *v18; // eax
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // edx
  int v22; // esi
  struct _STRRUN **v23; // edx
  int v24; // eax
  unsigned int *v25; // ecx
  ULONG v26; // ebx
  int v27; // ebx
  unsigned int v28; // ecx
  struct _STRRUN *v29; // ecx
  unsigned __int8 *v30; // esi
  int v31; // esi
  struct _STRRUN *v32; // ecx
  int v33; // [esp+Ch] [ebp-Ch]
  unsigned __int8 *v34; // [esp+10h] [ebp-8h]
  struct _STRRUN **v35; // [esp+14h] [ebp-4h]
  struct _STRDDA *v36; // [esp+20h] [ebp+8h]
  struct _STRRUN *v37; // [esp+24h] [ebp+Ch]
  unsigned __int8 *v38; // [esp+28h] [ebp+10h]
  unsigned __int8 *v39; // [esp+2Ch] [ebp+14h]
  int v40; // [esp+38h] [ebp+20h]
  int v41; // [esp+38h] [ebp+20h]
  ULONG v42; // [esp+3Ch] [ebp+24h]

  v8 = (struct _STRRUN **)((char *)a2 + 8);
  v9 = &a3[a6];
  v35 = (struct _STRRUN **)((char *)a2 + 8);
  v37 = *(struct _STRRUN **)a1;
  if ( a4 )
  {
    v22 = a8 & 0x1F;
    v23 = v35;
    v34 = &a4[4 * (a8 >> 5)];
    v33 = *(_DWORD *)v34;
    v24 = 0;
    v39 = 0;
    if ( a6 < a7 )
    {
      v25 = (unsigned int *)((char *)a1 + 28);
      v36 = (struct _STRDDA *)((char *)a1 + 28);
      while ( 1 )
      {
        v26 = *v9++;
        v42 = v26;
        if ( a5 )
        {
          v24 = (int)v39;
          v42 = a5->pulXlate[v26];
        }
        v27 = a7;
        if ( (v33 & dword_252A60[v22]) != 0 )
        {
          v28 = *v25;
          if ( v28 )
          {
            memset32(&v23[v24 + 2], v42, v28);
            v24 = (int)&v39[v28];
            v39 += v28;
          }
          v29 = v37;
        }
        else
        {
          v32 = v37;
          if ( v24 > 0 )
          {
            *v23 = v37;
            v32 = (struct _STRRUN *)((char *)v37 + v24);
            v23[1] = (struct _STRRUN *)v24;
            v23 += v24 + 2;
            v24 = 0;
            v39 = 0;
          }
          v29 = (struct _STRRUN *)((char *)v32 + *(_DWORD *)v36);
          v27 = a7;
          v37 = v29;
        }
        ++a6;
        v30 = (unsigned __int8 *)(v22 + 1);
        v36 = (struct _STRDDA *)((char *)v36 + 4);
        v38 = v30;
        if ( a6 >= v27 )
          break;
        v31 = (unsigned __int8)v30 & 0x20;
        if ( v31 )
        {
          v34 += 4;
          v33 = *(_DWORD *)v34;
        }
        v25 = (unsigned int *)v36;
        v22 = v31 == 0 ? (unsigned int)v38 : 0;
      }
      if ( v24 > 0 )
      {
        *v23 = v29;
        v23[1] = (struct _STRRUN *)v24;
        v23 += v24 + 2;
      }
    }
    return v23;
  }
  else
  {
    *v8 = *(struct _STRRUN **)a1;
    v10 = 0;
    v8[1] = (struct _STRRUN *)(*((_DWORD *)a1 + 2) - *(_DWORD *)a1);
    if ( a6 != a7 )
    {
      v11 = (int *)((char *)a1 + 28);
      v12 = a7 - a6;
      if ( a5 )
      {
        v40 = a7 - a6;
        do
        {
          v13 = *v11++;
          if ( v13 )
          {
            v14 = v8 + 2;
            v15 = v13;
            v16 = &v14[v10];
            do
            {
              *v16++ = a5->pulXlate[*v9];
              --v15;
            }
            while ( v15 );
            v8 = v35;
            v12 = v40;
            v10 += v13;
          }
          ++v9;
          v40 = --v12;
        }
        while ( v12 );
      }
      else
      {
        v18 = (int *)((char *)a1 + 28);
        do
        {
          v19 = *v18++;
          v41 = (int)v18;
          if ( v19 )
          {
            v20 = (int)&v8[v10 + 2];
            v10 += v19;
            v21 = (_DWORD *)v20;
            do
            {
              *v21++ = *v9;
              --v19;
            }
            while ( v19 );
            v8 = v35;
            v18 = (int *)v41;
          }
          ++v9;
          --v12;
        }
        while ( v12 );
      }
    }
    return &v8[v10 + 2];
  }
}
