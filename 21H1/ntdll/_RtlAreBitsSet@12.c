/*
 * XREFs of _RtlAreBitsSet@12 @ 0x4B2E7AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __stdcall RtlAreBitsSet(int a1, unsigned int a2, unsigned int a3)
{
  int v4; // ecx
  int *v5; // edx
  int v6; // ebx
  int *v8; // [esp+8h] [ebp-4h]

  if ( a2 >= *(_DWORD *)a1 )
    return 0;
  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
      return _bittest(*(const signed __int32 **)(a1 + 4), a2);
    return 0;
  }
  if ( *(_DWORD *)a1 - a2 < a3 )
    return 0;
  v4 = *(_DWORD *)(a1 + 4);
  v5 = (int *)(v4 + 4 * (a2 >> 5));
  v6 = *v5;
  v8 = (int *)(v4 + 4 * ((a2 + a3 - 1) >> 5));
  if ( v5 == v8 )
    return ((0xFFFFFFFF >> (32 - a3) << a2) & v6) == 0xFFFFFFFF >> (32 - a3) << a2;
  if ( ((-1 << a2) & v6) == -1 << a2 )
  {
    while ( ++v5 != v8 )
    {
      if ( *v5 != -1 )
        return 0;
    }
    return ((0xFFFFFFFF >> ~(a2 + a3 - 1)) & *v5) == 0xFFFFFFFF >> ~(a2 + a3 - 1);
  }
  return 0;
}
