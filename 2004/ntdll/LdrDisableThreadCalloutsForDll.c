/*
 * XREFs of LdrDisableThreadCalloutsForDll @ 0x18000EF70
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180010500 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 */

NTSTATUS __cdecl LdrDisableThreadCalloutsForDll(PVOID DllImageBase)
{
  NTSTATUS LoadedDllByHandle; // ebx
  PVOID v2; // rcx
  char v4; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  LoadedDllByHandle = 0;
  if ( !byte_18016A508 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(DllImageBase, &BaseAddress, &v4);
    if ( LoadedDllByHandle >= 0 )
    {
      v2 = BaseAddress;
      if ( !*((_WORD *)BaseAddress + 55) )
        *((_BYTE *)BaseAddress + 106) |= 4u;
      LdrpDereferenceModule(v2);
    }
  }
  return LoadedDllByHandle;
}
