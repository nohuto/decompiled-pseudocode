/*
 * XREFs of ?vStripSolidHorizontal@@YGXPAU_STRIP@@PAU_BMINFO@@PAU_LINESTATE@@@Z @ 0x23E411
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vStripSolidHorizontal(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // ecx
  int v4; // edi
  unsigned int *v5; // esi
  int v6; // edx
  int v7; // ebx
  int v8; // edx
  int v9; // ecx
  unsigned int v10; // ebx
  char *v11; // [esp+Ch] [ebp-18h]
  char *v12; // [esp+10h] [ebp-14h]
  unsigned int v13; // [esp+14h] [ebp-10h]
  unsigned int v14; // [esp+18h] [ebp-Ch]
  int v15; // [esp+20h] [ebp-4h]
  struct _LINESTATE *v16; // [esp+34h] [ebp+10h]

  v3 = (char *)a1 + 20;
  v4 = 4 * *((_DWORD *)a1 + 2);
  v12 = (char *)a1 + 20;
  v11 = (char *)a1 + 4 * *(_DWORD *)a1 + 20;
  if ( (*((_BYTE *)a1 + 4) & 8) != 0 )
    v4 = -4 * *((_DWORD *)a1 + 2);
  v5 = (unsigned int *)*((_DWORD *)a1 + 3);
  v6 = *((_DWORD *)a1 + 4);
  v15 = *((_DWORD *)a3 + 1);
  v16 = *(struct _LINESTATE **)a3;
  v7 = *(_DWORD *)(*(_DWORD *)a2 + 4 * v6);
  do
  {
    v8 = *(_DWORD *)v3 + v6;
    v13 = v8 >> *((_DWORD *)a2 + 4);
    v6 = *((_DWORD *)a2 + 5) & v8;
    v9 = ~*(_DWORD *)(*(_DWORD *)a2 + 4 * v6);
    v14 = *v5;
    if ( v13 )
    {
      *v5++ = v15 & v7 ^ v14 & ((unsigned int)v16 | ~v7);
      if ( v13 > 1 )
      {
        v10 = v13 - 1;
        do
        {
          *v5 = v15 ^ (unsigned int)v16 & *v5;
          ++v5;
          --v10;
        }
        while ( v10 );
      }
      if ( v9 )
        *v5 = v15 & v9 ^ *v5 & ((unsigned int)v16 | ~v9);
    }
    else
    {
      *v5 = v15 & v7 & v9 ^ v14 & ((unsigned int)v16 | ~(v7 & v9));
    }
    v5 = (unsigned int *)((char *)v5 + v4);
    v7 = ~v9;
    v3 = v12 + 4;
    v12 = v3;
  }
  while ( v3 < v11 );
  *((_DWORD *)a1 + 3) = v5;
  *((_DWORD *)a1 + 4) = v6;
}
