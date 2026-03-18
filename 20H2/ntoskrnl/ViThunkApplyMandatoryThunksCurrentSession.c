/*
 * XREFs of ViThunkApplyMandatoryThunksCurrentSession @ 0x1409DBE3C
 * Callers:
 *     VfThunkApplyMandatoryThunks @ 0x1409DBB7C (VfThunkApplyMandatoryThunks.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402FD940 (RtlImageDirectoryEntryToData.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x1409DC5D4 (ViThunkReplaceImportIfThunkedRegular.c)
 */

__int64 __fastcall ViThunkApplyMandatoryThunksCurrentSession(__int64 a1, int a2)
{
  __int64 v2; // rcx
  int v3; // edi
  ULONG_PTR v4; // rbx
  unsigned int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // rdi
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v9 = 0;
  v3 = a2;
  LOBYTE(a2) = 1;
  v4 = RtlImageDirectoryEntryToData(v2, a2, 12, (int)&v9);
  if ( v4 )
  {
    v5 = v9;
    if ( v9 )
    {
      if ( v3 )
      {
        _InterlockedExchange(&ViLookasideAlreadyLoadedDrivers, 1);
        _InterlockedExchange(&ViResourcesAlreadyLoadedDrivers, 1);
        v5 = v9;
      }
      v6 = v5 >> 3;
      if ( v6 )
      {
        v7 = v6;
        do
        {
          ViThunkReplaceImportIfThunkedRegular(v4);
          v4 += 8LL;
          --v7;
        }
        while ( v7 );
      }
    }
  }
  return 1LL;
}
