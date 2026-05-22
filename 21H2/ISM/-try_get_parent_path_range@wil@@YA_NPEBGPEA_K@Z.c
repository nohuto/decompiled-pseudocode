/*
 * XREFs of ?try_get_parent_path_range@wil@@YA_NPEBGPEA_K@Z @ 0x180096E28
 * Callers:
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x180092F08 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 * Callees:
 *     ?find_last_path_segment@wil@@YAPEBGPEBG@Z @ 0x180096C94 (-find_last_path_segment@wil@@YAPEBGPEBG@Z.c)
 */

char __fastcall wil::try_get_parent_path_range(LPCWSTR lpStringSource, unsigned __int16 *a2, unsigned __int64 *a3)
{
  char v4; // bl
  const unsigned __int16 *v6; // rdx
  __int64 v7; // rax
  PCWSTR ppszRootEnd; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  *(_QWORD *)a2 = 0LL;
  if ( PathCchSkipRoot(lpStringSource, &ppszRootEnd) >= 0 && *ppszRootEnd )
  {
    v7 = wil::find_last_path_segment(lpStringSource, v6) - lpStringSource;
    *(_QWORD *)a2 = v7;
    return v7 != 0;
  }
  return v4;
}
