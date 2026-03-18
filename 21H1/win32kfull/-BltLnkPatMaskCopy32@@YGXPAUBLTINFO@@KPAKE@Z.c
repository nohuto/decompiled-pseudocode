/*
 * XREFs of ?BltLnkPatMaskCopy32@@YGXPAUBLTINFO@@KPAKE@Z @ 0xBA2B2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall BltLnkPatMaskCopy32(struct BLTINFO *a1, unsigned int a2, unsigned int *a3, unsigned __int8 a4)
{
  struct BLTINFO *v4; // esi
  int v5; // eax
  int v6; // edx
  _DWORD *v8; // edi
  int v9; // esi
  unsigned int v10; // edx
  char v11; // cl
  signed int v12; // eax
  unsigned int v13; // edx
  int v14; // [esp+4h] [ebp-10h]
  int v15; // [esp+8h] [ebp-Ch]
  int v16; // [esp+Ch] [ebp-8h]
  int v17; // [esp+10h] [ebp-4h]
  signed int v18; // [esp+20h] [ebp+Ch]

  v4 = a1;
  v5 = *((_DWORD *)a1 + 5);
  v6 = *((_DWORD *)a1 + 2);
  v16 = *((_DWORD *)a1 + 1);
  v15 = v6;
  if ( v5 )
  {
    do
    {
      v14 = v5 - 1;
      v17 = *((_DWORD *)v4 + 9);
      v8 = (_DWORD *)(v6 + 4 * *((_DWORD *)v4 + 11));
      if ( *((int *)v4 + 4) > 0 )
      {
        v9 = *((_DWORD *)v4 + 4);
        do
        {
          v10 = a4 ^ *(unsigned __int8 *)((v17 >> 3) + v16);
          v18 = 8 - (v17 & 7);
          v11 = 0;
          v12 = v18;
          if ( v18 > v9 )
          {
            v12 = v9;
            v11 = 8 - (v17 & 7) - v9;
            v18 = v9;
          }
          v17 += v12;
          v9 -= v12;
          if ( v10 != 255 )
          {
            v13 = v10 >> v11;
            switch ( v12 )
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
                if ( (v13 & 1) == 0 )
                  v8[7] = a2;
                v13 >>= 1;
LABEL_11:
                if ( (v13 & 1) == 0 )
                  v8[6] = a2;
                v13 >>= 1;
LABEL_14:
                if ( (v13 & 1) == 0 )
                  v8[5] = a2;
                v13 >>= 1;
LABEL_17:
                if ( (v13 & 1) == 0 )
                  v8[4] = a2;
                v13 >>= 1;
LABEL_20:
                if ( (v13 & 1) == 0 )
                  v8[3] = a2;
                v13 >>= 1;
LABEL_23:
                if ( (v13 & 1) == 0 )
                  v8[2] = a2;
                v13 >>= 1;
LABEL_26:
                if ( (v13 & 1) == 0 )
                  v8[1] = a2;
                v13 >>= 1;
LABEL_29:
                v12 = v18;
                if ( (v13 & 1) == 0 )
                  *v8 = a2;
                break;
              default:
                v12 = v18;
                break;
            }
          }
          v8 += v12;
        }
        while ( v9 > 0 );
        v4 = a1;
        v6 = v15;
      }
      v6 += *((_DWORD *)v4 + 8);
      v16 += *((_DWORD *)v4 + 7);
      v5 = v14;
      v15 = v6;
    }
    while ( v14 );
  }
}
