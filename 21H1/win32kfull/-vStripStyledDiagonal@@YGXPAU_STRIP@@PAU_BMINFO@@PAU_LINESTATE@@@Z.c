/*
 * XREFs of ?vStripStyledDiagonal@@YGXPAU_STRIP@@PAU_BMINFO@@PAU_LINESTATE@@@Z @ 0x23E991
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vStripStyledDiagonal(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int v3; // edi
  struct _LINESTATE *v4; // edx
  int v5; // ebx
  int v6; // ecx
  int v7; // esi
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // esi
  _DWORD *v12; // eax
  int v13; // ecx
  char *v14; // eax
  bool v15; // cf
  char *v16; // [esp+Ch] [ebp-20h]
  int v17; // [esp+10h] [ebp-1Ch]
  int v18; // [esp+14h] [ebp-18h]
  int *v19; // [esp+18h] [ebp-14h]
  int j; // [esp+1Ch] [ebp-10h]
  int v21; // [esp+1Ch] [ebp-10h]
  BOOL i; // [esp+20h] [ebp-Ch]
  int v23; // [esp+24h] [ebp-8h]
  int *v24; // [esp+28h] [ebp-4h]
  int *v25; // [esp+28h] [ebp-4h]

  v3 = *((_DWORD *)a1 + 2);
  v16 = (char *)a1 + 4 * *(_DWORD *)a1 + 20;
  v19 = (int *)((char *)a1 + 20);
  if ( (*((_BYTE *)a1 + 4) & 8) != 0 )
    v3 = -1 * *((_DWORD *)a1 + 2);
  v4 = a3;
  v24 = (int *)*((_DWORD *)a1 + 3);
  v5 = *((_DWORD *)a3 + 5);
  v23 = *((_DWORD *)a1 + 4);
  v6 = *((_DWORD *)a3 + 15);
  v17 = *((_DWORD *)a3 + 1);
  v18 = *(_DWORD *)a3;
  for ( i = v6; ; v6 = i )
  {
    v7 = v23;
    v8 = *v19;
    for ( j = *v19; ; v8 = j )
    {
      if ( !v6 )
      {
        v9 = *(_DWORD *)(*((_DWORD *)a2 + 1) + 4 * v7);
        v4 = a3;
        *v24 = v17 & v9 ^ *v24 & (v18 | ~v9);
        v6 = i;
        v8 = j;
      }
      j = v8 - 1;
      if ( v8 == 1 )
        break;
      v5 -= *((_DWORD *)v4 + 4);
      if ( v5 <= 0 )
      {
        *((_DWORD *)v4 + 12) += 4;
        v10 = (_DWORD *)*((_DWORD *)v4 + 12);
        if ( (unsigned int)v10 > *((_DWORD *)v4 + 11) )
        {
          v10 = (_DWORD *)*((_DWORD *)v4 + 10);
          *((_DWORD *)v4 + 12) = v10;
        }
        v5 += *v10;
        i = v6 == 0;
      }
      v11 = v7 + 1;
      v25 = &v24[v11 >> *((_DWORD *)a2 + 4)];
      v6 = i;
      v7 = *((_DWORD *)a2 + 5) & v11;
      v24 = &v25[v3];
    }
    v5 -= *((_DWORD *)v4 + 2);
    v23 = v7;
    if ( v5 <= 0 )
    {
      *((_DWORD *)v4 + 12) += 4;
      v12 = (_DWORD *)*((_DWORD *)v4 + 12);
      if ( (unsigned int)v12 > *((_DWORD *)v4 + 11) )
      {
        v12 = (_DWORD *)*((_DWORD *)v4 + 10);
        *((_DWORD *)v4 + 12) = v12;
      }
      v5 += *v12;
      i = v6 == 0;
    }
    if ( (*((_BYTE *)a1 + 4) & 5) != 0 )
    {
      v13 = v7;
      v21 = v3 * 4;
    }
    else
    {
      v13 = *((_DWORD *)a2 + 5) & (v7 + 1);
      v23 = v13;
      v21 = 4 * ((v7 + 1) >> *((_DWORD *)a2 + 4));
    }
    v14 = (char *)v24 + v21;
    v15 = ++v19 < (int *)v16;
    v4 = a3;
    v24 = (int *)((char *)v24 + v21);
    if ( !v15 )
      break;
  }
  *((_DWORD *)a1 + 3) = v14;
  *((_DWORD *)a1 + 4) = v13;
  *((_DWORD *)a3 + 5) = v5;
  *((_DWORD *)a3 + 15) = i;
}
