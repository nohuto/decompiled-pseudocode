/*
 * XREFs of ?vStripStyledVertical24@@YGXPAU_STRIP@@PAU_BMINFO@@PAU_LINESTATE@@@Z @ 0x23F0AB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vStripStyledVertical24(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int v3; // eax
  int v4; // edi
  char *v5; // esi
  int v6; // ebx
  int v7; // ecx
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  char *v10; // [esp+Ch] [ebp-18h]
  int v11; // [esp+10h] [ebp-14h]
  int v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+18h] [ebp-Ch]
  int v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h]

  v10 = (char *)a1 + 4 * *(_DWORD *)a1 + 20;
  v3 = 4 * *((_DWORD *)a1 + 2);
  v15 = v3;
  if ( (*((_BYTE *)a1 + 4) & 8) != 0 )
  {
    v3 = -4 * *((_DWORD *)a1 + 2);
    v15 = v3;
  }
  v4 = *((_DWORD *)a1 + 3);
  v5 = (char *)a1 + 20;
  v6 = *((_DWORD *)a3 + 5);
  v14 = *((_DWORD *)a3 + 1);
  v12 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 15);
  v13 = v7;
  do
  {
    v11 = *(_DWORD *)v5;
    do
    {
      if ( !v7 )
      {
        *(_WORD *)v4 = v14 ^ v12 & *(_WORD *)v4;
        v3 = v15;
        *(_BYTE *)(v4 + 2) = BYTE2(v14) ^ *(_BYTE *)(v4 + 2) & BYTE2(v12);
        v7 = v13;
      }
      v6 -= *((_DWORD *)a3 + 2);
      v4 += v3;
      if ( v6 <= 0 )
      {
        *((_DWORD *)a3 + 12) += 4;
        v8 = (_DWORD *)*((_DWORD *)a3 + 12);
        if ( (unsigned int)v8 > *((_DWORD *)a3 + 11) )
        {
          v8 = (_DWORD *)*((_DWORD *)a3 + 10);
          *((_DWORD *)a3 + 12) = v8;
        }
        v6 += *v8;
        v7 = v7 == 0;
        v3 = v15;
        v13 = v7;
      }
      --v11;
    }
    while ( v11 );
    v6 -= *((_DWORD *)a3 + 3);
    v4 += 3;
    if ( v6 <= 0 )
    {
      v9 = (_DWORD *)(*((_DWORD *)a3 + 12) + 4);
      *((_DWORD *)a3 + 12) = v9;
      if ( (unsigned int)v9 > *((_DWORD *)a3 + 11) )
      {
        v9 = (_DWORD *)*((_DWORD *)a3 + 10);
        *((_DWORD *)a3 + 12) = v9;
      }
      v6 += *v9;
      v7 = v7 == 0;
      v13 = v7;
    }
    v3 = v15;
    v5 += 4;
  }
  while ( v5 < v10 );
  *((_DWORD *)a1 + 3) = v4;
  *((_DWORD *)a3 + 5) = v6;
  *((_DWORD *)a3 + 15) = v7;
}
