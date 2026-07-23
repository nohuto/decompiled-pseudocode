/*
 * XREFs of _LdrDisableThreadCalloutsForDll@4 @ 0x4B2E69B0
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpFindLoadedDllByHandle@12 @ 0x4B2CC936 (_LdrpFindLoadedDllByHandle@12.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 */

NTSTATUS __cdecl LdrDisableThreadCalloutsForDll(PVOID DllImageBase)
{
  NTSTATUS LoadedDllByHandle; // esi
  char *v2; // ecx
  int v4; // [esp+8h] [ebp-8h] BYREF
  PVOID BaseAddress; // [esp+Ch] [ebp-4h] BYREF

  LoadedDllByHandle = 0;
  if ( !byte_4B3A5DA8 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(
                          (_RTL_BALANCED_NODE *)DllImageBase,
                          (volatile signed __int32 **)&BaseAddress,
                          &v4);
    if ( LoadedDllByHandle >= 0 )
    {
      v2 = (char *)BaseAddress;
      if ( !*((_WORD *)BaseAddress + 29) )
        *((_BYTE *)BaseAddress + 54) |= 4u;
      LdrpDereferenceModule(v2);
    }
  }
  return LoadedDllByHandle;
}
