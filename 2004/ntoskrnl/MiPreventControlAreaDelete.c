/*
 * XREFs of MiPreventControlAreaDelete @ 0x140524AAC
 * Callers:
 *     MiDeleteCachedSubsection @ 0x1405238FC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1405242E4 (MiFlushControlArea.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x1402978D8 (ObFastReferenceObjectLocked.c)
 */

unsigned __int64 __fastcall MiPreventControlAreaDelete(__int64 a1)
{
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 112));
  *(_QWORD *)(*(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)) + 1688LL) = a1;
  return ObFastReferenceObjectLocked((_QWORD *)(a1 + 64));
}
