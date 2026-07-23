/*
 * XREFs of VfThunkApplyDriverAddedThunks @ 0x1409D5A34
 * Callers:
 *     ViDriverReApplyVerifierForAll @ 0x1409C5AE8 (ViDriverReApplyVerifierForAll.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14033AA90 (RtlImageDirectoryEntryToData.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ViThunkFindAllSpecialTables @ 0x1409D601C (ViThunkFindAllSpecialTables.c)
 *     ViThunkReplaceImportEntry @ 0x1409D6400 (ViThunkReplaceImportEntry.c)
 */

__int64 __fastcall VfThunkApplyDriverAddedThunks(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 *AllSpecialTables; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  int v8; // ecx
  ULONG v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(void **)(a1 + 48);
  v9 = 0;
  result = (__int64)RtlImageDirectoryEntryToData(v1, 1u, 0xCu, &v9);
  v3 = result;
  if ( result )
  {
    v4 = v9 >> 3;
    AllSpecialTables = (__int64 *)ViThunkFindAllSpecialTables(result, v4);
    if ( (_DWORD)v4 )
    {
      do
      {
        if ( !AllSpecialTables )
          goto LABEL_8;
        v6 = *AllSpecialTables;
        LODWORD(v7) = 0;
        if ( !*AllSpecialTables )
          goto LABEL_8;
        do
        {
          v8 = ViThunkReplaceImportEntry(v6 + 24, v3);
          if ( v8 == 1 )
            break;
          v7 = (unsigned int)(v7 + 1);
          v6 = AllSpecialTables[v7];
        }
        while ( v6 );
        if ( !v8 )
LABEL_8:
          ViThunkReplaceImportEntry(&ViVerifierDriverAddedThunkListHead, v3);
        v3 += 8LL;
        --v4;
      }
      while ( v4 );
    }
    if ( AllSpecialTables )
      ExFreePoolWithTag(AllSpecialTables, 0);
    return 1LL;
  }
  return result;
}
