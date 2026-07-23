/*
 * XREFs of _LdrpFreeLoadContextOfNode@8 @ 0x4B2DDEB6
 * Callers:
 *     _LdrpLoadDllInternal@32 @ 0x4B2CE104 (_LdrpLoadDllInternal@32.c)
 *     _LdrpFreeLoadContextOfNode@8 @ 0x4B2DDEB6 (_LdrpFreeLoadContextOfNode@8.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _LdrpFreeLoadContextOfNode@8 @ 0x4B2DDEB6 (_LdrpFreeLoadContextOfNode@8.c)
 *     _LdrpFreeLoadContext@4 @ 0x4B2DDF0E (_LdrpFreeLoadContext@4.c)
 */

int __fastcall LdrpFreeLoadContextOfNode(_DWORD *a1, int a2)
{
  int v4; // esi
  int result; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // esi

  v4 = *a1 - 84;
  result = *(_DWORD *)(v4 + 92);
  if ( result && *(_DWORD *)(result + 24) == a2 )
  {
    while ( 1 )
    {
      LdrpFreeLoadContext(*(PVOID *)(v4 + 92));
      v6 = *(_DWORD **)(v4 + 84);
      if ( a1 == v6 )
        break;
      v4 = (int)(v6 - 21);
    }
    result = *(_DWORD *)(v4 + 80);
    v7 = *(_DWORD **)(result + 24);
    if ( v7 )
    {
      v8 = *(_DWORD **)(result + 24);
      do
      {
        v8 = (_DWORD *)*v8;
        result = LdrpFreeLoadContextOfNode(v8[1], a2);
      }
      while ( v8 != v7 );
    }
  }
  return result;
}
