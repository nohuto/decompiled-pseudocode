/*
 * XREFs of _LdrSetImplicitPathOptions@8 @ 0x4B32EF60
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpFindLoadedDllByHandle@12 @ 0x4B2CC936 (_LdrpFindLoadedDllByHandle@12.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpValidPathComponentsMask@0 @ 0x4B2D011D (_LdrpValidPathComponentsMask@0.c)
 */

int __stdcall LdrSetImplicitPathOptions(unsigned int a1, int a2)
{
  int LoadedDllByHandle; // edi
  int v3; // ecx
  int v5; // [esp+4h] [ebp-8h] BYREF
  int v6; // [esp+8h] [ebp-4h] BYREF

  if ( (~LdrpValidPathComponentsMask() & a2) != 0 || !a2 )
    return -1073741811;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v6, &v5);
  if ( LoadedDllByHandle >= 0 )
  {
    v3 = v6;
    *(_DWORD *)(v6 + 152) = a2;
    LdrpDereferenceModule(v3);
  }
  return LoadedDllByHandle;
}
