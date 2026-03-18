/*
 * XREFs of WheapAllocErrorRecord @ 0x1405B60A4
 * Callers:
 *     WheapReportBootError @ 0x1405B5908 (WheapReportBootError.c)
 *     WheaReportHwError @ 0x1405B5B70 (WheaReportHwError.c)
 * Callees:
 *     WheapInitializeErrorRecordWrapper @ 0x1403B7A28 (WheapInitializeErrorRecordWrapper.c)
 *     memset @ 0x14040A280 (memset.c)
 *     WheapGetPreallocatedErrorRecord @ 0x1405B6564 (WheapGetPreallocatedErrorRecord.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WheapAllocErrorRecord(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // ecx
  PVOID PoolWithTag; // rax
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 PreallocatedErrorRecord; // rax

  v4 = *(_DWORD *)(a1 + 32);
  *a2 = v4;
  if ( KeGetCurrentIrql() > 2u )
  {
    PreallocatedErrorRecord = WheapGetPreallocatedErrorRecord(a1);
    v6 = PreallocatedErrorRecord;
    if ( PreallocatedErrorRecord )
    {
      *(_DWORD *)(PreallocatedErrorRecord + 24) = 1;
      goto LABEL_6;
    }
LABEL_7:
    *a2 = 0;
    return v6;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, *(_DWORD *)(a1 + 36));
  v6 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_7;
  v7 = *a2;
  memset(PoolWithTag, 0, v7);
  WheapInitializeErrorRecordWrapper(v6, v7, a1);
LABEL_6:
  *(_QWORD *)(v6 + 32) = a1;
  return v6;
}
