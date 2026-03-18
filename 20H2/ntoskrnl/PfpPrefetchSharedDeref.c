/*
 * XREFs of PfpPrefetchSharedDeref @ 0x1406F25F8
 * Callers:
 *     PfSnCleanupPrefetchHeader @ 0x1406344A8 (PfSnCleanupPrefetchHeader.c)
 *     PfpPrefetchRequestPerform @ 0x1406F18F0 (PfpPrefetchRequestPerform.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1408E2430 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     PfpQueryFileExtentsRequest @ 0x1408E254C (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
