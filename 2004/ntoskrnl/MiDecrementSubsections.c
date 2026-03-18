/*
 * XREFs of MiDecrementSubsections @ 0x14024A2C0
 * Callers:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiAddViewsForSection @ 0x140248C90 (MiAddViewsForSection.c)
 *     MiFlushRelease @ 0x14024A218 (MiFlushRelease.c)
 *     MiDeletePartialVad @ 0x140251734 (MiDeletePartialVad.c)
 *     MmPurgeSection @ 0x14031FBF0 (MmPurgeSection.c)
 *     MiDecrementSubsection @ 0x140320E6C (MiDecrementSubsection.c)
 *     MiReleaseFaultCharges @ 0x1403573CC (MiReleaseFaultCharges.c)
 *     MiUpControlAreaRefs @ 0x1405256A0 (MiUpControlAreaRefs.c)
 *     MiUpdateActiveSubsection @ 0x140537A10 (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x14024A370 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsection @ 0x14024C2B0 (MiInsertUnusedSubsection.c)
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
