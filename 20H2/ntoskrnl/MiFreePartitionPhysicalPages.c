/*
 * XREFs of MiFreePartitionPhysicalPages @ 0x1408DD930
 * Callers:
 *     MiDeletePartitionResources @ 0x14055FE48 (MiDeletePartitionResources.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiReturnResident @ 0x14026307C (MiReturnResident.c)
 *     MiIncreaseCommitLimits @ 0x1403BEF58 (MiIncreaseCommitLimits.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiReturnPartitionPagesToParent @ 0x1405611F4 (MiReturnPartitionPagesToParent.c)
 */

void __fastcall MiFreePartitionPhysicalPages(_QWORD *a1, ULONG_PTR *a2)
{
  ULONG_PTR v2; // rdi
  unsigned int v5; // eax
  ULONG_PTR *v6; // rcx
  unsigned __int64 v7; // rbx

  v2 = a1[866];
  MiReturnPartitionPagesToParent((__int64)a1);
  v5 = 0;
  if ( KeNumberNodes )
  {
    v6 = (ULONG_PTR *)(a1[2] + 4352LL);
    do
    {
      if ( *v6 )
        KeBugCheckEx(0x1Au, 0x41008uLL, *v6, 0LL, 0LL);
      v6 += 568;
      ++v5;
    }
    while ( v5 < (unsigned __int16)KeNumberNodes );
  }
  if ( a1[512] )
    KeBugCheckEx(0x1Au, 0x41006uLL, v2, a1[866], a1[888]);
  if ( a1[866] )
    KeBugCheckEx(0x1Au, 0x41005uLL, v2, a1[866], a1[888]);
  if ( a1[888] )
    KeBugCheckEx(0x1Au, 0x41004uLL, v2, a1[888], 0LL);
  if ( a1[896] != v2 || a1[896] != a1[949] )
    KeBugCheckEx(0x1Au, 0x41003uLL, v2, a1[896], a1[949]);
  MiReturnResident((__int64)a2, a1[896]);
  v7 = a1[949];
  if ( a2 == &MiSystemPartition )
  {
    MiReturnCommit((__int64)a2, v7);
    _InterlockedExchangeAdd64(&qword_140C4EE38, -(__int64)v7);
  }
  else
  {
    MiIncreaseCommitLimits((__int64)a2, v7, v7, 0, 0LL);
  }
}
