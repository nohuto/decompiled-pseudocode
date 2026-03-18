/*
 * XREFs of MiDecrementSubsections @ 0x140286920
 * Callers:
 *     MiDecrementSubsection @ 0x14023F9CC (MiDecrementSubsection.c)
 *     MiReleaseFaultCharges @ 0x140250924 (MiReleaseFaultCharges.c)
 *     MmPurgeSection @ 0x14027F360 (MmPurgeSection.c)
 *     MiFlushRelease @ 0x1402867DC (MiFlushRelease.c)
 *     MiUnmapViewSubsections @ 0x1402875B0 (MiUnmapViewSubsections.c)
 *     MiDecrementPartialVadSubsections @ 0x1402ED0C4 (MiDecrementPartialVadSubsections.c)
 *     MiAddViewsForSection @ 0x140311CC0 (MiAddViewsForSection.c)
 *     MiUpControlAreaRefs @ 0x14058C330 (MiUpControlAreaRefs.c)
 *     MiUpdateActiveSubsection @ 0x140597C48 (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x140220AAC (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x1402869C0 (MiDecrementSubsectionViewCount.c)
 */

__int64 __fastcall MiDecrementSubsections(ULONG_PTR BugCheckParameter2, __int64 a2, int a3)
{
  ULONG_PTR v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rsi

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
    if ( !v7 )
      a3 &= ~8u;
  }
  while ( v5 );
  return v6;
}
