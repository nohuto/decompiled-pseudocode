/*
 * XREFs of ?BltLnkSrcCopyMsk4@@YGXPAUBLTINFO@@PAU_BLTLNK_MASKINFO@@PAK2@Z @ 0x248E28
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall BltLnkSrcCopyMsk4(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  struct BLTINFO *v4; // eax
  int v6; // edx
  int v7; // ebx
  int v8; // edi
  int v9; // ecx
  struct _BLTLNK_MASKINFO *v10; // ecx
  char v11; // dl
  int v12; // eax
  unsigned int v13; // eax
  char v14; // bl
  bool v15; // zf
  unsigned __int8 *v16; // edx
  unsigned __int8 v17; // al
  char v18; // al
  char v19; // cl
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  char v22; // bh
  char v23; // bl
  unsigned int v24; // ecx
  char v25; // cl
  char v26; // al
  unsigned __int8 v27; // cl
  unsigned __int8 v28; // cl
  unsigned __int8 v29; // al
  char v30; // al
  unsigned int v31; // eax
  unsigned __int8 v32; // al
  char v33; // al
  int v34; // ecx
  int v35; // eax
  int v36; // edi
  int v37; // [esp+Ch] [ebp-20h]
  int v38; // [esp+10h] [ebp-1Ch]
  int v39; // [esp+14h] [ebp-18h]
  unsigned __int8 *v40; // [esp+18h] [ebp-14h]
  int v41; // [esp+18h] [ebp-14h]
  unsigned int v42; // [esp+18h] [ebp-14h]
  unsigned int v43; // [esp+1Ch] [ebp-10h]
  int v44; // [esp+20h] [ebp-Ch]
  unsigned int v45; // [esp+24h] [ebp-8h]
  unsigned int v46; // [esp+24h] [ebp-8h]
  int v47; // [esp+28h] [ebp-4h]
  int v48; // [esp+28h] [ebp-4h]
  struct _BLTLNK_MASKINFO *v49; // [esp+38h] [ebp+Ch]

  v4 = a1;
  v6 = *((_DWORD *)a1 + 1);
  v7 = *((_DWORD *)a1 + 2);
  v8 = *(_DWORD *)a2;
  v44 = *((_DWORD *)a2 + 3);
  v9 = *((_DWORD *)a1 + 5);
  v38 = v6;
  v39 = v7;
  while ( v9 )
  {
    v37 = v9 - 1;
    v43 = *((_DWORD *)v4 + 4);
    v47 = *((_DWORD *)v4 + 9);
    v10 = (struct _BLTLNK_MASKINFO *)(v6 + (v47 >> 1));
    v12 = *((_DWORD *)v4 + 11);
    v11 = v12;
    v49 = v10;
    v45 = *((_DWORD *)a2 + 5);
    v40 = (unsigned __int8 *)(v7 + (v12 >> 1));
    v13 = v45;
    v14 = (*((_BYTE *)a2 + 28) ^ *(_BYTE *)((v45 >> 3) + v8)) << (v45 & 7);
    v15 = (v11 & 1) == 0;
    v16 = v40;
    if ( v15 )
    {
      v19 = v47;
    }
    else
    {
      if ( v14 < 0 )
      {
        v17 = *(_BYTE *)v10;
        if ( (v47 & 1) != 0 )
          v18 = v17 & 0xF;
        else
          v18 = v17 >> 4;
        *v40 = *v40 & 0xF0 | v18;
        v13 = v45;
      }
      v16 = v40 + 1;
      v19 = v47 + 1;
      if ( (((_BYTE)v47 + 1) & 1) == 0 )
        v49 = (struct _BLTLNK_MASKINFO *)((char *)v49 + 1);
      v14 *= 2;
      ++v13;
      --v43;
      v45 = v13;
    }
    v48 = v19 & 1;
    v20 = v43;
    if ( v43 >= 2 )
    {
      v46 = v43 >> 1;
      while ( 1 )
      {
        v41 = *((_DWORD *)a2 + 4);
        v21 = v41 != v13 ? v13 : 0;
        if ( (v21 & 7) == 0 )
          v14 = *((_BYTE *)a2 + 28) ^ *(_BYTE *)((v21 >> 3) + v8);
        v22 = v14;
        v23 = 2 * v14;
        v24 = v41 != v21 + 1 ? v21 + 1 : 0;
        v42 = v24;
        if ( (v24 & 7) == 0 )
          v23 = *((_BYTE *)a2 + 28) ^ *(_BYTE *)((v24 >> 3) + v8);
        if ( v22 < 0 )
          break;
        if ( v23 < 0 )
        {
          v29 = *(_BYTE *)v49;
          if ( v48 )
            v30 = v29 >> 4;
          else
            v30 = v29 & 0xF;
          *v16 = *v16 & 0xF0 | v30;
          goto LABEL_33;
        }
LABEL_34:
        v14 = 2 * v23;
        v13 = v24 + 1;
        ++v16;
        v49 = (struct _BLTLNK_MASKINFO *)((char *)v49 + 1);
        v20 = v43 - 2;
        v15 = v46-- == 1;
        v43 -= 2;
        if ( v15 )
        {
          v45 = v13;
          goto LABEL_36;
        }
      }
      if ( v23 >= 0 )
      {
        v28 = *(_BYTE *)v49;
        v26 = *v16 & 0xF;
        if ( v48 )
          v25 = 16 * v28;
        else
          v25 = v28 & 0xF0;
LABEL_26:
        v27 = v26 | v25;
      }
      else
      {
        if ( v48 )
        {
          v25 = *((_BYTE *)v49 + 1) >> 4;
          v26 = 16 * *(_BYTE *)v49;
          goto LABEL_26;
        }
        v27 = *(_BYTE *)v49;
      }
      *v16 = v27;
LABEL_33:
      v24 = v42;
      goto LABEL_34;
    }
LABEL_36:
    if ( v20 )
    {
      v31 = *((_DWORD *)a2 + 4) != v13 ? v45 : 0;
      if ( (v31 & 7) == 0 )
        v14 = *((_BYTE *)a2 + 28) ^ *(_BYTE *)((v31 >> 3) + v8);
      if ( v14 < 0 )
      {
        v32 = *(_BYTE *)v49;
        if ( v48 )
          v33 = 16 * v32;
        else
          v33 = v32 & 0xF0;
        *v16 = *v16 & 0xF | v33;
      }
    }
    v4 = a1;
    v7 = *((_DWORD *)a1 + 8) + v39;
    v6 = *((_DWORD *)a1 + 7) + v38;
    v39 = v7;
    v38 = v6;
    if ( *((int *)a1 + 6) <= 0 )
    {
      if ( v44 )
      {
        v34 = v44 - 1;
        v8 += *((_DWORD *)a2 + 6);
      }
      else
      {
        v35 = *((_DWORD *)a2 + 2);
        v36 = *((_DWORD *)a2 + 6) * (v35 - 1);
        v34 = v35 - 1;
        v4 = a1;
        v8 = *((_DWORD *)a2 + 1) + v36;
      }
    }
    else
    {
      v8 += *((_DWORD *)a2 + 6);
      if ( ++v44 < *((_DWORD *)a2 + 2) )
        goto LABEL_51;
      v8 = *((_DWORD *)a2 + 1);
      v34 = 0;
    }
    v44 = v34;
LABEL_51:
    v9 = v37;
  }
}
