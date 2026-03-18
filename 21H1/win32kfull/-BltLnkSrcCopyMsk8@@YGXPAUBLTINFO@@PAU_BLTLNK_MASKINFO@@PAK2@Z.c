/*
 * XREFs of ?BltLnkSrcCopyMsk8@@YGXPAUBLTINFO@@PAU_BLTLNK_MASKINFO@@PAK2@Z @ 0x24904E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall BltLnkSrcCopyMsk8(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  struct BLTINFO *v4; // ecx
  struct _BLTLNK_MASKINFO *v5; // esi
  int v6; // eax
  int v7; // ebx
  int v8; // edx
  int v9; // edi
  _BYTE *v10; // esi
  unsigned int v11; // edx
  char v12; // cl
  int v13; // eax
  int v14; // edi
  unsigned int v15; // edx
  _BYTE *v16; // ecx
  int v17; // [esp+8h] [ebp-28h]
  int v18; // [esp+Ch] [ebp-24h]
  int v19; // [esp+10h] [ebp-20h]
  int v20; // [esp+14h] [ebp-1Ch]
  int v21; // [esp+18h] [ebp-18h]
  int v22; // [esp+1Ch] [ebp-14h]
  int v23; // [esp+20h] [ebp-10h]
  int v24; // [esp+24h] [ebp-Ch]
  _BYTE *v25; // [esp+28h] [ebp-8h]
  unsigned __int8 v26; // [esp+2Fh] [ebp-1h]

  v4 = a1;
  v5 = a2;
  v19 = *((_DWORD *)a1 + 1);
  v23 = *((_DWORD *)a2 + 3);
  v18 = *((_DWORD *)a2 + 4);
  v6 = *((_DWORD *)a1 + 5);
  v20 = *((_DWORD *)a1 + 2);
  v7 = *(_DWORD *)a2;
  v26 = *((_BYTE *)a2 + 28);
  v8 = v23;
  if ( v6 )
  {
    while ( 1 )
    {
      v9 = *((_DWORD *)v5 + 5);
      v17 = v6 - 1;
      v24 = *((_DWORD *)v4 + 4);
      v25 = (_BYTE *)(v20 + *((_DWORD *)v4 + 11));
      if ( v24 > 0 )
      {
        v10 = (_BYTE *)(v19 + *((_DWORD *)v4 + 9));
        do
        {
          v11 = v26 ^ *(unsigned __int8 *)((v9 >> 3) + v7);
          v22 = 8 - (v9 & 7);
          v21 = v18 - v9;
          v12 = 0;
          v13 = v22;
          if ( v22 > v24 )
          {
            v13 = v24;
            v12 = 8 - (v9 & 7) - v24;
            v22 = v24;
          }
          if ( v13 > v21 )
          {
            v12 += v13 - v21;
            v13 = v18 - v9;
            v22 = v18 - v9;
          }
          v24 -= v13;
          v14 = v13 + v9;
          if ( v11 )
          {
            v15 = v11 >> v12;
            switch ( v13 )
            {
              case 1:
                v16 = v25;
                goto LABEL_38;
              case 2:
                v16 = v25;
                goto LABEL_34;
              case 3:
                v16 = v25;
                goto LABEL_30;
              case 4:
                v16 = v25;
                goto LABEL_26;
              case 5:
                v16 = v25;
                goto LABEL_22;
              case 6:
                v16 = v25;
                goto LABEL_18;
              case 7:
                v16 = v25;
                goto LABEL_14;
              case 8:
                v16 = v25;
                if ( (v15 & 1) != 0 )
                  v25[7] = v10[7];
                v15 >>= 1;
LABEL_14:
                if ( (v15 & 1) != 0 )
                  v16[6] = v10[6];
                v15 >>= 1;
LABEL_18:
                if ( (v15 & 1) != 0 )
                  v16[5] = v10[5];
                v15 >>= 1;
LABEL_22:
                if ( (v15 & 1) != 0 )
                  v16[4] = v10[4];
                v15 >>= 1;
LABEL_26:
                if ( (v15 & 1) != 0 )
                  v16[3] = v10[3];
                v15 >>= 1;
LABEL_30:
                if ( (v15 & 1) != 0 )
                  v16[2] = v10[2];
                v15 >>= 1;
LABEL_34:
                if ( (v15 & 1) != 0 )
                  v16[1] = v10[1];
                v15 >>= 1;
LABEL_38:
                if ( (v15 & 1) != 0 )
                  *v16 = *v10;
                break;
              default:
                break;
            }
          }
          v10 += v22;
          v25 += v22;
          v9 = v18 != v14 ? v14 : 0;
        }
        while ( v24 > 0 );
        v5 = a2;
        v4 = a1;
        v8 = v23;
      }
      v20 += *((_DWORD *)v4 + 8);
      v19 += *((_DWORD *)v4 + 7);
      if ( *((int *)v4 + 6) <= 0 )
        break;
      v7 += *((_DWORD *)v5 + 6);
      v23 = ++v8;
      if ( v8 >= *((_DWORD *)v5 + 2) )
      {
        v7 = *((_DWORD *)v5 + 1);
        v8 = 0;
LABEL_48:
        v23 = v8;
      }
      v6 = v17;
      if ( !v17 )
        return;
    }
    if ( v8 )
    {
      --v8;
      v7 += *((_DWORD *)v5 + 6);
    }
    else
    {
      v8 = *((_DWORD *)v5 + 2) - 1;
      v7 = *((_DWORD *)v5 + 1) + v8 * *((_DWORD *)v5 + 6);
    }
    goto LABEL_48;
  }
}
