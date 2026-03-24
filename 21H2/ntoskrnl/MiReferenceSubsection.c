/*
 * XREFs of MiReferenceSubsection @ 0x14031555C
 * Callers:
 *     MiFlushAcquire @ 0x1402A0C88 (MiFlushAcquire.c)
 *     MiPreventControlAreaDeletion @ 0x1402EE728 (MiPreventControlAreaDeletion.c)
 *     MiTrimSection @ 0x1402EF6E0 (MiTrimSection.c)
 *     MiComputeDataFlushRange @ 0x1403152C0 (MiComputeDataFlushRange.c)
 *     MiUpdateActiveSubsection @ 0x14053CEE0 (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiRemoveUnusedSubsection @ 0x1402F8B04 (MiRemoveUnusedSubsection.c)
 *     MiIncrementSubsectionViewCount @ 0x140315DE0 (MiIncrementSubsectionViewCount.c)
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
