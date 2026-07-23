/*
 * XREFs of _LdrIsModuleSxsRedirected@4 @ 0x4B32E8A0
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpFindLoadedDllByHandle@12 @ 0x4B2CC936 (_LdrpFindLoadedDllByHandle@12.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 */

BOOLEAN __cdecl LdrIsModuleSxsRedirected(PVOID DllHandle)
{
  BOOLEAN v1; // bl
  int v2; // ebx
  PVOID BaseAddress; // [esp+4h] [ebp-4h] BYREF

  v1 = 0;
  if ( LdrpFindLoadedDllByHandle((_RTL_BALANCED_NODE *)DllHandle, (volatile signed __int32 **)&BaseAddress, 0) >= 0 )
  {
    v2 = *((_DWORD *)BaseAddress + 13);
    LdrpDereferenceModule((char *)BaseAddress);
    return (v2 & 0x10000000) != 0;
  }
  return v1;
}
