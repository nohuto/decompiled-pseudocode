/*
 * XREFs of _RtlTraceDatabaseAdd@16 @ 0x4B36A150
 * Callers:
 *     <none>
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpTraceDatabaseInternalAdd@16 @ 0x4B36A4C6 (_RtlpTraceDatabaseInternalAdd@16.c)
 */

char __stdcall RtlTraceDatabaseAdd(int a1, int a2, void *Src, int a4)
{
  char v4; // al
  char v5; // bl

  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 28));
  *(_DWORD *)(a1 + 24) = 0;
  v4 = RtlpTraceDatabaseInternalAdd(Src, a4);
  *(_DWORD *)(a1 + 24) = 0;
  v5 = v4;
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 28));
  return v5;
}
