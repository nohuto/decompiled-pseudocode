/*
 * XREFs of ?vStripSolidDiagonal24@@YGXPAU_STRIP@@PAU_BMINFO@@PAU_LINESTATE@@@Z @ 0x23E0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vStripSolidDiagonal24(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  struct _STRIP *v3; // edx
  int *v4; // edi
  int v5; // esi
  _BYTE *v6; // ecx
  int v7; // ebx
  int v8; // eax
  int v9; // edx
  _BYTE *v10; // ecx
  char *v11; // [esp+Ch] [ebp-18h]
  int v12; // [esp+1Ch] [ebp-8h]
  int v13; // [esp+1Ch] [ebp-8h]
  struct _LINESTATE *v14; // [esp+34h] [ebp+10h]

  v3 = a1;
  v4 = (int *)((char *)a1 + 20);
  v5 = 4 * *((_DWORD *)a1 + 2);
  v11 = (char *)a1 + 4 * *(_DWORD *)a1 + 20;
  if ( (*((_BYTE *)a1 + 4) & 8) != 0 )
    v5 = -4 * *((_DWORD *)a1 + 2);
  v6 = (_BYTE *)*((_DWORD *)a1 + 3);
  v7 = *((_DWORD *)a3 + 1);
  v8 = *(_DWORD *)a3;
  v14 = (struct _LINESTATE *)(*(_DWORD *)a3 >> 8);
  do
  {
    v12 = *v4;
    *v6 = v7 ^ v8 & *v6;
    v6[1] = BYTE1(v7) ^ (unsigned __int8)v14 & v6[1];
    v6[2] = BYTE2(v7) ^ BYTE2(v8) & v6[2];
    v6 += 3;
    v13 = v12 - 1;
    if ( v13 )
    {
      v9 = v13;
      do
      {
        v10 = &v6[v5];
        *v10 = v7 ^ v8 & *v10;
        v10[1] = BYTE1(v7) ^ (unsigned __int8)v14 & v10[1];
        v10[2] = BYTE2(v7) ^ BYTE2(v8) & v10[2];
        v6 = v10 + 3;
        --v9;
      }
      while ( v9 );
      v3 = a1;
    }
    if ( (*((_BYTE *)v3 + 4) & 5) != 0 )
      v6 = &v6[v5 - 3];
    ++v4;
  }
  while ( v4 < (int *)v11 );
  *((_DWORD *)v3 + 3) = v6;
}
