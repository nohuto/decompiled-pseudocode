/*
 * XREFs of ViThunkApplyThunksCurrentSession @ 0x1409DBECC
 * Callers:
 *     VfThunkApplyThunks @ 0x1409DBC64 (VfThunkApplyThunks.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402FD940 (RtlImageDirectoryEntryToData.c)
 *     VfTargetDriversGetNode @ 0x1405A036C (VfTargetDriversGetNode.c)
 *     ViIsDriverSuspectForVerifier @ 0x1409C9CF0 (ViIsDriverSuspectForVerifier.c)
 *     ViThunkReplaceAllSharedExports @ 0x1409DC2D8 (ViThunkReplaceAllSharedExports.c)
 *     ViThunkReplaceAllThunkedImports @ 0x1409DC364 (ViThunkReplaceAllThunkedImports.c)
 */

__int64 __fastcall ViThunkApplyThunksCurrentSession(__int64 a1, unsigned int a2)
{
  void *v2; // rdi
  unsigned int v5; // r14d
  _DWORD *Node; // rax
  _DWORD *v7; // rsi
  PVOID v8; // r12
  ULONG Size; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(void **)(a1 + 48);
  Size = 0;
  v5 = 0;
  Node = VfTargetDriversGetNode((unsigned __int64)v2);
  v7 = Node;
  if ( Node )
  {
    if ( (Node[6] & 1) == 0 )
    {
      v8 = RtlImageDirectoryEntryToData(v2, 1u, 0xCu, &Size);
      if ( v8 )
      {
        if ( Size )
        {
          if ( a2 )
          {
            _InterlockedExchange(&ViLookasideAlreadyLoadedDrivers, 1);
            _InterlockedExchange(&ViResourcesAlreadyLoadedDrivers, 1);
          }
          ViIsDriverSuspectForVerifier(a1);
          v5 = ViThunkReplaceAllThunkedImports((ULONG_PTR)v8);
          if ( v5 )
            ViThunkReplaceAllSharedExports(v7, a2);
        }
      }
    }
  }
  return v5;
}
