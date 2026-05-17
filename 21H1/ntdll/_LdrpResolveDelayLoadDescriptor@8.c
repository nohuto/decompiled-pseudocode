/*
 * XREFs of _LdrpResolveDelayLoadDescriptor@8 @ 0x4B2CE4C8
 * Callers:
 *     _LdrpSnapKernelBaseExtensions@0 @ 0x4B2CE517 (_LdrpSnapKernelBaseExtensions@0.c)
 *     _LdrResolveDelayLoadsFromDll@12 @ 0x4B32F670 (_LdrResolveDelayLoadsFromDll@12.c)
 * Callees:
 *     _LdrResolveDelayLoadedAPI@24 @ 0x4B2CCA20 (_LdrResolveDelayLoadedAPI@24.c)
 */

int __fastcall LdrpResolveDelayLoadDescriptor(_BYTE *a1, int a2)
{
  _DWORD *v2; // ebx
  int v3; // esi
  int v4; // edi
  char *v5; // eax
  _BYTE *v7; // [esp+10h] [ebp-8h]
  int v8; // [esp+14h] [ebp-4h]

  v2 = &a1[*(_DWORD *)(a2 + 12)];
  v8 = a2;
  v3 = 0;
  v7 = a1;
  v4 = 0;
  if ( *v2 )
  {
    v5 = &a1[*(_DWORD *)(a2 + 12)];
    do
    {
      if ( !LdrResolveDelayLoadedAPI(a1, (_BYTE *)a2, 0, 0, v5, 0) )
        v4 = -1073740782;
      a2 = v8;
      ++v3;
      a1 = v7;
      v5 = (char *)&v2[v3];
    }
    while ( *(_DWORD *)v5 );
  }
  return v4;
}
