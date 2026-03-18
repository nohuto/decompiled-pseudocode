/*
 * XREFs of PfpPrefetchSharedDeref @ 0x1406AE46C
 * Callers:
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x140661FA0 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     PfpPrefetchRequestPerform @ 0x1406AE11C (PfpPrefetchRequestPerform.c)
 *     PfSnCleanupPrefetchHeader @ 0x1407DFE00 (PfSnCleanupPrefetchHeader.c)
 *     PfpQueryFileExtentsRequest @ 0x1409876B8 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
