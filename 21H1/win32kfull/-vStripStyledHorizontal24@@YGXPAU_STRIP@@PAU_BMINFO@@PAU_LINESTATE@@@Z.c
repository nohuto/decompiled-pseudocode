/*
 * XREFs of ?vStripStyledHorizontal24@@YGXPAU_STRIP@@PAU_BMINFO@@PAU_LINESTATE@@@Z @ 0x23ECC2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vStripStyledHorizontal24(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int v4; // edi
  int v5; // esi
  int v6; // ecx
  int v7; // ebx
  char *v8; // eax
  int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  char *v12; // [esp+Ch] [ebp-14h]
  int v13; // [esp+10h] [ebp-10h]
  char *v14; // [esp+14h] [ebp-Ch]
  int v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]
  int v17; // [esp+1Ch] [ebp-4h]
  struct _LINESTATE *v18; // [esp+30h] [ebp+10h]

  v12 = (char *)a1 + 4 * *(_DWORD *)a1 + 20;
  v14 = (char *)a1 + 20;
  v16 = 4 * *((_DWORD *)a1 + 2);
  if ( (*((_BYTE *)a1 + 4) & 8) != 0 )
    v16 = -4 * *((_DWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 3);
  v5 = v16;
  v6 = *((_DWORD *)a3 + 15);
  v7 = *((_DWORD *)a3 + 5);
  v13 = *(_DWORD *)a3;
  v18 = (struct _LINESTATE *)*((_DWORD *)a3 + 1);
  v8 = (char *)a1 + 20;
  v15 = v6;
  do
  {
    v9 = *(_DWORD *)v8;
    v17 = v9;
    do
    {
      if ( !v6 )
      {
        *(_WORD *)v4 = (unsigned __int16)v18 ^ v13 & *(_WORD *)v4;
        v9 = v17;
        *(_BYTE *)(v4 + 2) = BYTE2(v18) ^ *(_BYTE *)(v4 + 2) & BYTE2(v13);
        v6 = v15;
      }
      v7 -= *((_DWORD *)a3 + 2);
      v4 += 3;
      if ( v7 <= 0 )
      {
        *((_DWORD *)a3 + 12) += 4;
        v10 = (_DWORD *)*((_DWORD *)a3 + 12);
        if ( (unsigned int)v10 > *((_DWORD *)a3 + 11) )
        {
          v10 = (_DWORD *)*((_DWORD *)a3 + 10);
          *((_DWORD *)a3 + 12) = v10;
        }
        v7 += *v10;
        v6 = v6 == 0;
        v9 = v17;
        v15 = v6;
      }
      v17 = --v9;
    }
    while ( v9 );
    v7 -= *((_DWORD *)a3 + 3);
    v4 += v5;
    if ( v7 <= 0 )
    {
      v11 = (_DWORD *)(*((_DWORD *)a3 + 12) + 4);
      *((_DWORD *)a3 + 12) = v11;
      if ( (unsigned int)v11 > *((_DWORD *)a3 + 11) )
      {
        v11 = (_DWORD *)*((_DWORD *)a3 + 10);
        *((_DWORD *)a3 + 12) = v11;
      }
      v7 += *v11;
      v6 = v6 == 0;
      v15 = v6;
    }
    v8 = v14 + 4;
    v14 = v8;
  }
  while ( v8 != v12 );
  *((_DWORD *)a1 + 3) = v4;
  *((_DWORD *)a3 + 5) = v7;
  *((_DWORD *)a3 + 15) = v6;
}
