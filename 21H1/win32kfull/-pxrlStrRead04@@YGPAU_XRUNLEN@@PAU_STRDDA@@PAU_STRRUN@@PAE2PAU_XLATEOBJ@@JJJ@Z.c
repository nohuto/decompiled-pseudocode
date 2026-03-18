/*
 * XREFs of ?pxrlStrRead04@@YGPAU_XRUNLEN@@PAU_STRDDA@@PAU_STRRUN@@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0xC698C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 **__stdcall pxrlStrRead04(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // edx
  unsigned __int8 **v9; // ebx
  unsigned __int8 *v10; // edi
  int v11; // esi
  unsigned __int8 *v12; // ecx
  unsigned __int8 *v13; // eax
  unsigned int v14; // eax
  unsigned __int8 **v15; // edi
  int v16; // ecx
  unsigned __int8 *v18; // ecx
  unsigned int v19; // ecx
  int v20; // eax
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  struct _STRDDA *v25; // esi
  int v26; // edx
  int v27; // esi
  int v28; // edx
  unsigned int v29; // [esp+Ch] [ebp-10h]
  int v30; // [esp+Ch] [ebp-10h]
  int v31; // [esp+10h] [ebp-Ch]
  unsigned __int8 *v32; // [esp+14h] [ebp-8h]
  unsigned __int8 *v33; // [esp+18h] [ebp-4h]
  struct _STRDDA *v34; // [esp+24h] [ebp+8h]
  struct _STRDDA *v35; // [esp+24h] [ebp+8h]
  unsigned int v36; // [esp+24h] [ebp+8h]
  struct _STRDDA *v37; // [esp+24h] [ebp+8h]
  struct _STRRUN *v38; // [esp+28h] [ebp+Ch]
  unsigned __int8 *v39; // [esp+2Ch] [ebp+10h]
  unsigned __int8 *v40; // [esp+2Ch] [ebp+10h]
  unsigned __int8 *v41; // [esp+30h] [ebp+14h]
  int v42; // [esp+30h] [ebp+14h]
  unsigned int v43; // [esp+34h] [ebp+18h]
  int v44; // [esp+38h] [ebp+1Ch]
  ULONG v45; // [esp+40h] [ebp+24h]
  unsigned int *v46; // [esp+40h] [ebp+24h]

  v8 = a6;
  v9 = (unsigned __int8 **)((char *)a2 + 8);
  v10 = &a3[4 * (a6 >> 3)];
  v11 = a6 & 7;
  v38 = (struct _STRRUN *)v10;
  v12 = *(unsigned __int8 **)a1;
  v39 = *(unsigned __int8 **)a1;
  if ( !a4 )
  {
    v41 = 0;
    *v9 = v12;
    v9[1] = (unsigned __int8 *)(*((_DWORD *)a1 + 2) - (_DWORD)v12);
    if ( a6 < a7 )
    {
      v13 = *(unsigned __int8 **)v10;
      if ( a5 )
      {
        v40 = *(unsigned __int8 **)v10;
        v34 = (struct _STRDDA *)((char *)a1 + 28);
        while ( 1 )
        {
          v45 = a5->pulXlate[((unsigned int)v13 & dword_252A40[v11]) >> dword_252A20[v11]];
          v14 = *(_DWORD *)v34;
          v34 = (struct _STRDDA *)((char *)v34 + 4);
          if ( v14 )
          {
            v15 = &v9[(_DWORD)(v41 + 2)];
            v41 += v14;
            memset32(v15, v45, v14);
            v10 = (unsigned __int8 *)v38;
          }
          v16 = v11 + 1;
          if ( ++a6 >= a7 )
            break;
          if ( (v16 & 8) != 0 )
          {
            v10 += 4;
            v38 = (struct _STRRUN *)v10;
            v13 = *(unsigned __int8 **)v10;
            v40 = *(unsigned __int8 **)v10;
          }
          else
          {
            v13 = v40;
          }
          v11 = (v16 & 8) == 0 ? v16 : 0;
        }
      }
      else
      {
        v35 = (struct _STRDDA *)((char *)a1 + 28);
        v18 = *(unsigned __int8 **)v10;
        v44 = *(_DWORD *)v10;
        while ( 1 )
        {
          v43 = ((unsigned int)v18 & dword_252A40[v11]) >> dword_252A20[v11];
          v19 = *(_DWORD *)v35;
          v35 = (struct _STRDDA *)((char *)v35 + 4);
          if ( v19 )
          {
            memset32(&v9[(_DWORD)(v41 + 2)], v43, v19);
            v41 += v19;
            v10 = (unsigned __int8 *)v38;
          }
          ++v8;
          v20 = v11 + 1;
          if ( v8 >= a7 )
            break;
          if ( (v20 & 8) != 0 )
          {
            v10 += 4;
            v38 = (struct _STRRUN *)v10;
            v18 = *(unsigned __int8 **)v10;
            v44 = *(_DWORD *)v10;
          }
          else
          {
            v18 = (unsigned __int8 *)v44;
          }
          v11 = (v20 & 8) == 0 ? v20 : 0;
        }
      }
    }
    return &v9[(_DWORD)(v41 + 2)];
  }
  v22 = a8 & 0x1F;
  v42 = 0;
  v32 = &a4[4 * (a8 >> 5)];
  v31 = *(_DWORD *)v32;
  v23 = a6;
  if ( a6 >= a7 )
    return v9;
  v33 = *(unsigned __int8 **)v10;
  v46 = (unsigned int *)((char *)a1 + 28);
  while ( 1 )
  {
    v36 = ((unsigned int)v33 & dword_252A40[v11]) >> dword_252A20[v11];
    if ( a5 )
    {
      v23 = a6;
      v36 = a5->pulXlate[v36];
    }
    if ( (v31 & dword_252A60[v22]) == 0 )
    {
      v24 = v42;
      if ( v42 > 0 )
      {
        *v9 = v39;
        v9[1] = (unsigned __int8 *)v42;
        v9 += v42 + 2;
        v39 += v42;
        v24 = 0;
        v42 = 0;
      }
      v39 += *v46;
      goto LABEL_29;
    }
    v29 = *v46;
    if ( *v46 )
    {
      memset32(&v9[v42 + 2], v36, *v46);
      v24 = v29 + v42;
      v42 += v29;
LABEL_29:
      v10 = (unsigned __int8 *)v38;
      v23 = a6;
      goto LABEL_33;
    }
    v24 = v42;
LABEL_33:
    ++v46;
    ++v23;
    v25 = (struct _STRDDA *)(v11 + 1);
    a6 = v23;
    v26 = v22 + 1;
    v37 = v25;
    v30 = v26;
    if ( v23 >= a7 )
      break;
    v27 = (unsigned __int8)v25 & 8;
    if ( v27 )
    {
      v10 += 4;
      v38 = (struct _STRRUN *)v10;
      v33 = *(unsigned __int8 **)v10;
    }
    v11 = v27 == 0 ? (unsigned int)v37 : 0;
    v28 = v26 & 0x20;
    if ( v28 )
    {
      v32 += 4;
      v31 = *(_DWORD *)v32;
    }
    v22 = v28 == 0 ? v30 : 0;
  }
  if ( v24 > 0 )
  {
    *v9 = v39;
    v9[1] = (unsigned __int8 *)v24;
    v9 += v24 + 2;
  }
  return v9;
}
