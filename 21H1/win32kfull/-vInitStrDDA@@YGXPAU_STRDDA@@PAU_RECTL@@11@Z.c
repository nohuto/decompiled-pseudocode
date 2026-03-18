/*
 * XREFs of ?vInitStrDDA@@YGXPAU_STRDDA@@PAU_RECTL@@11@Z @ 0x93DC6
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     STR_DIV @ 0x93FC8 (STR_DIV.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __userpurge vInitStrDDA(
        int *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct _STRDDA *a3,
        struct _RECTL *a4,
        struct _RECTL *a5,
        struct _RECTL *a6)
{
  struct _STRDDA *v6; // esi
  int *v7; // ebx
  int v8; // edx
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  struct _STRDDA *v13; // esi
  int v14; // esi
  int v15; // eax
  int v16; // esi
  int v17; // edx
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int *v22; // [esp+18h] [ebp-40h]
  struct _STRDDA *v23; // [esp+1Ch] [ebp-3Ch]
  int v24; // [esp+1Ch] [ebp-3Ch]
  LONG left; // [esp+20h] [ebp-38h]
  int *v26; // [esp+20h] [ebp-38h]
  LONG top; // [esp+20h] [ebp-38h]
  _DWORD *v28; // [esp+24h] [ebp-34h]
  int v29; // [esp+28h] [ebp-30h]
  int v30; // [esp+28h] [ebp-30h]
  int v31; // [esp+2Ch] [ebp-2Ch]
  int v32; // [esp+2Ch] [ebp-2Ch]
  int v33; // [esp+30h] [ebp-28h]
  int v34; // [esp+30h] [ebp-28h]
  _DWORD v35[2]; // [esp+34h] [ebp-24h] BYREF
  int v36; // [esp+3Ch] [ebp-1Ch]
  int v37; // [esp+40h] [ebp-18h]
  int v38; // [esp+44h] [ebp-14h] BYREF
  int v39; // [esp+48h] [ebp-10h]
  int v40; // [esp+4Ch] [ebp-Ch]
  int v41; // [esp+50h] [ebp-8h]

  v22 = a1;
  v6 = a3;
  v38 = 0;
  v7 = a1;
  v28 = a2;
  v23 = a3;
  v8 = *(_DWORD *)a3;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v35[0] = 0;
  v35[1] = 0;
  v36 = 0;
  v37 = 0;
  if ( v8 || *((_DWORD *)a3 + 1) )
  {
    v19 = *((_DWORD *)a3 + 1);
    v38 = *v7 - v8;
    v39 = v7[1] - v19;
    v40 = v7[2] - v8;
    v20 = v7[3];
    v7 = &v38;
    v22 = &v38;
    v41 = v20 - v19;
    v36 = *((_DWORD *)a3 + 2) - v8;
    v6 = (struct _STRDDA *)v35;
    v21 = *((_DWORD *)a3 + 3) - v19;
    v23 = (struct _STRDDA *)v35;
    a2 = v28;
    v37 = v21;
  }
  a2[6] = &a2[*((_DWORD *)v6 + 2) + 7];
  v31 = *((_DWORD *)v6 + 2);
  left = a4->left;
  STR_DIV(v31);
  v9 = 0;
  v10 = (v31 - 1) >> 1;
  if ( v10 >= v31 )
  {
    v9 = 1;
    v10 -= v31;
  }
  v11 = *v7;
  v12 = 0;
  v33 = 0;
  v29 = 0;
  if ( *v7 > 0 )
  {
    v29 = *v7;
    do
    {
      v33 = v9;
      if ( v10 >= v31 )
      {
        ++v9;
        v10 -= v31;
      }
      --v11;
    }
    while ( v11 );
    v7 = v22;
  }
  *v28 = left + v33;
  v13 = v23;
  if ( v29 < v7[2] )
  {
    v14 = v29;
    v26 = v28 + 7;
    do
    {
      v15 = v9 - v33;
      v33 = v9;
      *v26 = v15;
      v7 = v22;
      if ( v10 >= v31 )
      {
        ++v9;
        v10 -= v31;
      }
      ++v26;
      ++v14;
    }
    while ( v14 < v22[2] );
    v13 = v23;
  }
  v28[2] = v33 + a4->left;
  top = a4->top;
  v32 = *((_DWORD *)v13 + 3);
  STR_DIV(v32);
  v16 = 0;
  v17 = (v32 - 1) >> 1;
  if ( v17 >= v32 )
  {
    v16 = 1;
    v17 -= v32;
  }
  v24 = v7[1];
  v34 = 0;
  v30 = 0;
  if ( v24 > 0 )
  {
    v30 = v7[1];
    do
    {
      v34 = v16;
      if ( v17 >= v32 )
      {
        ++v16;
        v17 -= v32;
      }
      --v24;
    }
    while ( v24 );
    v7 = v22;
  }
  for ( v28[1] = top + v34; v30 < v7[3]; ++v30 )
  {
    v18 = v16 - v34;
    v34 = v16;
    *(_DWORD *)(v12 + v28[6]) = v18;
    if ( v17 >= v32 )
    {
      ++v16;
      v17 -= v32;
    }
    v12 += 4;
  }
  v28[3] = v34 + a4->top;
}
