/*
 * XREFs of MiRemoveViewsFromSection @ 0x140286884
 * Callers:
 *     MiRemoveMappedPtes @ 0x140274860 (MiRemoveMappedPtes.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140283DF0 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiConvertStaticSubsections @ 0x14028AED4 (MiConvertStaticSubsections.c)
 *     MmUnmapViewInSystemCache @ 0x140335870 (MmUnmapViewInSystemCache.c)
 *     MiRemoveSystemCacheReferences @ 0x140592278 (MiRemoveSystemCacheReferences.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x140220AAC (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x1402869C0 (MiDecrementSubsectionViewCount.c)
 */

__int64 __fastcall MiRemoveViewsFromSection(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3)
{
  ULONG_PTR v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r14
  unsigned __int64 v8; // rax

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
    if ( !v7 )
      a3 &= ~8u;
  }
  while ( v5 );
  return v6;
}
