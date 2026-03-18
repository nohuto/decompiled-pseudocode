/*
 * XREFs of ?BltLnkPatMaskCopy24@@YGXPAUBLTINFO@@KPAKE@Z @ 0x248486
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall BltLnkPatMaskCopy24(struct BLTINFO *a1, unsigned int a2, unsigned int *a3, unsigned __int8 a4)
{
  struct BLTINFO *v4; // esi
  int v5; // edx
  int v6; // ebx
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // ebx
  char v12; // cl
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // [esp+8h] [ebp-1Ch]
  int v16; // [esp+Ch] [ebp-18h]
  int v17; // [esp+10h] [ebp-14h]
  int v18; // [esp+14h] [ebp-10h]
  int v19; // [esp+18h] [ebp-Ch]

  v4 = a1;
  v5 = *((_DWORD *)a1 + 5);
  v6 = *((_DWORD *)a1 + 2);
  v18 = *((_DWORD *)a1 + 1);
  v16 = v6;
  if ( v5 )
  {
    v7 = *((_DWORD *)a1 + 1);
    do
    {
      v8 = *((_DWORD *)v4 + 4);
      v9 = *((_DWORD *)v4 + 9);
      v15 = v5 - 1;
      v17 = v9;
      v10 = v6 + 3 * *((_DWORD *)v4 + 11);
      if ( v8 > 0 )
      {
        do
        {
          v11 = a4 ^ *(unsigned __int8 *)((v9 >> 3) + v18);
          v19 = 8 - (v9 & 7);
          v12 = 0;
          v13 = v19;
          if ( v19 > v8 )
          {
            v13 = v8;
            v12 = v19 - v8;
            v19 = v8;
          }
          v17 += v13;
          v8 -= v13;
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
                {
                  *(_WORD *)(v10 + 22) = *(_WORD *)((char *)&a2 + 1);
                  *(_BYTE *)(v10 + 21) = a2;
                }
                v14 >>= 1;
LABEL_11:
                if ( (v14 & 1) == 0 )
                {
                  *(_WORD *)(v10 + 19) = *(_WORD *)((char *)&a2 + 1);
                  *(_BYTE *)(v10 + 18) = a2;
                }
                v14 >>= 1;
LABEL_14:
                if ( (v14 & 1) == 0 )
                {
                  *(_WORD *)(v10 + 16) = *(_WORD *)((char *)&a2 + 1);
                  *(_BYTE *)(v10 + 15) = a2;
                }
                v14 >>= 1;
LABEL_17:
                if ( (v14 & 1) == 0 )
                {
                  *(_WORD *)(v10 + 13) = *(_WORD *)((char *)&a2 + 1);
                  *(_BYTE *)(v10 + 12) = a2;
                }
                v14 >>= 1;
LABEL_20:
                if ( (v14 & 1) == 0 )
                {
                  *(_WORD *)(v10 + 10) = *(_WORD *)((char *)&a2 + 1);
                  *(_BYTE *)(v10 + 9) = a2;
                }
                v14 >>= 1;
LABEL_23:
                if ( (v14 & 1) == 0 )
                {
                  *(_WORD *)(v10 + 7) = *(_WORD *)((char *)&a2 + 1);
                  *(_BYTE *)(v10 + 6) = a2;
                }
                v14 >>= 1;
LABEL_26:
                if ( (v14 & 1) == 0 )
                {
                  *(_WORD *)(v10 + 4) = *(_WORD *)((char *)&a2 + 1);
                  *(_BYTE *)(v10 + 3) = a2;
                }
                v14 >>= 1;
LABEL_29:
                if ( (v14 & 1) == 0 )
                {
                  *(_WORD *)(v10 + 1) = *(_WORD *)((char *)&a2 + 1);
                  *(_BYTE *)v10 = a2;
                }
                break;
              default:
                break;
            }
            v13 = v19;
          }
          v9 = v17;
          v10 += 3 * v13;
        }
        while ( v8 > 0 );
        v4 = a1;
        v6 = v16;
        v7 = v18;
      }
      v6 += *((_DWORD *)v4 + 8);
      v7 += *((_DWORD *)v4 + 7);
      v5 = v15;
      v16 = v6;
      v18 = v7;
    }
    while ( v15 );
  }
}
