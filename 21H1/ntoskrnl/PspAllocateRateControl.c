/*
 * XREFs of PspAllocateRateControl @ 0x1406761D8
 * Callers:
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1406762E0 (PspAddSchedulingGroupToJobChain.c)
 *     PspSetJobRateControl @ 0x140905000 (PspSetJobRateControl.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     PsChargeSharedPoolQuota @ 0x140615490 (PsChargeSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x14067626C (PspGetRateControlSize.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall PspAllocateRateControl(__int64 a1)
{
  SIZE_T RateControlSize; // rdi
  POOL_TYPE v2; // r9d
  int v3; // ecx
  _QWORD *PoolWithTag; // rbx
  __int64 v5; // rsi

  RateControlSize = PspGetRateControlSize(a1);
  v2 = NonPagedPoolNx;
  if ( v3 != 2 )
    v2 = PagedPool;
  PoolWithTag = ExAllocatePoolWithTag(v2, RateControlSize, 0x624A7350u);
  if ( PoolWithTag )
  {
    v5 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, RateControlSize, 0LL);
    if ( v5 )
    {
      memset(PoolWithTag, 0, RateControlSize);
      *PoolWithTag = v5;
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, 0x624A7350u);
      return 0LL;
    }
  }
  return PoolWithTag;
}
