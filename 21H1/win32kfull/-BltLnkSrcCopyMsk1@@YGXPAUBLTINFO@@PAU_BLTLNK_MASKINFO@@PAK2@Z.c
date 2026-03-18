/*
 * XREFs of ?BltLnkSrcCopyMsk1@@YGXPAUBLTINFO@@PAU_BLTLNK_MASKINFO@@PAK2@Z @ 0x248C2C
 * Callers:
 *     <none>
 * Callees:
 *     ?BltLnkReadPat1@@YGXPAEKPBEKKKK@Z @ 0x24878A (-BltLnkReadPat1@@YGXPAEKPBEKKKK@Z.c)
 */

void __stdcall BltLnkSrcCopyMsk1(
        struct BLTINFO *a1,
        struct _BLTLNK_MASKINFO *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  struct BLTINFO *v4; // eax
  struct _BLTLNK_MASKINFO *v5; // esi
  int v6; // edx
  int v7; // edi
  const unsigned __int8 *v8; // ecx
  signed int v9; // ebx
  const unsigned __int8 *v10; // edx
  _BYTE *v11; // edi
  unsigned __int8 *v12; // eax
  signed int v13; // edx
  int v14; // esi
  char v15; // cl
  char v16; // al
  int v17; // eax
  unsigned __int8 *v18; // esi
  signed int v19; // edx
  unsigned __int8 *v20; // eax
  char v21; // cl
  char v22; // al
  int v23; // eax
  int v24; // [esp+8h] [ebp-28h]
  unsigned int v25; // [esp+Ch] [ebp-24h]
  unsigned int v26; // [esp+Ch] [ebp-24h]
  unsigned int v27; // [esp+Ch] [ebp-24h]
  int v28; // [esp+10h] [ebp-20h]
  int v29; // [esp+14h] [ebp-1Ch]
  unsigned __int8 *v30; // [esp+18h] [ebp-18h]
  unsigned int v31; // [esp+1Ch] [ebp-14h]
  unsigned __int8 *v32; // [esp+1Ch] [ebp-14h]
  unsigned __int8 *v33; // [esp+1Ch] [ebp-14h]
  int v34; // [esp+20h] [ebp-10h]
  signed int v35; // [esp+24h] [ebp-Ch]
  int v36; // [esp+28h] [ebp-8h]
  const unsigned __int8 *v37; // [esp+2Ch] [ebp-4h]

  v4 = a1;
  v5 = a2;
  v6 = *((_DWORD *)a1 + 5);
  v7 = *((_DWORD *)a1 + 1);
  v29 = *((_DWORD *)a1 + 2);
  v36 = *((_DWORD *)a2 + 3);
  v8 = *(const unsigned __int8 **)a2;
  v28 = v7;
  v37 = *(const unsigned __int8 **)a2;
  if ( !v6 )
    return;
  do
  {
    v9 = *((_DWORD *)v4 + 4);
    v24 = v6 - 1;
    v34 = *((_DWORD *)v4 + 9) & 7;
    v10 = (const unsigned __int8 *)(v7 + (*((int *)v4 + 9) >> 3));
    v35 = *((_DWORD *)v4 + 11);
    v11 = (_BYTE *)((v35 >> 3) + v29);
    v30 = (unsigned __int8 *)v10;
    v25 = *((_DWORD *)v5 + 5);
    v31 = v35 & 7;
    if ( v34 != v31 )
    {
      BltLnkReadPat1(a4, v31, v10, v9, v34, v9, 0);
      v8 = v37;
      v30 = a4;
    }
    BltLnkReadPat1(a3, v35, v8, *((_DWORD *)v5 + 4), v25, v9, 0);
    if ( !*((_BYTE *)v5 + 28) )
    {
      if ( v9 <= 0 )
        goto LABEL_27;
      v12 = (unsigned __int8 *)(a3 - v11);
      v13 = v35;
      v14 = v30 - v11;
      v32 = (unsigned __int8 *)(a3 - v11);
      while ( 1 )
      {
        v15 = v11[(_DWORD)v12];
        v26 = v9;
        if ( v15 == -1 )
          break;
        if ( v15 )
        {
          v16 = *v11 & ~v15 | v15 & v11[v14];
          goto LABEL_11;
        }
LABEL_12:
        ++v11;
        v9 -= 8;
        v17 = v13 & 7;
        if ( (v13 & 7) != 0 )
          v9 = v17 + v26 - 8;
        v13 = v17 == 0 ? v13 : 0;
        v12 = v32;
        if ( v9 <= 0 )
          goto LABEL_26;
      }
      v16 = v11[v14];
LABEL_11:
      *v11 = v16;
      goto LABEL_12;
    }
    *a3 |= -1 << (8 - v31);
    a3[(v9 + v31) >> 3] |= 255 >> ((v9 + v35) & 7);
    if ( v9 <= 0 )
      goto LABEL_27;
    v18 = v30;
    v19 = v35;
    v20 = (unsigned __int8 *)(a3 - v11);
    v33 = (unsigned __int8 *)(a3 - v11);
    do
    {
      v21 = v11[(_DWORD)v20];
      v27 = v9;
      if ( v21 )
      {
        if ( v21 == -1 )
          goto LABEL_23;
        v22 = *v11 & v21 | *v18 & ~v21;
      }
      else
      {
        v22 = *v18;
      }
      *v11 = v22;
LABEL_23:
      ++v18;
      ++v11;
      v9 -= 8;
      v23 = v19 & 7;
      if ( (v19 & 7) != 0 )
        v9 = v23 + v27 - 8;
      v19 = v23 == 0 ? v19 : 0;
      v20 = v33;
    }
    while ( v9 > 0 );
LABEL_26:
    v5 = a2;
LABEL_27:
    v4 = a1;
    v7 = *((_DWORD *)a1 + 7) + v28;
    v29 += *((_DWORD *)a1 + 8);
    v28 = v7;
    if ( *((int *)a1 + 6) <= 0 )
    {
      if ( v36 )
      {
        v8 = &v37[*((_DWORD *)v5 + 6)];
        --v36;
      }
      else
      {
        v36 = *((_DWORD *)v5 + 2) - 1;
        v4 = a1;
        v8 = (const unsigned __int8 *)(*((_DWORD *)v5 + 1) + *((_DWORD *)v5 + 6) * v36);
      }
LABEL_33:
      v37 = v8;
    }
    else
    {
      v8 = &v37[*((_DWORD *)v5 + 6)];
      ++v36;
      v37 = v8;
      if ( v36 >= *((_DWORD *)v5 + 2) )
      {
        v36 = 0;
        v8 = (const unsigned __int8 *)*((_DWORD *)v5 + 1);
        goto LABEL_33;
      }
    }
    v6 = v24;
  }
  while ( v24 );
}
