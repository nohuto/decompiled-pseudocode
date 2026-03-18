/*
 * XREFs of MiFreePartitionPhysicalPages @ 0x140981A04
 * Callers:
 *     MiDeletePartitionResources @ 0x1405BDFF8 (MiDeletePartitionResources.c)
 * Callees:
 *     MiReturnResident @ 0x140216E18 (MiReturnResident.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiIncreaseCommitLimits @ 0x1403CF51C (MiIncreaseCommitLimits.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiReturnPartitionPagesToParent @ 0x1405BF56C (MiReturnPartitionPagesToParent.c)
 */

void __fastcall MiFreePartitionPhysicalPages(_QWORD *a1, ULONG_PTR *a2)
{
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned int v5; // eax
  ULONG_PTR *v6; // rcx
  unsigned __int64 v7; // rbx

  BugCheckParameter4 = a1[2090];
  MiReturnPartitionPagesToParent((__int64)a1);
  v5 = 0;
  if ( KeNumberNodes )
  {
    v6 = (ULONG_PTR *)(a1[2] + 22904LL);
    do
    {
      if ( *v6 )
        KeBugCheckEx(0x1Au, 0x41008uLL, *v6, 0LL, 0LL);
      v6 += 3064;
      ++v5;
    }
    while ( v5 < (unsigned __int16)KeNumberNodes );
  }
  if ( a1[816] )
    KeBugCheckEx(0x1Au, 0x41006uLL, BugCheckParameter4, a1[2090], a1[2112]);
  if ( a1[2090] )
    KeBugCheckEx(0x1Au, 0x41005uLL, BugCheckParameter4, a1[2090], a1[2112]);
  if ( a1[2112] )
    KeBugCheckEx(0x1Au, 0x41004uLL, BugCheckParameter4, a1[2112], 0LL);
  if ( a1[2157] )
    KeBugCheckEx(0x1Au, 0x41009uLL, a1[2157], a1[2187], BugCheckParameter4);
  if ( a1[2120] != BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x41003uLL, BugCheckParameter4, a1[2120], a1[2187]);
  MiReturnResident((__int64)a2, a1[2120]);
  v7 = a1[2187];
  if ( a2 == &MiSystemPartition )
  {
    MiReturnCommit((__int64)a2, v7);
    _InterlockedExchangeAdd64(&qword_140C53530, -(__int64)v7);
  }
  else
  {
    MiIncreaseCommitLimits((__int64)a2, v7, v7, 0, 0LL);
  }
}
