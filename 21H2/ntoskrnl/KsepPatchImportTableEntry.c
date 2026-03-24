/*
 * XREFs of KsepPatchImportTableEntry @ 0x1408C05D0
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x1408C0458 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x14053591C (MmReplaceImportEntry.c)
 */

__int64 __fastcall KsepPatchImportTableEntry(_QWORD *a1, unsigned int a2, __int64 a3, ULONG_PTR a4)
{
  int v4; // eax
  unsigned int v6; // edx
  __int64 v7; // r8

  v4 = 0;
  if ( !a1 || !a2 || !a3 || !a4 )
    return 3221225485LL;
  v6 = a2 >> 3;
  v7 = 0LL;
  if ( v6 )
  {
    while ( *a1 != a3 )
    {
      v7 = (unsigned int)(v7 + 1);
      ++a1;
      if ( (unsigned int)v7 >= v6 )
        return v4 == 0 ? 0xC0000225 : 0;
    }
    MmReplaceImportEntry((ULONG_PTR)a1, a4, v7, a4);
    v4 = 1;
  }
  return v4 == 0 ? 0xC0000225 : 0;
}
