/*
 * XREFs of MiPreventControlAreaDeletion @ 0x1402F9478
 * Callers:
 *     MiTrimSharedPage @ 0x1402F9758 (MiTrimSharedPage.c)
 *     MiPurgeBadFileOnlyPages @ 0x140541B30 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReferenceSubsection @ 0x1403202AC (MiReferenceSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x1403620F8 (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x1403621D0 (MiBuildWakeList.c)
 */

__int64 __fastcall MiPreventControlAreaDeletion(__int64 a1, int a2, __int64 *a3, __int64 *a4)
{
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rdi
  volatile LONG *v10; // rbp
  int v11; // ecx
  __int64 v12; // rax

  *a4 = 0LL;
  *a3 = 0LL;
  v7 = *(_QWORD *)(a1 + 16);
  if ( qword_140C4DF80 && (v7 & 0x10) == 0 )
    v7 &= ~qword_140C4DF80;
  v8 = v7 >> 16;
  if ( (*(_BYTE *)(v8 + 34) & 2) == 0 )
  {
    v9 = *(_QWORD *)v8;
    v10 = (volatile LONG *)(*(_QWORD *)v8 + 72LL);
    ExAcquireSpinLockExclusiveAtDpcLevel(v10);
    v11 = *(_DWORD *)(v9 + 56);
    if ( !(v11 & 1 | ((v11 & 2) != 0)) )
    {
      if ( (v11 & 0x20) != 0 )
        goto LABEL_7;
      if ( (*(_BYTE *)(v8 + 34) & 1) == 0 && (a2 != 1 || !*(_DWORD *)(v8 + 108)) )
      {
        MiReferenceSubsection(v8, 0LL);
        *a3 = v8;
LABEL_7:
        v12 = MiBuildWakeList(v9, 4LL);
        ++*(_DWORD *)(v9 + 76);
        *a4 = v12;
        MiRemoveUnusedSegment(v9);
        if ( a2 == 1 )
          *(_DWORD *)(v9 + 56) |= 4u;
        goto LABEL_9;
      }
    }
    v9 = 0LL;
LABEL_9:
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    return v9;
  }
  return 0LL;
}
