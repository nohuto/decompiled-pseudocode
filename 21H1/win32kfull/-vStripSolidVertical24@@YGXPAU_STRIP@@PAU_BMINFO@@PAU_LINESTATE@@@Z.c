/*
 * XREFs of ?vStripSolidVertical24@@YGXPAU_STRIP@@PAU_BMINFO@@PAU_LINESTATE@@@Z @ 0x23E5F6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vStripSolidVertical24(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // edi
  int v4; // esi
  int v5; // esi
  _BYTE *v6; // ecx
  int v7; // ebx
  int v8; // eax
  int v9; // edx
  _BYTE *v10; // ecx
  char *v11; // [esp+Ch] [ebp-14h]
  struct _LINESTATE *v12; // [esp+30h] [ebp+10h]

  v3 = (char *)a1 + 20;
  v4 = 4 * *((_DWORD *)a1 + 2);
  v11 = (char *)a1 + 4 * *(_DWORD *)a1 + 20;
  if ( (*((_BYTE *)a1 + 4) & 8) != 0 )
    v4 = -4 * *((_DWORD *)a1 + 2);
  v5 = v4 - 2;
  v6 = (_BYTE *)*((_DWORD *)a1 + 3);
  v7 = *((_DWORD *)a3 + 1);
  v8 = *(_DWORD *)a3;
  v12 = (struct _LINESTATE *)(*(_DWORD *)a3 >> 8);
  do
  {
    v9 = *(_DWORD *)v3;
    do
    {
      *v6 = v7 ^ v8 & *v6;
      v6[1] = BYTE1(v7) ^ (unsigned __int8)v12 & v6[1];
      v10 = v6 + 2;
      *v10 = BYTE2(v7) ^ BYTE2(v8) & *v10;
      v6 = &v10[v5];
      --v9;
    }
    while ( v9 );
    v3 += 4;
    v6 += 3;
  }
  while ( v3 < v11 );
  *((_DWORD *)a1 + 3) = v6;
}
