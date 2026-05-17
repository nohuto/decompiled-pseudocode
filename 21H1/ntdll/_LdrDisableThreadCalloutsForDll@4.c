/*
 * XREFs of _LdrDisableThreadCalloutsForDll@4 @ 0x4B2E69B0
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpFindLoadedDllByHandle@12 @ 0x4B2CC936 (_LdrpFindLoadedDllByHandle@12.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 */

int __stdcall LdrDisableThreadCalloutsForDll(unsigned int a1)
{
  int LoadedDllByHandle; // esi
  int v2; // ecx
  int v4; // [esp+8h] [ebp-8h] BYREF
  int v5; // [esp+Ch] [ebp-4h] BYREF

  LoadedDllByHandle = 0;
  if ( !byte_4B3A5DA8 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v5, &v4);
    if ( LoadedDllByHandle >= 0 )
    {
      v2 = v5;
      if ( !*(_WORD *)(v5 + 58) )
        *(_BYTE *)(v5 + 54) |= 4u;
      LdrpDereferenceModule(v2);
    }
  }
  return LoadedDllByHandle;
}
