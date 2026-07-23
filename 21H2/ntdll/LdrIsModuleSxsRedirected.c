/*
 * XREFs of LdrIsModuleSxsRedirected @ 0x1800CDFA0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180010500 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 */

BOOLEAN __cdecl LdrIsModuleSxsRedirected(PVOID DllHandle)
{
  BOOLEAN v1; // bl
  int v2; // ebx
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  if ( (int)LdrpFindLoadedDllByHandle((unsigned __int64)DllHandle, (volatile signed __int32 **)&BaseAddress, 0LL) >= 0 )
  {
    v2 = *((_DWORD *)BaseAddress + 26);
    LdrpDereferenceModule((char *)BaseAddress);
    return (v2 & 0x10000000) != 0;
  }
  return v1;
}
