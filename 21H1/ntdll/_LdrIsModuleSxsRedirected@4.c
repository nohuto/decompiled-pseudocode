/*
 * XREFs of _LdrIsModuleSxsRedirected@4 @ 0x4B32E8A0
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpFindLoadedDllByHandle@12 @ 0x4B2CC936 (_LdrpFindLoadedDllByHandle@12.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 */

bool __stdcall LdrIsModuleSxsRedirected(unsigned int a1)
{
  char v1; // bl
  int v2; // ebx
  int v4; // [esp+4h] [ebp-4h] BYREF

  v1 = 0;
  if ( LdrpFindLoadedDllByHandle(a1, &v4, 0) >= 0 )
  {
    v2 = *(_DWORD *)(v4 + 52);
    LdrpDereferenceModule(v4);
    return (v2 & 0x10000000) != 0;
  }
  return v1;
}
