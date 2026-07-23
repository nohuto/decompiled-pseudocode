/*
 * XREFs of MiInsertUnusedSubsection @ 0x14022A08C
 * Callers:
 *     MiAppendSubsectionChain @ 0x14021E9FC (MiAppendSubsectionChain.c)
 *     MiDereferenceControlAreaPfnList @ 0x140284F70 (MiDereferenceControlAreaPfnList.c)
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     MmPurgeSection @ 0x1402DD3F0 (MmPurgeSection.c)
 *     MiRemoveViewsFromSection @ 0x14031FCC8 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x14031FE10 (MiDecrementSubsections.c)
 *     MiDeleteCachedSubsection @ 0x140528FEC (MiDeleteCachedSubsection.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiControlAreaUsingExtents @ 0x14033D9A0 (MiControlAreaUsingExtents.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14055540C (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiInsertUnusedSubsection(_QWORD *a1)
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
  v2 = *((unsigned int *)a1 + 11);
  v4 = 8 * v2;
  v5 = *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(*a1 + 60LL) & 0x3FF));
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
  *((_WORD *)a1 + 17) |= 8u;
  *(_QWORD *)(v5 + 1696) += v7;
  _InterlockedExchangeAdd64(&qword_140C4C9D8, v7);
  v8 = 0LL;
  if ( !(unsigned int)MiControlAreaUsingExtents(*a1) && (a1[6] & 0x3FFFFFFF) != 0 )
  {
    MiUpdateSubsectionCrossPartitionRefs(a1, 0LL);
    v8 = *((_DWORD *)a1 + 11) - (v13 & *((_DWORD *)a1 + 13));
  }
  v9 = a1 + 10;
  if ( *((_DWORD *)a1 + 26) )
  {
    v10 = *(_QWORD **)(v5 + 1728);
    if ( *v10 == v5 + 1720 )
    {
      *v9 = v5 + 1720;
      a1[11] = v10;
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
  a1[11] = v12;
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
