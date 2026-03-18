/*
 * XREFs of ViThunkApplyThunksCurrentSession @ 0x1409D5EAC
 * Callers:
 *     VfThunkApplyThunks @ 0x1409D5C44 (VfThunkApplyThunks.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14027C310 (RtlImageDirectoryEntryToData.c)
 *     VfTargetDriversGetNode @ 0x14059C8CC (VfTargetDriversGetNode.c)
 *     ViIsDriverSuspectForVerifier @ 0x1409C3CD0 (ViIsDriverSuspectForVerifier.c)
 *     ViThunkReplaceAllSharedExports @ 0x1409D62B8 (ViThunkReplaceAllSharedExports.c)
 *     ViThunkReplaceAllThunkedImports @ 0x1409D6344 (ViThunkReplaceAllThunkedImports.c)
 */

__int64 __fastcall ViThunkApplyThunksCurrentSession(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v5; // r14d
  _DWORD *Node; // rax
  int v7; // edx
  _DWORD *v8; // rsi
  ULONG_PTR v9; // r12
  int v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v11 = 0;
  v5 = 0;
  Node = VfTargetDriversGetNode(v2);
  v8 = Node;
  if ( Node )
  {
    if ( (Node[6] & 1) == 0 )
    {
      LOBYTE(v7) = 1;
      v9 = RtlImageDirectoryEntryToData(v2, v7, 12, (int)&v11);
      if ( v9 )
      {
        if ( v11 )
        {
          if ( a2 )
          {
            _InterlockedExchange(&ViLookasideAlreadyLoadedDrivers, 1);
            _InterlockedExchange(&ViResourcesAlreadyLoadedDrivers, 1);
          }
          ViIsDriverSuspectForVerifier(a1);
          v5 = ViThunkReplaceAllThunkedImports(v9);
          if ( v5 )
            ViThunkReplaceAllSharedExports(v8, a2);
        }
      }
    }
  }
  return v5;
}
