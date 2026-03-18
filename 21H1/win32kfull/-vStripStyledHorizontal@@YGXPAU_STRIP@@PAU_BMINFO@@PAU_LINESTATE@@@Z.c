/*
 * XREFs of ?vStripStyledHorizontal@@YGXPAU_STRIP@@PAU_BMINFO@@PAU_LINESTATE@@@Z @ 0x23EDDA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vStripStyledHorizontal(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int v4; // edx
  int v5; // ebx
  struct _LINESTATE *v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // edx
  int *v10; // ecx
  _DWORD *v11; // eax
  int *v12; // ecx
  _DWORD *v13; // eax
  char *v14; // [esp+Ch] [ebp-1Ch]
  int v15; // [esp+10h] [ebp-18h]
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h]
  int v18; // [esp+1Ch] [ebp-Ch]
  char *v19; // [esp+20h] [ebp-8h]
  int *v20; // [esp+24h] [ebp-4h]
  struct _LINESTATE *v21; // [esp+38h] [ebp+10h]

  v17 = *((_DWORD *)a1 + 2);
  v14 = (char *)a1 + 4 * *(_DWORD *)a1 + 20;
  v19 = (char *)a1 + 20;
  if ( (*((_BYTE *)a1 + 4) & 8) != 0 )
    v17 = -1 * *((_DWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 4);
  v20 = (int *)*((_DWORD *)a1 + 3);
  v5 = *((_DWORD *)a3 + 5);
  v16 = *(_DWORD *)a3;
  v15 = *((_DWORD *)a3 + 1);
  v6 = (struct _LINESTATE *)*((_DWORD *)a3 + 15);
  v21 = v6;
  do
  {
    v7 = *(_DWORD *)v19;
    v18 = *(_DWORD *)v19;
    do
    {
      if ( !v6 )
      {
        v8 = *(_DWORD *)(*((_DWORD *)a2 + 1) + 4 * v4);
        v7 = v18;
        *v20 = v15 & v8 ^ *v20 & (v16 | ~v8);
      }
      v9 = v4 + 1;
      v5 -= *((_DWORD *)a3 + 2);
      v10 = &v20[v9 >> *((_DWORD *)a2 + 4)];
      v20 = v10;
      v4 = *((_DWORD *)a2 + 5) & v9;
      if ( v5 > 0 )
      {
        v6 = v21;
      }
      else
      {
        *((_DWORD *)a3 + 12) += 4;
        v11 = (_DWORD *)*((_DWORD *)a3 + 12);
        if ( (unsigned int)v11 > *((_DWORD *)a3 + 11) )
        {
          v11 = (_DWORD *)*((_DWORD *)a3 + 10);
          *((_DWORD *)a3 + 12) = v11;
        }
        v5 += *v11;
        v6 = (struct _LINESTATE *)(v21 == 0);
        v21 = v6;
      }
      v18 = --v7;
    }
    while ( v7 );
    v12 = &v10[v17];
    v5 -= *((_DWORD *)a3 + 3);
    v20 = v12;
    if ( v5 <= 0 )
    {
      v13 = (_DWORD *)(*((_DWORD *)a3 + 12) + 4);
      *((_DWORD *)a3 + 12) = v13;
      if ( (unsigned int)v13 > *((_DWORD *)a3 + 11) )
      {
        v13 = (_DWORD *)*((_DWORD *)a3 + 10);
        *((_DWORD *)a3 + 12) = v13;
      }
      v5 += *v13;
      v6 = (struct _LINESTATE *)(v21 == 0);
      v21 = v6;
    }
    v19 += 4;
  }
  while ( v19 != v14 );
  *((_DWORD *)a1 + 4) = v4;
  *((_DWORD *)a1 + 3) = v12;
  *((_DWORD *)a3 + 5) = v5;
  *((_DWORD *)a3 + 15) = v21;
}
