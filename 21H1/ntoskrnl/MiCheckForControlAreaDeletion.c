/*
 * XREFs of MiCheckForControlAreaDeletion @ 0x1402F1478
 * Callers:
 *     MiDereferenceControlAreaPfnList @ 0x1402F1320 (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x1402816AC (MiRemoveUnusedSegment.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDecrementControlAreaCount @ 0x1402B967C (MiDecrementControlAreaCount.c)
 *     MiClearFilePointer @ 0x1402F1578 (MiClearFilePointer.c)
 *     KeReleaseSemaphoreEx @ 0x140330D70 (KeReleaseSemaphoreEx.c)
 */

int __fastcall MiCheckForControlAreaDeletion(__int64 a1)
{
  _UNKNOWN **v1; // rax
  int v3; // edx
  __int64 v4; // rdi
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  int v7; // r9d
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v1 = &retaddr;
  if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) && !*(_QWORD *)(a1 + 24) )
  {
    v3 = *(_DWORD *)(a1 + 56);
    if ( (v3 & 1) == 0 && (v3 & 0x100) == 0 )
    {
      v4 = *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
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
      LODWORD(v1) = MiDecrementControlAreaCount(v4, (volatile signed __int64 *)(v4 + 1352));
    }
  }
  return (int)v1;
}
