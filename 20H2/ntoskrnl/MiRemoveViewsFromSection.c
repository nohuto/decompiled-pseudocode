/*
 * XREFs of MiRemoveViewsFromSection @ 0x14022BD2C
 * Callers:
 *     MiRemoveViewsFromSectionWithPfn @ 0x14024E10C (MiRemoveViewsFromSectionWithPfn.c)
 *     MmUnmapViewInSystemCache @ 0x14029B2F0 (MmUnmapViewInSystemCache.c)
 *     MiRemoveMappedPtes @ 0x1402CF020 (MiRemoveMappedPtes.c)
 *     MiConvertStaticSubsections @ 0x140315F88 (MiConvertStaticSubsections.c)
 *     MiRemoveSystemCacheReferences @ 0x140535950 (MiRemoveSystemCacheReferences.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x14022BF20 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsection @ 0x140300AC0 (MiInsertUnusedSubsection.c)
 */

__int64 __fastcall MiRemoveViewsFromSection(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, unsigned int a3)
{
  ULONG_PTR v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r14
  unsigned __int64 v8; // rax
  unsigned int v10; // ecx

  v5 = BugCheckParameter2;
  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)BugCheckParameter2 + 64LL);
  do
  {
    v6 += MiDecrementSubsectionViewCount(v5);
    if ( v7 && !*(_QWORD *)(v5 + 96) && (*(_BYTE *)(v5 + 34) & 1) == 0 )
      v6 += MiInsertUnusedSubsection(v5);
    if ( a2 )
    {
      v8 = *(unsigned int *)(v5 + 44);
      if ( a2 <= v8 )
        return v6;
      a2 -= v8;
    }
    v5 = *(_QWORD *)(v5 + 16);
    v10 = a3 & 0xFFFFFFF7;
    if ( v7 )
      v10 = a3;
    a3 = v10;
  }
  while ( v5 );
  return v6;
}
