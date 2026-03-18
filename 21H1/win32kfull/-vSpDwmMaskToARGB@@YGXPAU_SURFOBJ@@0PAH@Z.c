/*
 * XREFs of ?vSpDwmMaskToARGB@@YGXPAU_SURFOBJ@@0PAH@Z @ 0x1CDB5C
 * Callers:
 *     ?bSpDwmUpdateMaskCursor@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@3PAU_RECTL@@PAKPAPAV3@@Z @ 0x1CD742 (-bSpDwmUpdateMaskCursor@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@3PAU_REC.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __userpurge vSpDwmMaskToARGB(int a1@<edx>, _DWORD *a2@<ecx>, struct _SURFOBJ *a3, struct _SURFOBJ *a4, int *a5)
{
  int v5; // ebx
  int v6; // eax
  int v7; // esi
  int v8; // edi
  _DWORD *v9; // edx
  int v10; // esi
  _DWORD *v11; // esi
  int v12; // ebx
  _DWORD *v13; // eax
  int v14; // eax
  bool v15; // zf
  int v16; // edi
  int v17; // edx
  int v18; // eax
  unsigned int *v19; // edx
  int v20; // ebx
  unsigned int *v21; // edi
  int v22; // esi
  unsigned int *v23; // ecx
  int v24; // eax
  int v25; // eax
  int i; // eax
  _DWORD *v27; // [esp+10h] [ebp-3Ch]
  int v28; // [esp+14h] [ebp-38h]
  int v29; // [esp+18h] [ebp-34h]
  int v30; // [esp+1Ch] [ebp-30h]
  unsigned int v31; // [esp+20h] [ebp-2Ch]
  int v32; // [esp+24h] [ebp-28h]
  int v33; // [esp+28h] [ebp-24h]
  int v34; // [esp+28h] [ebp-24h]
  _DWORD *v35; // [esp+2Ch] [ebp-20h]
  unsigned int *v36; // [esp+2Ch] [ebp-20h]
  int v38; // [esp+34h] [ebp-18h]
  int v39; // [esp+34h] [ebp-18h]
  _DWORD v40[4]; // [esp+38h] [ebp-14h]

  v5 = a2[8];
  v32 = a2[4];
  v6 = a2[9];
  v7 = (int)a2[5] >> 1;
  v8 = 0;
  v27 = a2;
  v30 = v7;
  v28 = v5;
  v9 = (_DWORD *)(v5 + v7 * v6);
  v35 = v9;
  if ( a1 )
    v8 = *(_DWORD *)(a1 + 32);
  v40[2] = 0;
  v40[3] = -1;
  v31 = 0;
  v40[0] = -16777216;
  v40[1] = 0xFFFFFF;
  if ( v7 > 0 )
  {
    v33 = v7;
    v10 = a1;
    do
    {
      if ( v32 > 0 )
      {
        v38 = v32;
        v11 = v9;
        v29 = v8 - v5;
        v12 = v5 - (_DWORD)v9;
        do
        {
          if ( v8 )
            v13 = (_DWORD *)((char *)v11 + v12 + v29);
          else
            v13 = v11;
          v14 = v40[2 * (*(_DWORD *)((char *)v11 + v12) & 1) + (*v13 & 1)];
          *v11++ = v14;
          v31 |= v14 == -1;
          --v38;
        }
        while ( v38 );
        v9 = v35;
        a2 = v27;
        v5 = v28;
        v10 = a1;
      }
      if ( v8 )
        v8 += *(_DWORD *)(v10 + 36);
      v6 = a2[9];
      v5 += v6;
      v9 = (_DWORD *)((char *)v9 + v6);
      v28 = v5;
      v15 = v33-- == 1;
      v35 = v9;
    }
    while ( !v15 );
    v7 = v30;
    if ( v31 )
      goto LABEL_37;
  }
  v16 = a2[8];
  v17 = v6 * v7;
  v18 = a1;
  v39 = v16;
  v19 = (unsigned int *)(v16 + v17);
  v36 = v19;
  if ( !a1 )
  {
    if ( v7 > 0 )
    {
      do
      {
        for ( i = 0; i < v32; ++i )
        {
          if ( v19[i] == 0xFFFFFF )
            v19[i] = -1;
        }
        v19 = (unsigned int *)((char *)v19 + a2[9]);
        --v7;
      }
      while ( v7 );
    }
    goto LABEL_37;
  }
  v20 = *(_DWORD *)(a1 + 32);
  if ( v7 <= 0 )
    goto LABEL_37;
  do
  {
    if ( v32 <= 0 )
      goto LABEL_28;
    v21 = v19;
    v22 = v20 - (_DWORD)v19;
    v34 = v32;
    do
    {
      v23 = (unsigned int *)((char *)v21 + v22);
      if ( !v20 )
        v23 = v21;
      v24 = v40[2 * (*(_DWORD *)((char *)v21 - (char *)v19 + v39) & 1) + (*v23 & 1)];
      if ( v24 == -16777216 )
        goto LABEL_25;
      if ( v24 )
      {
        if ( v24 != 0xFFFFFF )
          goto LABEL_26;
LABEL_25:
        *v21 = *(unsigned int *)((char *)v21 + v22) | 0xFF000000;
        goto LABEL_26;
      }
      *v21 = 0;
LABEL_26:
      ++v21;
      --v34;
    }
    while ( v34 );
    v19 = v36;
    v7 = v30;
    a2 = v27;
    v16 = v39;
    v18 = a1;
LABEL_28:
    v20 += *(_DWORD *)(v18 + 36);
    v25 = a2[9];
    v16 += v25;
    v19 = (unsigned int *)((char *)v19 + v25);
    v39 = v16;
    v18 = a1;
    --v7;
    v36 = v19;
    v30 = v7;
  }
  while ( v7 );
LABEL_37:
  a3->dhsurf = (DHSURF)v31;
}
