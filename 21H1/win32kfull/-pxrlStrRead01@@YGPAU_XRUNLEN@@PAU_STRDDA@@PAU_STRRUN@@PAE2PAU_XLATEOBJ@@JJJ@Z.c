/*
 * XREFs of ?pxrlStrRead01@@YGPAU_XRUNLEN@@PAU_STRDDA@@PAU_STRRUN@@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0x4DDE6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XLATEOBJ **__stdcall pxrlStrRead01(
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
  struct _XLATEOBJ **v9; // esi
  ULONG v10; // ecx
  unsigned __int8 *v11; // ebx
  struct _XLATEOBJ *v12; // edi
  int *v13; // ecx
  int v14; // esi
  int v15; // eax
  unsigned __int8 *v16; // edi
  unsigned int v17; // ecx
  int v18; // eax
  char *v19; // edi
  int v20; // eax
  ULONG *pulXlate; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // ebx
  int v26; // eax
  int v27; // eax
  int v28; // edi
  int v29; // edx
  struct _STRRUN *v30; // ecx
  int v31; // edx
  int v32; // ecx
  int v33; // [esp+Ch] [ebp-14h]
  int v34; // [esp+14h] [ebp-Ch]
  unsigned __int8 *v35; // [esp+14h] [ebp-Ch]
  int v36; // [esp+18h] [ebp-8h]
  int v37; // [esp+1Ch] [ebp-4h]
  struct _STRDDA *v38; // [esp+28h] [ebp+8h]
  struct _STRDDA *v39; // [esp+28h] [ebp+8h]
  unsigned int v40; // [esp+2Ch] [ebp+Ch]
  struct _STRRUN *v41; // [esp+2Ch] [ebp+Ch]
  unsigned __int8 *v42; // [esp+30h] [ebp+10h]
  struct _STRDDA *v43; // [esp+34h] [ebp+14h]
  struct _XLATEOBJ *v44; // [esp+38h] [ebp+18h]
  int v45; // [esp+3Ch] [ebp+1Ch]
  int v46; // [esp+44h] [ebp+24h]
  int v47; // [esp+44h] [ebp+24h]
  int v48; // [esp+44h] [ebp+24h]

  v8 = a6 & 0x1F;
  v9 = (struct _XLATEOBJ **)((char *)a2 + 8);
  v42 = &a3[4 * (a6 >> 5)];
  v10 = 0;
  v34 = 0;
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v10 = *pulXlate;
    v37 = pulXlate[1];
  }
  else
  {
    v37 = 1;
  }
  v11 = a4;
  v36 = v10;
  v12 = *(struct _XLATEOBJ **)a1;
  v44 = *(struct _XLATEOBJ **)a1;
  if ( a4 )
  {
    v23 = a8 >> 5;
    v24 = a8 & 0x1F;
    v47 = v24;
    v25 = 0;
    v35 = &a4[4 * v23];
    v33 = *(_DWORD *)v35;
    if ( a6 >= a7 )
      return v9;
    v43 = *(struct _STRDDA **)v42;
    v9 = (struct _XLATEOBJ **)((char *)a2 + 8);
    v39 = (struct _STRDDA *)((char *)a1 + 28);
    while ( 1 )
    {
      if ( (v33 & dword_252A60[v24]) != 0 )
      {
        v40 = *(_DWORD *)v39;
        v26 = a6;
        if ( ((unsigned int)v43 & dword_252A60[v8]) != 0 )
        {
          if ( !v40 )
            goto LABEL_32;
          v27 = v37;
        }
        else
        {
          if ( !v40 )
            goto LABEL_32;
          v27 = v36;
        }
        v28 = v25 + 2;
        v25 += v40;
        memset32(&v9[v28], v27, v40);
        v24 = v47;
        v12 = v44;
      }
      else
      {
        if ( v25 > 0 )
        {
          *v9 = v12;
          v12 = (struct _XLATEOBJ *)((char *)v12 + v25);
          v9[1] = (struct _XLATEOBJ *)v25;
          v9 += v25 + 2;
          v25 = 0;
        }
        v12 = (struct _XLATEOBJ *)((char *)v12 + *(_DWORD *)v39);
        v44 = v12;
      }
      v26 = a6;
LABEL_32:
      v39 = (struct _STRDDA *)((char *)v39 + 4);
      v29 = v8 + 1;
      a6 = v26 + 1;
      v30 = (struct _STRRUN *)(v24 + 1);
      v48 = v29;
      v41 = v30;
      if ( v26 + 1 >= a7 )
      {
        if ( v25 > 0 )
        {
          *v9 = v12;
          v9[1] = (struct _XLATEOBJ *)v25;
          v9 += v25 + 2;
        }
        return v9;
      }
      v31 = v29 & 0x20;
      if ( v31 )
      {
        v42 += 4;
        v12 = v44;
        v43 = *(struct _STRDDA **)v42;
      }
      v8 = v31 == 0 ? v48 : 0;
      v32 = (unsigned __int8)v30 & 0x20;
      if ( v32 )
      {
        v35 += 4;
        v33 = *(_DWORD *)v35;
        v12 = v44;
      }
      v24 = v32 == 0 ? (unsigned int)v41 : 0;
      v47 = v24;
    }
  }
  *v9 = v12;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - (_DWORD)v12;
  if ( a6 >= a7 )
    return &v9[(_DWORD)(v11 + 2)];
  v13 = (int *)((char *)a1 + 28);
  v14 = a6;
  v38 = *(struct _STRDDA **)v42;
  while ( 1 )
  {
    ++v34;
    v15 = *v13;
    v16 = v42;
    v46 = (int)v13;
    v45 = *v13;
    if ( ((unsigned int)v38 & dword_252A60[v8]) == 0 )
    {
      if ( !v15 )
        goto LABEL_10;
      v17 = *v13;
      v18 = v36;
      goto LABEL_9;
    }
    if ( v15 )
    {
      v17 = *v13;
      v18 = v37;
LABEL_9:
      v19 = (char *)a2 + 4 * (_DWORD)v11 + 16;
      v11 += v45;
      memset32(v19, v18, v17);
      v13 = (int *)v46;
      v16 = v42;
    }
LABEL_10:
    ++v14;
    v20 = v8 + 1;
    if ( v14 >= a7 )
      break;
    if ( (v20 & 0x20) != 0 )
    {
      v42 = v16 + 4;
      v38 = (struct _STRDDA *)*((_DWORD *)v16 + 1);
      v13 = (int *)v46;
    }
    ++v13;
    v8 = (v20 & 0x20) == 0 ? v20 : 0;
  }
  v9 = (struct _XLATEOBJ **)((char *)a2 + 8);
  return &v9[(_DWORD)(v11 + 2)];
}
