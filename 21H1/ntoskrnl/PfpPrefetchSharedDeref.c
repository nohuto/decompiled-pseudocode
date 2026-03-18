/*
 * XREFs of PfpPrefetchSharedDeref @ 0x1405D3148
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1405D2440 (PfpPrefetchRequestPerform.c)
 *     PfSnCleanupPrefetchHeader @ 0x14063A4A8 (PfSnCleanupPrefetchHeader.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1408DB280 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DB39C (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PfpPrefetchSharedDeref(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  signed __int64 v3; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 15, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  v3 = v1 - 1;
  if ( v2 )
  {
    if ( v3 )
      __fastfail(0xEu);
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}
