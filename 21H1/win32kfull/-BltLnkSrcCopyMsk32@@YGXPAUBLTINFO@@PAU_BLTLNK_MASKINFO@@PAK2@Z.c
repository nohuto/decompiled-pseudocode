/*
 * XREFs of ?BltLnkSrcCopyMsk32@@YGXPAUBLTINFO@@PAU_BLTLNK_MASKINFO@@PAK2@Z @ 0x9442E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall BltLnkSrcCopyMsk32(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  struct BLTINFO *v4; // ecx
  struct _BLTLNK_MASKINFO *v5; // esi
  int v6; // eax
  int v7; // ebx
  int v8; // edi
  int v9; // edx
  unsigned int v10; // edx
  int v11; // eax
  char v12; // cl
  _DWORD *v13; // esi
  int v14; // edi
  unsigned int v15; // edx
  _DWORD *v16; // ecx
  int v17; // edx
  int v18; // [esp+8h] [ebp-2Ch]
  int v19; // [esp+10h] [ebp-24h]
  int v20; // [esp+14h] [ebp-20h]
  int v21; // [esp+18h] [ebp-1Ch]
  _DWORD *v22; // [esp+1Ch] [ebp-18h]
  int v23; // [esp+20h] [ebp-14h]
  int v24; // [esp+24h] [ebp-10h]
  int v25; // [esp+28h] [ebp-Ch]
  _DWORD *v26; // [esp+2Ch] [ebp-8h]
  unsigned __int8 v27; // [esp+33h] [ebp-1h]

  v4 = a1;
  v5 = a2;
  v20 = *((_DWORD *)a1 + 1);
  v19 = *((_DWORD *)a2 + 4);
  v6 = *((_DWORD *)a1 + 5);
  v24 = *((_DWORD *)a2 + 3);
  v21 = *((_DWORD *)a1 + 2);
  v7 = *(_DWORD *)a2;
  v27 = *((_BYTE *)a2 + 28);
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = *((_DWORD *)v5 + 5);
      v18 = v6 - 1;
      v23 = *((_DWORD *)v4 + 4);
      v22 = (_DWORD *)(v20 + 4 * *((_DWORD *)v4 + 9));
      v9 = v24;
      v26 = (_DWORD *)(v21 + 4 * *((_DWORD *)v4 + 11));
      if ( v23 > 0 )
      {
        do
        {
          v10 = v27 ^ *(unsigned __int8 *)((v8 >> 3) + v7);
          v25 = 8 - (v8 & 7);
          v11 = v19 - v8;
          v12 = 0;
          v13 = v22;
          if ( v25 > v23 )
          {
            v12 = v25 - v23;
            v25 = v23;
            v13 = v22;
          }
          if ( v25 > v11 )
          {
            v12 += v25 - v11;
            v25 = v19 - v8;
          }
          else
          {
            v11 = v25;
          }
          v23 -= v11;
          v14 = v11 + v8;
          if ( v10 )
          {
            v15 = v10 >> v12;
            switch ( v11 )
            {
              case 1:
                goto LABEL_30;
              case 2:
                goto LABEL_27;
              case 3:
                goto LABEL_24;
              case 4:
                goto LABEL_21;
              case 5:
                goto LABEL_18;
              case 6:
                goto LABEL_15;
              case 7:
                goto LABEL_12;
              case 8:
                if ( (v15 & 1) != 0 )
                  v26[7] = v13[7];
                v15 >>= 1;
LABEL_12:
                if ( (v15 & 1) != 0 )
                  v26[6] = v13[6];
                v15 >>= 1;
LABEL_15:
                if ( (v15 & 1) != 0 )
                  v26[5] = v13[5];
                v15 >>= 1;
LABEL_18:
                if ( (v15 & 1) != 0 )
                  v26[4] = v13[4];
                v15 >>= 1;
LABEL_21:
                if ( (v15 & 1) != 0 )
                  v26[3] = v13[3];
                v15 >>= 1;
LABEL_24:
                if ( (v15 & 1) != 0 )
                  v26[2] = v13[2];
                v15 >>= 1;
LABEL_27:
                if ( (v15 & 1) != 0 )
                  v26[1] = v13[1];
                v15 >>= 1;
LABEL_30:
                v16 = v26;
                if ( (v15 & 1) != 0 )
                  *v26 = *v13;
                break;
              default:
                goto LABEL_38;
            }
          }
          else
          {
LABEL_38:
            v16 = v26;
          }
          v22 = &v13[v25];
          v26 = &v16[v25];
          v8 = v19 != v14 ? v14 : 0;
        }
        while ( v23 > 0 );
        v5 = a2;
        v4 = a1;
        v9 = v24;
      }
      v21 += *((_DWORD *)v4 + 8);
      v20 += *((_DWORD *)v4 + 7);
      if ( *((int *)v4 + 6) <= 0 )
        break;
      v7 += *((_DWORD *)v5 + 6);
      v24 = v9 + 1;
      if ( v9 + 1 >= *((_DWORD *)v5 + 2) )
      {
        v7 = *((_DWORD *)v5 + 1);
        v17 = 0;
LABEL_44:
        v24 = v17;
      }
      v6 = v18;
      if ( !v18 )
        return;
    }
    if ( v9 )
    {
      v17 = v9 - 1;
      v7 += *((_DWORD *)v5 + 6);
    }
    else
    {
      v17 = *((_DWORD *)v5 + 2) - 1;
      v7 = *((_DWORD *)v5 + 1) + v17 * *((_DWORD *)v5 + 6);
    }
    goto LABEL_44;
  }
}
