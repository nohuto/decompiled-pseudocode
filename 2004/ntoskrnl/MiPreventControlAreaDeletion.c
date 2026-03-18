/*
 * XREFs of MiPreventControlAreaDeletion @ 0x1403209B8
 * Callers:
 *     MiTrimSharedPage @ 0x1403206B4 (MiTrimSharedPage.c)
 *     MiPurgeBadFileOnlyPages @ 0x14053C420 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x14022865C (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x140228734 (MiBuildWakeList.c)
 *     MiReferenceSubsection @ 0x140248BFC (MiReferenceSubsection.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiPreventControlAreaDeletion(__int64 a1, int a2, ULONG_PTR *a3, __int64 **a4)
{
  __int64 v7; // rbx
  ULONG_PTR v8; // rbx
  __int64 v9; // rdi
  volatile LONG *v10; // rbp
  int v11; // ecx
  __int64 *v12; // rax

  *a4 = 0LL;
  *a3 = 0LL;
  v7 = *(_QWORD *)(a1 + 16);
  if ( qword_140C4DD40 && (v7 & 0x10) == 0 )
    v7 &= ~qword_140C4DD40;
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
        MiReferenceSubsection(v8);
        *a3 = v8;
LABEL_7:
        v12 = MiBuildWakeList(v9, 4);
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
