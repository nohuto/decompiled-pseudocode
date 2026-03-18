/*
 * XREFs of ?vStripStyledDiagonal24@@YGXPAU_STRIP@@PAU_BMINFO@@PAU_LINESTATE@@@Z @ 0x23E877
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vStripStyledDiagonal24(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int v3; // ecx
  struct _LINESTATE *v4; // edx
  int v5; // esi
  int v6; // ebx
  int v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  char *v10; // [esp+Ch] [ebp-1Ch]
  int v11; // [esp+10h] [ebp-18h]
  int v12; // [esp+14h] [ebp-14h]
  int v13; // [esp+18h] [ebp-10h]
  int v14; // [esp+1Ch] [ebp-Ch]
  char *v15; // [esp+20h] [ebp-8h]
  int v16; // [esp+24h] [ebp-4h]

  v3 = 4 * *((_DWORD *)a1 + 2);
  v12 = v3;
  v10 = (char *)a1 + 4 * *(_DWORD *)a1 + 20;
  v15 = (char *)a1 + 20;
  if ( (*((_BYTE *)a1 + 4) & 8) != 0 )
  {
    v3 = -4 * *((_DWORD *)a1 + 2);
    v12 = v3;
  }
  v4 = a3;
  v5 = *((_DWORD *)a1 + 3);
  v6 = *((_DWORD *)a3 + 5);
  v14 = *((_DWORD *)a3 + 1);
  v13 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 15);
  v16 = v7;
  do
  {
    v11 = *(_DWORD *)v15;
    while ( 1 )
    {
      if ( !v7 )
      {
        *(_WORD *)v5 = v14 ^ v13 & *(_WORD *)v5;
        v7 = v16;
        *(_BYTE *)(v5 + 2) = BYTE2(v14) ^ *(_BYTE *)(v5 + 2) & BYTE2(v13);
        v3 = v12;
      }
      v5 += 3;
      if ( !--v11 )
        break;
      v6 -= *((_DWORD *)v4 + 4);
      v5 += v3;
      if ( v6 <= 0 )
      {
        *((_DWORD *)v4 + 12) += 4;
        v8 = (_DWORD *)*((_DWORD *)v4 + 12);
        if ( (unsigned int)v8 > *((_DWORD *)v4 + 11) )
        {
          v8 = (_DWORD *)*((_DWORD *)v4 + 10);
          *((_DWORD *)v4 + 12) = v8;
        }
        v6 += *v8;
        v7 = v16 == 0;
        v16 = v7;
      }
    }
    v6 -= *((_DWORD *)v4 + 2);
    if ( v6 <= 0 )
    {
      *((_DWORD *)v4 + 12) += 4;
      v9 = (_DWORD *)*((_DWORD *)v4 + 12);
      if ( (unsigned int)v9 > *((_DWORD *)v4 + 11) )
      {
        v9 = (_DWORD *)*((_DWORD *)v4 + 10);
        *((_DWORD *)v4 + 12) = v9;
      }
      v6 += *v9;
      v7 = v16 == 0;
      v16 = v7;
    }
    if ( (*((_BYTE *)a1 + 4) & 5) != 0 )
      v5 = v3 + v5 - 3;
    v15 += 4;
    v4 = a3;
  }
  while ( v15 < v10 );
  *((_DWORD *)a1 + 3) = v5;
  *((_DWORD *)a3 + 5) = v6;
  *((_DWORD *)a3 + 15) = v7;
}
