/*
 * XREFs of MiInsertUnusedSubsection @ 0x140263D60
 * Callers:
 *     MiFlushSectionInternal @ 0x140219DB0 (MiFlushSectionInternal.c)
 *     MmPurgeSection @ 0x140238BA0 (MmPurgeSection.c)
 *     MiDereferenceControlAreaPfnList @ 0x140263AA0 (MiDereferenceControlAreaPfnList.c)
 *     MiAppendSubsectionChain @ 0x1402A147C (MiAppendSubsectionChain.c)
 *     MiRemoveViewsFromSection @ 0x140314F78 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x1403150C0 (MiDecrementSubsections.c)
 *     MiDeleteCachedSubsection @ 0x140528DAC (MiDeleteCachedSubsection.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140314D90 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiControlAreaUsingExtents @ 0x140332C50 (MiControlAreaUsingExtents.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1405551CC (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiInsertUnusedSubsection(_QWORD *a1)
{
  int v1; // esi
  __int64 v2; // r14
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v14; // rdx
  unsigned int v15; // r9d

  v1 = 0;
  v2 = *((unsigned int *)a1 + 11);
  v4 = 8 * v2;
  v5 = *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(*a1 + 60LL) & 0x3FF));
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
  _InterlockedExchangeAdd64(&qword_140C4C998, v7);
  v10 = 0LL;
  if ( !(unsigned int)MiControlAreaUsingExtents(*a1, v8, v9) && (a1[6] & 0x3FFFFFFF) != 0 )
  {
    MiUpdateSubsectionCrossPartitionRefs(a1, 0LL);
    v10 = *((_DWORD *)a1 + 11) - (v15 & *((_DWORD *)a1 + 13));
  }
  v11 = a1 + 10;
  if ( *((_DWORD *)a1 + 26) )
  {
    v12 = *(_QWORD **)(v5 + 1728);
    if ( *v12 == v5 + 1720 )
    {
      *v11 = v5 + 1720;
      a1[11] = v12;
      *v12 = v11;
      *(_QWORD *)(v5 + 1728) = v11;
      goto LABEL_10;
    }
LABEL_21:
    __fastfail(3u);
  }
  v14 = *(_QWORD **)(v5 + 1744);
  if ( *v14 != v5 + 1736 )
    goto LABEL_21;
  *v11 = v5 + 1736;
  a1[11] = v14;
  *v14 = v11;
  *(_QWORD *)(v5 + 1744) = v11;
  *(_QWORD *)(v5 + 1424) += v2;
  if ( *(_QWORD *)(v5 + 1424) >= 0x20000uLL )
    v1 = 1;
LABEL_10:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 1344));
  if ( v1 == 1 )
    KeSetEvent((PRKEVENT)(v5 + 1376), 0, 0);
  return v10;
}
