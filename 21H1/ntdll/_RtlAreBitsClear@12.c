/*
 * XREFs of _RtlAreBitsClear@12 @ 0x4B34E240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __stdcall RtlAreBitsClear(int a1, unsigned int a2, unsigned int a3)
{
  char v3; // dl
  int v4; // ecx
  int *v5; // esi
  int v6; // edx
  int *v7; // esi
  int *v9; // [esp+8h] [ebp-4h]

  if ( a2 >= *(_DWORD *)a1 )
    return 0;
  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
      return _bittest(*(const signed __int32 **)(a1 + 4), a2) == 0;
    return 0;
  }
  if ( *(_DWORD *)a1 - a2 < a3 )
    return 0;
  v4 = *(_DWORD *)(a1 + 4);
  v5 = (int *)(v4 + 4 * (a2 >> 5));
  v6 = *v5;
  v9 = (int *)(v4 + 4 * ((a2 + a3 - 1) >> 5));
  if ( v5 == v9 )
    return ((0xFFFFFFFF >> (32 - a3) << a2) & v6) == 0;
  if ( (v6 & (-1 << a2)) != 0 )
    return 0;
  v7 = v5 + 1;
  if ( v7 == v9 )
    return ((0xFFFFFFFF >> ~(a2 + a3 - 1)) & *v7) == 0;
  v3 = 0;
  while ( !*v7 )
  {
    if ( ++v7 == v9 )
      return ((0xFFFFFFFF >> ~(a2 + a3 - 1)) & *v7) == 0;
  }
  return v3;
}
