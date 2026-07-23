/*
 * XREFs of _LdrSetImplicitPathOptions@8 @ 0x4B32EF60
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpFindLoadedDllByHandle@12 @ 0x4B2CC936 (_LdrpFindLoadedDllByHandle@12.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpValidPathComponentsMask@0 @ 0x4B2D011D (_LdrpValidPathComponentsMask@0.c)
 */

NTSTATUS __cdecl LdrSetImplicitPathOptions(ULONG ImplicitPathOptions)
{
  NTSTATUS LoadedDllByHandle; // edi
  char *v2; // ecx
  int v4; // [esp+4h] [ebp-8h] BYREF
  PVOID BaseAddress; // [esp+8h] [ebp-4h] BYREF
  int v6; // [esp+18h] [ebp+Ch]

  if ( (~LdrpValidPathComponentsMask() & v6) != 0 || !v6 )
    return -1073741811;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(
                        (_RTL_BALANCED_NODE *)ImplicitPathOptions,
                        (volatile signed __int32 **)&BaseAddress,
                        &v4);
  if ( LoadedDllByHandle >= 0 )
  {
    v2 = (char *)BaseAddress;
    *((_DWORD *)BaseAddress + 38) = v6;
    LdrpDereferenceModule(v2);
  }
  return LoadedDllByHandle;
}
