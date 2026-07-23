/*
 * XREFs of MiCheckForControlAreaDeletion @ 0x1402850C8
 * Callers:
 *     MiDereferenceControlAreaPfnList @ 0x140284F70 (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140284630 (KeReleaseSemaphoreEx.c)
 *     MiClearFilePointer @ 0x1402851C8 (MiClearFilePointer.c)
 *     MiDecrementControlAreaCount @ 0x140302938 (MiDecrementControlAreaCount.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x1403620F8 (MiRemoveUnusedSegment.c)
 */

_UNKNOWN **__fastcall MiCheckForControlAreaDeletion(__int64 a1)
{
  _UNKNOWN **result; // rax
  int v3; // edx
  __int64 v4; // rdi
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // r9
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) && !*(_QWORD *)(a1 + 24) )
  {
    v3 = *(_DWORD *)(a1 + 56);
    if ( (v3 & 1) == 0 && (v3 & 0x100) == 0 )
    {
      v4 = *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
      *(_DWORD *)(a1 + 56) = v3 | 1;
      MiClearFilePointer(a1);
      MiRemoveUnusedSegment(a1);
      _InterlockedIncrement64((volatile signed __int64 *)(v4 + 1352));
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 1344));
      v5 = *(_QWORD **)(v4 + 1560);
      v6 = (_QWORD *)(a1 + 8);
      if ( *v5 != v4 + 1552 )
        __fastfail(3u);
      *v6 = v4 + 1552;
      *(_QWORD *)(a1 + 16) = v5;
      *v5 = v6;
      *(_QWORD *)(v4 + 1560) = v6;
      *(_DWORD *)(a1 + 56) |= 0x8000000u;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1344));
      KeReleaseSemaphoreEx(v4 + 1520, 0, 1, v7, 0);
      return (_UNKNOWN **)MiDecrementControlAreaCount(v4, v4 + 1352);
    }
  }
  return result;
}
