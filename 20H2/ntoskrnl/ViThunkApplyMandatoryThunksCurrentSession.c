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
  void *v2; // rcx
  char *v4; // rbx
  ULONG v5; // eax
  ULONG v6; // eax
  __int64 v7; // rdi
  ULONG Size; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(void **)(a1 + 48);
  Size = 0;
  v4 = (char *)RtlImageDirectoryEntryToData(v2, 1u, 0xCu, &Size);
  if ( v4 )
  {
    v5 = Size;
    if ( Size )
    {
      if ( a2 )
      {
        _InterlockedExchange(&ViLookasideAlreadyLoadedDrivers, 1);
        _InterlockedExchange(&ViResourcesAlreadyLoadedDrivers, 1);
        v5 = Size;
      }
      v6 = v5 >> 3;
      if ( v6 )
      {
        v7 = v6;
        do
        {
          ViThunkReplaceImportIfThunkedRegular((ULONG_PTR)v4);
          v4 += 8;
          --v7;
        }
        while ( v7 );
      }
    }
  }
  return 1LL;
}
