/*
 * XREFs of MiInsertUnusedSubsection @ 0x140300AC0
 * Callers:
 *     MiRemoveViewsFromSection @ 0x14022BD2C (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x14022BE70 (MiDecrementSubsections.c)
 *     MiFlushSectionInternal @ 0x14027B590 (MiFlushSectionInternal.c)
 *     MmPurgeSection @ 0x1402C73C0 (MmPurgeSection.c)
 *     MiDereferenceControlAreaPfnList @ 0x140300800 (MiDereferenceControlAreaPfnList.c)
 *     MiAppendSubsectionChain @ 0x14035604C (MiAppendSubsectionChain.c)
 *     MiDeleteCachedSubsection @ 0x1405272CC (MiDeleteCachedSubsection.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiControlAreaUsingExtents @ 0x1402B5EA0 (MiControlAreaUsingExtents.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1405536FC (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiInsertUnusedSubsection(__int64 a1)
{
  int v1; // esi
  __int64 v2; // r14
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v12; // rdx
  unsigned int v13; // r9d

  v1 = 0;
  v2 = *(unsigned int *)(a1 + 44);
  v4 = 8 * v2;
  v5 = *(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  if ( (unsigned __int64)(8 * v2) > 0xFE0 )
  {
    if ( v4 >= 0x10000 || ((8 * (_WORD)v2) & 0xFFFu) > 0xFC0 )
    {
      v7 = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_4;
    }
    v6 = v4 + 15;
  }
  else
  {
    v6 = v4 + 31;
  }
  v7 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_4:
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 1344));
  *(_WORD *)(a1 + 34) |= 8u;
  *(_QWORD *)(v5 + 1696) += v7;
  _InterlockedExchangeAdd64(&qword_140C4C818, v7);
  v8 = 0LL;
  if ( !MiControlAreaUsingExtents(*(_QWORD *)a1) && (*(_DWORD *)(a1 + 48) & 0x3FFFFFFF) != 0 )
  {
    MiUpdateSubsectionCrossPartitionRefs(a1, 0LL);
    v8 = *(_DWORD *)(a1 + 44) - (v13 & *(_DWORD *)(a1 + 52));
  }
  v9 = (_QWORD *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 104) )
  {
    v10 = *(_QWORD **)(v5 + 1728);
    if ( *v10 == v5 + 1720 )
    {
      *v9 = v5 + 1720;
      *(_QWORD *)(a1 + 88) = v10;
      *v10 = v9;
      *(_QWORD *)(v5 + 1728) = v9;
      goto LABEL_10;
    }
LABEL_21:
    __fastfail(3u);
  }
  v12 = *(_QWORD **)(v5 + 1744);
  if ( *v12 != v5 + 1736 )
    goto LABEL_21;
  *v9 = v5 + 1736;
  *(_QWORD *)(a1 + 88) = v12;
  *v12 = v9;
  *(_QWORD *)(v5 + 1744) = v9;
  *(_QWORD *)(v5 + 1424) += v2;
  if ( *(_QWORD *)(v5 + 1424) >= 0x20000uLL )
    v1 = 1;
LABEL_10:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 1344));
  if ( v1 == 1 )
    KeSetEvent((PRKEVENT)(v5 + 1376), 0, 0);
  return v8;
}
