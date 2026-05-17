/*
 * XREFs of _LdrpFindDelayloadedMethodInDescriptor@12 @ 0x4B32F710
 * Callers:
 *     _LdrQueryOptionalDelayLoadedAPI@16 @ 0x4B32F5D0 (_LdrQueryOptionalDelayLoadedAPI@16.c)
 *     _LdrpFindDelayloadedMethod@12 @ 0x4B32F6A6 (_LdrpFindDelayloadedMethod@12.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall LdrpFindDelayloadedMethodInDescriptor(int a1, int a2, const char *a3)
{
  _DWORD *result; // eax
  int v4; // ebx
  _DWORD *v5; // edi
  int v6; // edx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // [esp+8h] [ebp-8h]

  result = 0;
  v4 = a1 + *(_DWORD *)(a2 + 16);
  v5 = (_DWORD *)(a1 + *(_DWORD *)(a2 + 12));
  v10 = v4;
  v6 = 0;
  if ( *v5 )
  {
    v7 = 0;
    do
    {
      v8 = *(_DWORD *)(v7 + v4);
      if ( v8 >= 0 )
      {
        v9 = strcmp((const char *)(a1 + 2 + v8), a3);
        if ( v9 )
          v9 = v9 < 0 ? -1 : 1;
        if ( !v9 )
          return &v5[v6];
        v4 = v10;
      }
      ++v6;
      v7 = 4 * v6;
    }
    while ( v5[v6] );
  }
  return result;
}
