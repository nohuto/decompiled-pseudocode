/*
 * XREFs of ?vPatCpyRect8_8x8@@YGXPAU_PATBLTFRAME@@H@Z @ 0x22D79E
 * Callers:
 *     ?vBrushPath8_8x8Enum@@YGXPAU_RECTL@@KPAX@Z @ 0x23A4C5 (-vBrushPath8_8x8Enum@@YGXPAU_RECTL@@KPAX@Z.c)
 * Callees:
 *     _vFetchAndCopy@4 @ 0xEDBC0 (_vFetchAndCopy@4.c)
 */

void __stdcall vPatCpyRect8_8x8(struct _PATBLTFRAME *a1, int a2)
{
  int *v2; // ecx
  int *v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // edx
  char v8; // di
  int v9; // edi
  int v10; // ecx
  int v11; // ecx
  int v12; // ebx
  int v13; // ebx
  struct _PATBLTFRAME *v14; // edi
  int v15; // eax
  unsigned int v16; // esi
  int v17; // edx
  int *v18; // ecx
  bool v19; // zf
  int v20; // edi
  int v21; // esi
  unsigned int v22; // edx
  unsigned int v23; // esi
  unsigned int v24; // edi
  unsigned int v25; // eax
  unsigned int v26; // esi
  unsigned int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // edx
  int v31; // eax
  _BYTE *v32; // ecx
  int v33; // edx
  _BYTE *v34; // esi
  int v35; // ebx
  char v36; // al
  unsigned int v37; // eax
  _DWORD v38[7]; // [esp+Ch] [ebp-7Ch] BYREF
  _DWORD v39[2]; // [esp+28h] [ebp-60h] BYREF
  unsigned int v40; // [esp+30h] [ebp-58h]
  int v41; // [esp+34h] [ebp-54h]
  int v42; // [esp+38h] [ebp-50h]
  unsigned int v43; // [esp+3Ch] [ebp-4Ch]
  BOOL v44; // [esp+40h] [ebp-48h]
  int *v45; // [esp+44h] [ebp-44h]
  int *v46; // [esp+48h] [ebp-40h]
  _BYTE *v47; // [esp+4Ch] [ebp-3Ch]
  int v48; // [esp+50h] [ebp-38h]
  int v49; // [esp+54h] [ebp-34h]
  int v50; // [esp+58h] [ebp-30h]
  int v51; // [esp+5Ch] [ebp-2Ch]
  int v52; // [esp+60h] [ebp-28h]
  int v53; // [esp+64h] [ebp-24h]
  int v54; // [esp+68h] [ebp-20h]
  int v55; // [esp+6Ch] [ebp-1Ch]
  int v56; // [esp+70h] [ebp-18h]
  int v57; // [esp+74h] [ebp-14h]
  int v58; // [esp+78h] [ebp-10h]
  int v59; // [esp+7Ch] [ebp-Ch]
  int *v60; // [esp+80h] [ebp-8h]
  int v61; // [esp+84h] [ebp-4h]

  memset(v38, 0, sizeof(v38));
  v2 = (int *)*((_DWORD *)a1 + 4);
  v3 = (int *)*((_DWORD *)a1 + 1);
  v4 = *((_DWORD *)a1 + 5);
  v45 = v2;
  v43 = v4 & 7;
  v5 = v4 & 3;
  v46 = v3;
  v56 = 8 * v5;
  v55 = 8 * (4 - v5);
  v40 = (unsigned int)(v3 + 24);
  do
  {
    v6 = v2[1];
    v7 = *v2;
    v8 = *v2;
    v51 = v2[3] - v6;
    v9 = v8 & 3;
    v10 = v2[2];
    v54 = v9;
    v58 = v10 & 3;
    v11 = v10 - v7;
    v12 = v11 - (-v9 & 3) - v58;
    if ( v12 >= 0 )
      v13 = v12 >> 2;
    else
      v13 = 0;
    v59 = v13;
    if ( v9 == 1 )
    {
      if ( v11 == 1 )
      {
        v54 = 4;
      }
      else
      {
        if ( v11 != 2 )
          goto LABEL_14;
        v54 = 5;
      }
      goto LABEL_13;
    }
    if ( v9 == 2 && v11 == 1 )
    {
      v54 = 6;
LABEL_13:
      v58 = 0;
    }
LABEL_14:
    v14 = a1;
    v38[2] = 0;
    v50 = (v7 >> 2) & 1;
    v38[5] = 2;
    v44 = ((v7 >> 2) & 1) == 0;
    v15 = *((_DWORD *)a1 + 2);
    v60 = &v46[3 * ((v6 - *((_DWORD *)a1 + 6)) & 7)];
    v42 = 8 * v15;
    v38[1] = v39;
    v57 = v6 * v15;
    v38[3] = 8;
    v16 = *(_DWORD *)a1 + (v7 & 0xFFFFFFFC) + v6 * v15;
    v17 = v51;
    v57 = v16;
    v49 = v51 & 7;
    v18 = v60;
    v53 = (v51 >> 3) + 1;
    if ( v51 > 8 )
      v17 = 8;
    while ( v17 )
    {
      v19 = *((_DWORD *)v14 + 5) == 0;
      v51 = v17 - 1;
      if ( v19 )
      {
        v20 = v18[v50];
        v21 = v18[v44];
        goto LABEL_26;
      }
      v22 = *v18;
      v23 = v18[1];
      if ( v43 < 4 )
      {
        v24 = v22 << v56;
        v25 = v23 >> v55;
        v26 = v23 << v56;
        v27 = v22 >> v55;
LABEL_23:
        v18 = v60;
        v20 = v25 | v24;
        v21 = v27 | v26;
        goto LABEL_24;
      }
      v20 = v18[1];
      if ( v43 != 4 )
      {
        v24 = v23 << v56;
        v25 = v22 >> v55;
        v27 = v22 << v56;
        v26 = v23 >> v55;
        goto LABEL_23;
      }
      v21 = *v18;
LABEL_24:
      v61 = v21;
      if ( !v50 )
        goto LABEL_27;
      v28 = v20;
      v20 = v21;
      v21 = v28;
LABEL_26:
      v61 = v21;
LABEL_27:
      v29 = v49--;
      v30 = v53;
      if ( !v29 )
        v30 = --v53;
      v31 = v30;
      if ( v30 )
      {
        v32 = (_BYTE *)(v57 + 2);
        v47 = (_BYTE *)(v57 + 2);
        while ( 1 )
        {
          v52 = v13;
          v41 = v31 - 1;
          v33 = v21;
          v34 = v32 - 2;
          v48 = v33;
          v35 = v20;
          if ( v54 )
            break;
LABEL_46:
          v36 = v59;
          if ( v59 <= 7 )
          {
            if ( (unsigned int)v59 >= 2 )
            {
              v37 = (unsigned int)v59 >> 1;
              do
              {
                v52 -= 2;
                *(_DWORD *)v34 = v35;
                *((_DWORD *)v34 + 1) = v33;
                v34 += 8;
                --v37;
              }
              while ( v37 );
              v36 = v59;
            }
            if ( v52 )
            {
              *(_DWORD *)v34 = v35;
              v34 += 4;
            }
          }
          else
          {
            v38[4] = v59;
            v39[0] = v35;
            v39[1] = v33;
            v38[0] = v34;
            vFetchAndCopy((int)v38);
            v36 = v59;
            v32 = v47;
            v34 += 4 * v59;
          }
          if ( v58 )
          {
            if ( (v36 & 1) != 0 )
              v35 = v48;
            switch ( v58 )
            {
              case 1:
                *v34 = v35;
                break;
              case 2:
                *(_WORD *)v34 = v35;
                break;
              case 3:
                *(_WORD *)v34 = v35;
                v34[2] = BYTE2(v35);
                break;
            }
          }
          v32 += v42;
          v31 = v41;
          v21 = v61;
          v13 = v59;
          v47 = v32;
          if ( !v41 )
          {
            v18 = v60;
            goto LABEL_65;
          }
        }
        if ( v54 == 1 )
        {
          *(v32 - 1) = BYTE1(v20);
        }
        else if ( v54 != 2 )
        {
          switch ( v54 )
          {
            case 3:
              v32[1] = HIBYTE(v20);
              break;
            case 4:
              *(v32 - 1) = BYTE1(v20);
              break;
            case 5:
              *(v32 - 1) = BYTE1(v20);
              goto LABEL_40;
            case 6:
LABEL_40:
              *v32 = BYTE2(v20);
              break;
          }
LABEL_45:
          v35 = v61;
          v34 = v32 + 2;
          v33 = v20;
          v48 = v20;
          goto LABEL_46;
        }
        *(_WORD *)v32 = HIWORD(v20);
        goto LABEL_45;
      }
LABEL_65:
      v18 += 3;
      v60 = v18;
      if ( (unsigned int)v18 >= v40 )
      {
        v18 = v46;
        v60 = v46;
      }
      v14 = a1;
      v17 = v51;
      v13 = v59;
      v57 += *((_DWORD *)a1 + 2);
    }
    v2 = v45 + 4;
    v19 = a2-- == 1;
    v45 += 4;
  }
  while ( !v19 );
}
