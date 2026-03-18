/*
 * XREFs of MiDecrementSubsections @ 0x1402A32F0
 * Callers:
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiAddViewsForSection @ 0x1402A1CC0 (MiAddViewsForSection.c)
 *     MiFlushRelease @ 0x1402A3248 (MiFlushRelease.c)
 *     MiDeletePartialVad @ 0x1402AA764 (MiDeletePartialVad.c)
 *     MmPurgeSection @ 0x1402CF7C0 (MmPurgeSection.c)
 *     MiDecrementSubsection @ 0x1402D02E8 (MiDecrementSubsection.c)
 *     MiReleaseFaultCharges @ 0x1403197DC (MiReleaseFaultCharges.c)
 *     MiUpControlAreaRefs @ 0x140525050 (MiUpControlAreaRefs.c)
 *     MiUpdateActiveSubsection @ 0x1405373C0 (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x1402A33A0 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsection @ 0x1402A52E0 (MiInsertUnusedSubsection.c)
 */

__int64 __fastcall MiDecrementSubsections(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3)
{
  ULONG_PTR v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rbp
  unsigned int v8; // ecx

  v5 = BugCheckParameter2;
  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)BugCheckParameter2 + 64LL);
  do
  {
    if ( *(_QWORD *)(v5 + 8) )
    {
      v6 += MiDecrementSubsectionViewCount(v5);
      if ( v7 )
      {
        if ( !*(_QWORD *)(v5 + 96) && (*(_BYTE *)(v5 + 34) & 1) == 0 )
          v6 += MiInsertUnusedSubsection(v5);
      }
    }
    if ( v5 == a2 )
      break;
    v5 = *(_QWORD *)(v5 + 16);
    v8 = a3 & 0xFFFFFFF7;
    if ( v7 )
      v8 = a3;
    a3 = v8;
  }
  while ( v5 );
  return v6;
}
