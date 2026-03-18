/*
 * XREFs of ?BltLnkPatMaskCopy8@@YGXPAUBLTINFO@@KPAKE@Z @ 0x24864E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall BltLnkPatMaskCopy8(struct BLTINFO *a1, char a2, unsigned int *a3, unsigned __int8 a4)
{
  struct BLTINFO *v4; // edi
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  _BYTE *v9; // esi
  int v10; // edi
  unsigned int v11; // edx
  char v12; // cl
  signed int v13; // eax
  unsigned int v14; // edx
  int v15; // [esp+4h] [ebp-10h]
  int v16; // [esp+8h] [ebp-Ch]
  int v17; // [esp+Ch] [ebp-8h]
  int v18; // [esp+10h] [ebp-4h]
  signed int v19; // [esp+20h] [ebp+Ch]

  v4 = a1;
  v5 = *((_DWORD *)a1 + 5);
  v6 = *((_DWORD *)a1 + 1);
  v7 = *((_DWORD *)a1 + 2);
  v17 = v6;
  v16 = v7;
  if ( v5 )
  {
    do
    {
      v18 = *((_DWORD *)v4 + 9);
      v15 = v5 - 1;
      v9 = (_BYTE *)(v7 + *((_DWORD *)v4 + 11));
      if ( *((int *)v4 + 4) > 0 )
      {
        v10 = *((_DWORD *)v4 + 4);
        do
        {
          v11 = a4 ^ *(unsigned __int8 *)((v18 >> 3) + v6);
          v19 = 8 - (v18 & 7);
          v12 = 0;
          v13 = v19;
          if ( v19 > v10 )
          {
            v13 = v10;
            v12 = 8 - (v18 & 7) - v10;
            v19 = v10;
          }
          v18 += v13;
          v10 -= v13;
          if ( v11 != 255 )
          {
            v14 = v11 >> v12;
            switch ( v13 )
            {
              case 1:
                goto LABEL_29;
              case 2:
                goto LABEL_26;
              case 3:
                goto LABEL_23;
              case 4:
                goto LABEL_20;
              case 5:
                goto LABEL_17;
              case 6:
                goto LABEL_14;
              case 7:
                goto LABEL_11;
              case 8:
                if ( (v14 & 1) == 0 )
                  v9[7] = a2;
                v14 >>= 1;
LABEL_11:
                if ( (v14 & 1) == 0 )
                  v9[6] = a2;
                v14 >>= 1;
LABEL_14:
                if ( (v14 & 1) == 0 )
                  v9[5] = a2;
                v14 >>= 1;
LABEL_17:
                if ( (v14 & 1) == 0 )
                  v9[4] = a2;
                v14 >>= 1;
LABEL_20:
                if ( (v14 & 1) == 0 )
                  v9[3] = a2;
                v14 >>= 1;
LABEL_23:
                if ( (v14 & 1) == 0 )
                  v9[2] = a2;
                v14 >>= 1;
LABEL_26:
                if ( (v14 & 1) == 0 )
                  v9[1] = a2;
                v14 >>= 1;
LABEL_29:
                v13 = v19;
                if ( (v14 & 1) == 0 )
                  *v9 = a2;
                break;
              default:
                v13 = v19;
                break;
            }
          }
          v6 = v17;
          v9 += v13;
        }
        while ( v10 > 0 );
        v4 = a1;
        v7 = v16;
      }
      v7 += *((_DWORD *)v4 + 8);
      v6 += *((_DWORD *)v4 + 7);
      v5 = v15;
      v16 = v7;
      v17 = v6;
    }
    while ( v15 );
  }
}
