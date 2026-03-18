/*
 * XREFs of MiMoveBadPageCrossPartition @ 0x1405AD9AC
 * Callers:
 *     MiMoveLargeFreePage @ 0x1405AF3BC (MiMoveLargeFreePage.c)
 *     MiActOnPartitionNodePages @ 0x1405BCBC4 (MiActOnPartitionNodePages.c)
 *     MiTransferPartitionPageRun @ 0x1405BF718 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x14026A784 (MiAcquireNonPagedResources.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiMoveBadPageCrossPartition(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rbx
  unsigned __int64 v8; // r14
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v12; // zf

  v5 = 24512LL * *((unsigned int *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) + 2);
  v6 = v5 + *(_QWORD *)(a2 + 16);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v6 + 22848));
  --*(_QWORD *)(v6 + 22904);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 22848));
  v7 = v5 + *(_QWORD *)(a3 + 16);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 22848));
  v8 = 1LL;
  ++*(_QWORD *)(v7 + 22904);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 22848));
  MiAcquireNonPagedResources(a3, 1LL, 0LL, 1u);
  MiReturnCommit(a2, 1LL);
  result = (__int64)&MiSystemPartition;
  if ( (ULONG_PTR *)a2 != &MiSystemPartition )
    goto LABEL_11;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_11;
  if ( (unsigned __int64)(CachedResidentAvailable + 1) > 0x100 )
  {
LABEL_7:
    if ( (int)CachedResidentAvailable > 192 )
    {
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                               192,
                               CachedResidentAvailable);
      if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
      {
        result = (unsigned int)(CachedResidentAvailable - 192);
        v8 = (int)result + 1LL;
      }
    }
    if ( !v8 )
      return result;
LABEL_11:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 16960), v8);
    return result;
  }
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                             CachedResidentAvailable + 1,
                             CachedResidentAvailable);
    v12 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
    CachedResidentAvailable = (int)result;
    if ( v12 )
      return result;
    if ( (_DWORD)result != -1 )
    {
      result = (int)result + 1LL;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        continue;
    }
    goto LABEL_7;
  }
}
