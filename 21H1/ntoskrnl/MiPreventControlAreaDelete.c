/*
 * XREFs of MiPreventControlAreaDelete @ 0x14052445C
 * Callers:
 *     MiDeleteCachedSubsection @ 0x1405232AC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140523C94 (MiFlushControlArea.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14025B058 (ObFastReferenceObjectLocked.c)
 */

unsigned __int64 __fastcall MiPreventControlAreaDelete(__int64 a1)
{
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 112));
  *(_QWORD *)(*(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)) + 1688LL) = a1;
  return ObFastReferenceObjectLocked((_QWORD *)(a1 + 64));
}
