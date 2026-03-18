/*
 * XREFs of _TileAV_CY @ 0x1C6037
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl TileAV_CY(_DWORD *a1)
{
  unsigned int v1; // edi
  _BYTE *v2; // esi
  _BYTE *v3; // ebx
  int v4; // ecx
  unsigned int v5; // edx
  char v6; // al
  int result; // eax
  unsigned int v8; // [esp+Ch] [ebp-8h]

  v1 = a1[39];
  v2 = (_BYTE *)a1[54];
  v3 = (_BYTE *)a1[55];
  v8 = v1 + 4 * a1[8];
  v4 = a1[56];
  v5 = v1 + 4 * *(_DWORD *)(a1[47] + 24);
  do
  {
    v6 = *(_BYTE *)(v5 + 3);
    v5 += 4;
    *v2 = v6;
    if ( v5 >= v8 )
      v5 = v1;
    v2 += v4;
  }
  while ( v2 != v3 );
  result = --a1[40];
  if ( result <= 0 )
  {
    a1[39] = a1[5];
    result = a1[6];
    a1[40] = result;
  }
  return result;
}
