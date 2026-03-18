/*
 * XREFs of MiReferenceSubsection @ 0x14022C6BC
 * Callers:
 *     MiComputeDataFlushRange @ 0x14022C420 (MiComputeDataFlushRange.c)
 *     MiPreventControlAreaDeletion @ 0x14031F630 (MiPreventControlAreaDeletion.c)
 *     MiFlushAcquire @ 0x1403225B4 (MiFlushAcquire.c)
 *     MiTrimSection @ 0x1403545B0 (MiTrimSection.c)
 *     MiUpdateActiveSubsection @ 0x14053B3E0 (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiIncrementSubsectionViewCount @ 0x14022CF40 (MiIncrementSubsectionViewCount.c)
 *     MiRemoveUnusedSubsection @ 0x140300DB4 (MiRemoveUnusedSubsection.c)
 */

__int64 __fastcall MiReferenceSubsection(ULONG_PTR a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  int v4; // ebp

  v2 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(a1 + 8) )
    return 1LL;
  v3 = *(_QWORD *)(v2 + 64);
  v4 = MiIncrementSubsectionViewCount(a1);
  if ( v4 > 1 && v3 && (*(_DWORD *)(v2 + 56) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(a1);
    *(_WORD *)(a1 + 32) |= 1u;
  }
  return (unsigned int)v4;
}
