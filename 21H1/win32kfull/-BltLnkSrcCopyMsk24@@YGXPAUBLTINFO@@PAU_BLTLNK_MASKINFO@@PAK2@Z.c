/*
 * XREFs of ?BltLnkSrcCopyMsk24@@YGXPAUBLTINFO@@PAU_BLTLNK_MASKINFO@@PAK2@Z @ 0xA669E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall BltLnkSrcCopyMsk24(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  struct BLTINFO *v4; // edx
  struct _BLTLNK_MASKINFO *v5; // ebx
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  _BYTE *v10; // esi
  _BYTE *v11; // edi
  int v12; // ebx
  unsigned int v13; // edx
  char v14; // al
  unsigned int v15; // edx
  int v16; // ecx
  int v17; // [esp+8h] [ebp-28h]
  int v18; // [esp+Ch] [ebp-24h]
  int v19; // [esp+10h] [ebp-20h]
  int v20; // [esp+14h] [ebp-1Ch]
  int v21; // [esp+18h] [ebp-18h]
  int v22; // [esp+1Ch] [ebp-14h]
  int v23; // [esp+20h] [ebp-10h]
  int v24; // [esp+24h] [ebp-Ch]
  int v25; // [esp+28h] [ebp-8h]
  unsigned __int8 v26; // [esp+2Fh] [ebp-1h]

  v4 = a1;
  v5 = a2;
  v6 = *((_DWORD *)a1 + 1);
  v18 = v6;
  v19 = *((_DWORD *)a2 + 4);
  v20 = *((_DWORD *)a1 + 2);
  v25 = *(_DWORD *)a2;
  v22 = *((_DWORD *)a2 + 3);
  v7 = *((_DWORD *)a1 + 5);
  v26 = *((_BYTE *)a2 + 28);
  v8 = *(_DWORD *)a2;
  if ( v7 )
  {
    while ( 1 )
    {
      v17 = v7 - 1;
      v23 = *((_DWORD *)v4 + 4);
      v9 = *((_DWORD *)v5 + 5);
      v10 = (_BYTE *)(v6 + 3 * *((_DWORD *)v4 + 9));
      v11 = (_BYTE *)(v20 + 3 * *((_DWORD *)v4 + 11));
      if ( v23 > 0 )
      {
        v12 = v25;
        do
        {
          v13 = v26 ^ *(unsigned __int8 *)((v9 >> 3) + v12);
          v24 = 8 - (v9 & 7);
          v21 = v19 - v9;
          v14 = 0;
          if ( v24 > v23 )
          {
            v14 = v24 - v23;
            v24 = v23;
          }
          if ( v24 > v21 )
          {
            v14 += v24 - v21;
            v24 = v19 - v9;
          }
          v23 -= v24;
          v12 = v25;
          if ( v13 )
          {
            v15 = v13 >> v14;
            switch ( v24 )
            {
              case 1:
                goto LABEL_31;
              case 2:
                goto LABEL_28;
              case 3:
                goto LABEL_25;
              case 4:
                goto LABEL_22;
              case 5:
                goto LABEL_19;
              case 6:
                goto LABEL_16;
              case 7:
                goto LABEL_13;
              case 8:
                if ( (v15 & 1) != 0 )
                {
                  v11[23] = v10[23];
                  v11[22] = v10[22];
                  v11[21] = v10[21];
                }
                v15 >>= 1;
LABEL_13:
                if ( (v15 & 1) != 0 )
                {
                  v11[20] = v10[20];
                  v11[19] = v10[19];
                  v11[18] = v10[18];
                }
                v15 >>= 1;
LABEL_16:
                if ( (v15 & 1) != 0 )
                {
                  v11[17] = v10[17];
                  v11[16] = v10[16];
                  v11[15] = v10[15];
                }
                v15 >>= 1;
LABEL_19:
                if ( (v15 & 1) != 0 )
                {
                  v11[14] = v10[14];
                  v11[13] = v10[13];
                  v11[12] = v10[12];
                }
                v15 >>= 1;
LABEL_22:
                if ( (v15 & 1) != 0 )
                {
                  v11[11] = v10[11];
                  v11[10] = v10[10];
                  v11[9] = v10[9];
                }
                v15 >>= 1;
LABEL_25:
                if ( (v15 & 1) != 0 )
                {
                  v11[8] = v10[8];
                  v11[7] = v10[7];
                  v11[6] = v10[6];
                }
                v15 >>= 1;
LABEL_28:
                if ( (v15 & 1) != 0 )
                {
                  v11[5] = v10[5];
                  v11[4] = v10[4];
                  v11[3] = v10[3];
                }
                v15 >>= 1;
LABEL_31:
                if ( (v15 & 1) != 0 )
                {
                  v11[2] = v10[2];
                  v11[1] = v10[1];
                  *v11 = *v10;
                }
                break;
              default:
                break;
            }
          }
          v10 += 3 * v24;
          v11 += 3 * v24;
          v9 = v19 != v24 + v9 ? v24 + v9 : 0;
        }
        while ( v23 > 0 );
        v5 = a2;
        v8 = v25;
        v4 = a1;
      }
      v6 = *((_DWORD *)v4 + 7) + v18;
      v20 += *((_DWORD *)v4 + 8);
      v18 = v6;
      if ( *((int *)v4 + 6) <= 0 )
        break;
      v8 += *((_DWORD *)v5 + 6);
      ++v22;
      v25 = v8;
      if ( v22 >= *((_DWORD *)v5 + 2) )
      {
        v8 = *((_DWORD *)v5 + 1);
        v16 = 0;
LABEL_43:
        v22 = v16;
        v25 = v8;
      }
      v7 = v17;
      if ( !v17 )
        return;
    }
    if ( v22 )
    {
      v16 = v22 - 1;
      v8 += *((_DWORD *)v5 + 6);
    }
    else
    {
      v16 = *((_DWORD *)v5 + 2) - 1;
      v8 = *((_DWORD *)v5 + 1) + v16 * *((_DWORD *)v5 + 6);
    }
    goto LABEL_43;
  }
}
