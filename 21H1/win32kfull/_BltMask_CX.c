/*
 * XREFs of _BltMask_CX @ 0x1C42B8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl BltMask_CX(int a1)
{
  char *v2; // edx
  int v3; // esi
  int v4; // ebx
  char v5; // al
  char *v6; // edx
  int v7; // edi
  int result; // eax
  char v9; // cl
  int v10; // [esp+14h] [ebp+8h]
  int v11; // [esp+14h] [ebp+8h]
  char v12; // [esp+16h] [ebp+Ah]

  v10 = 1;
  v2 = *(char **)(a1 + 132);
  v3 = *(_DWORD *)(a1 + 344);
  v4 = *(_DWORD *)(a1 + 352);
  v5 = *v2;
  v6 = v2 + 1;
  v7 = *(_DWORD *)(a1 + 348);
  BYTE2(v10) = v5;
  result = v10 << *(_BYTE *)(a1 + 4);
  v12 = BYTE2(result);
  do
  {
    if ( BYTE1(result) )
    {
      v9 = *v6++;
      v11 = 1;
      BYTE2(v11) = v9;
      result = v11;
    }
    else
    {
      v9 = v12;
    }
    result *= 2;
    *(_BYTE *)(v3 + 3) = -(v9 < 0);
    v3 += v4;
    v12 = BYTE2(result);
  }
  while ( v3 != v7 );
  return result;
}
