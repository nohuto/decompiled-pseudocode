/*
 * XREFs of ?vStripSolidHorizontal24@@YGXPAU_STRIP@@PAU_BMINFO@@PAU_LINESTATE@@@Z @ 0x23E378
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vStripSolidHorizontal24(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int *v3; // edi
  _BYTE *v4; // ecx
  int v5; // ebx
  int v6; // eax
  int v7; // esi
  char *v8; // [esp+Ch] [ebp-14h]
  int v9; // [esp+18h] [ebp-8h]
  struct _LINESTATE *v10; // [esp+30h] [ebp+10h]

  v3 = (int *)((char *)a1 + 20);
  v9 = 4 * *((_DWORD *)a1 + 2);
  v8 = (char *)a1 + 4 * *(_DWORD *)a1 + 20;
  if ( (*((_BYTE *)a1 + 4) & 8) != 0 )
    v9 = -4 * *((_DWORD *)a1 + 2);
  v4 = (_BYTE *)*((_DWORD *)a1 + 3);
  v5 = *(_DWORD *)a3;
  v6 = *((_DWORD *)a3 + 1);
  v10 = (struct _LINESTATE *)(*(_DWORD *)a3 >> 8);
  do
  {
    v7 = *v3;
    do
    {
      *v4 = v6 ^ v5 & *v4;
      v4[1] = BYTE1(v6) ^ (unsigned __int8)v10 & v4[1];
      v4[2] = BYTE2(v6) ^ v4[2] & BYTE2(v5);
      v4 += 3;
      --v7;
    }
    while ( v7 );
    v4 += v9;
    ++v3;
  }
  while ( v3 < (int *)v8 );
  *((_DWORD *)a1 + 3) = v4;
}
