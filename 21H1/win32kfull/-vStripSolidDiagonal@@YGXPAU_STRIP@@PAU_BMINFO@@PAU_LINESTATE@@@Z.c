/*
 * XREFs of ?vStripSolidDiagonal@@YGXPAU_STRIP@@PAU_BMINFO@@PAU_LINESTATE@@@Z @ 0x23E181
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vStripSolidDiagonal(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  struct _STRIP *v3; // edx
  int v4; // edi
  int v5; // esi
  int *v6; // ebx
  char *v7; // ecx
  int v8; // eax
  bool v9; // zf
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // esi
  int v14; // eax
  char *v15; // [esp+Ch] [ebp-10h]
  int v16; // [esp+10h] [ebp-Ch]
  int v17; // [esp+14h] [ebp-8h]
  char *v18; // [esp+18h] [ebp-4h]
  struct _LINESTATE *v19; // [esp+2Ch] [ebp+10h]

  v3 = a1;
  v4 = 4 * *((_DWORD *)a1 + 2);
  v18 = (char *)a1 + 20;
  v15 = (char *)a1 + 4 * *(_DWORD *)a1 + 20;
  if ( (*((_BYTE *)a1 + 4) & 8) != 0 )
    v4 = -4 * *((_DWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 4);
  v6 = (int *)*((_DWORD *)a1 + 3);
  v16 = *((_DWORD *)a3 + 1);
  v7 = (char *)a1 + 20;
  v17 = *(_DWORD *)a3;
  do
  {
    v8 = *(_DWORD *)(*((_DWORD *)a2 + 1) + 4 * v5);
    v9 = *(_DWORD *)v7 == 1;
    v19 = (struct _LINESTATE *)(*(_DWORD *)v7 - 1);
    *v6 = v16 & v8 ^ *v6 & (v17 | ~v8);
    if ( !v9 )
    {
      do
      {
        v10 = v5 + 1;
        v5 = *((_DWORD *)a2 + 5) & (v5 + 1);
        v6 = (int *)((char *)v6 + 4 * (v10 >> *((_DWORD *)a2 + 4)) + v4);
        v11 = *(_DWORD *)(*((_DWORD *)a2 + 1) + 4 * v5);
        v9 = v19 == (struct _LINESTATE *)1;
        v19 = (struct _LINESTATE *)((char *)v19 - 1);
        *v6 = v16 & v11 ^ *v6 & (v17 | ~v11);
      }
      while ( !v9 );
      v3 = a1;
    }
    if ( (*((_BYTE *)v3 + 4) & 5) != 0 )
    {
      v12 = v4;
    }
    else
    {
      v13 = v5 + 1;
      v14 = v13 >> *((_DWORD *)a2 + 4);
      v5 = *((_DWORD *)a2 + 5) & v13;
      v12 = 4 * v14;
    }
    v6 = (int *)((char *)v6 + v12);
    v7 = v18 + 4;
    v18 = v7;
  }
  while ( v7 < v15 );
  *((_DWORD *)v3 + 4) = v5;
  *((_DWORD *)v3 + 3) = v6;
}
