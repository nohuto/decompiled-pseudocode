/*
 * XREFs of ?vPatCpyRow8_8x8@@YGXPAU_PATBLTFRAME@@JH@Z @ 0x22DE5B
 * Callers:
 *     ?vBrushPath8_8x8EnumRow@@YGXJPAU_ROW@@KPAX@Z @ 0x23A4E3 (-vBrushPath8_8x8EnumRow@@YGXJPAU_ROW@@KPAX@Z.c)
 * Callees:
 *     _vFetchAndCopy@4 @ 0xEDBC0 (_vFetchAndCopy@4.c)
 */

void __userpurge vPatCpyRow8_8x8(int a1@<edx>, _DWORD *a2@<ecx>, struct _PATBLTFRAME *a3, int a4, int a5)
{
  int *v5; // esi
  int *v6; // edi
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  int v13; // esi
  int v14; // edx
  int v15; // edi
  int v16; // ebx
  int v17; // ebx
  unsigned int v18; // esi
  int v19; // ebx
  bool v20; // zf
  int v21; // edi
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  int v25; // ecx
  int v26; // ebx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  char v32; // dl
  int v33; // edx
  unsigned int v34; // ecx
  int v35; // [esp-4h] [ebp-68h]
  _DWORD v36[7]; // [esp+Ch] [ebp-58h] BYREF
  _DWORD v37[2]; // [esp+28h] [ebp-3Ch] BYREF
  int *v38; // [esp+30h] [ebp-34h]
  unsigned int v39; // [esp+34h] [ebp-30h]
  unsigned int v40; // [esp+38h] [ebp-2Ch]
  int *v41; // [esp+3Ch] [ebp-28h]
  _DWORD *v42; // [esp+40h] [ebp-24h]
  int v43; // [esp+44h] [ebp-20h]
  int v44; // [esp+48h] [ebp-1Ch]
  int v45; // [esp+4Ch] [ebp-18h]
  int v46; // [esp+50h] [ebp-14h]
  int *v47; // [esp+54h] [ebp-10h]
  int v48; // [esp+58h] [ebp-Ch]
  unsigned int v49; // [esp+5Ch] [ebp-8h]
  unsigned int v50; // [esp+60h] [ebp-4h]

  v5 = (int *)a2[4];
  memset(v36, 0, sizeof(v36));
  v6 = (int *)a2[1];
  v7 = a1 * a2[2];
  v8 = (a1 - a2[6]) & 7;
  v42 = a2;
  v41 = v5;
  v43 = *a2 + v7;
  v9 = a2[5];
  v10 = v9 & 7;
  v38 = v6;
  v11 = v9 & 3;
  v40 = v10;
  v46 = 8 * v11;
  v45 = 8 * (4 - v11);
  v47 = &v6[3 * v8];
  v39 = (unsigned int)(v6 + 24);
  do
  {
    v12 = v5[1];
    v13 = *v5;
    v44 = v12 & 3;
    v14 = v13 & 3;
    v15 = v12 - v13;
    v16 = v15 - (-v14 & 3) - v44;
    if ( v16 >= 0 )
      v48 = v16 >> 2;
    else
      v48 = 0;
    if ( v14 == 1 )
    {
      if ( v15 == 1 )
      {
        v35 = 4;
      }
      else
      {
        if ( v15 != 2 )
          goto LABEL_14;
        v35 = 5;
      }
      goto LABEL_13;
    }
    if ( v14 == 2 && v15 == 1 )
    {
      v35 = 6;
LABEL_13:
      v14 = v35;
      v44 = 0;
    }
LABEL_14:
    v36[2] = 0;
    v17 = v13;
    v36[1] = v37;
    v18 = v43 + (v13 & 0xFFFFFFFC);
    v19 = (v17 >> 2) & 1;
    v36[3] = 8;
    v20 = v42[5] == 0;
    v36[5] = 2;
    if ( v20 )
    {
      v21 = v47[v19];
      v22 = v47[(v19 & 1) == 0];
      goto LABEL_24;
    }
    v23 = *v47;
    v24 = v47[1];
    v49 = *v47;
    v50 = v24;
    if ( v40 >= 4 )
    {
      v21 = v24;
      if ( v40 != 4 )
      {
        v21 = (v49 >> v45) | (v24 << v46);
        v49 <<= v46;
        v22 = (v50 >> v45) | v49;
        v50 = v22;
        goto LABEL_22;
      }
      v22 = v23;
    }
    else
    {
      v21 = (v24 >> v45) | (v23 << v46);
      v49 >>= v45;
      v22 = v49 | (v50 << v46);
    }
    v50 = v22;
LABEL_22:
    if ( !v19 )
      goto LABEL_25;
    v22 = v21;
    v21 = v50;
LABEL_24:
    v50 = v22;
LABEL_25:
    v25 = v48;
    v26 = v21;
    v49 = v48;
    if ( !v14 )
      goto LABEL_40;
    v27 = v14 - 1;
    if ( !v27 )
    {
      *(_BYTE *)(v18 + 1) = BYTE1(v21);
LABEL_37:
      *(_WORD *)(v18 + 2) = HIWORD(v21);
      goto LABEL_38;
    }
    v28 = v27 - 1;
    if ( !v28 )
      goto LABEL_37;
    v29 = v28 - 1;
    if ( !v29 )
    {
      *(_BYTE *)(v18 + 3) = HIBYTE(v21);
      goto LABEL_38;
    }
    v30 = v29 - 1;
    if ( !v30 )
    {
      *(_BYTE *)(v18 + 1) = BYTE1(v21);
      goto LABEL_38;
    }
    v31 = v30 - 1;
    if ( !v31 )
    {
      *(_BYTE *)(v18 + 1) = BYTE1(v21);
LABEL_32:
      *(_BYTE *)(v18 + 2) = BYTE2(v21);
LABEL_38:
      v22 = v50;
      goto LABEL_39;
    }
    if ( v31 == 1 )
      goto LABEL_32;
LABEL_39:
    v26 = v22;
    v18 += 4;
    v22 = v21;
    v50 = v21;
LABEL_40:
    if ( v25 <= 7 )
    {
      if ( (unsigned int)v25 < 2 )
      {
        v33 = v25;
      }
      else
      {
        v33 = v49;
        v34 = (unsigned int)v25 >> 1;
        do
        {
          *(_DWORD *)v18 = v26;
          v33 -= 2;
          *(_DWORD *)(v18 + 4) = v22;
          v18 += 8;
          --v34;
        }
        while ( v34 );
      }
      v20 = v33 == 0;
      v32 = v48;
      if ( !v20 )
      {
        *(_DWORD *)v18 = v26;
        v18 += 4;
      }
    }
    else
    {
      v37[1] = v22;
      v37[0] = v26;
      v36[4] = v25;
      v36[0] = v18;
      vFetchAndCopy((int)v36);
      v32 = v48;
      v22 = v50;
      v18 += 4 * v48;
    }
    if ( v44 )
    {
      if ( (v32 & 1) != 0 )
        v26 = v22;
      switch ( v44 )
      {
        case 1:
          *(_BYTE *)v18 = v26;
          break;
        case 2:
          *(_WORD *)v18 = v26;
          break;
        case 3:
          *(_WORD *)v18 = v26;
          *(_BYTE *)(v18 + 2) = BYTE2(v26);
          break;
      }
    }
    v47 += 3;
    if ( (unsigned int)v47 >= v39 )
      v47 = v38;
    v5 = v41 + 2;
    v20 = a3 == (struct _PATBLTFRAME *)1;
    a3 = (struct _PATBLTFRAME *)((char *)a3 - 1);
    v43 += v42[2];
    v41 += 2;
  }
  while ( !v20 );
}
