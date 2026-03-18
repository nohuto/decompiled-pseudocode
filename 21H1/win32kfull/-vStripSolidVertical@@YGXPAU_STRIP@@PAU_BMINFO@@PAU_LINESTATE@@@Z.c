/*
 * XREFs of ?vStripSolidVertical@@YGXPAU_STRIP@@PAU_BMINFO@@PAU_LINESTATE@@@Z @ 0x23E690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vStripSolidVertical(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // ecx
  int v4; // esi
  int v5; // edi
  int *v6; // ebx
  int v7; // eax
  struct _BMINFO *v8; // edx
  int v9; // edx
  int v10; // edi
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  char *v14; // [esp+Ch] [ebp-14h]
  int v15; // [esp+14h] [ebp-Ch]
  char *v16; // [esp+18h] [ebp-8h]
  int v17; // [esp+1Ch] [ebp-4h]
  struct _LINESTATE *v18; // [esp+30h] [ebp+10h]

  v3 = (char *)a1 + 20;
  v4 = 4 * *((_DWORD *)a1 + 2);
  v16 = (char *)a1 + 20;
  v14 = (char *)a1 + 4 * *(_DWORD *)a1 + 20;
  if ( (*((_BYTE *)a1 + 4) & 8) != 0 )
    v4 = -4 * *((_DWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 4);
  v6 = (int *)*((_DWORD *)a1 + 3);
  v17 = v5;
  v7 = *(_DWORD *)a3;
  v18 = (struct _LINESTATE *)*((_DWORD *)a3 + 1);
  v8 = a2;
  v15 = v7;
  do
  {
    v9 = *(_DWORD *)(*((_DWORD *)v8 + 1) + 4 * v5);
    v10 = *(_DWORD *)v3;
    v11 = (unsigned int)v18 & v9;
    v12 = v15 | ~v9;
    do
    {
      *v6 = v11 ^ *v6 & v12;
      v6 = (int *)((char *)v6 + v4);
      --v10;
    }
    while ( v10 );
    v8 = a2;
    v5 = *((_DWORD *)a2 + 5) & (v17 + 1);
    v13 = (v17 + 1) >> *((_DWORD *)a2 + 4);
    v3 = v16 + 4;
    v17 = v5;
    v16 = v3;
    v6 += v13;
  }
  while ( v3 < v14 );
  *((_DWORD *)a1 + 4) = v5;
  *((_DWORD *)a1 + 3) = v6;
}
