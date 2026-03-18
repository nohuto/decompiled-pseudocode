/*
 * XREFs of ?vDetermineDrawVertex@WIDEPENOBJ@@QAEXAAVEVECTORFX@@AAVLINEDATA@@@Z @ 0x236A78
 * Callers:
 *     ?vVecDrawCompute@WIDENER@@AAEXAAVLINEDATA@@@Z @ 0x23756E (-vVecDrawCompute@WIDENER@@AAEXAAVLINEDATA@@@Z.c)
 * Callees:
 *     ?bLeft@@YGHPAVEVECTORFX@@PAU_POINTFIX@@PA_J@Z @ 0x235406 (-bLeft@@YGHPAVEVECTORFX@@PAU_POINTFIX@@PA_J@Z.c)
 */

void __thiscall WIDEPENOBJ::vDetermineDrawVertex(WIDEPENOBJ *this, struct EVECTORFX *a2, struct LINEDATA *a3)
{
  int v3; // eax
  int v5; // edx
  struct EVECTORFX *v6; // edi
  _DWORD *v7; // esi
  BOOL v8; // eax
  int v9; // ecx
  bool v10; // cf
  struct LINEDATA *v11; // ecx
  int v12; // eax
  unsigned int v13; // eax
  struct LINEDATA *v14; // eax
  int v15; // ecx
  int v16; // eax
  char *v17; // edx
  char *v18; // ecx
  char *v19; // esi
  int *v20; // edx
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  int v24; // eax
  struct _POINTFIX *v25; // [esp+0h] [ebp-1Ch]
  struct _POINTFIX *v26; // [esp+0h] [ebp-1Ch]
  __int64 *v27; // [esp+4h] [ebp-18h]
  __int64 *v28; // [esp+4h] [ebp-18h]
  int v29; // [esp+Ch] [ebp-10h] BYREF
  int v30; // [esp+10h] [ebp-Ch]
  char *v31; // [esp+14h] [ebp-8h]
  char *v32; // [esp+18h] [ebp-4h]
  struct LINEDATA *v33; // [esp+28h] [ebp+Ch]

  v3 = *((_DWORD *)this + 2);
  v29 = 0;
  v30 = 0;
  v5 = *(_DWORD *)(v3 + 20);
  *((_DWORD *)a3 + 1) = v5;
  v6 = (struct LINEDATA *)((char *)a3 + 16);
  v7 = (_DWORD *)((char *)a3 + 24);
  if ( *(_DWORD *)(*((_DWORD *)this + 2) + 20) == *(_DWORD *)(*((_DWORD *)this + 2) + 24) )
  {
    v8 = bLeft((_DWORD *)(v5 + 16), (int *)a2, v6, v25, v27);
    v9 = *((_DWORD *)a3 + 5);
    v10 = *(_DWORD *)v6 != 0;
    v33 = (struct LINEDATA *)v8;
    *v7 = -*(_DWORD *)v6;
    *((_DWORD *)a3 + 7) = -(v10 + v9);
    v11 = (struct LINEDATA *)v8;
  }
  else
  {
    while ( 1 )
    {
      v33 = (struct LINEDATA *)bLeft((_DWORD *)(v5 + 16), (int *)a2, v6, v25, v27);
      v14 = (struct LINEDATA *)bLeft(
                                 (_DWORD *)(*((_DWORD *)a3 + 1) + 8 * *(_DWORD *)(*((_DWORD *)a3 + 1) + 12)),
                                 (int *)a2,
                                 (struct LINEDATA *)((char *)a3 + 24),
                                 v26,
                                 v28);
      v11 = v33;
      if ( v33 != v14 )
        break;
      v5 = **((_DWORD **)a3 + 1);
      if ( !v5 )
        break;
      *((_DWORD *)a3 + 1) = v5;
    }
  }
  v12 = *(_DWORD *)a3;
  if ( v11 )
    v13 = v12 | 1;
  else
    v13 = v12 & 0xFFFFFFFE;
  v15 = *((_DWORD *)a3 + 1);
  *(_DWORD *)a3 = v13;
  v16 = *(_DWORD *)(v15 + 12);
  v17 = (char *)(v15 + 16);
  v32 = (char *)(v15 + 16);
  v18 = (char *)(v15 + 8 * v16);
LABEL_10:
  v31 = v18;
  while ( 1 )
  {
    v19 = &v17[8 * ((v18 - v17) >> 4)];
    if ( (unsigned int)v33 != bLeft(v19, (int *)a2, (struct EVECTORFX *)&v29, v25, v27) )
    {
      v20 = (int *)((char *)a3 + 24);
      *((_DWORD *)a3 + 6) = v29;
      *((_DWORD *)a3 + 7) = v30;
      if ( v19 == v32 + 8 )
        goto LABEL_17;
      v17 = v32;
      v18 = v19;
      goto LABEL_10;
    }
    v18 = v31;
    *(_DWORD *)v6 = v29;
    *((_DWORD *)a3 + 5) = v30;
    if ( v18 == v19 + 8 )
      break;
    v17 = v19;
    v32 = v19;
  }
  v19 = v18;
  v20 = (int *)((char *)a3 + 24);
LABEL_17:
  *((_DWORD *)a3 + 2) = v19;
  v21 = *((_DWORD *)a3 + 5);
  v22 = *(_DWORD *)v6;
  if ( v21 < 0 )
  {
    v22 = -v22;
    v21 = (unsigned __int64)-__SPAIR64__(v21, v22) >> 32;
  }
  *(_DWORD *)v6 = v22;
  v23 = *v20;
  *((_DWORD *)a3 + 5) = v21;
  v24 = v20[1];
  if ( v24 < 0 )
  {
    v23 = -v23;
    v24 = (unsigned __int64)-__SPAIR64__(v24, v23) >> 32;
  }
  *v20 = v23;
  v20[1] = v24;
}
