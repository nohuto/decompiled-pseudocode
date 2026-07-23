/*
 * XREFs of _RtlTraceDatabaseFind@16 @ 0x4B36A3A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpTraceDatabaseInternalFind@16 @ 0x4B36A614 (_RtlpTraceDatabaseInternalFind@16.c)
 */

char __stdcall RtlTraceDatabaseFind(int a1, int a2, int a3, int a4)
{
  char v4; // bl

  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 28));
  *(_DWORD *)(a1 + 24) = 0;
  v4 = RtlpTraceDatabaseInternalFind(a3, a4);
  if ( v4 )
    ++*(_DWORD *)(a1 + 68);
  *(_DWORD *)(a1 + 24) = 0;
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 28));
  return v4;
}
